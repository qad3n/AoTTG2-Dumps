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

[Token(Token = "0x200096F")]
internal class ApplicationVersion
{
	[Token(Token = "0x4002F6E")]
	[FieldOffset(Offset = "0x0")]
	public static bool UseServerHash;

	[Token(Token = "0x4002F6F")]
	[FieldOffset(Offset = "0x8")]
	public static Func<NetworkCredential> VersionProvider;

	[Token(Token = "0x4002F70")]
	[FieldOffset(Offset = "0x10")]
	public static Func<string, string> HashProvider;

	[Token(Token = "0x6005848")]
	[Address(RVA = "0x5D0A290", Offset = "0x5D09290", VA = "0x5D0A290")]
	public static NetworkCredential GetVersion()
	{
		return null;
	}

	[Token(Token = "0x6005849")]
	[Address(RVA = "0x5D0A390", Offset = "0x5D09390", VA = "0x5D0A390")]
	public static string GetHashCode(string key)
	{
		return null;
	}

	[Token(Token = "0x600584A")]
	[Address(RVA = "0x5D0A460", Offset = "0x5D09460", VA = "0x5D0A460")]
	public static string GetHashKey(string key)
	{
		return null;
	}

	[Token(Token = "0x600584B")]
	[Address(RVA = "0x5D0A4F0", Offset = "0x5D094F0", VA = "0x5D0A4F0")]
	public static string GetSessionID()
	{
		return null;
	}

	[Token(Token = "0x600584C")]
	[Address(RVA = "0x5D0A530", Offset = "0x5D09530", VA = "0x5D0A530")]
	static ApplicationVersion()
	{
	}

	[Token(Token = "0x600584D")]
	[Address(RVA = "0x5D0A620", Offset = "0x5D09620", VA = "0x5D0A620")]
	public static NetworkCredential GetPrivateVersion()
	{
		return null;
	}

	[Token(Token = "0x600584E")]
	[Address(RVA = "0x5D0A720", Offset = "0x5D09720", VA = "0x5D0A720")]
	public static string GetPrivateHashCode(string key)
	{
		return null;
	}

	[Token(Token = "0x600584F")]
	[Address(RVA = "0x5D0A850", Offset = "0x5D09850", VA = "0x5D0A850")]
	public ApplicationVersion()
	{
	}
}
