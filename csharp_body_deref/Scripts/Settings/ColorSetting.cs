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

[Token(Token = "0x20000CE")]
internal class ColorSetting : TypedSetting<Color255>
{
	[Token(Token = "0x4000507")]
	[FieldOffset(Offset = "0x28")]
	public int MinAlpha;

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x1F12100", Offset = "0x1F10700", VA = "0x181F12100")]
	public ColorSetting()
	{
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x1F12060", Offset = "0x1F10660", VA = "0x181F12060")]
	public ColorSetting(Color255 defaultValue, int minAlpha = 0)
	{
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x1F11E20", Offset = "0x1F10420", VA = "0x181F11E20", Slot = "11")]
	protected override Color255 SanitizeValue(Color255 value)
	{
		return null;
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x1F11EB0", Offset = "0x1F104B0", VA = "0x181F11EB0", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x1F11C70", Offset = "0x1F10270", VA = "0x181F11C70", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}
}
