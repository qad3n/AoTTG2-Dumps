using Il2CppDummyDll;
using SimpleJSONFixed;
using Utility;

namespace Settings;

[Token(Token = "0x20000AE")]
internal class ColorSetting : TypedSetting<Color255>
{
	[Token(Token = "0x400046A")]
	[FieldOffset(Offset = "0x20")]
	public int MinAlpha;

	[Token(Token = "0x6000371")]
	[Address(RVA = "0x3E0D160", Offset = "0x3E0D160", VA = "0x3E0D160")]
	public ColorSetting()
	{
	}

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x3E0B5A0", Offset = "0x3E0B5A0", VA = "0x3E0B5A0")]
	public ColorSetting(Color255 defaultValue, int minAlpha = 0)
	{
	}

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x3E0D1E0", Offset = "0x3E0D1E0", VA = "0x3E0D1E0", Slot = "10")]
	protected override Color255 SanitizeValue(Color255 value)
	{
		return null;
	}

	[Token(Token = "0x6000374")]
	[Address(RVA = "0x3E0D250", Offset = "0x3E0D250", VA = "0x3E0D250", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x6000375")]
	[Address(RVA = "0x3E0D400", Offset = "0x3E0D400", VA = "0x3E0D400", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}
}
