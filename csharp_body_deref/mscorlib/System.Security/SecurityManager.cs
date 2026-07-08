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
		[Address(RVA = "0x4E37630", Offset = "0x4E37630", VA = "0x4E37630")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60017BA")]
	[Address(RVA = "0x4E3B350", Offset = "0x4E3B350", VA = "0x4E3B350")]
	internal static void EnsureElevatedPermissions()
	{
	}
}
