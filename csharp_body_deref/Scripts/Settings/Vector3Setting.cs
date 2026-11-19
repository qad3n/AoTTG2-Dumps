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

[Token(Token = "0x200011F")]
internal class Vector3Setting : TypedSetting<Vector3>
{
	[Token(Token = "0x6000619")]
	[Address(RVA = "0x5B7D080", Offset = "0x5B7C080", VA = "0x5B7D080")]
	public Vector3Setting()
	{
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x5B7D0C0", Offset = "0x5B7C0C0", VA = "0x5B7D0C0")]
	public Vector3Setting(Vector3 defaultValue)
	{
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x5B7D150", Offset = "0x5B7C150", VA = "0x5B7D150", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x600061C")]
	[Address(RVA = "0x5B7D2A0", Offset = "0x5B7C2A0", VA = "0x5B7D2A0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}
}
