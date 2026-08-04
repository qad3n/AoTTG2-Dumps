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
[Token(Token = "0x200022A")]
[AsyncMethodBuilder(typeof(AsyncValueTaskMethodBuilder))]
public readonly struct ValueTask : IEquatable<ValueTask>
{
	[Token(Token = "0x200022B")]
	private sealed class ValueTaskSourceAsTask : Task<System.Threading.Tasks.VoidTaskResult>
	{
		[Token(Token = "0x4000A5A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly Action<object> s_completionAction;

		[Token(Token = "0x4000A5B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private IValueTaskSource _source;

		[Token(Token = "0x4000A5C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private readonly short _token;

		[Token(Token = "0x600139B")]
		[Address(RVA = "0x3D3F0A0", Offset = "0x3D3F0A0", VA = "0x3D3F0A0")]
		public ValueTaskSourceAsTask(IValueTaskSource source, short token)
		{
		}
	}

	[Token(Token = "0x4000A56")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Task s_canceledTask;

	[Token(Token = "0x4000A57")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly object _obj;

	[Token(Token = "0x4000A58")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal readonly short _token;

	[Token(Token = "0x4000A59")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA")]
	internal readonly bool _continueOnCapturedContext;

	[Token(Token = "0x170001D9")]
	internal static Task CompletedTask
	{
		[Token(Token = "0x600138C")]
		[Address(RVA = "0x3D3E840", Offset = "0x3D3E840", VA = "0x3D3E840")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DA")]
	public bool IsCompleted
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001395")]
		[Address(RVA = "0x3D3F1D0", Offset = "0x3D3F1D0", VA = "0x3D3F1D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DB")]
	public bool IsCompletedSuccessfully
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001396")]
		[Address(RVA = "0x3D3F2F0", Offset = "0x3D3F2F0", VA = "0x3D3F2F0")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600138D")]
	[Address(RVA = "0x3D3E8F0", Offset = "0x3D3E8F0", VA = "0x3D3E8F0")]
	public ValueTask(Task task)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600138E")]
	[Address(RVA = "0x3D3E930", Offset = "0x3D3E930", VA = "0x3D3E930")]
	public ValueTask(IValueTaskSource source, short token)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600138F")]
	[Address(RVA = "0x3D3E970", Offset = "0x3D3E970", VA = "0x3D3E970")]
	private ValueTask(object obj, short token, bool continueOnCapturedContext)
	{
	}

	[Token(Token = "0x6001390")]
	[Address(RVA = "0x3D3E9A0", Offset = "0x3D3E9A0", VA = "0x3D3E9A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001391")]
	[Address(RVA = "0x3D3E9C0", Offset = "0x3D3E9C0", VA = "0x3D3E9C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001392")]
	[Address(RVA = "0x3D3EA60", Offset = "0x3D3EA60", VA = "0x3D3EA60", Slot = "4")]
	public bool Equals(ValueTask other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001393")]
	[Address(RVA = "0x3D3EA80", Offset = "0x3D3EA80", VA = "0x3D3EA80")]
	public Task AsTask()
	{
		return null;
	}

	[Token(Token = "0x6001394")]
	[Address(RVA = "0x3D3EBE0", Offset = "0x3D3EBE0", VA = "0x3D3EBE0")]
	private Task GetTaskForValueTaskSource(IValueTaskSource t)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001397")]
	[Address(RVA = "0x3D3F410", Offset = "0x3D3F410", VA = "0x3D3F410")]
	[System.Diagnostics.StackTraceHidden]
	internal void ThrowIfCompletedUnsuccessfully()
	{
	}

	[Token(Token = "0x6001398")]
	[Address(RVA = "0x3D3F510", Offset = "0x3D3F510", VA = "0x3D3F510")]
	public ValueTaskAwaiter GetAwaiter()
	{
		return default(ValueTaskAwaiter);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001399")]
	[Address(RVA = "0x3D3F540", Offset = "0x3D3F540", VA = "0x3D3F540")]
	public ConfiguredValueTaskAwaitable ConfigureAwait(bool continueOnCapturedContext)
	{
		return default(ConfiguredValueTaskAwaitable);
	}
}
[StructLayout((LayoutKind)3)]
[Token(Token = "0x200022D")]
[AsyncMethodBuilder(typeof(AsyncValueTaskMethodBuilder<>))]
public readonly struct ValueTask<TResult> : IEquatable<ValueTask<TResult>>
{
	[Token(Token = "0x200022E")]
	private sealed class ValueTaskSourceAsTask : Task<TResult>
	{
		[Token(Token = "0x4000A63")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly Action<object> s_completionAction;

		[Token(Token = "0x4000A64")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IValueTaskSource<TResult> _source;

		[Token(Token = "0x4000A65")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly short _token;

		[Token(Token = "0x60013AF")]
		public ValueTaskSourceAsTask(IValueTaskSource<TResult> source, short token)
		{
		}
	}

	[Token(Token = "0x4000A5E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Task<TResult> s_canceledTask;

	[Token(Token = "0x4000A5F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly object _obj;

	[Token(Token = "0x4000A60")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly TResult _result;

	[Token(Token = "0x4000A61")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly short _token;

	[Token(Token = "0x4000A62")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly bool _continueOnCapturedContext;

	[Token(Token = "0x170001DC")]
	public bool IsCompleted
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60013A9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DD")]
	public bool IsCompletedSuccessfully
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60013AA")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DE")]
	public TResult Result
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60013AB")]
		get
		{
			return (TResult)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013A0")]
	public ValueTask(TResult result)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013A1")]
	public ValueTask(Task<TResult> task)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013A2")]
	public ValueTask(IValueTaskSource<TResult> source, short token)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013A3")]
	private ValueTask(object obj, TResult result, short token, bool continueOnCapturedContext)
	{
	}

	[Token(Token = "0x60013A4")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60013A5")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60013A6")]
	public bool Equals(ValueTask<TResult> other)
	{
		return default(bool);
	}

	[Token(Token = "0x60013A7")]
	public Task<TResult> AsTask()
	{
		return null;
	}

	[Token(Token = "0x60013A8")]
	private Task<TResult> GetTaskForValueTaskSource(IValueTaskSource<TResult> t)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013AC")]
	public ValueTaskAwaiter<TResult> GetAwaiter()
	{
		return default(ValueTaskAwaiter<TResult>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013AD")]
	public ConfiguredValueTaskAwaitable<TResult> ConfigureAwait(bool continueOnCapturedContext)
	{
		return default(ConfiguredValueTaskAwaitable<TResult>);
	}

	[Token(Token = "0x60013AE")]
	public override string ToString()
	{
		return null;
	}
}
