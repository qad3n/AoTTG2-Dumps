using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000025")]
public struct NoAllocEnumerator<T> : IEnumerator<T>, IEnumerator, IDisposable
{
	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x0")]
	private readonly IList<T> list;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x0")]
	private int index;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x0")]
	private T current;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x0")]
	private bool exceeded;

	[Token(Token = "0x1700002D")]
	public T Current
	{
		[Token(Token = "0x6000102")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x1700002E")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x6000103")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000FF")]
	public NoAllocEnumerator(IList<T> list)
	{
	}

	[Token(Token = "0x6000100")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000101")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000104")]
	private void System_002ECollections_002EIEnumerator_002EReset()
	{
	}
}
