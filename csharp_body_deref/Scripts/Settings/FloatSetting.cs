using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000AF")]
internal class FloatSetting : TypedSetting<float>
{
	[Token(Token = "0x400046B")]
	[FieldOffset(Offset = "0x18")]
	public float MinValue;

	[Token(Token = "0x400046C")]
	[FieldOffset(Offset = "0x1C")]
	public float MaxValue;

	[Token(Token = "0x6000376")]
	[Address(RVA = "0x3E0D590", Offset = "0x3E0D590", VA = "0x3E0D590")]
	public FloatSetting()
	{
	}

	[Token(Token = "0x6000377")]
	[Address(RVA = "0x3E08610", Offset = "0x3E08610", VA = "0x3E08610")]
	public FloatSetting(float defaultValue, float minValue = float.MinValue, float maxValue = float.MaxValue)
	{
	}

	[Token(Token = "0x6000378")]
	[Address(RVA = "0x3E0D5E0", Offset = "0x3E0D5E0", VA = "0x3E0D5E0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x6000379")]
	[Address(RVA = "0x3E0D640", Offset = "0x3E0D640", VA = "0x3E0D640", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x600037A")]
	[Address(RVA = "0x3E0D6B0", Offset = "0x3E0D6B0", VA = "0x3E0D6B0", Slot = "10")]
	protected override float SanitizeValue(float value)
	{
		return default(float);
	}
}
