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

[Token(Token = "0x20004A3")]
public readonly struct YieldAwaitable
{
	[Token(Token = "0x20004A4")]
	public readonly struct YieldAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x400128F")]
		[FieldOffset(Offset = "0x0")]
		private static readonly WaitCallback s_waitCallbackRunAction;

		[Token(Token = "0x4001290")]
		[FieldOffset(Offset = "0x8")]
		private static readonly SendOrPostCallback s_sendOrPostCallbackRunAction;

		[Token(Token = "0x17000482")]
		public bool IsCompleted
		{
			[Token(Token = "0x600233E")]
			[Address(RVA = "0x53CB490", Offset = "0x53CA490", VA = "0x53CB490")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600233F")]
		[Address(RVA = "0x53CB4A0", Offset = "0x53CA4A0", VA = "0x53CB4A0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6002340")]
		[Address(RVA = "0x53CB810", Offset = "0x53CA810", VA = "0x53CB810", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6002341")]
		[Address(RVA = "0x53CB510", Offset = "0x53CA510", VA = "0x53CB510")]
		private static void QueueContinuation(Action continuation, bool flowContext)
		{
		}

		[Token(Token = "0x6002342")]
		[Address(RVA = "0x53CB880", Offset = "0x53CA880", VA = "0x53CB880")]
		private static void RunAction(object state)
		{
		}

		[Token(Token = "0x6002343")]
		[Address(RVA = "0x53CB8D0", Offset = "0x53CA8D0", VA = "0x53CB8D0")]
		public void GetResult()
		{
		}
	}

	[Token(Token = "0x600233D")]
	[Address(RVA = "0x53CB480", Offset = "0x53CA480", VA = "0x53CB480")]
	public YieldAwaiter GetAwaiter()
	{
		return default(YieldAwaiter);
	}
}
