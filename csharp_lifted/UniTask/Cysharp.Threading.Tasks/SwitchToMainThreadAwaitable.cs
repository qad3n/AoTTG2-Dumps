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
			[Address(RVA = "0x62D8CB0", Offset = "0x62D7CB0", VA = "0x62D8CB0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600066A")]
		[Address(RVA = "0x62D8C90", Offset = "0x62D7C90", VA = "0x62D8C90")]
		public Awaiter(PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x600066C")]
		[Address(RVA = "0x62D8D70", Offset = "0x62D7D70", VA = "0x62D8D70")]
		public void GetResult()
		{
		}

		[Token(Token = "0x600066D")]
		[Address(RVA = "0x62D8DC0", Offset = "0x62D7DC0", VA = "0x62D8DC0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600066E")]
		[Address(RVA = "0x62D8E10", Offset = "0x62D7E10", VA = "0x62D8E10", Slot = "4")]
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
	[Address(RVA = "0x62CDD00", Offset = "0x62CCD00", VA = "0x62CDD00")]
	public SwitchToMainThreadAwaitable(PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x62D8C50", Offset = "0x62D7C50", VA = "0x62D8C50")]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}
}
