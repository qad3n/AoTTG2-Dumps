using System;
using System.Runtime.CompilerServices;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000101")]
public struct SwitchToMainThreadAwaitable
{
	[Token(Token = "0x2000102")]
	public struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000400")]
		[FieldOffset(Offset = "0x0")]
		private readonly PlayerLoopTiming playerLoopTiming;

		[Token(Token = "0x4000401")]
		[FieldOffset(Offset = "0x8")]
		private readonly CancellationToken cancellationToken;

		[Token(Token = "0x17000042")]
		public bool IsCompleted
		{
			[Token(Token = "0x600066D")]
			[Address(RVA = "0x46C4A60", Offset = "0x46C4A60", VA = "0x46C4A60")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600066C")]
		[Address(RVA = "0x46C4A40", Offset = "0x46C4A40", VA = "0x46C4A40")]
		public Awaiter(PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x600066E")]
		[Address(RVA = "0x46C4B20", Offset = "0x46C4B20", VA = "0x46C4B20")]
		public void GetResult()
		{
		}

		[Token(Token = "0x600066F")]
		[Address(RVA = "0x46C4B80", Offset = "0x46C4B80", VA = "0x46C4B80", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000670")]
		[Address(RVA = "0x46C4BD0", Offset = "0x46C4BD0", VA = "0x46C4BD0", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x40003FE")]
	[FieldOffset(Offset = "0x0")]
	private readonly PlayerLoopTiming playerLoopTiming;

	[Token(Token = "0x40003FF")]
	[FieldOffset(Offset = "0x8")]
	private readonly CancellationToken cancellationToken;

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x46B9440", Offset = "0x46B9440", VA = "0x46B9440")]
	public SwitchToMainThreadAwaitable(PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x46C4A00", Offset = "0x46C4A00", VA = "0x46C4A00")]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}
}
