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
		[Address(RVA = "0x45D2F10", Offset = "0x45D2F10", VA = "0x45D2F10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000056")]
	public string Path
	{
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x45D2F20", Offset = "0x45D2F20", VA = "0x45D2F20")]
		set
		{
		}
	}

	[Token(Token = "0x17000057")]
	public int Port
	{
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x45D2FD0", Offset = "0x45D2FD0", VA = "0x45D2FD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000058")]
	public Uri Uri
	{
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x45D3030", Offset = "0x45D3030", VA = "0x45D3030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x45D27F0", Offset = "0x45D27F0", VA = "0x45D27F0")]
	public UriBuilder(string uri)
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x45D2BA0", Offset = "0x45D2BA0", VA = "0x45D2BA0")]
	public UriBuilder(Uri uri)
	{
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x45D29E0", Offset = "0x45D29E0", VA = "0x45D29E0")]
	private void Init(Uri uri)
	{
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x45D30C0", Offset = "0x45D30C0", VA = "0x45D30C0", Slot = "0")]
	public override bool Equals(object rparam)
	{
		return default(bool);
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x45D31B0", Offset = "0x45D31B0", VA = "0x45D31B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x45D2D60", Offset = "0x45D2D60", VA = "0x45D2D60")]
	private void SetFieldsFromUri(Uri uri)
	{
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x45D3260", Offset = "0x45D3260", VA = "0x45D3260", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
