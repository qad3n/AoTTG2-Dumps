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
			[Address(RVA = "0x62D9230", Offset = "0x62D8230", VA = "0x62D9230")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000680")]
		[Address(RVA = "0x62D9240", Offset = "0x62D8240", VA = "0x62D9240")]
		public void GetResult()
		{
		}

		[Token(Token = "0x6000681")]
		[Address(RVA = "0x62D9250", Offset = "0x62D8250", VA = "0x62D9250", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000682")]
		[Address(RVA = "0x62D9450", Offset = "0x62D8450", VA = "0x62D9450", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000683")]
		[Address(RVA = "0x62D9650", Offset = "0x62D8650", VA = "0x62D9650")]
		private static void Callback(object state)
		{
		}
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x62D9220", Offset = "0x62D8220", VA = "0x62D9220")]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}
}
