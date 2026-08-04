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

[Token(Token = "0x200077C")]
internal class ApplicationVersion
{
	[Token(Token = "0x40023E8")]
	[FieldOffset(Offset = "0x0")]
	public static bool UseServerHash;

	[Token(Token = "0x40023E9")]
	[FieldOffset(Offset = "0x8")]
	public static Func<NetworkCredential> VersionProvider;

	[Token(Token = "0x40023EA")]
	[FieldOffset(Offset = "0x10")]
	public static Func<string, string> HashProvider;

	[Token(Token = "0x600487E")]
	[Address(RVA = "0x43AC840", Offset = "0x43AC840", VA = "0x43AC840")]
	public static NetworkCredential GetVersion()
	{
		return null;
	}

	[Token(Token = "0x600487F")]
	[Address(RVA = "0x43AC940", Offset = "0x43AC940", VA = "0x43AC940")]
	public static string GetHashCode(string key)
	{
		return null;
	}

	[Token(Token = "0x6004880")]
	[Address(RVA = "0x43ACA10", Offset = "0x43ACA10", VA = "0x43ACA10")]
	public static string GetHashKey(string key)
	{
		return null;
	}

	[Token(Token = "0x6004881")]
	[Address(RVA = "0x43ACAA0", Offset = "0x43ACAA0", VA = "0x43ACAA0")]
	public static string GetSessionID()
	{
		return null;
	}

	[Token(Token = "0x6004882")]
	[Address(RVA = "0x43ACAE0", Offset = "0x43ACAE0", VA = "0x43ACAE0")]
	static ApplicationVersion()
	{
	}

	[Token(Token = "0x6004883")]
	[Address(RVA = "0x43ACBD0", Offset = "0x43ACBD0", VA = "0x43ACBD0")]
	public static NetworkCredential GetPrivateVersion()
	{
		return null;
	}

	[Token(Token = "0x6004884")]
	[Address(RVA = "0x43ACBE0", Offset = "0x43ACBE0", VA = "0x43ACBE0")]
	public static string GetPrivateHashCode(string key)
	{
		return null;
	}

	[Token(Token = "0x6004885")]
	[Address(RVA = "0x43ACC40", Offset = "0x43ACC40", VA = "0x43ACC40")]
	public ApplicationVersion()
	{
	}
}
