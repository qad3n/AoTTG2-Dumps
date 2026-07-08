using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x200024E")]
internal class EmptyDisposable : IDisposable
{
	[Token(Token = "0x400069D")]
	[FieldOffset(Offset = "0x0")]
	public static EmptyDisposable Instance;

	[Token(Token = "0x6000D25")]
	[Address(RVA = "0x46F9FE0", Offset = "0x46F9FE0", VA = "0x46F9FE0")]
	private EmptyDisposable()
	{
	}

	[Token(Token = "0x6000D26")]
	[Address(RVA = "0x46F9FF0", Offset = "0x46F9FF0", VA = "0x46F9FF0", Slot = "4")]
	public void Dispose()
	{
	}
}
