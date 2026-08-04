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

[Token(Token = "0x2000103")]
public readonly struct YieldAwaitable
{
	[Token(Token = "0x2000104")]
	public readonly struct Awaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4000401")]
		[FieldOffset(Offset = "0x0")]
		private readonly PlayerLoopTiming timing;

		[Token(Token = "0x17000043")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000683")]
			[Address(RVA = "0x49E7DA0", Offset = "0x49E7DA0", VA = "0x49E7DA0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000682")]
		[Address(RVA = "0x49E9950", Offset = "0x49E9950", VA = "0x49E9950")]
		public Awaiter(PlayerLoopTiming timing)
		{
		}

		[Token(Token = "0x6000684")]
		[Address(RVA = "0x49E7DB0", Offset = "0x49E7DB0", VA = "0x49E7DB0")]
		public void GetResult()
		{
		}

		[Token(Token = "0x6000685")]
		[Address(RVA = "0x49E9960", Offset = "0x49E9960", VA = "0x49E9960", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000686")]
		[Address(RVA = "0x49E99B0", Offset = "0x49E99B0", VA = "0x49E99B0", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x4000400")]
	[FieldOffset(Offset = "0x0")]
	private readonly PlayerLoopTiming timing;

	[Token(Token = "0x600067F")]
	[Address(RVA = "0x49E9840", Offset = "0x49E9840", VA = "0x49E9840")]
	public YieldAwaitable(PlayerLoopTiming timing)
	{
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x49E7D90", Offset = "0x49E7D90", VA = "0x49E7D90")]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x49E9850", Offset = "0x49E9850", VA = "0x49E9850")]
	public UniTask ToUniTask()
	{
		return default(UniTask);
	}
}
