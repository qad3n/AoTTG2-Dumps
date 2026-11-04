// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.MemoryUtilities
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000E7")]
internal static class MemoryUtilities
{
	[Token(Token = "0x60003BB")]
	public unsafe static T* Malloc<T>(int count, Allocator allocator) where T : struct
	{
		//IL_0002: Expected I, but got O
		return (T*)unchecked((nint)null);
	}

	[Token(Token = "0x60003BC")]
	public unsafe static void Free<T>(T* p, Allocator allocator) where T : struct
	{
	}
}
