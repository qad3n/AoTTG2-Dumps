// ==================== AoTTG2 cross-reference ====================
// Type: Microsoft.Win32.ThrowHelper
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Microsoft.Win32;

[Token(Token = "0x200007D")]
internal static class ThrowHelper
{
	[Token(Token = "0x6000242")]
	[Address(RVA = "0x1975990", Offset = "0x1973F90", VA = "0x181975990")]
	internal static void ThrowArgumentException(string msg, string argument)
	{
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x19759F0", Offset = "0x1973FF0", VA = "0x1819759F0")]
	internal static void ThrowArgumentNullException(string argument)
	{
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x1975AA0", Offset = "0x19740A0", VA = "0x181975AA0")]
	internal static void ThrowSecurityException(string msg)
	{
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x1975A40", Offset = "0x1974040", VA = "0x181975A40")]
	internal static void ThrowObjectDisposedException(string objectName, string msg)
	{
	}
}
