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

[Token(Token = "0x200048D")]
public readonly struct ConfiguredTaskAwaitable
{
	[Token(Token = "0x200048E")]
	public readonly struct ConfiguredTaskAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4001310")]
		[FieldOffset(Offset = "0x0")]
		internal readonly Task m_task;

		[Token(Token = "0x4001311")]
		[FieldOffset(Offset = "0x8")]
		internal readonly bool m_continueOnCapturedContext;

		[Token(Token = "0x1700047B")]
		public bool IsCompleted
		{
			[Token(Token = "0x60022B3")]
			[Address(RVA = "0x3BC22A0", Offset = "0x3BC22A0", VA = "0x3BC22A0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60022B2")]
		[Address(RVA = "0x3BC2270", Offset = "0x3BC2270", VA = "0x3BC2270")]
		internal ConfiguredTaskAwaiter(Task task, bool continueOnCapturedContext)
		{
		}

		[Token(Token = "0x60022B4")]
		[Address(RVA = "0x3BC0B40", Offset = "0x3BC0B40", VA = "0x3BC0B40", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60022B5")]
		[Address(RVA = "0x3BC0D00", Offset = "0x3BC0D00", VA = "0x3BC0D00", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60022B6")]
		[Address(RVA = "0x3BC22C0", Offset = "0x3BC22C0", VA = "0x3BC22C0")]
		[System.Diagnostics.StackTraceHidden]
		public void GetResult()
		{
		}
	}

	[Token(Token = "0x400130F")]
	[FieldOffset(Offset = "0x0")]
	private readonly ConfiguredTaskAwaiter m_configuredTaskAwaiter;

	[Token(Token = "0x60022B0")]
	[Address(RVA = "0x3BC2210", Offset = "0x3BC2210", VA = "0x3BC2210")]
	internal ConfiguredTaskAwaitable(Task task, bool continueOnCapturedContext)
	{
	}

	[Token(Token = "0x60022B1")]
	[Address(RVA = "0x3BC2290", Offset = "0x3BC2290", VA = "0x3BC2290")]
	public ConfiguredTaskAwaiter GetAwaiter()
	{
		return default(ConfiguredTaskAwaiter);
	}
}
[Token(Token = "0x200048F")]
public readonly struct ConfiguredTaskAwaitable<TResult>
{
	[Token(Token = "0x2000490")]
	public readonly struct ConfiguredTaskAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x4001313")]
		[FieldOffset(Offset = "0x0")]
		private readonly Task<TResult> m_task;

		[Token(Token = "0x4001314")]
		[FieldOffset(Offset = "0x0")]
		private readonly bool m_continueOnCapturedContext;

		[Token(Token = "0x1700047C")]
		public bool IsCompleted
		{
			[Token(Token = "0x60022BA")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60022B9")]
		internal ConfiguredTaskAwaiter(Task<TResult> task, bool continueOnCapturedContext)
		{
		}

		[Token(Token = "0x60022BB")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60022BC")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60022BD")]
		[System.Diagnostics.StackTraceHidden]
		public TResult GetResult()
		{
			return (TResult)null;
		}
	}

	[Token(Token = "0x4001312")]
	[FieldOffset(Offset = "0x0")]
	private readonly ConfiguredTaskAwaiter m_configuredTaskAwaiter;

	[Token(Token = "0x60022B7")]
	internal ConfiguredTaskAwaitable(Task<TResult> task, bool continueOnCapturedContext)
	{
	}

	[Token(Token = "0x60022B8")]
	public ConfiguredTaskAwaiter GetAwaiter()
	{
		return default(ConfiguredTaskAwaiter);
	}
}
