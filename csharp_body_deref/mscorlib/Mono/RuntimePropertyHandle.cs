using System;
using Il2CppDummyDll;

namespace Mono;

[Token(Token = "0x2000017")]
internal struct RuntimePropertyHandle
{
	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x0")]
	private IntPtr value;

	[Token(Token = "0x1700000A")]
	public IntPtr Value
	{
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x4DE8270", Offset = "0x4DE8270", VA = "0x4DE8270")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4DE8260", Offset = "0x4DE8260", VA = "0x4DE8260")]
	internal RuntimePropertyHandle(IntPtr v)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4DE8280", Offset = "0x4DE8280", VA = "0x4DE8280", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4DE8360", Offset = "0x4DE8360", VA = "0x4DE8360", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
