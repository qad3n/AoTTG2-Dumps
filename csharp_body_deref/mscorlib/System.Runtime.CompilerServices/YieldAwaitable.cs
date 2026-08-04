// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.YieldAwaitable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x200049B")]
public readonly struct YieldAwaitable
{
	[Token(Token = "0x200049C")]
	public readonly struct YieldAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x400132D")]
		[FieldOffset(Offset = "0x0")]
		private static readonly WaitCallback s_waitCallbackRunAction;

		[Token(Token = "0x400132E")]
		[FieldOffset(Offset = "0x8")]
		private static readonly SendOrPostCallback s_sendOrPostCallbackRunAction;

		[Token(Token = "0x17000480")]
		public bool IsCompleted
		{
			[Token(Token = "0x60022F1")]
			[Address(RVA = "0x3BC3AE0", Offset = "0x3BC3AE0", VA = "0x3BC3AE0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60022F2")]
		[Address(RVA = "0x3BC3AF0", Offset = "0x3BC3AF0", VA = "0x3BC3AF0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60022F3")]
		[Address(RVA = "0x3BC3E40", Offset = "0x3BC3E40", VA = "0x3BC3E40", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60022F4")]
		[Address(RVA = "0x3BC3B60", Offset = "0x3BC3B60", VA = "0x3BC3B60")]
		private static void QueueContinuation(Action continuation, bool flowContext)
		{
		}

		[Token(Token = "0x60022F5")]
		[Address(RVA = "0x3BC3EB0", Offset = "0x3BC3EB0", VA = "0x3BC3EB0")]
		private static void RunAction(object state)
		{
		}

		[Token(Token = "0x60022F6")]
		[Address(RVA = "0x3BC3F00", Offset = "0x3BC3F00", VA = "0x3BC3F00")]
		public void GetResult()
		{
		}
	}

	[Token(Token = "0x60022F0")]
	[Address(RVA = "0x3BC3AD0", Offset = "0x3BC3AD0", VA = "0x3BC3AD0")]
	public YieldAwaiter GetAwaiter()
	{
		return default(YieldAwaiter);
	}
}
