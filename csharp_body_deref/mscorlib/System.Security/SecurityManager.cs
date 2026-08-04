// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.SecurityManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security;

[Token(Token = "0x20002A9")]
[ComVisible(true)]
public static class SecurityManager
{
	[Token(Token = "0x17000267")]
	[Obsolete("The security manager cannot be turned off on MS runtime")]
	public static bool SecurityEnabled
	{
		[Token(Token = "0x60017B9")]
		[Address(RVA = "0x3B1D150", Offset = "0x3B1D150", VA = "0x3B1D150")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60017BA")]
	[Address(RVA = "0x3B20E70", Offset = "0x3B20E70", VA = "0x3B20E70")]
	internal static void EnsureElevatedPermissions()
	{
	}
}
