// ==================== AoTTG2 cross-reference ====================
// Type: Settings.Vector3Setting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/Vector3Setting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/Vector3Setting.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace Settings;

[Token(Token = "0x20000E4")]
internal class Vector3Setting : TypedSetting<Vector3>
{
	[Token(Token = "0x600049B")]
	[Address(RVA = "0x1F2C1D0", Offset = "0x1F2A7D0", VA = "0x181F2C1D0")]
	public Vector3Setting()
	{
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x1F2C120", Offset = "0x1F2A720", VA = "0x181F2C120")]
	public Vector3Setting(Vector3 defaultValue)
	{
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x1F2BFE0", Offset = "0x1F2A5E0", VA = "0x181F2BFE0", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x1F2BEA0", Offset = "0x1F2A4A0", VA = "0x181F2BEA0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}
}
