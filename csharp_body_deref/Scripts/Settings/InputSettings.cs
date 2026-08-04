// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InputSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/InputSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200009E")]
internal class InputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x40003C6")]
	[FieldOffset(Offset = "0x20")]
	public GeneralInputSettings General;

	[Token(Token = "0x40003C7")]
	[FieldOffset(Offset = "0x28")]
	public HumanInputSettings Human;

	[Token(Token = "0x40003C8")]
	[FieldOffset(Offset = "0x30")]
	public TitanInputSettings Titan;

	[Token(Token = "0x40003C9")]
	[FieldOffset(Offset = "0x38")]
	public AnnieShifterInputSettings AnnieShifter;

	[Token(Token = "0x40003CA")]
	[FieldOffset(Offset = "0x40")]
	public ErenShifterInputSettings ErenShifter;

	[Token(Token = "0x40003CB")]
	[FieldOffset(Offset = "0x48")]
	public InteractionInputSettings Interaction;

	[Token(Token = "0x40003CC")]
	[FieldOffset(Offset = "0x50")]
	public MapEditorInputSettings MapEditor;

	[Token(Token = "0x17000093")]
	protected override string FileName
	{
		[Token(Token = "0x6000342")]
		[Address(RVA = "0x40F3AF0", Offset = "0x40F3AF0", VA = "0x40F3AF0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x40F3B20", Offset = "0x40F3B20", VA = "0x40F3B20")]
	public InputSettings()
	{
	}
}
