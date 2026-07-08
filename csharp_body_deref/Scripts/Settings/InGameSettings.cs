using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000092")]
internal class InGameSettings : PresetSettingsContainer
{
	[Token(Token = "0x4000349")]
	[FieldOffset(Offset = "0x20")]
	public SetSettingsContainer<InGameSet> InGameSets;

	[Token(Token = "0x400034A")]
	[FieldOffset(Offset = "0x28")]
	public InGameCharacterSettings LastCharacter;

	[Token(Token = "0x1700008A")]
	protected override string FileName
	{
		[Token(Token = "0x600032B")]
		[Address(RVA = "0x3C96260", Offset = "0x3C96260", VA = "0x3C96260", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x3C96290", Offset = "0x3C96290", VA = "0x3C96290")]
	public InGameSettings()
	{
	}
}
