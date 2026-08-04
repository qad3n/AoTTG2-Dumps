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

[Token(Token = "0x2000487")]
public readonly struct ValueTaskAwaiter : ICriticalNotifyCompletion, INotifyCompletion
{
	[Token(Token = "0x4001307")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Action<object> s_invokeActionDelegate;

	[Token(Token = "0x4001308")]
	[FieldOffset(Offset = "0x0")]
	private readonly ValueTask _value;

	[Token(Token = "0x17000477")]
	public bool IsCompleted
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002292")]
		[Address(RVA = "0x3BC1450", Offset = "0x3BC1450", VA = "0x3BC1450")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002291")]
	[Address(RVA = "0x3BC1440", Offset = "0x3BC1440", VA = "0x3BC1440")]
	internal ValueTaskAwaiter(ValueTask value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002293")]
	[Address(RVA = "0x3BC15C0", Offset = "0x3BC15C0", VA = "0x3BC15C0")]
	[System.Diagnostics.StackTraceHidden]
	public void GetResult()
	{
	}

	[Token(Token = "0x6002294")]
	[Address(RVA = "0x3BC1630", Offset = "0x3BC1630", VA = "0x3BC1630", Slot = "5")]
	public void OnCompleted(Action continuation)
	{
	}

	[Token(Token = "0x6002295")]
	[Address(RVA = "0x3BC17E0", Offset = "0x3BC17E0", VA = "0x3BC17E0", Slot = "4")]
	public void UnsafeOnCompleted(Action continuation)
	{
	}
}
[Token(Token = "0x2000489")]
public readonly struct ValueTaskAwaiter<TResult> : ICriticalNotifyCompletion, INotifyCompletion
{
	[Token(Token = "0x400130A")]
	[FieldOffset(Offset = "0x0")]
	private readonly ValueTask<TResult> _value;

	[Token(Token = "0x17000478")]
	public bool IsCompleted
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600229B")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600229A")]
	internal ValueTaskAwaiter(ValueTask<TResult> value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600229C")]
	[System.Diagnostics.StackTraceHidden]
	public TResult GetResult()
	{
		return (TResult)null;
	}

	[Token(Token = "0x600229D")]
	public void OnCompleted(Action continuation)
	{
	}

	[Token(Token = "0x600229E")]
	public void UnsafeOnCompleted(Action continuation)
	{
	}
}
