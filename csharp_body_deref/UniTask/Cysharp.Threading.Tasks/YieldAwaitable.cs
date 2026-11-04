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
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000662")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		public Awaiter(PlayerLoopTiming timing)
		{
		}

		[Token(Token = "0x6000664")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		public void GetResult()
		{
		}

		[Token(Token = "0x6000665")]
		[Address(RVA = "0x2908720", Offset = "0x2906D20", VA = "0x182908720", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000666")]
		[Address(RVA = "0x2908D20", Offset = "0x2907320", VA = "0x182908D20", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x40003F1")]
	[FieldOffset(Offset = "0x0")]
	private readonly PlayerLoopTiming timing;

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
	public YieldAwaitable(PlayerLoopTiming timing)
	{
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x2924690", Offset = "0x2922C90", VA = "0x182924690")]
	public UniTask ToUniTask()
	{
		return default(UniTask);
	}
}
