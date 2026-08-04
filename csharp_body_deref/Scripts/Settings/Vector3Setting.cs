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

[Token(Token = "0x20000C6")]
internal class Vector3Setting : TypedSetting<Vector3>
{
	[Token(Token = "0x600040C")]
	[Address(RVA = "0x40FDB00", Offset = "0x40FDB00", VA = "0x40FDB00")]
	public Vector3Setting()
	{
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x4103E40", Offset = "0x4103E40", VA = "0x4103E40")]
	public Vector3Setting(Vector3 defaultValue)
	{
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x4103ED0", Offset = "0x4103ED0", VA = "0x4103ED0", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x4104020", Offset = "0x4104020", VA = "0x4104020", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}
}
