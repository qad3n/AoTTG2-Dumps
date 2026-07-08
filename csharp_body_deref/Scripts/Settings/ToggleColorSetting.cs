using Il2CppDummyDll;
using SimpleJSONFixed;
using Utility;

namespace Settings;

[Token(Token = "0x20000C1")]
internal class ToggleColorSetting : BaseSetting
{
	[Token(Token = "0x400048D")]
	[FieldOffset(Offset = "0x10")]
	public BoolSetting Enabled;

	[Token(Token = "0x400048E")]
	[FieldOffset(Offset = "0x18")]
	public ColorSetting Color;

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x3E114A0", Offset = "0x3E114A0", VA = "0x3E114A0")]
	public ToggleColorSetting()
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x3E11620", Offset = "0x3E11620", VA = "0x3E11620")]
	public ToggleColorSetting(bool defaultEnabled, Color255 defaultColor)
	{
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x3E118B0", Offset = "0x3E118B0", VA = "0x3E118B0", Slot = "4")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x3E118F0", Offset = "0x3E118F0", VA = "0x3E118F0", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x3E119D0", Offset = "0x3E119D0", VA = "0x3E119D0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}
}
