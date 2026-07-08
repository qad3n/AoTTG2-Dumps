using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace Settings;

[Token(Token = "0x20000C3")]
internal class Vector3Setting : TypedSetting<Vector3>
{
	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x3E11C30", Offset = "0x3E11C30", VA = "0x3E11C30")]
	public Vector3Setting()
	{
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x3E11C70", Offset = "0x3E11C70", VA = "0x3E11C70")]
	public Vector3Setting(Vector3 defaultValue)
	{
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x3E11D00", Offset = "0x3E11D00", VA = "0x3E11D00", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x3E11E50", Offset = "0x3E11E50", VA = "0x3E11E50", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}
}
