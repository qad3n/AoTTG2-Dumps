using System;
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x20006E5")]
public class Cycle<T> where T : Enum
{
	[Token(Token = "0x4002137")]
	[FieldOffset(Offset = "0x0")]
	private T[] values;

	[Token(Token = "0x4002138")]
	[FieldOffset(Offset = "0x0")]
	private int index;

	[Token(Token = "0x600444D")]
	public Cycle()
	{
	}

	[Token(Token = "0x600444E")]
	public T Next()
	{
		return (T)null;
	}

	[Token(Token = "0x600444F")]
	public T Previous()
	{
		return (T)null;
	}

	[Token(Token = "0x6004450")]
	public T Current()
	{
		return (T)null;
	}

	[Token(Token = "0x6004451")]
	public T Set(T value)
	{
		return (T)null;
	}
}
