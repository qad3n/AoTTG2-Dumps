using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Events;

namespace TMPro;

[Token(Token = "0x200005B")]
internal class TMP_ObjectPool<T> where T : new()
{
	[Token(Token = "0x400020D")]
	[FieldOffset(Offset = "0x0")]
	private readonly Stack<T> m_Stack;

	[Token(Token = "0x400020E")]
	[FieldOffset(Offset = "0x0")]
	private readonly UnityAction<T> m_ActionOnGet;

	[Token(Token = "0x400020F")]
	[FieldOffset(Offset = "0x0")]
	private readonly UnityAction<T> m_ActionOnRelease;

	[Token(Token = "0x17000099")]
	public int countAll
	{
		[Token(Token = "0x60002C8")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002C9")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700009A")]
	public int countActive
	{
		[Token(Token = "0x60002CA")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700009B")]
	public int countInactive
	{
		[Token(Token = "0x60002CB")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002CC")]
	public TMP_ObjectPool(UnityAction<T> actionOnGet, UnityAction<T> actionOnRelease)
	{
	}

	[Token(Token = "0x60002CD")]
	public T Get()
	{
		return (T)null;
	}

	[Token(Token = "0x60002CE")]
	public void Release(T element)
	{
	}
}
