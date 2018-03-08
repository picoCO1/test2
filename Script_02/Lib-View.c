//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Library_MainLibrary()
{
	truclient_step("1", "Function Google-US.Simple.Search", "snapshot=MainLibrary_1.inf");
	{
		truclient_step("1.1", "Navigate to TC.getParam('url_us')", "snapshot=MainLibrary_1.1.inf");
		truclient_step("1.2", "Google Search", "snapshot=MainLibrary_1.2.inf");
		{
			truclient_step("1.2.1", "Click on Search combobox", "snapshot=MainLibrary_1.2.1.inf");
			truclient_step("1.2.3", "Type TC.getParam('search_us') in Search combobox", "snapshot=MainLibrary_1.2.3.inf");
			truclient_step("1.2.4", "Click on Google SearchI'm Feeling...", "snapshot=MainLibrary_1.2.4.inf");
			truclient_step("1.2.6", "Click on Google Search button", "snapshot=MainLibrary_1.2.6.inf");
		}
		truclient_step("1.3", "Verify Search 's Visible Text contains TC.getParam('result_us')", "snapshot=MainLibrary_1.3.inf");
	}
	truclient_step("2", "Function Google-BR.Simple.Search", "snapshot=MainLibrary_2.inf");
	{
		truclient_step("2.1", "Navigate to TC.getParam('url_br')", "snapshot=MainLibrary_2.1.inf");
		truclient_step("2.2", "Google Search", "snapshot=MainLibrary_2.2.inf");
		{
			truclient_step("2.2.1", "Click on Search combobox", "snapshot=MainLibrary_2.2.1.inf");
			truclient_step("2.2.3", "Type TC.getParam('search_br') in Search combobox", "snapshot=MainLibrary_2.2.3.inf");
			truclient_step("2.2.4", "Click on Google SearchI'm Feeling...", "snapshot=MainLibrary_2.2.4.inf");
			truclient_step("2.2.6", "Click on Google Search button", "snapshot=MainLibrary_2.2.6.inf");
		}
		truclient_step("2.3", "Verify Search 's Visible Text contains TC.getParam('result_br')", "snapshot=MainLibrary_2.3.inf");
	}
	truclient_step("3", "Function Google-AU.Simple.Search", "snapshot=MainLibrary_3.inf");
	{
		truclient_step("3.1", "Navigate to TC.getParam('url_aus')", "snapshot=MainLibrary_3.1.inf");
		truclient_step("3.2", "Google Search", "snapshot=MainLibrary_3.2.inf");
		{
			truclient_step("3.2.1", "Click on Search combobox", "snapshot=MainLibrary_3.2.1.inf");
			truclient_step("3.2.3", "Type TC.getParam('search_aus') in Search combobox", "snapshot=MainLibrary_3.2.3.inf");
			truclient_step("3.2.4", "Click on Google SearchI'm Feeling...", "snapshot=MainLibrary_3.2.4.inf");
			truclient_step("3.2.6", "Click on Google Search button", "snapshot=MainLibrary_3.2.6.inf");
		}
		truclient_step("3.3", "Verify Search 's Visible Text contains TC.getParam('result_aus')", "snapshot=MainLibrary_3.3.inf");
	}
	truclient_step("4", "Function user2a", "snapshot=MainLibrary_4.inf");

	return 0;
}
