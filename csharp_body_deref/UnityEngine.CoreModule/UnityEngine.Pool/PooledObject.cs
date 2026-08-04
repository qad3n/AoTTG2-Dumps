// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Pool.PooledObject
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Pool;

[Token(Token = "0x2000293")]
public struct PooledObject<T> : IDisposable where T : class
{
	[Token(Token = "0x40006D0")]
	[FieldOffset(Offset = "0x0")]
	private readonly T m_ToReturn;

	[Token(Token = "0x40006D1")]
	[FieldOffset(Offset = "0x0")]
	private readonly IObjectPool<T> m_Pool;

	[Token(Token = "0x6000DE4")]
	internal PooledObject(T value, IObjectPool<T> pool)
	{
	}

	[Token(Token = "0x6000DE5")]
	private void System_002EIDisposable_002EDispose()
	{
	}
}
