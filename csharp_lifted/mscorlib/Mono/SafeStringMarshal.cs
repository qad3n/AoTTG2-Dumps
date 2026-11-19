// ==================== AoTTG2 cross-reference ====================
// Type: Mono.SafeStringMarshal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Mono;

[Token(Token = "0x2000028")]
internal struct SafeStringMarshal : IDisposable
{
	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0x0")]
	private readonly string str;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0x8")]
	private IntPtr marshaled_string;

	[Token(Token = "0x1700000F")]
	public IntPtr Value
	{
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x52D9980", Offset = "0x52D8980", VA = "0x52D9980")]
		get
		{
			return default(IntPtr);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000065")]
	[Address(RVA = "0x52D9950", Offset = "0x52D8950", VA = "0x52D9950")]
	private static extern IntPtr StringToUtf8_icall(ref string str);

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x52D9960", Offset = "0x52D8960", VA = "0x52D9960")]
	public static IntPtr StringToUtf8(string str)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000067")]
	[Address(RVA = "0x52D9970", Offset = "0x52D8970", VA = "0x52D9970")]
	public static extern void GFree(IntPtr ptr);

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x52D96E0", Offset = "0x52D86E0", VA = "0x52D96E0")]
	public SafeStringMarshal(string str)
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x52D99C0", Offset = "0x52D89C0", VA = "0x52D99C0", Slot = "4")]
	public void Dispose()
	{
	}
}
