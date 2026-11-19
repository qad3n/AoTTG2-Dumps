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

[Token(Token = "0x2000108")]
internal class BoolSetting : TypedSetting<bool>
{
	[Token(Token = "0x600057C")]
	[Address(RVA = "0x5A55360", Offset = "0x5A54360", VA = "0x5A55360")]
	public BoolSetting()
	{
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x5A412A0", Offset = "0x5A402A0", VA = "0x5A412A0")]
	public BoolSetting(bool defaultValue)
	{
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x5A553A0", Offset = "0x5A543A0", VA = "0x5A553A0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x5A55400", Offset = "0x5A54400", VA = "0x5A55400", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}
}
