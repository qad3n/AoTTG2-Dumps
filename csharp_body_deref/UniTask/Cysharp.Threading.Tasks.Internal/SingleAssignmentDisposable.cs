using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x200024F")]
internal sealed class SingleAssignmentDisposable : IDisposable
{
	[Token(Token = "0x400069E")]
	[FieldOffset(Offset = "0x10")]
	private readonly object gate;

	[Token(Token = "0x400069F")]
	[FieldOffset(Offset = "0x18")]
	private IDisposable current;

	[Token(Token = "0x40006A0")]
	[FieldOffset(Offset = "0x20")]
	private bool disposed;

	[Token(Token = "0x1700007A")]
	public bool IsDisposed
	{
		[Token(Token = "0x6000D28")]
		[Address(RVA = "0x46FA070", Offset = "0x46FA070", VA = "0x46FA070")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700007B")]
	public IDisposable Disposable
	{
		[Token(Token = "0x6000D29")]
		[Address(RVA = "0x46FA130", Offset = "0x46FA130", VA = "0x46FA130")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D2A")]
		[Address(RVA = "0x46FA140", Offset = "0x46FA140", VA = "0x46FA140")]
		set
		{
		}
	}

	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x46FA340", Offset = "0x46FA340", VA = "0x46FA340", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x46FA4D0", Offset = "0x46FA4D0", VA = "0x46FA4D0")]
	public SingleAssignmentDisposable()
	{
	}
}
