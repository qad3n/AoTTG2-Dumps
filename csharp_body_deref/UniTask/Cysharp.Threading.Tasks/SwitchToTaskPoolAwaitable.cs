// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.SwitchToTaskPoolAwaitable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000105")]
public struct SwitchToTaskPoolAwaitable
{
	[Token(Token = "0x2000106")]
	public struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000402")]
		[FieldOffset(Offset = "0x0")]
		private static readonly Action<object> switchToCallback;

		[Token(Token = "0x17000045")]
		public bool IsCompleted
		{
			[Token(Token = "0x600067F")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000680")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		public void GetResult()
		{
		}

		[Token(Token = "0x6000681")]
		[Address(RVA = "0x29088D0", Offset = "0x2906ED0", VA = "0x1829088D0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000682")]
		[Address(RVA = "0x2908D80", Offset = "0x2907380", VA = "0x182908D80", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000683")]
		[Address(RVA = "0x2908370", Offset = "0x2906970", VA = "0x182908370")]
		private static void Callback(object state)
		{
		}
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}
}
