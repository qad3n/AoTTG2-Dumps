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

[Token(Token = "0x2000495")]
public readonly struct ConfiguredTaskAwaitable
{
	[Token(Token = "0x2000496")]
	public readonly struct ConfiguredTaskAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4001272")]
		[FieldOffset(Offset = "0x0")]
		internal readonly Task m_task;

		[Token(Token = "0x4001273")]
		[FieldOffset(Offset = "0x8")]
		internal readonly bool m_continueOnCapturedContext;

		[Token(Token = "0x1700047D")]
		public bool IsCompleted
		{
			[Token(Token = "0x6002300")]
			[Address(RVA = "0x53C9BF0", Offset = "0x53C8BF0", VA = "0x53C9BF0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60022FF")]
		[Address(RVA = "0x53C9BC0", Offset = "0x53C8BC0", VA = "0x53C9BC0")]
		internal ConfiguredTaskAwaiter(Task task, bool continueOnCapturedContext)
		{
		}

		[Token(Token = "0x6002301")]
		[Address(RVA = "0x53C8460", Offset = "0x53C7460", VA = "0x53C8460", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6002302")]
		[Address(RVA = "0x53C8620", Offset = "0x53C7620", VA = "0x53C8620", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6002303")]
		[Address(RVA = "0x53C9C10", Offset = "0x53C8C10", VA = "0x53C9C10")]
		[System.Diagnostics.StackTraceHidden]
		public void GetResult()
		{
		}
	}

	[Token(Token = "0x4001271")]
	[FieldOffset(Offset = "0x0")]
	private readonly ConfiguredTaskAwaiter m_configuredTaskAwaiter;

	[Token(Token = "0x60022FD")]
	[Address(RVA = "0x53C9B50", Offset = "0x53C8B50", VA = "0x53C9B50")]
	internal ConfiguredTaskAwaitable(Task task, bool continueOnCapturedContext)
	{
	}

	[Token(Token = "0x60022FE")]
	[Address(RVA = "0x53C9BE0", Offset = "0x53C8BE0", VA = "0x53C9BE0")]
	public ConfiguredTaskAwaiter GetAwaiter()
	{
		return default(ConfiguredTaskAwaiter);
	}
}
[Token(Token = "0x2000497")]
public readonly struct ConfiguredTaskAwaitable<TResult>
{
	[Token(Token = "0x2000498")]
	public readonly struct ConfiguredTaskAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4001275")]
		[FieldOffset(Offset = "0x0")]
		private readonly Task<TResult> m_task;

		[Token(Token = "0x4001276")]
		[FieldOffset(Offset = "0x0")]
		private readonly bool m_continueOnCapturedContext;

		[Token(Token = "0x1700047E")]
		public bool IsCompleted
		{
			[Token(Token = "0x6002307")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6002306")]
		internal ConfiguredTaskAwaiter(Task<TResult> task, bool continueOnCapturedContext)
		{
		}

		[Token(Token = "0x6002308")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6002309")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x600230A")]
		[System.Diagnostics.StackTraceHidden]
		public TResult GetResult()
		{
			return (TResult)null;
		}
	}

	[Token(Token = "0x4001274")]
	[FieldOffset(Offset = "0x0")]
	private readonly ConfiguredTaskAwaiter m_configuredTaskAwaiter;

	[Token(Token = "0x6002304")]
	internal ConfiguredTaskAwaitable(Task<TResult> task, bool continueOnCapturedContext)
	{
	}

	[Token(Token = "0x6002305")]
	public ConfiguredTaskAwaiter GetAwaiter()
	{
		return default(ConfiguredTaskAwaiter);
	}
}
