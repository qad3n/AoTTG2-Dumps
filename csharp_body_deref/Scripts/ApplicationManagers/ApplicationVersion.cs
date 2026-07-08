using System;
using System.Net;
using Il2CppDummyDll;

namespace ApplicationManagers;

[Token(Token = "0x200072E")]
internal class ApplicationVersion
{
	[Token(Token = "0x400228B")]
	[FieldOffset(Offset = "0x0")]
	public static bool UseServerHash;

	[Token(Token = "0x400228C")]
	[FieldOffset(Offset = "0x8")]
	public static Func<NetworkCredential> VersionProvider;

	[Token(Token = "0x400228D")]
	[FieldOffset(Offset = "0x10")]
	public static Func<string, string> HashProvider;

	[Token(Token = "0x6004616")]
	[Address(RVA = "0x40947C0", Offset = "0x40947C0", VA = "0x40947C0")]
	public static NetworkCredential GetVersion()
	{
		return null;
	}

	[Token(Token = "0x6004617")]
	[Address(RVA = "0x40948C0", Offset = "0x40948C0", VA = "0x40948C0")]
	public static string GetHashCode(string key)
	{
		return null;
	}

	[Token(Token = "0x6004618")]
	[Address(RVA = "0x4094990", Offset = "0x4094990", VA = "0x4094990")]
	public static string GetHashKey(string key)
	{
		return null;
	}

	[Token(Token = "0x6004619")]
	[Address(RVA = "0x4094A20", Offset = "0x4094A20", VA = "0x4094A20")]
	public static string GetSessionID()
	{
		return null;
	}

	[Token(Token = "0x600461A")]
	[Address(RVA = "0x4094A60", Offset = "0x4094A60", VA = "0x4094A60")]
	static ApplicationVersion()
	{
	}

	[Token(Token = "0x600461B")]
	[Address(RVA = "0x4094B50", Offset = "0x4094B50", VA = "0x4094B50")]
	public static NetworkCredential GetPrivateVersion()
	{
		return null;
	}

	[Token(Token = "0x600461C")]
	[Address(RVA = "0x4094B60", Offset = "0x4094B60", VA = "0x4094B60")]
	public static string GetPrivateHashCode(string key)
	{
		return null;
	}

	[Token(Token = "0x600461D")]
	[Address(RVA = "0x4094BC0", Offset = "0x4094BC0", VA = "0x4094BC0")]
	public ApplicationVersion()
	{
	}
}
