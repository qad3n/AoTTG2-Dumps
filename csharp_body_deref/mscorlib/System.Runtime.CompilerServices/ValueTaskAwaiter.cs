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

[Token(Token = "0x20004B6")]
public readonly struct ValueTaskAwaiter : ICriticalNotifyCompletion, INotifyCompletion
{
	[Token(Token = "0x4001309")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Action<object> s_invokeActionDelegate;

	[Token(Token = "0x400130A")]
	[FieldOffset(Offset = "0x0")]
	private readonly ValueTask _value;

	[Token(Token = "0x1700047A")]
	public bool IsCompleted
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002312")]
		[Address(RVA = "0x1A39470", Offset = "0x1A37A70", VA = "0x181A39470")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002311")]
	[Address(RVA = "0xEF4190", Offset = "0xEF2790", VA = "0x180EF4190")]
	internal ValueTaskAwaiter(ValueTask value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002313")]
	[Address(RVA = "0x1A38EF0", Offset = "0x1A374F0", VA = "0x181A38EF0")]
	[System.Diagnostics.StackTraceHidden]
	public void GetResult()
	{
	}

	[Token(Token = "0x6002314")]
	[Address(RVA = "0x1A38F40", Offset = "0x1A37540", VA = "0x181A38F40", Slot = "5")]
	public void OnCompleted(Action continuation)
	{
	}

	[Token(Token = "0x6002315")]
	[Address(RVA = "0x1A39170", Offset = "0x1A37770", VA = "0x181A39170", Slot = "4")]
	public void UnsafeOnCompleted(Action continuation)
	{
	}
}
[Token(Token = "0x20004B8")]
public readonly struct ValueTaskAwaiter<TResult> : ICriticalNotifyCompletion, INotifyCompletion
{
	[Token(Token = "0x400130C")]
	[FieldOffset(Offset = "0x0")]
	private readonly ValueTask<TResult> _value;

	[Token(Token = "0x1700047B")]
	public bool IsCompleted
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600231B")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600231A")]
	internal ValueTaskAwaiter(ValueTask<TResult> value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600231C")]
	[System.Diagnostics.StackTraceHidden]
	public TResult GetResult()
	{
		return (TResult)null;
	}

	[Token(Token = "0x600231D")]
	public void OnCompleted(Action continuation)
	{
	}

	[Token(Token = "0x600231E")]
	public void UnsafeOnCompleted(Action continuation)
	{
	}
}
