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

[Token(Token = "0x2000108")]
public struct ReturnToMainThread
{
	[Token(Token = "0x2000109")]
	public readonly struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x400040E")]
		[FieldOffset(Offset = "0x0")]
		private readonly PlayerLoopTiming timing;

		[Token(Token = "0x400040F")]
		[FieldOffset(Offset = "0x8")]
		private readonly CancellationToken cancellationToken;

		[Token(Token = "0x17000045")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000693")]
			[Address(RVA = "0x49E9E70", Offset = "0x49E9E70", VA = "0x49E9E70")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000691")]
		[Address(RVA = "0x49E9E40", Offset = "0x49E9E40", VA = "0x49E9E40")]
		public Awaiter(PlayerLoopTiming timing, CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x6000692")]
		[Address(RVA = "0x49E9E60", Offset = "0x49E9E60", VA = "0x49E9E60")]
		public Awaiter GetAwaiter()
		{
			return default(Awaiter);
		}

		[Token(Token = "0x6000694")]
		[Address(RVA = "0x49E9F30", Offset = "0x49E9F30", VA = "0x49E9F30")]
		public void GetResult()
		{
		}

		[Token(Token = "0x6000695")]
		[Address(RVA = "0x49E9F90", Offset = "0x49E9F90", VA = "0x49E9F90", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000696")]
		[Address(RVA = "0x49E9FE0", Offset = "0x49E9FE0", VA = "0x49E9FE0", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x400040C")]
	[FieldOffset(Offset = "0x0")]
	private readonly PlayerLoopTiming playerLoopTiming;

	[Token(Token = "0x400040D")]
	[FieldOffset(Offset = "0x8")]
	private readonly CancellationToken cancellationToken;

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x49DED50", Offset = "0x49DED50", VA = "0x49DED50")]
	public ReturnToMainThread(PlayerLoopTiming playerLoopTiming, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000690")]
	[Address(RVA = "0x49E9E00", Offset = "0x49E9E00", VA = "0x49E9E00")]
	public Awaiter DisposeAsync()
	{
		return default(Awaiter);
	}
}
