using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000068")]
internal class ForestCustomSkinSet : BaseSetSetting
{
	[Token(Token = "0x4000206")]
	[FieldOffset(Offset = "0x38")]
	public BoolSetting RandomizedPairs;

	[Token(Token = "0x4000207")]
	[FieldOffset(Offset = "0x40")]
	public ListSetting<StringSetting> TreeTrunks;

	[Token(Token = "0x4000208")]
	[FieldOffset(Offset = "0x48")]
	public ListSetting<StringSetting> TreeLeafs;

	[Token(Token = "0x4000209")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting Ground;

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x3C8FA20", Offset = "0x3C8FA20", VA = "0x3C8FA20", Slot = "12")]
	protected override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x3C8FA90", Offset = "0x3C8FA90", VA = "0x3C8FA90")]
	public ForestCustomSkinSet()
	{
	}
}
