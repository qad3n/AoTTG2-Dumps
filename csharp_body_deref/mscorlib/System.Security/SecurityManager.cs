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

[Token(Token = "0x20002D8")]
[ComVisible(true)]
public static class SecurityManager
{
	[Token(Token = "0x17000269")]
	[Obsolete("The security manager cannot be turned off on MS runtime")]
	public static bool SecurityEnabled
	{
		[Token(Token = "0x6001821")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001822")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal static void EnsureElevatedPermissions()
	{
	}
}
