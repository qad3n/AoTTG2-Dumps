using System;
using System.Runtime.CompilerServices;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000103")]
public struct ReturnToMainThread
{
	[Token(Token = "0x2000104")]
	public readonly struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000404")]
		[FieldOffset(Offset = "0x0")]
		private readonly PlayerLoopTiming timing;

		[Token(Token = "0x4000405")]
		[FieldOffset(Offset = "0x8")]
		private readonly CancellationToken cancellationToken;

		[Token(Token = "0x17000043")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000675")]
			[Address(RVA = "0x46C4C90", Offset = "0x46C4C90", VA = "0x46C4C90")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000673")]
		[Address(RVA = "0x46C4C60", Offset = "0x46C4C60", VA = "0x46C4C60")]
		public Awaiter(PlayerLoopTiming timing, CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x6000674")]
		[Address(RVA = "0x46C4C80", Offset = "0x46C4C80", VA = "0x46C4C80")]
		public Awaiter GetAwaiter()
		{
			return default(Awaiter);
		}

		[Token(Token = "0x6000676")]
		[Address(RVA = "0x46C4D50", Offset = "0x46C4D50", VA = "0x46C4D50")]
		public void GetResult()
		{
		}

		[Token(Token = "0x6000677")]
		[Address(RVA = "0x46C4DB0", Offset = "0x46C4DB0", VA = "0x46C4DB0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000678")]
		[Address(RVA = "0x46C4E00", Offset = "0x46C4E00", VA = "0x46C4E00", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x4000402")]
	[FieldOffset(Offset = "0x0")]
	private readonly PlayerLoopTiming playerLoopTiming;

	[Token(Token = "0x4000403")]
	[FieldOffset(Offset = "0x8")]
	private readonly CancellationToken cancellationToken;

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x46B94C0", Offset = "0x46B94C0", VA = "0x46B94C0")]
	public ReturnToMainThread(PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x46C4C20", Offset = "0x46C4C20", VA = "0x46C4C20")]
	public Awaiter DisposeAsync()
	{
		return default(Awaiter);
	}
}
