// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.YieldAwaitable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x20000FC")]
public readonly struct YieldAwaitable
{
	[Token(Token = "0x20000FD")]
	public readonly struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x40003F2")]
		[FieldOffset(Offset = "0x0")]
		private readonly PlayerLoopTiming timing;

		[Token(Token = "0x17000041")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000663")]
			[Address(RVA = "0x62D6D90", Offset = "0x62D5D90", VA = "0x62D6D90")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000662")]
		[Address(RVA = "0x62D89C0", Offset = "0x62D79C0", VA = "0x62D89C0")]
		public Awaiter(PlayerLoopTiming timing)
		{
		}

		[Token(Token = "0x6000664")]
		[Address(RVA = "0x62D6DA0", Offset = "0x62D5DA0", VA = "0x62D6DA0")]
		public void GetResult()
		{
		}

		[Token(Token = "0x6000665")]
		[Address(RVA = "0x62D89D0", Offset = "0x62D79D0", VA = "0x62D89D0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000666")]
		[Address(RVA = "0x62D8A20", Offset = "0x62D7A20", VA = "0x62D8A20", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x40003F1")]
	[FieldOffset(Offset = "0x0")]
	private readonly PlayerLoopTiming timing;

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x62D88B0", Offset = "0x62D78B0", VA = "0x62D88B0")]
	public YieldAwaitable(PlayerLoopTiming timing)
	{
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x62D6D80", Offset = "0x62D5D80", VA = "0x62D6D80")]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x62D88C0", Offset = "0x62D78C0", VA = "0x62D88C0")]
	public UniTask ToUniTask()
	{
		return default(UniTask);
	}
}
