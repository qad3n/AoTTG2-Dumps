// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InputSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/InputSettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000F4")]
internal class InputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000581")]
	[FieldOffset(Offset = "0x38")]
	public GeneralInputSettings General;

	[Token(Token = "0x4000582")]
	[FieldOffset(Offset = "0x40")]
	public HumanInputSettings Human;

	[Token(Token = "0x4000583")]
	[FieldOffset(Offset = "0x48")]
	public TitanInputSettings Titan;

	[Token(Token = "0x4000584")]
	[FieldOffset(Offset = "0x50")]
	public AnnieShifterInputSettings AnnieShifter;

	[Token(Token = "0x4000585")]
	[FieldOffset(Offset = "0x58")]
	public ErenShifterInputSettings ErenShifter;

	[Token(Token = "0x4000586")]
	[FieldOffset(Offset = "0x60")]
	public InteractionInputSettings Interaction;

	[Token(Token = "0x4000587")]
	[FieldOffset(Offset = "0x68")]
	public MapEditorInputSettings MapEditor;

	[Token(Token = "0x170000BB")]
	protected override string FileName
	{
		[Token(Token = "0x600053F")]
		[Address(RVA = "0x5A4DA20", Offset = "0x5A4CA20", VA = "0x5A4DA20", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Settings/InputSettings.c (Settings.InputSettings$$get_FileName): clean
			return "Input.json";
		}
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x5A4DA50", Offset = "0x5A4CA50", VA = "0x5A4DA50")]
	public InputSettings()
	{
		// Lifted from source/cpp/Settings/InputSettings.c (Settings.InputSettings$$.ctor): clean
		GeneralInputSettings __this_00;
		HumanInputSettings __this_01;
		TitanInputSettings __this_02;
		AnnieShifterInputSettings __this_03;
		MethodInfo method_00;
		InteractionInputSettings __this_04;
		MapEditorInputSettings __this_05;

		__this_00 = new GeneralInputSettings();
		this.General = __this_00;
		__this_01 = new HumanInputSettings();
		this.Human = __this_01;
		__this_02 = new TitanInputSettings();
		this.Titan = __this_02;
		__this_03 = new AnnieShifterInputSettings();
		this.AnnieShifter = __this_03;
		method_00 = new ErenShifterInputSettings();
		this.ErenShifter = (ErenShifterInputSettings)method_00;
		__this_04 = new InteractionInputSettings();
		this.Interaction = __this_04;
		__this_05 = new MapEditorInputSettings();
		this.MapEditor = __this_05;
		base();
		return;
	}
}
