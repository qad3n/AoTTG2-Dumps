// ==================== AoTTG2 cross-reference ====================
// Type: System.UriBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000078")]
public class UriBuilder
{
	[Token(Token = "0x400015B")]
	[FieldOffset(Offset = "0x10")]
	private bool _changed;

	[Token(Token = "0x400015C")]
	[FieldOffset(Offset = "0x18")]
	private string _fragment;

	[Token(Token = "0x400015D")]
	[FieldOffset(Offset = "0x20")]
	private string _host;

	[Token(Token = "0x400015E")]
	[FieldOffset(Offset = "0x28")]
	private string _password;

	[Token(Token = "0x400015F")]
	[FieldOffset(Offset = "0x30")]
	private string _path;

	[Token(Token = "0x4000160")]
	[FieldOffset(Offset = "0x38")]
	private int _port;

	[Token(Token = "0x4000161")]
	[FieldOffset(Offset = "0x40")]
	private string _query;

	[Token(Token = "0x4000162")]
	[FieldOffset(Offset = "0x48")]
	private string _scheme;

	[Token(Token = "0x4000163")]
	[FieldOffset(Offset = "0x50")]
	private string _schemeDelimiter;

	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x58")]
	private Uri _uri;

	[Token(Token = "0x4000165")]
	[FieldOffset(Offset = "0x60")]
	private string _username;

	[Token(Token = "0x17000055")]
	public string Host
	{
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x48F8010", Offset = "0x48F8010", VA = "0x48F8010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000056")]
	public string Path
	{
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x48F8020", Offset = "0x48F8020", VA = "0x48F8020")]
		set
		{
		}
	}

	[Token(Token = "0x17000057")]
	public int Port
	{
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x48F80D0", Offset = "0x48F80D0", VA = "0x48F80D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000058")]
	public Uri Uri
	{
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x48F8130", Offset = "0x48F8130", VA = "0x48F8130")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x48F78F0", Offset = "0x48F78F0", VA = "0x48F78F0")]
	public UriBuilder(string uri)
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x48F7CA0", Offset = "0x48F7CA0", VA = "0x48F7CA0")]
	public UriBuilder(Uri uri)
	{
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x48F7AE0", Offset = "0x48F7AE0", VA = "0x48F7AE0")]
	private void Init(Uri uri)
	{
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x48F81C0", Offset = "0x48F81C0", VA = "0x48F81C0", Slot = "0")]
	public override bool Equals(object rparam)
	{
		return default(bool);
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x48F82B0", Offset = "0x48F82B0", VA = "0x48F82B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x48F7E60", Offset = "0x48F7E60", VA = "0x48F7E60")]
	private void SetFieldsFromUri(Uri uri)
	{
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x48F8360", Offset = "0x48F8360", VA = "0x48F8360", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
