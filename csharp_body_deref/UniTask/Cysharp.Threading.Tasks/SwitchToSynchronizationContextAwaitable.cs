// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.SwitchToSynchronizationContextAwaitable
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

[Token(Token = "0x200010E")]
public struct SwitchToSynchronizationContextAwaitable
{
	[Token(Token = "0x200010F")]
	public struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000414")]
		[FieldOffset(Offset = "0x0")]
		private static readonly SendOrPostCallback switchToCallback;

		[Token(Token = "0x4000415")]
		[FieldOffset(Offset = "0x0")]
		private readonly SynchronizationContext synchronizationContext;

		[Token(Token = "0x4000416")]
		[FieldOffset(Offset = "0x8")]
		private readonly CancellationToken cancellationToken;

		[Token(Token = "0x17000048")]
		public bool IsCompleted
		{
			[Token(Token = "0x60006A8")]
			[Address(RVA = "0x49EA760", Offset = "0x49EA760", VA = "0x49EA760")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60006A7")]
		[Address(RVA = "0x49EA730", Offset = "0x49EA730", VA = "0x49EA730")]
		public Awaiter(SynchronizationContext synchronizationContext, CancellationToken cancellationToken)
		{
		}

		[Token(Token = "0x60006A9")]
		[Address(RVA = "0x49EA770", Offset = "0x49EA770", VA = "0x49EA770")]
		public void GetResult()
		{
		}

		[Token(Token = "0x60006AA")]
		[Address(RVA = "0x49EA7D0", Offset = "0x49EA7D0", VA = "0x49EA7D0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60006AB")]
		[Address(RVA = "0x49EA850", Offset = "0x49EA850", VA = "0x49EA850", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60006AC")]
		[Address(RVA = "0x49EA8D0", Offset = "0x49EA8D0", VA = "0x49EA8D0")]
		private static void Callback(object state)
		{
		}
	}

	[Token(Token = "0x4000412")]
	[FieldOffset(Offset = "0x0")]
	private readonly SynchronizationContext synchronizationContext;

	[Token(Token = "0x4000413")]
	[FieldOffset(Offset = "0x8")]
	private readonly CancellationToken cancellationToken;

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x49DEEA0", Offset = "0x49DEEA0", VA = "0x49DEEA0")]
	public SwitchToSynchronizationContextAwaitable(SynchronizationContext synchronizationContext, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x49EA6E0", Offset = "0x49EA6E0", VA = "0x49EA6E0")]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}
}
