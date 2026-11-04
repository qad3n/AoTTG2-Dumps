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

[Token(Token = "0x20005A2")]
internal class LinkedPool<T> where T : LinkedPoolItem<T>
{
	[Token(Token = "0x4001415")]
	[FieldOffset(Offset = "0x0")]
	private readonly Func<T> m_CreateFunc;

	[Token(Token = "0x4001416")]
	[FieldOffset(Offset = "0x0")]
	private readonly Action<T> m_ResetAction;

	[Token(Token = "0x4001417")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_Limit;

	[Token(Token = "0x4001418")]
	[FieldOffset(Offset = "0x0")]
	private T m_PoolFirst;

	[Token(Token = "0x17000A68")]
	public int Count
	{
		[Token(Token = "0x60029F5")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60029F6")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60029F4")]
	public LinkedPool(Func<T> createFunc, Action<T> resetAction, int limit = 10000)
	{
	}

	[Token(Token = "0x60029F7")]
	public void Clear()
	{
	}

	[Token(Token = "0x60029F8")]
	public T Get()
	{
		return null;
	}

	[Token(Token = "0x60029F9")]
	public void Return(T item)
	{
	}
}
