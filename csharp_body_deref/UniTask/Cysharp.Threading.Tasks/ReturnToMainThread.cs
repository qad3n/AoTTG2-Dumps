// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.ReturnToMainThread
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

[Token(Token = "0x2000101")]
public struct ReturnToMainThread
{
	[Token(Token = "0x2000102")]
	public readonly struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x40003FF")]
		[FieldOffset(Offset = "0x0")]
		private readonly PlayerLoopTiming timing;

		[Token(Token = "0x4000400")]
		[FieldOffset(Offset = "0x8")]
		private readonly CancellationToken cancellationToken;

		[Token(Token = "0x17000043")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000673")]
			[Address(RVA = "0x29095B0", Offset = "0x2907BB0", VA = "0x1829095B0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000671")]
		[Address(RVA = "0x29093F0", Offset = "0x29079F0", VA = "0x1829093F0")]
		public Awaiter(PlayerLoopTiming timing, CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x6000672")]
		[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
		public Awaiter GetAwaiter()
		{
			return default(Awaiter);
		}

		[Token(Token = "0x6000674")]
		[Address(RVA = "0x2908530", Offset = "0x2906B30", VA = "0x182908530")]
		public void GetResult()
		{
		}

		[Token(Token = "0x6000675")]
		[Address(RVA = "0x2908810", Offset = "0x2906E10", VA = "0x182908810", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000676")]
		[Address(RVA = "0x2908F00", Offset = "0x2907500", VA = "0x182908F00", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x40003FD")]
	[FieldOffset(Offset = "0x0")]
	private readonly PlayerLoopTiming playerLoopTiming;

	[Token(Token = "0x40003FE")]
	[FieldOffset(Offset = "0x8")]
	private readonly CancellationToken cancellationToken;

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x29093F0", Offset = "0x29079F0", VA = "0x1829093F0")]
	public ReturnToMainThread(PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x2911D30", Offset = "0x2910330", VA = "0x182911D30")]
	public Awaiter DisposeAsync()
	{
		return default(Awaiter);
	}
}
