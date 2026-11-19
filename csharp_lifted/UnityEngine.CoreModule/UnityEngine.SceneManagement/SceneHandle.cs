// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SceneManagement.SceneHandle
// Update status: unchanged since the previous dump
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
[UnityEngine.NativeClass("UnitySceneHandle")]
[UnityEngine.Bindings.NativeHeader("Runtime/SceneManager/UnitySceneHandle.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct SceneHandle : IEquatable<SceneHandle>
{
	[Token(Token = "0x4000753")]
	[FieldOffset(Offset = "0x0")]
	internal EntityId m_Value;

	[Token(Token = "0x60011B8")]
	[Address(RVA = "0x6936780", Offset = "0x6935780", VA = "0x6936780", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B9")]
	[Address(RVA = "0x69367E0", Offset = "0x69357E0", VA = "0x69367E0", Slot = "4")]
	public bool Equals(SceneHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x60011BA")]
	[Address(RVA = "0x69366F0", Offset = "0x69356F0", VA = "0x69366F0")]
	public static bool operator ==(SceneHandle left, SceneHandle right)
	{
		return default(bool);
	}

	[Token(Token = "0x60011BB")]
	[Address(RVA = "0x6936710", Offset = "0x6935710", VA = "0x6936710", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60011BC")]
	[Address(RVA = "0x69367F0", Offset = "0x69357F0", VA = "0x69367F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
