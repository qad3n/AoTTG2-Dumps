// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Pool.PoolManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Pool;

[Token(Token = "0x20002F0")]
internal static class PoolManager
{
	[Token(Token = "0x400077A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly List<WeakReference<IPool>> s_WeakPoolReferences;

	[Token(Token = "0x60011FF")]
	[Address(RVA = "0x6938320", Offset = "0x6937320", VA = "0x6938320")]
	public static void Register(IPool pool)
	{
	}
}
