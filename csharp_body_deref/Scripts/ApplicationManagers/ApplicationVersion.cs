// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.ApplicationVersion
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/ApplicationVersion.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/ApplicationVersion.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Net;
using Il2CppDummyDll;

namespace ApplicationManagers;

[Token(Token = "0x2000905")]
internal class ApplicationVersion
{
	[Token(Token = "0x4002CAD")]
	[FieldOffset(Offset = "0x0")]
	public static bool UseServerHash;

	[Token(Token = "0x4002CAE")]
	[FieldOffset(Offset = "0x8")]
	public static Func<NetworkCredential> VersionProvider;

	[Token(Token = "0x4002CAF")]
	[FieldOffset(Offset = "0x10")]
	public static Func<string, string> HashProvider;

	[Token(Token = "0x60054E6")]
	[Address(RVA = "0x2345780", Offset = "0x2343D80", VA = "0x182345780")]
	public static NetworkCredential GetVersion()
	{
		return null;
	}

	[Token(Token = "0x60054E7")]
	[Address(RVA = "0x23455B0", Offset = "0x2343BB0", VA = "0x1823455B0")]
	public static string GetHashCode(string key)
	{
		return null;
	}

	[Token(Token = "0x60054E8")]
	[Address(RVA = "0x2345660", Offset = "0x2343C60", VA = "0x182345660")]
	public static string GetHashKey(string key)
	{
		return null;
	}

	[Token(Token = "0x60054E9")]
	[Address(RVA = "0x2345740", Offset = "0x2343D40", VA = "0x182345740")]
	public static string GetSessionID()
	{
		return null;
	}

	[Token(Token = "0x60054EA")]
	[Address(RVA = "0x2345860", Offset = "0x2343E60", VA = "0x182345860")]
	static ApplicationVersion()
	{
	}

	[Token(Token = "0x60054EB")]
	[Address(RVA = "0x2345730", Offset = "0x2343D30", VA = "0x182345730")]
	public static NetworkCredential GetPrivateVersion()
	{
		return null;
	}

	[Token(Token = "0x60054EC")]
	[Address(RVA = "0x23456D0", Offset = "0x2343CD0", VA = "0x1823456D0")]
	public static string GetPrivateHashCode(string key)
	{
		return null;
	}

	[Token(Token = "0x60054ED")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ApplicationVersion()
	{
	}
}
