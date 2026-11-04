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

[Token(Token = "0x2000109")]
public struct ReturnToSynchronizationContext
{
	[Token(Token = "0x200010A")]
	public struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x400040B")]
		[FieldOffset(Offset = "0x0")]
		private static readonly SendOrPostCallback switchToCallback;

		[Token(Token = "0x400040C")]
		[FieldOffset(Offset = "0x0")]
		private readonly SynchronizationContext synchronizationContext;

		[Token(Token = "0x400040D")]
		[FieldOffset(Offset = "0x8")]
		private readonly bool dontPostWhenSameContext;

		[Token(Token = "0x400040E")]
		[FieldOffset(Offset = "0x10")]
		private readonly CancellationToken cancellationToken;

		[Token(Token = "0x17000047")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000692")]
			[Address(RVA = "0x2909580", Offset = "0x2907B80", VA = "0x182909580")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000690")]
		[Address(RVA = "0x2909420", Offset = "0x2907A20", VA = "0x182909420")]
		public Awaiter(SynchronizationContext synchronizationContext, bool dontPostWhenSameContext, CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x6000691")]
		[Address(RVA = "0xBAD8E0", Offset = "0xBABEE0", VA = "0x180BAD8E0")]
		public Awaiter GetAwaiter()
		{
			return default(Awaiter);
		}

		[Token(Token = "0x6000693")]
		[Address(RVA = "0x2908580", Offset = "0x2906B80", VA = "0x182908580")]
		public void GetResult()
		{
		}

		[Token(Token = "0x6000694")]
		[Address(RVA = "0x2908780", Offset = "0x2906D80", VA = "0x182908780", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000695")]
		[Address(RVA = "0x2909030", Offset = "0x2907630", VA = "0x182909030", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000696")]
		[Address(RVA = "0x29084C0", Offset = "0x2906AC0", VA = "0x1829084C0")]
		private static void Callback(object state)
		{
		}
	}

	[Token(Token = "0x4000408")]
	[FieldOffset(Offset = "0x0")]
	private readonly SynchronizationContext syncContext;

	[Token(Token = "0x4000409")]
	[FieldOffset(Offset = "0x8")]
	private readonly bool dontPostWhenSameContext;

	[Token(Token = "0x400040A")]
	[FieldOffset(Offset = "0x10")]
	private readonly CancellationToken cancellationToken;

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x2909420", Offset = "0x2907A20", VA = "0x182909420")]
	public ReturnToSynchronizationContext(SynchronizationContext syncContext, bool dontPostWhenSameContext, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x2911D60", Offset = "0x2910360", VA = "0x182911D60")]
	public Awaiter DisposeAsync()
	{
		return default(Awaiter);
	}
}
