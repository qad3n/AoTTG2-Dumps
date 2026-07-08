using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200009D")]
public sealed class CharEnumerator : IEnumerator, IEnumerator<char>, IDisposable, ICloneable
{
	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0x10")]
	private string _str;

	[Token(Token = "0x4000215")]
	[FieldOffset(Offset = "0x18")]
	private int _index;

	[Token(Token = "0x4000216")]
	[FieldOffset(Offset = "0x1C")]
	private char _currentElement;

	[Token(Token = "0x17000065")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x60004C9")]
		[Address(RVA = "0x4F348E0", Offset = "0x4F348E0", VA = "0x4F348E0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000066")]
	public char Current
	{
		[Token(Token = "0x60004CA")]
		[Address(RVA = "0x4F34910", Offset = "0x4F34910", VA = "0x4F34910", Slot = "7")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x4F34830", Offset = "0x4F34830", VA = "0x4F34830")]
	internal CharEnumerator(string str)
	{
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x4F34860", Offset = "0x4F34860", VA = "0x4F34860", Slot = "9")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x4F34870", Offset = "0x4F34870", VA = "0x4F34870", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x4F348B0", Offset = "0x4F348B0", VA = "0x4F348B0", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x4F349A0", Offset = "0x4F349A0", VA = "0x4F349A0", Slot = "6")]
	public void Reset()
	{
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x4F349B0", Offset = "0x4F349B0", VA = "0x4F349B0")]
	internal CharEnumerator()
	{
	}
}
