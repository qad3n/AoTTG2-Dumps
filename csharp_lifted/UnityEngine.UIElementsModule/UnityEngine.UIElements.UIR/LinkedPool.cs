// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.LinkedPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x200058D")]
internal class LinkedPool<T> where T : LinkedPoolItem<T>
{
	[Token(Token = "0x4001357")]
	[FieldOffset(Offset = "0x0")]
	private readonly Func<T> m_CreateFunc;

	[Token(Token = "0x4001358")]
	[FieldOffset(Offset = "0x0")]
	private readonly Action<T> m_ResetAction;

	[Token(Token = "0x4001359")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_Limit;

	[Token(Token = "0x400135A")]
	[FieldOffset(Offset = "0x0")]
	private T m_PoolFirst;

	[Token(Token = "0x17000A5C")]
	public int Count
	{
		[Token(Token = "0x6002994")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002995")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002993")]
	public LinkedPool(Func<T> createFunc, Action<T> resetAction, int limit = 10000)
	{
	}

	[Token(Token = "0x6002996")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002997")]
	public T Get()
	{
		return null;
	}

	[Token(Token = "0x6002998")]
	public void Return(T item)
	{
	}
}
