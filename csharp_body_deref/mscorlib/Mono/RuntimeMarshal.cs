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

[Token(Token = "0x2000019")]
internal static class RuntimeMarshal
{
	[Token(Token = "0x600005B")]
	[Address(RVA = "0x52D9630", Offset = "0x52D8630", VA = "0x52D9630")]
	internal static string PtrToUtf8String(IntPtr ptr)
	{
		return null;
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x52D96B0", Offset = "0x52D86B0", VA = "0x52D96B0")]
	internal static Mono.SafeStringMarshal MarshalString(string str)
	{
		return default(Mono.SafeStringMarshal);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x52D9700", Offset = "0x52D8700", VA = "0x52D9700")]
	private static int DecodeBlobSize(IntPtr in_ptr, out IntPtr out_ptr)
	{
		return default(int);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x52D9770", Offset = "0x52D8770", VA = "0x52D9770")]
	internal static byte[] DecodeBlobArray(IntPtr ptr)
	{
		return null;
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x52D9850", Offset = "0x52D8850", VA = "0x52D9850")]
	internal static int AsciHexDigitValue(int c)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000060")]
	[Address(RVA = "0x52D9880", Offset = "0x52D8880", VA = "0x52D9880")]
	internal static extern void FreeAssemblyName(ref Mono.MonoAssemblyName name, bool freeStruct);
}
