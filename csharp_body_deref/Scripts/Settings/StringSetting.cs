using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000C0")]
internal class StringSetting : TypedSetting<string>
{
	[Token(Token = "0x400048C")]
	[FieldOffset(Offset = "0x20")]
	public int MaxLength;

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x3E11350", Offset = "0x3E11350", VA = "0x3E11350")]
	public StringSetting()
	{
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x3E085C0", Offset = "0x3E085C0", VA = "0x3E085C0")]
	public StringSetting(string defaultValue, int maxLength = int.MaxValue)
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x3E113B0", Offset = "0x3E113B0", VA = "0x3E113B0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x3E11410", Offset = "0x3E11410", VA = "0x3E11410", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x3E11470", Offset = "0x3E11470", VA = "0x3E11470", Slot = "10")]
	protected override string SanitizeValue(string value)
	{
		return null;
	}
}
