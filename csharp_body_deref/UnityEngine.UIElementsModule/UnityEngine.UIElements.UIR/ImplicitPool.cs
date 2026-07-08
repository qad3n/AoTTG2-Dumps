using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004A2")]
internal class ImplicitPool<T> where T : class
{
	[Token(Token = "0x4000E47")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_StartCapacity;

	[Token(Token = "0x4000E48")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_MaxCapacity;

	[Token(Token = "0x4000E49")]
	[FieldOffset(Offset = "0x0")]
	private Func<T> m_CreateAction;

	[Token(Token = "0x4000E4A")]
	[FieldOffset(Offset = "0x0")]
	private Action<T> m_ResetAction;

	[Token(Token = "0x4000E4B")]
	[FieldOffset(Offset = "0x0")]
	private List<T> m_List;

	[Token(Token = "0x4000E4C")]
	[FieldOffset(Offset = "0x0")]
	private int m_UsedCount;

	[Token(Token = "0x6001CD6")]
	public ImplicitPool(Func<T> createAction, Action<T> resetAction, int startCapacity, int maxCapacity)
	{
	}

	[Token(Token = "0x6001CD7")]
	public T Get()
	{
		return null;
	}

	[Token(Token = "0x6001CD8")]
	public void ReturnAll()
	{
	}
}
