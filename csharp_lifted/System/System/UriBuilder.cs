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
	[Token(Token = "0x400015C")]
	[FieldOffset(Offset = "0x10")]
	private bool _changed;

	[Token(Token = "0x400015D")]
	[FieldOffset(Offset = "0x18")]
	private string _fragment;

	[Token(Token = "0x400015E")]
	[FieldOffset(Offset = "0x20")]
	private string _host;

	[Token(Token = "0x400015F")]
	[FieldOffset(Offset = "0x28")]
	private string _password;

	[Token(Token = "0x4000160")]
	[FieldOffset(Offset = "0x30")]
	private string _path;

	[Token(Token = "0x4000161")]
	[FieldOffset(Offset = "0x38")]
	private int _port;

	[Token(Token = "0x4000162")]
	[FieldOffset(Offset = "0x40")]
	private string _query;

	[Token(Token = "0x4000163")]
	[FieldOffset(Offset = "0x48")]
	private string _scheme;

	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x50")]
	private string _schemeDelimiter;

	[Token(Token = "0x4000165")]
	[FieldOffset(Offset = "0x58")]
	private Uri _uri;

	[Token(Token = "0x4000166")]
	[FieldOffset(Offset = "0x60")]
	private string _username;

	[Token(Token = "0x17000055")]
	public string Host
	{
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x61D45E0", Offset = "0x61D35E0", VA = "0x61D45E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000056")]
	public string Path
	{
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x61D45F0", Offset = "0x61D35F0", VA = "0x61D45F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000057")]
	public int Port
	{
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x61D46A0", Offset = "0x61D36A0", VA = "0x61D46A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000058")]
	public Uri Uri
	{
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x61D4700", Offset = "0x61D3700", VA = "0x61D4700")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x61D3EC0", Offset = "0x61D2EC0", VA = "0x61D3EC0")]
	public UriBuilder(string uri)
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x61D4270", Offset = "0x61D3270", VA = "0x61D4270")]
	public UriBuilder(Uri uri)
	{
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x61D40B0", Offset = "0x61D30B0", VA = "0x61D40B0")]
	private void Init(Uri uri)
	{
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x61D4790", Offset = "0x61D3790", VA = "0x61D4790", Slot = "0")]
	public override bool Equals(object rparam)
	{
		return default(bool);
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x61D4880", Offset = "0x61D3880", VA = "0x61D4880", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x61D4430", Offset = "0x61D3430", VA = "0x61D4430")]
	private void SetFieldsFromUri(Uri uri)
	{
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x61D4930", Offset = "0x61D3930", VA = "0x61D4930", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
