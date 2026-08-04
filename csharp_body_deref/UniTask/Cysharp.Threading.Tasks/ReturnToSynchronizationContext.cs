// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.ReturnToSynchronizationContext
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

[Token(Token = "0x2000110")]
public struct ReturnToSynchronizationContext
{
	[Token(Token = "0x2000111")]
	public struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x400041A")]
		[FieldOffset(Offset = "0x0")]
		private static readonly SendOrPostCallback switchToCallback;

		[Token(Token = "0x400041B")]
		[FieldOffset(Offset = "0x0")]
		private readonly SynchronizationContext synchronizationContext;

		[Token(Token = "0x400041C")]
		[FieldOffset(Offset = "0x8")]
		private readonly bool dontPostWhenSameContext;

		[Token(Token = "0x400041D")]
		[FieldOffset(Offset = "0x10")]
		private readonly CancellationToken cancellationToken;

		[Token(Token = "0x17000049")]
		public bool IsCompleted
		{
			[Token(Token = "0x60006B2")]
			[Address(RVA = "0x49EAA50", Offset = "0x49EAA50", VA = "0x49EAA50")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60006B0")]
		[Address(RVA = "0x49EAA00", Offset = "0x49EAA00", VA = "0x49EAA00")]
		public Awaiter(SynchronizationContext synchronizationContext, bool dontPostWhenSameContext, CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x60006B1")]
		[Address(RVA = "0x49EAA30", Offset = "0x49EAA30", VA = "0x49EAA30")]
		public Awaiter GetAwaiter()
		{
			return default(Awaiter);
		}

		[Token(Token = "0x60006B3")]
		[Address(RVA = "0x49EAA70", Offset = "0x49EAA70", VA = "0x49EAA70")]
		public void GetResult()
		{
		}

		[Token(Token = "0x60006B4")]
		[Address(RVA = "0x49EAAD0", Offset = "0x49EAAD0", VA = "0x49EAAD0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60006B5")]
		[Address(RVA = "0x49EAB50", Offset = "0x49EAB50", VA = "0x49EAB50", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60006B6")]
		[Address(RVA = "0x49EABD0", Offset = "0x49EABD0", VA = "0x49EABD0")]
		private static void Callback(object state)
		{
		}
	}

	[Token(Token = "0x4000417")]
	[FieldOffset(Offset = "0x0")]
	private readonly SynchronizationContext syncContext;

	[Token(Token = "0x4000418")]
	[FieldOffset(Offset = "0x8")]
	private readonly bool dontPostWhenSameContext;

	[Token(Token = "0x4000419")]
	[FieldOffset(Offset = "0x10")]
	private readonly CancellationToken cancellationToken;

	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x49DEF10", Offset = "0x49DEF10", VA = "0x49DEF10")]
	public ReturnToSynchronizationContext(SynchronizationContext syncContext, bool dontPostWhenSameContext, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x49EA9B0", Offset = "0x49EA9B0", VA = "0x49EA9B0")]
	public Awaiter DisposeAsync()
	{
		return default(Awaiter);
	}
}
