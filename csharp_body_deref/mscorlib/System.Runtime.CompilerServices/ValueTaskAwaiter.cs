// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.ValueTaskAwaiter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x200048F")]
public readonly struct ValueTaskAwaiter : ICriticalNotifyCompletion, INotifyCompletion
{
	[Token(Token = "0x4001269")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Action<object> s_invokeActionDelegate;

	[Token(Token = "0x400126A")]
	[FieldOffset(Offset = "0x0")]
	private readonly ValueTask _value;

	[Token(Token = "0x17000479")]
	public bool IsCompleted
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60022DF")]
		[Address(RVA = "0x53C8D70", Offset = "0x53C7D70", VA = "0x53C8D70")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60022DE")]
	[Address(RVA = "0x53C8D60", Offset = "0x53C7D60", VA = "0x53C8D60")]
	internal ValueTaskAwaiter(ValueTask value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60022E0")]
	[Address(RVA = "0x53C8EE0", Offset = "0x53C7EE0", VA = "0x53C8EE0")]
	[System.Diagnostics.StackTraceHidden]
	public void GetResult()
	{
	}

	[Token(Token = "0x60022E1")]
	[Address(RVA = "0x53C8F50", Offset = "0x53C7F50", VA = "0x53C8F50", Slot = "5")]
	public void OnCompleted(Action continuation)
	{
	}

	[Token(Token = "0x60022E2")]
	[Address(RVA = "0x53C9100", Offset = "0x53C8100", VA = "0x53C9100", Slot = "4")]
	public void UnsafeOnCompleted(Action continuation)
	{
	}
}
[Token(Token = "0x2000491")]
public readonly struct ValueTaskAwaiter<TResult> : ICriticalNotifyCompletion, INotifyCompletion
{
	[Token(Token = "0x400126C")]
	[FieldOffset(Offset = "0x0")]
	private readonly ValueTask<TResult> _value;

	[Token(Token = "0x1700047A")]
	public bool IsCompleted
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60022E8")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60022E7")]
	internal ValueTaskAwaiter(ValueTask<TResult> value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60022E9")]
	[System.Diagnostics.StackTraceHidden]
	public TResult GetResult()
	{
		return (TResult)null;
	}

	[Token(Token = "0x60022EA")]
	public void OnCompleted(Action continuation)
	{
	}

	[Token(Token = "0x60022EB")]
	public void UnsafeOnCompleted(Action continuation)
	{
	}
}
