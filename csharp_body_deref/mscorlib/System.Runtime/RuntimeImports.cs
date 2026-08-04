// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.RuntimeImports
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Runtime;

[Token(Token = "0x2000338")]
internal static class RuntimeImports
{
	[Token(Token = "0x6001C09")]
	[Address(RVA = "0x3B5F3E0", Offset = "0x3B5F3E0", VA = "0x3B5F3E0")]
	internal static void RhZeroMemory(ref byte b, ulong byteLength)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C0A")]
	[Address(RVA = "0x3B5F3F0", Offset = "0x3B5F3F0", VA = "0x3B5F3F0")]
	private unsafe static extern void ZeroMemory(void* p, uint byteLength);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C0B")]
	[Address(RVA = "0x3B5F400", Offset = "0x3B5F400", VA = "0x3B5F400")]
	internal unsafe static extern void Memmove(byte* dest, byte* src, uint len);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C0C")]
	[Address(RVA = "0x3B5F410", Offset = "0x3B5F410", VA = "0x3B5F410")]
	internal unsafe static extern void Memmove_wbarrier(byte* dest, byte* src, uint len, IntPtr type_handle);
}
