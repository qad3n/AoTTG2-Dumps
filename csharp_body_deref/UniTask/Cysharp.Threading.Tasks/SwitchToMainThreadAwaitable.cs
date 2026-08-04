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

[Token(Token = "0x2000106")]
public struct SwitchToMainThreadAwaitable
{
	[Token(Token = "0x2000107")]
	public struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x400040A")]
		[FieldOffset(Offset = "0x0")]
		private readonly PlayerLoopTiming playerLoopTiming;

		[Token(Token = "0x400040B")]
		[FieldOffset(Offset = "0x8")]
		private readonly CancellationToken cancellationToken;

		[Token(Token = "0x17000044")]
		public bool IsCompleted
		{
			[Token(Token = "0x600068B")]
			[Address(RVA = "0x49E9C40", Offset = "0x49E9C40", VA = "0x49E9C40")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600068A")]
		[Address(RVA = "0x49E9C20", Offset = "0x49E9C20", VA = "0x49E9C20")]
		public Awaiter(PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x600068C")]
		[Address(RVA = "0x49E9D00", Offset = "0x49E9D00", VA = "0x49E9D00")]
		public void GetResult()
		{
		}

		[Token(Token = "0x600068D")]
		[Address(RVA = "0x49E9D60", Offset = "0x49E9D60", VA = "0x49E9D60", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600068E")]
		[Address(RVA = "0x49E9DB0", Offset = "0x49E9DB0", VA = "0x49E9DB0", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x4000408")]
	[FieldOffset(Offset = "0x0")]
	private readonly PlayerLoopTiming playerLoopTiming;

	[Token(Token = "0x4000409")]
	[FieldOffset(Offset = "0x8")]
	private readonly CancellationToken cancellationToken;

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x49DECD0", Offset = "0x49DECD0", VA = "0x49DECD0")]
	public SwitchToMainThreadAwaitable(PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x49E9BE0", Offset = "0x49E9BE0", VA = "0x49E9BE0")]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}
}
