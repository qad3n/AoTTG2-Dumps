// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InputSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/InputSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000BC")]
internal class InputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x400044B")]
	[FieldOffset(Offset = "0x38")]
	public GeneralInputSettings General;

	[Token(Token = "0x400044C")]
	[FieldOffset(Offset = "0x40")]
	public HumanInputSettings Human;

	[Token(Token = "0x400044D")]
	[FieldOffset(Offset = "0x48")]
	public TitanInputSettings Titan;

	[Token(Token = "0x400044E")]
	[FieldOffset(Offset = "0x50")]
	public AnnieShifterInputSettings AnnieShifter;

	[Token(Token = "0x400044F")]
	[FieldOffset(Offset = "0x58")]
	public ErenShifterInputSettings ErenShifter;

	[Token(Token = "0x4000450")]
	[FieldOffset(Offset = "0x60")]
	public InteractionInputSettings Interaction;

	[Token(Token = "0x4000451")]
	[FieldOffset(Offset = "0x68")]
	public MapEditorInputSettings MapEditor;

	[Token(Token = "0x1700009E")]
	protected override string FileName
	{
		[Token(Token = "0x60003C9")]
		[Address(RVA = "0x1F1DB90", Offset = "0x1F1C190", VA = "0x181F1DB90", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x1F1D9E0", Offset = "0x1F1BFE0", VA = "0x181F1D9E0")]
	public InputSettings()
	{
	}
}
