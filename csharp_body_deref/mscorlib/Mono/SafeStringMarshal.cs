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

[Token(Token = "0x2000046")]
internal struct SafeStringMarshal : IDisposable
{
	[Token(Token = "0x400013D")]
	[FieldOffset(Offset = "0x0")]
	private readonly string str;

	[Token(Token = "0x400013E")]
	[FieldOffset(Offset = "0x8")]
	private IntPtr marshaled_string;

	[Token(Token = "0x1700000F")]
	public IntPtr Value
	{
		[Token(Token = "0x600007F")]
		[Address(RVA = "0x194D080", Offset = "0x194B680", VA = "0x18194D080")]
		get
		{
			return default(IntPtr);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007B")]
	[Address(RVA = "0x194D030", Offset = "0x194B630", VA = "0x18194D030")]
	private static extern IntPtr StringToUtf8_icall(ref string str);

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x194D040", Offset = "0x194B640", VA = "0x18194D040")]
	public static IntPtr StringToUtf8(string str)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007D")]
	[Address(RVA = "0x194D020", Offset = "0x194B620", VA = "0x18194D020")]
	public static extern void GFree(IntPtr ptr);

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x194D060", Offset = "0x194B660", VA = "0x18194D060")]
	public SafeStringMarshal(string str)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x194CFF0", Offset = "0x194B5F0", VA = "0x18194CFF0", Slot = "4")]
	public void Dispose()
	{
	}
}
