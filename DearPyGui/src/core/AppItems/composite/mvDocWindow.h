#pragma once
#include <vector>
#include <map>
#include <string>
#include "mvTypeBases.h"
#include "mvModule_Core.h"

namespace Marvel {

	MV_REGISTER_WIDGET(mvDocWindow, MV_ITEM_DESC_ROOT, StorageValueTypes::None, 1);
	class mvDocWindow : public mvBaseWindowAppitem
	{

	public:

		static void InsertParser(std::map<std::string, mvPythonParser>* parsers);

		MV_APPLY_WIDGET_REGISTRATION(mvAppItemType::mvDocWindow, add_doc_window)

		MV_START_EXTRA_COMMANDS
		MV_END_EXTRA_COMMANDS

		MV_START_GENERAL_CONSTANTS
		MV_END_GENERAL_CONSTANTS

		MV_START_COLOR_CONSTANTS
		MV_END_COLOR_CONSTANTS

		MV_START_STYLE_CONSTANTS
		MV_END_STYLE_CONSTANTS

	public:

		mvDocWindow(const std::string& name);

		void draw(ImDrawList* drawlist, float x, float y) override;
		void setup();

	private:

		int categorySelection = 0;
		const char* m_doc = "None";

		const char* m_categories[12] = {
			"App",
			"Logging",
			"Adding Widgets",
			"Widget Commands",
			"Containers",
			"Drawing",
			"Plotting",
			"Tables",
			"Themes and Styles",
			"Input Polling",
			"Standard Windows",
			"Constants",
		};

		std::vector<const char*> m_app;
		std::vector<const char*> m_widgets;
		std::vector<const char*> m_widgetsCommands;
		std::vector<const char*> m_containers;
		std::vector<const char*> m_drawing;
		std::vector<const char*> m_plotting;
		std::vector<const char*> m_tables;
		std::vector<const char*> m_inputs;
		std::vector<const char*> m_windows;
		std::vector<const char*> m_logging;
		std::vector<const char*> m_themes;
		std::vector<const char*> m_cconstants;

		std::vector<const char*> m_docApp;
		std::vector<const char*> m_docWidgets;
		std::vector<const char*> m_docWidgetsCommands;
		std::vector<const char*> m_docDrawing;
		std::vector<const char*> m_docPlotting;
		std::vector<const char*> m_docTables;
		std::vector<const char*> m_docInputs;
		std::vector<const char*> m_docWindows;
		std::vector<const char*> m_docLogging;
		std::vector<const char*> m_docThemes;
		std::vector<const char*> m_docContainers;

		std::vector<std::pair<std::string, std::string>> m_commands;
		const std::vector<std::pair<std::string, long>>& m_constants = mvModule_Core::GetModuleConstants();
		std::vector<std::string> m_constantsValues;
		const std::map<std::string, mvPythonParser>& m_docmap = mvModule_Core::GetModuleParsers();

	};

}