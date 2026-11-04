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

[Token(Token = "0x2000367")]
public static class RuntimeImports
{
	[Token(Token = "0x6001C77")]
	[Address(RVA = "0x19E4640", Offset = "0x19E2C40", VA = "0x1819E4640")]
	internal static void RhZeroMemory(ref byte b, ulong byteLength)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C78")]
	[Address(RVA = "0x19E4640", Offset = "0x19E2C40", VA = "0x1819E4640")]
	private unsafe static extern void ZeroMemory(void* p, uint byteLength);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C79")]
	[Address(RVA = "0x19E4620", Offset = "0x19E2C20", VA = "0x1819E4620")]
	internal unsafe static extern void Memmove(byte* dest, byte* src, uint len);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C7A")]
	[Address(RVA = "0x19E4630", Offset = "0x19E2C30", VA = "0x1819E4630")]
	internal unsafe static extern void Memmove_wbarrier(byte* dest, byte* src, uint len, IntPtr type_handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C7B")]
	[Address(RVA = "0x19E4650", Offset = "0x19E2C50", VA = "0x1819E4650")]
	internal unsafe static extern void _ecvt_s(byte* buffer, int sizeInBytes, double value, int count, int* dec, int* sign);
}
