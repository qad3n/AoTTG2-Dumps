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
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x3ACE310", Offset = "0x3ACE310", VA = "0x3ACE310")]
		get
		{
			return default(IntPtr);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000063")]
	[Address(RVA = "0x3ACE2E0", Offset = "0x3ACE2E0", VA = "0x3ACE2E0")]
	private static extern IntPtr StringToUtf8_icall(ref string str);

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x3ACE2F0", Offset = "0x3ACE2F0", VA = "0x3ACE2F0")]
	public static IntPtr StringToUtf8(string str)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000065")]
	[Address(RVA = "0x3ACE300", Offset = "0x3ACE300", VA = "0x3ACE300")]
	public static extern void GFree(IntPtr ptr);

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x3ACE080", Offset = "0x3ACE080", VA = "0x3ACE080")]
	public SafeStringMarshal(string str)
	{
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x3ACE350", Offset = "0x3ACE350", VA = "0x3ACE350", Slot = "4")]
	public void Dispose()
	{
	}
}
