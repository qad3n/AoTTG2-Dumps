using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200006E")]
internal class TitanCustomSkinSet : BaseSetSetting
{
	[Token(Token = "0x4000230")]
	[FieldOffset(Offset = "0x38")]
	public BoolSetting RandomizedPairs;

	[Token(Token = "0x4000231")]
	[FieldOffset(Offset = "0x40")]
	public ListSetting<StringSetting> Hairs;

	[Token(Token = "0x4000232")]
	[FieldOffset(Offset = "0x48")]
	public ListSetting<IntSetting> HairModels;

	[Token(Token = "0x4000233")]
	[FieldOffset(Offset = "0x50")]
	public ListSetting<StringSetting> Bodies;

	[Token(Token = "0x4000234")]
	[FieldOffset(Offset = "0x58")]
	public ListSetting<StringSetting> BodyModels;

	[Token(Token = "0x4000235")]
	[FieldOffset(Offset = "0x60")]
	public ListSetting<StringSetting> Heads;

	[Token(Token = "0x4000236")]
	[FieldOffset(Offset = "0x68")]
	public ListSetting<IntSetting> HeadModels;

	[Token(Token = "0x4000237")]
	[FieldOffset(Offset = "0x70")]
	public ListSetting<StringSetting> Eyes;

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x3C90570", Offset = "0x3C90570", VA = "0x3C90570", Slot = "12")]
	protected override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x3C90680", Offset = "0x3C90680", VA = "0x3C90680")]
	public TitanCustomSkinSet()
	{
	}
}
