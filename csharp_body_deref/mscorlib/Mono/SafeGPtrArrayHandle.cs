using System;
using Il2CppDummyDll;

namespace Mono;

[Token(Token = "0x2000027")]
internal struct SafeGPtrArrayHandle : IDisposable
{
	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x0")]
	private Mono.RuntimeGPtrArrayHandle handle;

	[Token(Token = "0x1700000D")]
	internal int Length
	{
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x4DE8740", Offset = "0x4DE8740", VA = "0x4DE8740")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000E")]
	internal IntPtr this[int i]
	{
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x4DE8760", Offset = "0x4DE8760", VA = "0x4DE8760")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x4DE8700", Offset = "0x4DE8700", VA = "0x4DE8700")]
	internal SafeGPtrArrayHandle(IntPtr ptr)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x4DE8720", Offset = "0x4DE8720", VA = "0x4DE8720", Slot = "4")]
	public void Dispose()
	{
	}
}
