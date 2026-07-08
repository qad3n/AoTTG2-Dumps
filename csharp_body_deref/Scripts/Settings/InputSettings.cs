using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200009D")]
internal class InputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x40003C1")]
	[FieldOffset(Offset = "0x20")]
	public GeneralInputSettings General;

	[Token(Token = "0x40003C2")]
	[FieldOffset(Offset = "0x28")]
	public HumanInputSettings Human;

	[Token(Token = "0x40003C3")]
	[FieldOffset(Offset = "0x30")]
	public TitanInputSettings Titan;

	[Token(Token = "0x40003C4")]
	[FieldOffset(Offset = "0x38")]
	public AnnieShifterInputSettings AnnieShifter;

	[Token(Token = "0x40003C5")]
	[FieldOffset(Offset = "0x40")]
	public ErenShifterInputSettings ErenShifter;

	[Token(Token = "0x40003C6")]
	[FieldOffset(Offset = "0x48")]
	public InteractionInputSettings Interaction;

	[Token(Token = "0x40003C7")]
	[FieldOffset(Offset = "0x50")]
	public MapEditorInputSettings MapEditor;

	[Token(Token = "0x17000091")]
	protected override string FileName
	{
		[Token(Token = "0x600033C")]
		[Address(RVA = "0x3E04B10", Offset = "0x3E04B10", VA = "0x3E04B10", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600033D")]
	[Address(RVA = "0x3E04B40", Offset = "0x3E04B40", VA = "0x3E04B40")]
	public InputSettings()
	{
	}
}
