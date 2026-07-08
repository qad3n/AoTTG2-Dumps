using System;
using Il2CppDummyDll;

namespace Mono;

[Token(Token = "0x2000016")]
internal struct RuntimeEventHandle
{
	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x0")]
	private IntPtr value;

	[Token(Token = "0x17000009")]
	public IntPtr Value
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x4DE8160", Offset = "0x4DE8160", VA = "0x4DE8160")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4DE8150", Offset = "0x4DE8150", VA = "0x4DE8150")]
	internal RuntimeEventHandle(IntPtr v)
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4DE8170", Offset = "0x4DE8170", VA = "0x4DE8170", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4DE8250", Offset = "0x4DE8250", VA = "0x4DE8250", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
