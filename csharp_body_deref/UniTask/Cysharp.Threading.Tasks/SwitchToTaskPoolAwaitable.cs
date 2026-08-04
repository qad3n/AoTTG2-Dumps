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

[Token(Token = "0x200010C")]
public struct SwitchToTaskPoolAwaitable
{
	[Token(Token = "0x200010D")]
	public struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000411")]
		[FieldOffset(Offset = "0x0")]
		private static readonly Action<object> switchToCallback;

		[Token(Token = "0x17000047")]
		public bool IsCompleted
		{
			[Token(Token = "0x600069F")]
			[Address(RVA = "0x49EA1E0", Offset = "0x49EA1E0", VA = "0x49EA1E0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60006A0")]
		[Address(RVA = "0x49EA1F0", Offset = "0x49EA1F0", VA = "0x49EA1F0")]
		public void GetResult()
		{
		}

		[Token(Token = "0x60006A1")]
		[Address(RVA = "0x49EA200", Offset = "0x49EA200", VA = "0x49EA200", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60006A2")]
		[Address(RVA = "0x49EA400", Offset = "0x49EA400", VA = "0x49EA400", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60006A3")]
		[Address(RVA = "0x49EA600", Offset = "0x49EA600", VA = "0x49EA600")]
		private static void Callback(object state)
		{
		}
	}

	[Token(Token = "0x600069E")]
	[Address(RVA = "0x49EA1D0", Offset = "0x49EA1D0", VA = "0x49EA1D0")]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}
}
