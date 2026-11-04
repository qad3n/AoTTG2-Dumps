// ==================== AoTTG2 cross-reference ====================
// Type: Mono.RuntimeMarshal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Mono;

[Token(Token = "0x2000037")]
internal static class RuntimeMarshal
{
	[Token(Token = "0x6000071")]
	[Address(RVA = "0x194CA90", Offset = "0x194B090", VA = "0x18194CA90")]
	internal static string PtrToUtf8String(IntPtr ptr)
	{
		return null;
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x194CA60", Offset = "0x194B060", VA = "0x18194CA60")]
	internal static Mono.SafeStringMarshal MarshalString(string str)
	{
		return default(Mono.SafeStringMarshal);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x194C9D0", Offset = "0x194AFD0", VA = "0x18194C9D0")]
	private static int DecodeBlobSize(IntPtr in_ptr, out IntPtr out_ptr)
	{
		return default(int);
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x194C8D0", Offset = "0x194AED0", VA = "0x18194C8D0")]
	internal static byte[] DecodeBlobArray(IntPtr ptr)
	{
		return null;
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x194C8A0", Offset = "0x194AEA0", VA = "0x18194C8A0")]
	internal static int AsciHexDigitValue(int c)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000076")]
	[Address(RVA = "0x194CA50", Offset = "0x194B050", VA = "0x18194CA50")]
	internal static extern void FreeAssemblyName(ref Mono.MonoAssemblyName name, bool freeStruct);
}
