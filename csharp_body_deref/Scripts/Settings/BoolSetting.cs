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

[Token(Token = "0x20000B0")]
internal class BoolSetting : TypedSetting<bool>
{
	[Token(Token = "0x600037D")]
	[Address(RVA = "0x40FD7C0", Offset = "0x40FD7C0", VA = "0x40FD7C0")]
	public BoolSetting()
	{
	}

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x40F3960", Offset = "0x40F3960", VA = "0x40F3960")]
	public BoolSetting(bool defaultValue)
	{
	}

	[Token(Token = "0x600037F")]
	[Address(RVA = "0x40FF580", Offset = "0x40FF580", VA = "0x40FF580", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x6000380")]
	[Address(RVA = "0x40FF5E0", Offset = "0x40FF5E0", VA = "0x40FF5E0", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}
}
