// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ColorSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/ColorSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/ColorSetting.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;
using Utility;

namespace Settings;

[Token(Token = "0x20000B1")]
internal class ColorSetting : TypedSetting<Color255>
{
	[Token(Token = "0x4000484")]
	[FieldOffset(Offset = "0x20")]
	public int MinAlpha;

	[Token(Token = "0x6000381")]
	[Address(RVA = "0x40FD8A0", Offset = "0x40FD8A0", VA = "0x40FD8A0")]
	public ColorSetting()
	{
	}

	[Token(Token = "0x6000382")]
	[Address(RVA = "0x40FA620", Offset = "0x40FA620", VA = "0x40FA620")]
	public ColorSetting(Color255 defaultValue, int minAlpha = 0)
	{
	}

	[Token(Token = "0x6000383")]
	[Address(RVA = "0x40FF640", Offset = "0x40FF640", VA = "0x40FF640", Slot = "10")]
	protected override Color255 SanitizeValue(Color255 value)
	{
		return null;
	}

	[Token(Token = "0x6000384")]
	[Address(RVA = "0x40FF6B0", Offset = "0x40FF6B0", VA = "0x40FF6B0", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x6000385")]
	[Address(RVA = "0x40FF860", Offset = "0x40FF860", VA = "0x40FF860", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}
}
