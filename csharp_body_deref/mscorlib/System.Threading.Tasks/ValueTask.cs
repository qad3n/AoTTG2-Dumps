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
[Token(Token = "0x200025B")]
[AsyncMethodBuilder(typeof(AsyncValueTaskMethodBuilder))]
public readonly struct ValueTask : IEquatable<ValueTask>
{
	[Token(Token = "0x200025C")]
	private sealed class ValueTaskSourceAsTask : Task<System.Threading.Tasks.VoidTaskResult>
	{
		[Token(Token = "0x4000AB7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly Action<object> s_completionAction;

		[Token(Token = "0x4000AB8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private IValueTaskSource _source;

		[Token(Token = "0x4000AB9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private readonly short _token;

		[Token(Token = "0x600140C")]
		[Address(RVA = "0x1BC4AA0", Offset = "0x1BC30A0", VA = "0x181BC4AA0")]
		public ValueTaskSourceAsTask(IValueTaskSource source, short token)
		{
		}
	}

	[Token(Token = "0x4000AB3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Task s_canceledTask;

	[Token(Token = "0x4000AB4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly object _obj;

	[Token(Token = "0x4000AB5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal readonly short _token;

	[Token(Token = "0x4000AB6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA")]
	internal readonly bool _continueOnCapturedContext;

	[Token(Token = "0x170001DD")]
	internal static Task CompletedTask
	{
		[Token(Token = "0x60013FD")]
		[Address(RVA = "0x1BC5370", Offset = "0x1BC3970", VA = "0x181BC5370")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DE")]
	public bool IsCompleted
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001406")]
		[Address(RVA = "0x1BC54B0", Offset = "0x1BC3AB0", VA = "0x181BC54B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DF")]
	public bool IsCompletedSuccessfully
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001407")]
		[Address(RVA = "0x1BC5400", Offset = "0x1BC3A00", VA = "0x181BC5400")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013FE")]
	[Address(RVA = "0x1BC5320", Offset = "0x1BC3920", VA = "0x181BC5320")]
	public ValueTask(Task task)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013FF")]
	[Address(RVA = "0x1BC5290", Offset = "0x1BC3890", VA = "0x181BC5290")]
	public ValueTask(IValueTaskSource source, short token)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001400")]
	[Address(RVA = "0x1BC52E0", Offset = "0x1BC38E0", VA = "0x181BC52E0")]
	private ValueTask(object obj, short token, bool continueOnCapturedContext)
	{
	}

	[Token(Token = "0x6001401")]
	[Address(RVA = "0x1BC4E00", Offset = "0x1BC3400", VA = "0x181BC4E00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001402")]
	[Address(RVA = "0x1BC4D30", Offset = "0x1BC3330", VA = "0x181BC4D30", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001403")]
	[Address(RVA = "0x1BC4DE0", Offset = "0x1BC33E0", VA = "0x181BC4DE0", Slot = "4")]
	public bool Equals(ValueTask other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001404")]
	[Address(RVA = "0x1BC4BF0", Offset = "0x1BC31F0", VA = "0x181BC4BF0")]
	public Task AsTask()
	{
		return null;
	}

	[Token(Token = "0x6001405")]
	[Address(RVA = "0x1BC4E20", Offset = "0x1BC3420", VA = "0x181BC4E20")]
	private Task GetTaskForValueTaskSource(IValueTaskSource t)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001408")]
	[Address(RVA = "0x1BC5120", Offset = "0x1BC3720", VA = "0x181BC5120")]
	[System.Diagnostics.StackTraceHidden]
	internal void ThrowIfCompletedUnsuccessfully()
	{
	}

	[Token(Token = "0x6001409")]
	[Address(RVA = "0x1A29460", Offset = "0x1A27A60", VA = "0x181A29460")]
	public ValueTaskAwaiter GetAwaiter()
	{
		return default(ValueTaskAwaiter);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600140A")]
	[Address(RVA = "0x1BC4CC0", Offset = "0x1BC32C0", VA = "0x181BC4CC0")]
	public ConfiguredValueTaskAwaitable ConfigureAwait(bool continueOnCapturedContext)
	{
		return default(ConfiguredValueTaskAwaitable);
	}
}
[StructLayout((LayoutKind)3)]
[Token(Token = "0x200025E")]
[AsyncMethodBuilder(typeof(AsyncValueTaskMethodBuilder<>))]
public readonly struct ValueTask<TResult> : IEquatable<ValueTask<TResult>>
{
	[Token(Token = "0x200025F")]
	private sealed class ValueTaskSourceAsTask : Task<TResult>
	{
		[Token(Token = "0x4000AC0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly Action<object> s_completionAction;

		[Token(Token = "0x4000AC1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IValueTaskSource<TResult> _source;

		[Token(Token = "0x4000AC2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly short _token;

		[Token(Token = "0x6001420")]
		public ValueTaskSourceAsTask(IValueTaskSource<TResult> source, short token)
		{
		}
	}

	[Token(Token = "0x4000ABB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Task<TResult> s_canceledTask;

	[Token(Token = "0x4000ABC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly object _obj;

	[Token(Token = "0x4000ABD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly TResult _result;

	[Token(Token = "0x4000ABE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly short _token;

	[Token(Token = "0x4000ABF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly bool _continueOnCapturedContext;

	[Token(Token = "0x170001E0")]
	public bool IsCompleted
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600141A")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E1")]
	public bool IsCompletedSuccessfully
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600141B")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E2")]
	public TResult Result
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600141C")]
		get
		{
			return (TResult)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001411")]
	public ValueTask(TResult result)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001412")]
	public ValueTask(Task<TResult> task)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001413")]
	public ValueTask(IValueTaskSource<TResult> source, short token)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001414")]
	private ValueTask(object obj, TResult result, short token, bool continueOnCapturedContext)
	{
	}

	[Token(Token = "0x6001415")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001416")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001417")]
	public bool Equals(ValueTask<TResult> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001418")]
	public Task<TResult> AsTask()
	{
		return null;
	}

	[Token(Token = "0x6001419")]
	private Task<TResult> GetTaskForValueTaskSource(IValueTaskSource<TResult> t)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600141D")]
	public ValueTaskAwaiter<TResult> GetAwaiter()
	{
		return default(ValueTaskAwaiter<TResult>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600141E")]
	public ConfiguredValueTaskAwaitable<TResult> ConfigureAwait(bool continueOnCapturedContext)
	{
		return default(ConfiguredValueTaskAwaitable<TResult>);
	}

	[Token(Token = "0x600141F")]
	public override string ToString()
	{
		return null;
	}
}
