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
