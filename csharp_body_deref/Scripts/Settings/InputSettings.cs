// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InputSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/InputSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
			return null;
		}
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x5A4DA50", Offset = "0x5A4CA50", VA = "0x5A4DA50")]
	public InputSettings()
	{
	}
}
