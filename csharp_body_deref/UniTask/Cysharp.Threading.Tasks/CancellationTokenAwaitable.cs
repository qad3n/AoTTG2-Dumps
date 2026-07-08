using System;
using System.Runtime.CompilerServices;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000019")]
public struct CancellationTokenAwaitable
{
	[Token(Token = "0x200001A")]
	public struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000055")]
		[FieldOffset(Offset = "0x0")]
		private CancellationToken cancellationToken;

		[Token(Token = "0x17000014")]
		public bool IsCompleted
		{
			[Token(Token = "0x600009B")]
			[Address(RVA = "0x46AE310", Offset = "0x46AE310", VA = "0x46AE310")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600009A")]
		[Address(RVA = "0x46AE300", Offset = "0x46AE300", VA = "0x46AE300")]
		public Awaiter(CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x600009C")]
		[Address(RVA = "0x46AE390", Offset = "0x46AE390", VA = "0x46AE390")]
		public void GetResult()
		{
		}

		[Token(Token = "0x600009D")]
		[Address(RVA = "0x46AE3A0", Offset = "0x46AE3A0", VA = "0x46AE3A0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600009E")]
		[Address(RVA = "0x46AE400", Offset = "0x46AE400", VA = "0x46AE400", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x0")]
	private CancellationToken cancellationToken;

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x46AE2D0", Offset = "0x46AE2D0", VA = "0x46AE2D0")]
	public CancellationTokenAwaitable(CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x46AE2E0", Offset = "0x46AE2E0", VA = "0x46AE2E0")]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}
}
