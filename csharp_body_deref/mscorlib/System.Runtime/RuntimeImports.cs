using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Runtime;

[Token(Token = "0x2000338")]
internal static class RuntimeImports
{
	[Token(Token = "0x6001C09")]
	[Address(RVA = "0x4E798C0", Offset = "0x4E798C0", VA = "0x4E798C0")]
	internal static void RhZeroMemory(ref byte b, ulong byteLength)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C0A")]
	[Address(RVA = "0x4E798D0", Offset = "0x4E798D0", VA = "0x4E798D0")]
	private unsafe static extern void ZeroMemory(void* p, uint byteLength);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C0B")]
	[Address(RVA = "0x4E798E0", Offset = "0x4E798E0", VA = "0x4E798E0")]
	internal unsafe static extern void Memmove(byte* dest, byte* src, uint len);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C0C")]
	[Address(RVA = "0x4E798F0", Offset = "0x4E798F0", VA = "0x4E798F0")]
	internal unsafe static extern void Memmove_wbarrier(byte* dest, byte* src, uint len, IntPtr type_handle);
}
