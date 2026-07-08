using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Mono;

[Token(Token = "0x2000019")]
internal static class RuntimeMarshal
{
	[Token(Token = "0x6000059")]
	[Address(RVA = "0x4DE84A0", Offset = "0x4DE84A0", VA = "0x4DE84A0")]
	internal static string PtrToUtf8String(IntPtr ptr)
	{
		return null;
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x4DE8520", Offset = "0x4DE8520", VA = "0x4DE8520")]
	internal static Mono.SafeStringMarshal MarshalString(string str)
	{
		return default(Mono.SafeStringMarshal);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x4DE8580", Offset = "0x4DE8580", VA = "0x4DE8580")]
	private static int DecodeBlobSize(IntPtr in_ptr, out IntPtr out_ptr)
	{
		return default(int);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x4DE85F0", Offset = "0x4DE85F0", VA = "0x4DE85F0")]
	internal static byte[] DecodeBlobArray(IntPtr ptr)
	{
		return null;
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x4DE86D0", Offset = "0x4DE86D0", VA = "0x4DE86D0")]
	internal static int AsciHexDigitValue(int c)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005E")]
	[Address(RVA = "0x4DE86F0", Offset = "0x4DE86F0", VA = "0x4DE86F0")]
	internal static extern void FreeAssemblyName(ref Mono.MonoAssemblyName name, bool freeStruct);
}
