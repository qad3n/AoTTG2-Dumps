// ==================== AoTTG2 cross-reference ====================
// Type: Settings.BoolSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/BoolSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/BoolSetting.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000CD")]
internal class BoolSetting : TypedSetting<bool>
{
	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x1F11C30", Offset = "0x1F10230", VA = "0x181F11C30")]
	public BoolSetting()
	{
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x1F11BE0", Offset = "0x1F101E0", VA = "0x181F11BE0")]
	public BoolSetting(bool defaultValue)
	{
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x1F11B00", Offset = "0x1F10100", VA = "0x181F11B00", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x1F11B70", Offset = "0x1F10170", VA = "0x181F11B70", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}
}
