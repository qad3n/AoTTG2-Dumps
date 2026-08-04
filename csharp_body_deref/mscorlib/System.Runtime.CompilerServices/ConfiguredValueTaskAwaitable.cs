// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[StructLayout((LayoutKind)3)]
[Token(Token = "0x200046B")]
public readonly struct ConfiguredValueTaskAwaitable
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200046C")]
	public readonly struct ConfiguredValueTaskAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x40012F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly ValueTask _value;

		[Token(Token = "0x17000468")]
		public bool IsCompleted
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x600225E")]
			[Address(RVA = "0x3BC07A0", Offset = "0x3BC07A0", VA = "0x3BC07A0")]
			get
			{
				return default(bool);
			}
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600225D")]
		[Address(RVA = "0x3BC0790", Offset = "0x3BC0790", VA = "0x3BC0790")]
		internal ConfiguredValueTaskAwaiter(ValueTask value)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600225F")]
		[Address(RVA = "0x3BC0910", Offset = "0x3BC0910", VA = "0x3BC0910")]
		[System.Diagnostics.StackTraceHidden]
		public void GetResult()
		{
		}

		[Token(Token = "0x6002260")]
		[Address(RVA = "0x3BC0980", Offset = "0x3BC0980", VA = "0x3BC0980", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6002261")]
		[Address(RVA = "0x3BC0B60", Offset = "0x3BC0B60", VA = "0x3BC0B60", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x40012F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly ValueTask _value;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600225B")]
	[Address(RVA = "0x3BC0750", Offset = "0x3BC0750", VA = "0x3BC0750")]
	internal ConfiguredValueTaskAwaitable(ValueTask value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600225C")]
	[Address(RVA = "0x3BC0760", Offset = "0x3BC0760", VA = "0x3BC0760")]
	public ConfiguredValueTaskAwaiter GetAwaiter()
	{
		return default(ConfiguredValueTaskAwaiter);
	}
}
[StructLayout((LayoutKind)3)]
[Token(Token = "0x200046D")]
public readonly struct ConfiguredValueTaskAwaitable<TResult>
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200046E")]
	public readonly struct ConfiguredValueTaskAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x40012FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly ValueTask<TResult> _value;

		[Token(Token = "0x17000469")]
		public bool IsCompleted
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6002265")]
			get
			{
				return default(bool);
			}
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002264")]
		internal ConfiguredValueTaskAwaiter(ValueTask<TResult> value)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002266")]
		[System.Diagnostics.StackTraceHidden]
		public TResult GetResult()
		{
			return (TResult)null;
		}

		[Token(Token = "0x6002267")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6002268")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x40012FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly ValueTask<TResult> _value;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002262")]
	internal ConfiguredValueTaskAwaitable(ValueTask<TResult> value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002263")]
	public ConfiguredValueTaskAwaiter GetAwaiter()
	{
		return default(ConfiguredValueTaskAwaiter);
	}
}
