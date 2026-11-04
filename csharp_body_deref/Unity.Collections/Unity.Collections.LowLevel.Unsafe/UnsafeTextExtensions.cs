// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeTextExtensions
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000147")]
internal static class UnsafeTextExtensions
{
	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x29C05B0", Offset = "0x29BEBB0", VA = "0x1829C05B0")]
	public unsafe static ref UnsafeList<byte> AsUnsafeListOfBytes(this ref UnsafeText text)
	{
		return ref *(UnsafeList<byte>*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x29C0560", Offset = "0x29BEB60", VA = "0x1829C0560")]
	public static UnsafeList<byte> AsUnsafeListOfBytesRO(this UnsafeText text)
	{
		return default(UnsafeList<byte>);
	}
}
