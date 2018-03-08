//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'http://www.google.com/'", "snapshot=Action_1.inf");
	truclient_step("3", "search (1)", "snapshot=Action_3.inf");
	{
		truclient_step("3.1", "Click on Search combobox", "snapshot=Action_3.1.inf");
		truclient_step("3.3", "Type test123 in Search combobox", "snapshot=Action_3.3.inf");
		truclient_step("3.4", "Press key Enter on Search combobox", "snapshot=Action_3.4.inf");
	}

	return 0;
}
