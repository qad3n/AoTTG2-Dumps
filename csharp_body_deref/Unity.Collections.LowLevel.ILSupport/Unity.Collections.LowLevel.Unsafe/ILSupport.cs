// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.ILSupport
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000004")]
internal static class ILSupport
{
	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000003")]
	public unsafe static void* AddressOf<T>(in T thing) where T : struct
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000004")]
	public unsafe static ref T AsRef<T>(in T thing) where T : struct
	{
		return ref *(T*)null;
	}
}
