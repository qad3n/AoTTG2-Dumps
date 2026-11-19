// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.ValueTask
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks.Sources;
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[StructLayout((LayoutKind)3)]
[Token(Token = "0x2000233")]
[AsyncMethodBuilder(typeof(AsyncValueTaskMethodBuilder))]
public readonly struct ValueTask : IEquatable<ValueTask>
{
	[Token(Token = "0x2000234")]
	private sealed class ValueTaskSourceAsTask : Task<System.Threading.Tasks.VoidTaskResult>
	{
		[Token(Token = "0x4000A15")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly Action<object> s_completionAction;

		[Token(Token = "0x4000A16")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private IValueTaskSource _source;

		[Token(Token = "0x4000A17")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private readonly short _token;

		[Token(Token = "0x60013E3")]
		[Address(RVA = "0x55418A0", Offset = "0x55408A0", VA = "0x55418A0")]
		public ValueTaskSourceAsTask(IValueTaskSource source, short token)
		{
		}
	}

	[Token(Token = "0x4000A11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Task s_canceledTask;

	[Token(Token = "0x4000A12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly object _obj;

	[Token(Token = "0x4000A13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal readonly short _token;

	[Token(Token = "0x4000A14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA")]
	internal readonly bool _continueOnCapturedContext;

	[Token(Token = "0x170001DC")]
	internal static Task CompletedTask
	{
		[Token(Token = "0x60013D4")]
		[Address(RVA = "0x55410E0", Offset = "0x55400E0", VA = "0x55410E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DD")]
	public bool IsCompleted
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60013DD")]
		[Address(RVA = "0x55419D0", Offset = "0x55409D0", VA = "0x55419D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DE")]
	public bool IsCompletedSuccessfully
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60013DE")]
		[Address(RVA = "0x5541AF0", Offset = "0x5540AF0", VA = "0x5541AF0")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013D5")]
	[Address(RVA = "0x5541190", Offset = "0x5540190", VA = "0x5541190")]
	public ValueTask(Task task)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013D6")]
	[Address(RVA = "0x55411D0", Offset = "0x55401D0", VA = "0x55411D0")]
	public ValueTask(IValueTaskSource source, short token)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013D7")]
	[Address(RVA = "0x5541210", Offset = "0x5540210", VA = "0x5541210")]
	private ValueTask(object obj, short token, bool continueOnCapturedContext)
	{
	}

	[Token(Token = "0x60013D8")]
	[Address(RVA = "0x5541240", Offset = "0x5540240", VA = "0x5541240", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60013D9")]
	[Address(RVA = "0x5541260", Offset = "0x5540260", VA = "0x5541260", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60013DA")]
	[Address(RVA = "0x5541300", Offset = "0x5540300", VA = "0x5541300", Slot = "4")]
	public bool Equals(ValueTask other)
	{
		return default(bool);
	}

	[Token(Token = "0x60013DB")]
	[Address(RVA = "0x5541320", Offset = "0x5540320", VA = "0x5541320")]
	public Task AsTask()
	{
		return null;
	}

	[Token(Token = "0x60013DC")]
	[Address(RVA = "0x5541480", Offset = "0x5540480", VA = "0x5541480")]
	private Task GetTaskForValueTaskSource(IValueTaskSource t)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013DF")]
	[Address(RVA = "0x5541C10", Offset = "0x5540C10", VA = "0x5541C10")]
	[System.Diagnostics.StackTraceHidden]
	internal void ThrowIfCompletedUnsuccessfully()
	{
	}

	[Token(Token = "0x60013E0")]
	[Address(RVA = "0x5541D10", Offset = "0x5540D10", VA = "0x5541D10")]
	public ValueTaskAwaiter GetAwaiter()
	{
		return default(ValueTaskAwaiter);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013E1")]
	[Address(RVA = "0x5541D40", Offset = "0x5540D40", VA = "0x5541D40")]
	public ConfiguredValueTaskAwaitable ConfigureAwait(bool continueOnCapturedContext)
	{
		return default(ConfiguredValueTaskAwaitable);
	}
}
[StructLayout((LayoutKind)3)]
[Token(Token = "0x2000236")]
[AsyncMethodBuilder(typeof(AsyncValueTaskMethodBuilder<>))]
public readonly struct ValueTask<TResult> : IEquatable<ValueTask<TResult>>
{
	[Token(Token = "0x2000237")]
	private sealed class ValueTaskSourceAsTask : Task<TResult>
	{
		[Token(Token = "0x4000A1E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly Action<object> s_completionAction;

		[Token(Token = "0x4000A1F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IValueTaskSource<TResult> _source;

		[Token(Token = "0x4000A20")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly short _token;

		[Token(Token = "0x60013F7")]
		public ValueTaskSourceAsTask(IValueTaskSource<TResult> source, short token)
		{
		}
	}

	[Token(Token = "0x4000A19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Task<TResult> s_canceledTask;

	[Token(Token = "0x4000A1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly object _obj;

	[Token(Token = "0x4000A1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly TResult _result;

	[Token(Token = "0x4000A1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly short _token;

	[Token(Token = "0x4000A1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly bool _continueOnCapturedContext;

	[Token(Token = "0x170001DF")]
	public bool IsCompleted
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60013F1")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E0")]
	public bool IsCompletedSuccessfully
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60013F2")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E1")]
	public TResult Result
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60013F3")]
		get
		{
			return (TResult)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013E8")]
	public ValueTask(TResult result)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013E9")]
	public ValueTask(Task<TResult> task)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013EA")]
	public ValueTask(IValueTaskSource<TResult> source, short token)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013EB")]
	private ValueTask(object obj, TResult result, short token, bool continueOnCapturedContext)
	{
	}

	[Token(Token = "0x60013EC")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60013ED")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60013EE")]
	public bool Equals(ValueTask<TResult> other)
	{
		return default(bool);
	}

	[Token(Token = "0x60013EF")]
	public Task<TResult> AsTask()
	{
		return null;
	}

	[Token(Token = "0x60013F0")]
	private Task<TResult> GetTaskForValueTaskSource(IValueTaskSource<TResult> t)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013F4")]
	public ValueTaskAwaiter<TResult> GetAwaiter()
	{
		return default(ValueTaskAwaiter<TResult>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013F5")]
	public ConfiguredValueTaskAwaitable<TResult> ConfigureAwait(bool continueOnCapturedContext)
	{
		return default(ConfiguredValueTaskAwaitable<TResult>);
	}

	[Token(Token = "0x60013F6")]
	public override string ToString()
	{
		return null;
	}
}
