// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable
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

[Token(Token = "0x2000103")]
public struct SwitchToThreadPoolAwaitable
{
	[Token(Token = "0x2000104")]
	public struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000401")]
		[FieldOffset(Offset = "0x0")]
		private static readonly WaitCallback switchToCallback;

		[Token(Token = "0x17000044")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000678")]
			[Address(RVA = "0x62D6D60", Offset = "0x62D5D60", VA = "0x62D6D60")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000679")]
		[Address(RVA = "0x62D6D70", Offset = "0x62D5D70", VA = "0x62D6D70")]
		public void GetResult()
		{
		}

		[Token(Token = "0x600067A")]
		[Address(RVA = "0x62D9080", Offset = "0x62D8080", VA = "0x62D9080", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600067B")]
		[Address(RVA = "0x62D90E0", Offset = "0x62D80E0", VA = "0x62D90E0", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600067C")]
		[Address(RVA = "0x62D9140", Offset = "0x62D8140", VA = "0x62D9140")]
		private static void Callback(object state)
		{
		}
	}

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x62D6D50", Offset = "0x62D5D50", VA = "0x62D6D50")]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}
}
