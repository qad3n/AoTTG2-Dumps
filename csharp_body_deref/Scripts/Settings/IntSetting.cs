using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000B5")]
internal class IntSetting : TypedSetting<int>
{
	[Token(Token = "0x4000478")]
	[FieldOffset(Offset = "0x18")]
	public int MinValue;

	[Token(Token = "0x4000479")]
	[FieldOffset(Offset = "0x1C")]
	public int MaxValue;

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x3E0ECF0", Offset = "0x3E0ECF0", VA = "0x3E0ECF0")]
	public IntSetting()
	{
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x3E086C0", Offset = "0x3E086C0", VA = "0x3E086C0")]
	public IntSetting(int defaultValue, int minValue = int.MinValue, int maxValue = int.MaxValue)
	{
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x3E0ED40", Offset = "0x3E0ED40", VA = "0x3E0ED40", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x3E0EDA0", Offset = "0x3E0EDA0", VA = "0x3E0EDA0", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x3E0EE10", Offset = "0x3E0EE10", VA = "0x3E0EE10", Slot = "10")]
	protected override int SanitizeValue(int value)
	{
		return default(int);
	}
}
