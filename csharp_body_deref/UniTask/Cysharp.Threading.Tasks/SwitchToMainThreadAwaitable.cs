// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x20000FF")]
public struct SwitchToMainThreadAwaitable
{
	[Token(Token = "0x2000100")]
	public struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x40003FB")]
		[FieldOffset(Offset = "0x0")]
		private readonly PlayerLoopTiming playerLoopTiming;

		[Token(Token = "0x40003FC")]
		[FieldOffset(Offset = "0x8")]
		private readonly CancellationToken cancellationToken;

		[Token(Token = "0x17000042")]
		public bool IsCompleted
		{
			[Token(Token = "0x600066B")]
			[Address(RVA = "0x2909650", Offset = "0x2907C50", VA = "0x182909650")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600066A")]
		[Address(RVA = "0x29093F0", Offset = "0x29079F0", VA = "0x1829093F0")]
		public Awaiter(PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x600066C")]
		[Address(RVA = "0x29085D0", Offset = "0x2906BD0", VA = "0x1829085D0")]
		public void GetResult()
		{
		}

		[Token(Token = "0x600066D")]
		[Address(RVA = "0x29086C0", Offset = "0x2906CC0", VA = "0x1829086C0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600066E")]
		[Address(RVA = "0x2908CC0", Offset = "0x29072C0", VA = "0x182908CC0", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x40003F9")]
	[FieldOffset(Offset = "0x0")]
	private readonly PlayerLoopTiming playerLoopTiming;

	[Token(Token = "0x40003FA")]
	[FieldOffset(Offset = "0x8")]
	private readonly CancellationToken cancellationToken;

	[Token(Token = "0x6000668")]
	[Address(RVA = "0x29093F0", Offset = "0x29079F0", VA = "0x1829093F0")]
	public SwitchToMainThreadAwaitable(PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x2911D30", Offset = "0x2910330", VA = "0x182911D30")]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}
}
