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

[Token(Token = "0x20004CA")]
public readonly struct YieldAwaitable
{
	[Token(Token = "0x20004CB")]
	public readonly struct YieldAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x400132F")]
		[FieldOffset(Offset = "0x0")]
		private static readonly WaitCallback s_waitCallbackRunAction;

		[Token(Token = "0x4001330")]
		[FieldOffset(Offset = "0x8")]
		private static readonly SendOrPostCallback s_sendOrPostCallbackRunAction;

		[Token(Token = "0x17000483")]
		public bool IsCompleted
		{
			[Token(Token = "0x6002371")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6002372")]
		[Address(RVA = "0x1A58C80", Offset = "0x1A57280", VA = "0x181A58C80", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6002373")]
		[Address(RVA = "0x1A59000", Offset = "0x1A57600", VA = "0x181A59000", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6002374")]
		[Address(RVA = "0x1A58CD0", Offset = "0x1A572D0", VA = "0x181A58CD0")]
		private static void QueueContinuation(Action continuation, bool flowContext)
		{
		}

		[Token(Token = "0x6002375")]
		[Address(RVA = "0x1A58F90", Offset = "0x1A57590", VA = "0x181A58F90")]
		private static void RunAction(object state)
		{
		}

		[Token(Token = "0x6002376")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		public void GetResult()
		{
		}
	}

	[Token(Token = "0x6002370")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	public YieldAwaiter GetAwaiter()
	{
		return default(YieldAwaiter);
	}
}
