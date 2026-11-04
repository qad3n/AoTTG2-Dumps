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
[Token(Token = "0x200049A")]
public readonly struct ConfiguredValueTaskAwaitable
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200049B")]
	public readonly struct ConfiguredValueTaskAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x40012FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly ValueTask _value;

		[Token(Token = "0x1700046B")]
		public bool IsCompleted
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60022DE")]
			[Address(RVA = "0x1A29970", Offset = "0x1A27F70", VA = "0x181A29970")]
			get
			{
				return default(bool);
			}
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60022DD")]
		[Address(RVA = "0xEF4190", Offset = "0xEF2790", VA = "0x180EF4190")]
		internal ConfiguredValueTaskAwaiter(ValueTask value)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60022DF")]
		[Address(RVA = "0x1A29480", Offset = "0x1A27A80", VA = "0x181A29480")]
		[System.Diagnostics.StackTraceHidden]
		public void GetResult()
		{
		}

		[Token(Token = "0x60022E0")]
		[Address(RVA = "0x1A294D0", Offset = "0x1A27AD0", VA = "0x181A294D0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60022E1")]
		[Address(RVA = "0x1A29720", Offset = "0x1A27D20", VA = "0x181A29720", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x40012FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly ValueTask _value;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60022DB")]
	[Address(RVA = "0xEF4190", Offset = "0xEF2790", VA = "0x180EF4190")]
	internal ConfiguredValueTaskAwaitable(ValueTask value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60022DC")]
	[Address(RVA = "0x1A29460", Offset = "0x1A27A60", VA = "0x181A29460")]
	public ConfiguredValueTaskAwaiter GetAwaiter()
	{
		return default(ConfiguredValueTaskAwaiter);
	}
}
[StructLayout((LayoutKind)3)]
[Token(Token = "0x200049C")]
public readonly struct ConfiguredValueTaskAwaitable<TResult>
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200049D")]
	public readonly struct ConfiguredValueTaskAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x40012FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly ValueTask<TResult> _value;

		[Token(Token = "0x1700046C")]
		public bool IsCompleted
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60022E5")]
			get
			{
				return default(bool);
			}
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60022E4")]
		internal ConfiguredValueTaskAwaiter(ValueTask<TResult> value)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60022E6")]
		[System.Diagnostics.StackTraceHidden]
		public TResult GetResult()
		{
			return (TResult)null;
		}

		[Token(Token = "0x60022E7")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60022E8")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x40012FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly ValueTask<TResult> _value;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60022E2")]
	internal ConfiguredValueTaskAwaitable(ValueTask<TResult> value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60022E3")]
	public ConfiguredValueTaskAwaiter GetAwaiter()
	{
		return default(ConfiguredValueTaskAwaiter);
	}
}
