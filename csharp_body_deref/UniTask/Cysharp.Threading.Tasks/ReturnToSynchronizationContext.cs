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
			[Address(RVA = "0x62D9A90", Offset = "0x62D8A90", VA = "0x62D9A90")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000690")]
		[Address(RVA = "0x62D9A40", Offset = "0x62D8A40", VA = "0x62D9A40")]
		public Awaiter(SynchronizationContext synchronizationContext, bool dontPostWhenSameContext, CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x6000691")]
		[Address(RVA = "0x62D9A70", Offset = "0x62D8A70", VA = "0x62D9A70")]
		public Awaiter GetAwaiter()
		{
			return default(Awaiter);
		}

		[Token(Token = "0x6000693")]
		[Address(RVA = "0x62D9AB0", Offset = "0x62D8AB0", VA = "0x62D9AB0")]
		public void GetResult()
		{
		}

		[Token(Token = "0x6000694")]
		[Address(RVA = "0x62D9B00", Offset = "0x62D8B00", VA = "0x62D9B00", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000695")]
		[Address(RVA = "0x62D9B80", Offset = "0x62D8B80", VA = "0x62D9B80", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000696")]
		[Address(RVA = "0x62D9C00", Offset = "0x62D8C00", VA = "0x62D9C00")]
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
	[Address(RVA = "0x62CDF50", Offset = "0x62CCF50", VA = "0x62CDF50")]
	public ReturnToSynchronizationContext(SynchronizationContext syncContext, bool dontPostWhenSameContext, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x62D99F0", Offset = "0x62D89F0", VA = "0x62D99F0")]
	public Awaiter DisposeAsync()
	{
		return default(Awaiter);
	}
}
