using System;
using Il2CppDummyDll;

namespace UnityEngine.Pool;

[Token(Token = "0x2000290")]
public struct PooledObject<T> : IDisposable where T : class
{
	[Token(Token = "0x40006D0")]
	[FieldOffset(Offset = "0x0")]
	private readonly T m_ToReturn;

	[Token(Token = "0x40006D1")]
	[FieldOffset(Offset = "0x0")]
	private readonly IObjectPool<T> m_Pool;

	[Token(Token = "0x6000DE2")]
	internal PooledObject(T value, IObjectPool<T> pool)
	{
	}

	[Token(Token = "0x6000DE3")]
	private void System_002EIDisposable_002EDispose()
	{
	}
}
