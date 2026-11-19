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
[Token(Token = "0x2000473")]
public readonly struct ConfiguredValueTaskAwaitable
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000474")]
	public readonly struct ConfiguredValueTaskAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x400125B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly ValueTask _value;

		[Token(Token = "0x1700046A")]
		public bool IsCompleted
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60022AB")]
			[Address(RVA = "0x53C80C0", Offset = "0x53C70C0", VA = "0x53C80C0")]
			get
			{
				return default(bool);
			}
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60022AA")]
		[Address(RVA = "0x53C80B0", Offset = "0x53C70B0", VA = "0x53C80B0")]
		internal ConfiguredValueTaskAwaiter(ValueTask value)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60022AC")]
		[Address(RVA = "0x53C8230", Offset = "0x53C7230", VA = "0x53C8230")]
		[System.Diagnostics.StackTraceHidden]
		public void GetResult()
		{
		}

		[Token(Token = "0x60022AD")]
		[Address(RVA = "0x53C82A0", Offset = "0x53C72A0", VA = "0x53C82A0", Slot = "5")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60022AE")]
		[Address(RVA = "0x53C8480", Offset = "0x53C7480", VA = "0x53C8480", Slot = "4")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x400125A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly ValueTask _value;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60022A8")]
	[Address(RVA = "0x53C8070", Offset = "0x53C7070", VA = "0x53C8070")]
	internal ConfiguredValueTaskAwaitable(ValueTask value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60022A9")]
	[Address(RVA = "0x53C8080", Offset = "0x53C7080", VA = "0x53C8080")]
	public ConfiguredValueTaskAwaiter GetAwaiter()
	{
		return default(ConfiguredValueTaskAwaiter);
	}
}
[StructLayout((LayoutKind)3)]
[Token(Token = "0x2000475")]
public readonly struct ConfiguredValueTaskAwaitable<TResult>
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000476")]
	public readonly struct ConfiguredValueTaskAwaiter : ICriticalNotifyCompletion, INotifyCompletion
	{
		[Token(Token = "0x400125D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly ValueTask<TResult> _value;

		[Token(Token = "0x1700046B")]
		public bool IsCompleted
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60022B2")]
			get
			{
				return default(bool);
			}
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60022B1")]
		internal ConfiguredValueTaskAwaiter(ValueTask<TResult> value)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60022B3")]
		[System.Diagnostics.StackTraceHidden]
		public TResult GetResult()
		{
			return (TResult)null;
		}

		[Token(Token = "0x60022B4")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60022B5")]
		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	[Token(Token = "0x400125C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly ValueTask<TResult> _value;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60022AF")]
	internal ConfiguredValueTaskAwaitable(ValueTask<TResult> value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60022B0")]
	public ConfiguredValueTaskAwaiter GetAwaiter()
	{
		return default(ConfiguredValueTaskAwaiter);
	}
}
