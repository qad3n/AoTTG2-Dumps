// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Pool.PooledObject
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Pool;

[Token(Token = "0x20002F0")]
public struct PooledObject<T> : IDisposable where T : class
{
	[Token(Token = "0x400077C")]
	[FieldOffset(Offset = "0x0")]
	private readonly T m_ToReturn;

	[Token(Token = "0x400077D")]
	[FieldOffset(Offset = "0x0")]
	private readonly IObjectPool<T> m_Pool;

	[Token(Token = "0x60011EB")]
	public PooledObject(T value, IObjectPool<T> pool)
	{
	}

	[Token(Token = "0x60011EC")]
	private void System_002EIDisposable_002EDispose()
	{
	}
}
