using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200004A")]
public class Pool<T> where T : class
{
	[Token(Token = "0x400020E")]
	[FieldOffset(Offset = "0x0")]
	private readonly Func<T> createFunction;

	[Token(Token = "0x400020F")]
	[FieldOffset(Offset = "0x0")]
	private readonly Queue<T> pool;

	[Token(Token = "0x4000210")]
	[FieldOffset(Offset = "0x0")]
	private readonly Action<T> resetFunction;

	[Token(Token = "0x1700009E")]
	public int Count
	{
		[Token(Token = "0x600031A")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000318")]
	public Pool(Func<T> createFunction, Action<T> resetFunction, int poolCapacity)
	{
	}

	[Token(Token = "0x6000319")]
	public Pool(Func<T> createFunction, int poolCapacity)
	{
	}

	[Token(Token = "0x600031B")]
	private void CreatePoolItems(int numItems)
	{
	}

	[Token(Token = "0x600031C")]
	[Obsolete("Use Release() rather than Push()")]
	public void Push(T item)
	{
	}

	[Token(Token = "0x600031D")]
	public void Release(T item)
	{
	}

	[Token(Token = "0x600031E")]
	[Obsolete("Use Acquire() rather than Pop()")]
	public T Pop()
	{
		return null;
	}

	[Token(Token = "0x600031F")]
	public T Acquire()
	{
		return null;
	}
}
