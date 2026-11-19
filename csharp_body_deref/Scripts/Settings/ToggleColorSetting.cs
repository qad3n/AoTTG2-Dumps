// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ToggleColorSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/ToggleColorSetting.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;
using Utility;

namespace Settings;

[Token(Token = "0x200011D")]
internal class ToggleColorSetting : BaseSetting
{
	[Token(Token = "0x4000671")]
	[FieldOffset(Offset = "0x18")]
	public BoolSetting Enabled;

	[Token(Token = "0x4000672")]
	[FieldOffset(Offset = "0x20")]
	public ColorSetting Color;

	[Token(Token = "0x600060C")]
	[Address(RVA = "0x5B7CAC0", Offset = "0x5B7BAC0", VA = "0x5B7CAC0")]
	public ToggleColorSetting()
	{
	}

	[Token(Token = "0x600060D")]
	[Address(RVA = "0x5B7CBA0", Offset = "0x5B7BBA0", VA = "0x5B7CBA0")]
	public ToggleColorSetting(bool defaultEnabled, Color255 defaultColor)
	{
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x5B7CD00", Offset = "0x5B7BD00", VA = "0x5B7CD00", Slot = "4")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x600060F")]
	[Address(RVA = "0x5B7CD40", Offset = "0x5B7BD40", VA = "0x5B7CD40", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x6000610")]
	[Address(RVA = "0x5B7CE20", Offset = "0x5B7BE20", VA = "0x5B7CE20", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}
}
