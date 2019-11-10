#include "pch.h"

#include <Window.h>
#include <graphics/renderer/MasterRenderer.h>
#include <scene/Scene3D.h>
#include <utils/Time.h>
#include <ui/RuntimePane.h>
#include <ui/DebugPane.h>

int main() {
	// Prepare the engine
	arcane::editor::Window window("Arcane Engine", WINDOW_X_RESOLUTION, WINDOW_Y_RESOLUTION);
	arcane::engine::TextureLoader::initializeDefaultTextures();
	arcane::Scene3D scene(&window);
	arcane::MasterRenderer renderer(&scene);
	arcane::editor::InputManager manager;

	// Prepare the UI
	arcane::editor::RuntimePane runtimePane(glm::vec2(270.0f, 100.0f));
	arcane::editor::DebugPane debugPane(glm::vec2(270.0f, 205.0f));

	// Initialize the renderer
	renderer.init();

	arcane::Time deltaTime;
	while (!window.closed()) {
		deltaTime.update();

#if DEBUG_ENABLED
		if (debugPane.getWireframeMode())
			glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
		else
			glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
#endif

		arcane::editor::Window::bind();
		arcane::editor::Window::clear();
		ImGui_ImplGlfwGL3_NewFrame();

		scene.onUpdate((float)deltaTime.getDeltaTime());
		renderer.render();

		// Display panes
		arcane::editor::Window::bind();
		runtimePane.render();
		debugPane.render();

		ImGui::Render();
		ImGui_ImplGlfwGL3_RenderDrawData(ImGui::GetDrawData());

		// Window and input updating
		window.update();
	}
	return 0;
}