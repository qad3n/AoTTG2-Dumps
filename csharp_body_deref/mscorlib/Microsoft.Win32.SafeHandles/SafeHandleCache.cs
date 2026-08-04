// ==================== AoTTG2 cross-reference ====================
// Type: Microsoft.Win32.SafeHandles.SafeHandleCache
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Microsoft.Win32.SafeHandles;

[Token(Token = "0x2000059")]
internal static class SafeHandleCache<T> where T : SafeHandle
{
	[Token(Token = "0x400018E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static T s_invalidHandle;

	[Token(Token = "0x6000210")]
	internal static bool IsCachedInvalidHandle(SafeHandle handle)
	{
		return default(bool);
	}
}
