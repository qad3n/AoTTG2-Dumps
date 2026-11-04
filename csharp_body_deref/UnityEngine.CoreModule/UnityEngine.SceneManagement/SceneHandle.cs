// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SceneManagement.SceneHandle
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.SceneManagement;

[Serializable]
[Token(Token = "0x200024C")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.NativeClass("UnitySceneHandle")]
[UnityEngine.Bindings.NativeHeader("Runtime/SceneManager/UnitySceneHandle.h")]
public struct SceneHandle : IEquatable<SceneHandle>
{
	[Token(Token = "0x4000755")]
	[FieldOffset(Offset = "0x0")]
	internal EntityId m_Value;

	[Token(Token = "0x60011A4")]
	[Address(RVA = "0x2F55BA0", Offset = "0x2F541A0", VA = "0x182F55BA0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A5")]
	[Address(RVA = "0x2F55B90", Offset = "0x2F54190", VA = "0x182F55B90", Slot = "4")]
	public bool Equals(SceneHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A6")]
	[Address(RVA = "0x2F55C50", Offset = "0x2F54250", VA = "0x182F55C50")]
	public static bool operator ==(SceneHandle left, SceneHandle right)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A7")]
	[Address(RVA = "0x2F55C30", Offset = "0x2F54230", VA = "0x182F55C30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60011A8")]
	[Address(RVA = "0x2F55C40", Offset = "0x2F54240", VA = "0x182F55C40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
