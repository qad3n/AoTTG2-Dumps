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
		[Address(RVA = "0x4EDB930", Offset = "0x4EDB930", VA = "0x4EDB930")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002291")]
	[Address(RVA = "0x4EDB920", Offset = "0x4EDB920", VA = "0x4EDB920")]
	internal ValueTaskAwaiter(ValueTask value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002293")]
	[Address(RVA = "0x4EDBAA0", Offset = "0x4EDBAA0", VA = "0x4EDBAA0")]
	[System.Diagnostics.StackTraceHidden]
	public void GetResult()
	{
	}

	[Token(Token = "0x6002294")]
	[Address(RVA = "0x4EDBB10", Offset = "0x4EDBB10", VA = "0x4EDBB10", Slot = "5")]
	public void OnCompleted(Action continuation)
	{
	}

	[Token(Token = "0x6002295")]
	[Address(RVA = "0x4EDBCC0", Offset = "0x4EDBCC0", VA = "0x4EDBCC0", Slot = "4")]
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
