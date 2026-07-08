using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000AD")]
internal class BoolSetting : TypedSetting<bool>
{
	[Token(Token = "0x600036D")]
	[Address(RVA = "0x3E0D060", Offset = "0x3E0D060", VA = "0x3E0D060")]
	public BoolSetting()
	{
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x3E08750", Offset = "0x3E08750", VA = "0x3E08750")]
	public BoolSetting(bool defaultValue)
	{
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x3E0D0A0", Offset = "0x3E0D0A0", VA = "0x3E0D0A0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x6000370")]
	[Address(RVA = "0x3E0D100", Offset = "0x3E0D100", VA = "0x3E0D100", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}
}
