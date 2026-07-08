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
			[Address(RVA = "0x4EDAC80", Offset = "0x4EDAC80", VA = "0x4EDAC80")]
			get
			{
				return default(bool);
			}
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600225D")]
		[Address(RVA = "0x4EDAC70", Offset = "0x4EDAC70", VA = "0x4EDAC70")]
		internal ConfiguredValueTaskAwaiter(ValueTask value)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600225F")]
		[Address(RVA = "0x4EDADF0", Offset = "0x4EDADF0", VA = "0x4EDADF0")]
		[System.Diagnostics.StackTraceHidden]
		public void GetResult()
		{
		}

		[Token(Token = "0x6002260")]
		[Address(RVA = "0x4EDAE60", Offset = "0x4EDAE60", VA = "0x4EDAE60", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6002261")]
		[Address(RVA = "0x4EDB040", Offset = "0x4EDB040", VA = "0x4EDB040", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x40012F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly ValueTask _value;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600225B")]
	[Address(RVA = "0x4EDAC30", Offset = "0x4EDAC30", VA = "0x4EDAC30")]
	internal ConfiguredValueTaskAwaitable(ValueTask value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600225C")]
	[Address(RVA = "0x4EDAC40", Offset = "0x4EDAC40", VA = "0x4EDAC40")]
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
