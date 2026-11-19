// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.RuntimeImports
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Runtime;

[Token(Token = "0x2000340")]
internal static class RuntimeImports
{
	[Token(Token = "0x6001C4E")]
	[Address(RVA = "0x5368BD0", Offset = "0x5367BD0", VA = "0x5368BD0")]
	internal static void RhZeroMemory(ref byte b, ulong byteLength)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C4F")]
	[Address(RVA = "0x5368BE0", Offset = "0x5367BE0", VA = "0x5368BE0")]
	private unsafe static extern void ZeroMemory(void* p, uint byteLength);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C50")]
	[Address(RVA = "0x5368BF0", Offset = "0x5367BF0", VA = "0x5368BF0")]
	internal unsafe static extern void Memmove(byte* dest, byte* src, uint len);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C51")]
	[Address(RVA = "0x5368C00", Offset = "0x5367C00", VA = "0x5368C00")]
	internal unsafe static extern void Memmove_wbarrier(byte* dest, byte* src, uint len, IntPtr type_handle);
}
