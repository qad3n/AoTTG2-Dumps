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

[Token(Token = "0x200010A")]
public struct SwitchToThreadPoolAwaitable
{
	[Token(Token = "0x200010B")]
	public struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000410")]
		[FieldOffset(Offset = "0x0")]
		private static readonly WaitCallback switchToCallback;

		[Token(Token = "0x17000046")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000698")]
			[Address(RVA = "0x49E7D70", Offset = "0x49E7D70", VA = "0x49E7D70")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000699")]
		[Address(RVA = "0x49E7D80", Offset = "0x49E7D80", VA = "0x49E7D80")]
		public void GetResult()
		{
		}

		[Token(Token = "0x600069A")]
		[Address(RVA = "0x49EA030", Offset = "0x49EA030", VA = "0x49EA030", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600069B")]
		[Address(RVA = "0x49EA090", Offset = "0x49EA090", VA = "0x49EA090", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600069C")]
		[Address(RVA = "0x49EA0F0", Offset = "0x49EA0F0", VA = "0x49EA0F0")]
		private static void Callback(object state)
		{
		}
	}

	[Token(Token = "0x6000697")]
	[Address(RVA = "0x49E7D60", Offset = "0x49E7D60", VA = "0x49E7D60")]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}
}
