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

[Token(Token = "0x20000C4")]
internal class ToggleColorSetting : BaseSetting
{
	[Token(Token = "0x40004A7")]
	[FieldOffset(Offset = "0x10")]
	public BoolSetting Enabled;

	[Token(Token = "0x40004A8")]
	[FieldOffset(Offset = "0x18")]
	public ColorSetting Color;

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x40FD920", Offset = "0x40FD920", VA = "0x40FD920")]
	public ToggleColorSetting()
	{
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x4103830", Offset = "0x4103830", VA = "0x4103830")]
	public ToggleColorSetting(bool defaultEnabled, Color255 defaultColor)
	{
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x4103AC0", Offset = "0x4103AC0", VA = "0x4103AC0", Slot = "4")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x4103B00", Offset = "0x4103B00", VA = "0x4103B00", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x4103BE0", Offset = "0x4103BE0", VA = "0x4103BE0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}
}
