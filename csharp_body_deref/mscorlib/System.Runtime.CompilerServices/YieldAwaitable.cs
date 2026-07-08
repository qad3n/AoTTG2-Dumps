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
			[Address(RVA = "0x4EDDFC0", Offset = "0x4EDDFC0", VA = "0x4EDDFC0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60022F2")]
		[Address(RVA = "0x4EDDFD0", Offset = "0x4EDDFD0", VA = "0x4EDDFD0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60022F3")]
		[Address(RVA = "0x4EDE320", Offset = "0x4EDE320", VA = "0x4EDE320", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60022F4")]
		[Address(RVA = "0x4EDE040", Offset = "0x4EDE040", VA = "0x4EDE040")]
		private static void QueueContinuation(Action continuation, bool flowContext)
		{
		}

		[Token(Token = "0x60022F5")]
		[Address(RVA = "0x4EDE390", Offset = "0x4EDE390", VA = "0x4EDE390")]
		private static void RunAction(object state)
		{
		}

		[Token(Token = "0x60022F6")]
		[Address(RVA = "0x4EDE3E0", Offset = "0x4EDE3E0", VA = "0x4EDE3E0")]
		public void GetResult()
		{
		}
	}

	[Token(Token = "0x60022F0")]
	[Address(RVA = "0x4EDDFB0", Offset = "0x4EDDFB0", VA = "0x4EDDFB0")]
	public YieldAwaiter GetAwaiter()
	{
		return default(YieldAwaiter);
	}
}
