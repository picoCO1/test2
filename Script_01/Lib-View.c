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
			truclient_step("1.2.2", "Mouse Over", "snapshot=MainLibrary_1.2.2.inf");
			{
				truclient_step("1.2.2.1", "Move mouse over element (1)", "snapshot=MainLibrary_1.2.2.1.inf");
				truclient_step("1.2.2.2", "Move mouse over Search combobox", "snapshot=MainLibrary_1.2.2.2.inf");
				truclient_step("1.2.2.3", "Move mouse over Google SearchI'm Feeling...", "snapshot=MainLibrary_1.2.2.3.inf");
			}
			truclient_step("1.2.3", "Type TC.getParam('search_us') in Search combobox", "snapshot=MainLibrary_1.2.3.inf");
			truclient_step("1.2.4", "Click on Google SearchI'm Feeling...", "snapshot=MainLibrary_1.2.4.inf");
			truclient_step("1.2.5", "Move mouse over Google SearchI'm Feeling...", "snapshot=MainLibrary_1.2.5.inf");
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
			truclient_step("2.2.2", "Mouse Over", "snapshot=MainLibrary_2.2.2.inf");
			{
				truclient_step("2.2.2.1", "Move mouse over element (1)", "snapshot=MainLibrary_2.2.2.1.inf");
				truclient_step("2.2.2.2", "Move mouse over Search combobox", "snapshot=MainLibrary_2.2.2.2.inf");
				truclient_step("2.2.2.3", "Move mouse over Google SearchI'm Feeling...", "snapshot=MainLibrary_2.2.2.3.inf");
			}
			truclient_step("2.2.3", "Type TC.getParam('search_br') in Search combobox", "snapshot=MainLibrary_2.2.3.inf");
			truclient_step("2.2.4", "Click on Google SearchI'm Feeling...", "snapshot=MainLibrary_2.2.4.inf");
			truclient_step("2.2.5", "Move mouse over Google SearchI'm Feeling...", "snapshot=MainLibrary_2.2.5.inf");
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
			truclient_step("3.2.2", "Mouse Over", "snapshot=MainLibrary_3.2.2.inf");
			{
				truclient_step("3.2.2.1", "Move mouse over element (1)", "snapshot=MainLibrary_3.2.2.1.inf");
				truclient_step("3.2.2.2", "Move mouse over Search combobox", "snapshot=MainLibrary_3.2.2.2.inf");
				truclient_step("3.2.2.3", "Move mouse over Google SearchI'm Feeling...", "snapshot=MainLibrary_3.2.2.3.inf");
			}
			truclient_step("3.2.3", "Type TC.getParam('search_aus') in Search combobox", "snapshot=MainLibrary_3.2.3.inf");
			truclient_step("3.2.4", "Click on Google SearchI'm Feeling...", "snapshot=MainLibrary_3.2.4.inf");
			truclient_step("3.2.5", "Move mouse over Google SearchI'm Feeling...", "snapshot=MainLibrary_3.2.5.inf");
			truclient_step("3.2.6", "Click on Google Search button", "snapshot=MainLibrary_3.2.6.inf");
		}
		truclient_step("3.3", "Verify Search 's Visible Text contains TC.getParam('result_aus')", "snapshot=MainLibrary_3.3.inf");
	}
	truclient_step("4", "Function user1a", "snapshot=MainLibrary_4.inf");

	return 0;
}

Library_SecondLibrary()
{
	truclient_step("1", "Function NavegateMenus", "snapshot=SecondLibrary_1.inf");
	{
		truclient_step("1.1", "Click on Videos link", "snapshot=SecondLibrary_1.1.inf");
		truclient_step("1.2", "Click on Shopping link", "snapshot=SecondLibrary_1.2.inf");
		truclient_step("1.3", "Click on Images link", "snapshot=SecondLibrary_1.3.inf");
		truclient_step("1.4", "Click on More button", "snapshot=SecondLibrary_1.4.inf");
		truclient_step("1.5", "Click on Finance menuitem", "snapshot=SecondLibrary_1.5.inf");
	}
	truclient_step("2", "Function Script_02_Second1", "snapshot=SecondLibrary_2.inf");
	{
		truclient_step("2.1", "Click on Videos link", "snapshot=SecondLibrary_2.1.inf");
		truclient_step("2.2", "Click on Shopping link", "snapshot=SecondLibrary_2.2.inf");
		truclient_step("2.3", "Click on Images link", "snapshot=SecondLibrary_2.3.inf");
		truclient_step("2.4", "Click on More button", "snapshot=SecondLibrary_2.4.inf");
		truclient_step("2.5", "Click on Finance menuitem", "snapshot=SecondLibrary_2.5.inf");
	}

	return 0;
}
