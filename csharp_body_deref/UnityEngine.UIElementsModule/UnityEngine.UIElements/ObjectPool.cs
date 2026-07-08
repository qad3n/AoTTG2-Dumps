using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000232")]
internal class ObjectPool<T> where T : new()
{
	[Token(Token = "0x40007EF")]
	[FieldOffset(Offset = "0x0")]
	private readonly Stack<T> m_Stack;

	[Token(Token = "0x40007F0")]
	[FieldOffset(Offset = "0x0")]
	private int m_MaxSize;

	[Token(Token = "0x40007F1")]
	[FieldOffset(Offset = "0x0")]
	internal Func<T> CreateFunc;

	[Token(Token = "0x170002A6")]
	public int maxSize
	{
		[Token(Token = "0x6000E3A")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000E3B")]
		set
		{
		}
	}

	[Token(Token = "0x6000E3C")]
	public ObjectPool(Func<T> CreateFunc, int maxSize = 100)
	{
	}

	[Token(Token = "0x6000E3D")]
	public int Size()
	{
		return default(int);
	}

	[Token(Token = "0x6000E3E")]
	public T Get()
	{
		return (T)null;
	}

	[Token(Token = "0x6000E3F")]
	public void Release(T element)
	{
	}
}
