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

[Token(Token = "0x20000E2")]
internal class ToggleColorSetting : BaseSetting
{
	[Token(Token = "0x4000532")]
	[FieldOffset(Offset = "0x18")]
	public BoolSetting Enabled;

	[Token(Token = "0x4000533")]
	[FieldOffset(Offset = "0x20")]
	public ColorSetting Color;

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x1F29DA0", Offset = "0x1F283A0", VA = "0x181F29DA0")]
	public ToggleColorSetting()
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x1F29C10", Offset = "0x1F28210", VA = "0x181F29C10")]
	public ToggleColorSetting(bool defaultEnabled, Color255 defaultColor)
	{
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x1F29BC0", Offset = "0x1F281C0", VA = "0x181F29BC0", Slot = "4")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x1F29AD0", Offset = "0x1F280D0", VA = "0x181F29AD0", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x1F29840", Offset = "0x1F27E40", VA = "0x181F29840", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}
}
