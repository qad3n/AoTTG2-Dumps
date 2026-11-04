// ==================== AoTTG2 cross-reference ====================
// Type: System.UriBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000B7")]
public class UriBuilder
{
	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x10")]
	private bool _changed;

	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x18")]
	private string _fragment;

	[Token(Token = "0x400022D")]
	[FieldOffset(Offset = "0x20")]
	private string _host;

	[Token(Token = "0x400022E")]
	[FieldOffset(Offset = "0x28")]
	private string _password;

	[Token(Token = "0x400022F")]
	[FieldOffset(Offset = "0x30")]
	private string _path;

	[Token(Token = "0x4000230")]
	[FieldOffset(Offset = "0x38")]
	private int _port;

	[Token(Token = "0x4000231")]
	[FieldOffset(Offset = "0x40")]
	private string _query;

	[Token(Token = "0x4000232")]
	[FieldOffset(Offset = "0x48")]
	private string _scheme;

	[Token(Token = "0x4000233")]
	[FieldOffset(Offset = "0x50")]
	private string _schemeDelimiter;

	[Token(Token = "0x4000234")]
	[FieldOffset(Offset = "0x58")]
	private Uri _uri;

	[Token(Token = "0x4000235")]
	[FieldOffset(Offset = "0x60")]
	private string _username;

	[Token(Token = "0x17000084")]
	public string Host
	{
		[Token(Token = "0x6000366")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000085")]
	public string Path
	{
		[Token(Token = "0x6000367")]
		[Address(RVA = "0x2842B30", Offset = "0x2841130", VA = "0x182842B30")]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public int Port
	{
		[Token(Token = "0x6000368")]
		[Address(RVA = "0x2842BE0", Offset = "0x28411E0", VA = "0x182842BE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	public Uri Uri
	{
		[Token(Token = "0x6000369")]
		[Address(RVA = "0x2842A90", Offset = "0x2841090", VA = "0x182842A90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x2842690", Offset = "0x2840C90", VA = "0x182842690")]
	public UriBuilder(string uri)
	{
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x28428C0", Offset = "0x2840EC0", VA = "0x1828428C0")]
	public UriBuilder(Uri uri)
	{
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x2841E00", Offset = "0x2840400", VA = "0x182841E00")]
	private void Init(Uri uri)
	{
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x2841D60", Offset = "0x2840360", VA = "0x182841D60", Slot = "0")]
	public override bool Equals(object rparam)
	{
		return default(bool);
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x2841DD0", Offset = "0x28403D0", VA = "0x182841DD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x2841FE0", Offset = "0x28405E0", VA = "0x182841FE0")]
	private void SetFieldsFromUri(Uri uri)
	{
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x28421A0", Offset = "0x28407A0", VA = "0x1828421A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
