using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000B8")]
internal class NameSetting : StringSetting
{
	[Token(Token = "0x400047C")]
	[FieldOffset(Offset = "0x24")]
	public int MaxStrippedLength;

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x3E101C0", Offset = "0x3E101C0", VA = "0x3E101C0")]
	public NameSetting()
	{
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x3E0B530", Offset = "0x3E0B530", VA = "0x3E0B530")]
	public NameSetting(string defaultValue, int maxLength = int.MaxValue, int maxStrippedLength = int.MaxValue)
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x3E10230", Offset = "0x3E10230", VA = "0x3E10230", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x3E10290", Offset = "0x3E10290", VA = "0x3E10290", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x3E102F0", Offset = "0x3E102F0", VA = "0x3E102F0", Slot = "10")]
	protected override string SanitizeValue(string value)
	{
		return null;
	}
}
