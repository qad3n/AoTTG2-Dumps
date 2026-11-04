// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x20004BC")]
public readonly struct ConfiguredTaskAwaitable
{
	[Token(Token = "0x20004BD")]
	public readonly struct ConfiguredTaskAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4001312")]
		[FieldOffset(Offset = "0x0")]
		internal readonly Task m_task;

		[Token(Token = "0x4001313")]
		[FieldOffset(Offset = "0x8")]
		internal readonly bool m_continueOnCapturedContext;

		[Token(Token = "0x1700047E")]
		public bool IsCompleted
		{
			[Token(Token = "0x6002333")]
			[Address(RVA = "0xD25160", Offset = "0xD23760", VA = "0x180D25160")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6002332")]
		[Address(RVA = "0x1028BD0", Offset = "0x10271D0", VA = "0x181028BD0")]
		internal ConfiguredTaskAwaiter(Task task, bool continueOnCapturedContext)
		{
		}

		[Token(Token = "0x6002334")]
		[Address(RVA = "0x1A292E0", Offset = "0x1A278E0", VA = "0x181A292E0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6002335")]
		[Address(RVA = "0x1A293A0", Offset = "0x1A279A0", VA = "0x181A293A0", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6002336")]
		[Address(RVA = "0x1A29290", Offset = "0x1A27890", VA = "0x181A29290")]
		[System.Diagnostics.StackTraceHidden]
		public void GetResult()
		{
		}
	}

	[Token(Token = "0x4001311")]
	[FieldOffset(Offset = "0x0")]
	private readonly ConfiguredTaskAwaiter m_configuredTaskAwaiter;

	[Token(Token = "0x6002330")]
	[Address(RVA = "0x1A29240", Offset = "0x1A27840", VA = "0x181A29240")]
	internal ConfiguredTaskAwaitable(Task task, bool continueOnCapturedContext)
	{
	}

	[Token(Token = "0x6002331")]
	[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
	public ConfiguredTaskAwaiter GetAwaiter()
	{
		return default(ConfiguredTaskAwaiter);
	}
}
[Token(Token = "0x20004BE")]
public readonly struct ConfiguredTaskAwaitable<TResult>
{
	[Token(Token = "0x20004BF")]
	public readonly struct ConfiguredTaskAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4001315")]
		[FieldOffset(Offset = "0x0")]
		private readonly Task<TResult> m_task;

		[Token(Token = "0x4001316")]
		[FieldOffset(Offset = "0x0")]
		private readonly bool m_continueOnCapturedContext;

		[Token(Token = "0x1700047F")]
		public bool IsCompleted
		{
			[Token(Token = "0x600233A")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6002339")]
		internal ConfiguredTaskAwaiter(Task<TResult> task, bool continueOnCapturedContext)
		{
		}

		[Token(Token = "0x600233B")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600233C")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600233D")]
		[System.Diagnostics.StackTraceHidden]
		public TResult GetResult()
		{
			return (TResult)null;
		}
	}

	[Token(Token = "0x4001314")]
	[FieldOffset(Offset = "0x0")]
	private readonly ConfiguredTaskAwaiter m_configuredTaskAwaiter;

	[Token(Token = "0x6002337")]
	internal ConfiguredTaskAwaitable(Task<TResult> task, bool continueOnCapturedContext)
	{
	}

	[Token(Token = "0x6002338")]
	public ConfiguredTaskAwaiter GetAwaiter()
	{
		return default(ConfiguredTaskAwaiter);
	}
}
