using System.Security.Cryptography;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000191")]
internal class DigestSession
{
	[Token(Token = "0x40007C2")]
	[FieldOffset(Offset = "0x0")]
	private static RandomNumberGenerator rng;

	[Token(Token = "0x40007C3")]
	[FieldOffset(Offset = "0x10")]
	private DateTime lastUse;

	[Token(Token = "0x40007C4")]
	[FieldOffset(Offset = "0x18")]
	private int _nc;

	[Token(Token = "0x40007C5")]
	[FieldOffset(Offset = "0x20")]
	private HashAlgorithm hash;

	[Token(Token = "0x40007C6")]
	[FieldOffset(Offset = "0x28")]
	private DigestHeaderParser parser;

	[Token(Token = "0x40007C7")]
	[FieldOffset(Offset = "0x30")]
	private string _cnonce;

	[Token(Token = "0x17000229")]
	public string Algorithm
	{
		[Token(Token = "0x6000998")]
		[Address(RVA = "0x4659920", Offset = "0x4659920", VA = "0x4659920")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022A")]
	public string Realm
	{
		[Token(Token = "0x6000999")]
		[Address(RVA = "0x4659950", Offset = "0x4659950", VA = "0x4659950")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022B")]
	public string Nonce
	{
		[Token(Token = "0x600099A")]
		[Address(RVA = "0x4659980", Offset = "0x4659980", VA = "0x4659980")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022C")]
	public string Opaque
	{
		[Token(Token = "0x600099B")]
		[Address(RVA = "0x46599B0", Offset = "0x46599B0", VA = "0x46599B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022D")]
	public string QOP
	{
		[Token(Token = "0x600099C")]
		[Address(RVA = "0x46599E0", Offset = "0x46599E0", VA = "0x46599E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022E")]
	public string CNonce
	{
		[Token(Token = "0x600099D")]
		[Address(RVA = "0x4659A10", Offset = "0x4659A10", VA = "0x4659A10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022F")]
	public DateTime LastUse
	{
		[Token(Token = "0x60009A4")]
		[Address(RVA = "0x465A750", Offset = "0x465A750", VA = "0x465A750")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x6000996")]
	[Address(RVA = "0x4659870", Offset = "0x4659870", VA = "0x4659870")]
	static DigestSession()
	{
	}

	[Token(Token = "0x6000997")]
	[Address(RVA = "0x46598C0", Offset = "0x46598C0", VA = "0x46598C0")]
	public DigestSession()
	{
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x4659B10", Offset = "0x4659B10", VA = "0x4659B10")]
	public bool Parse(string challenge)
	{
		return default(bool);
	}

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x4659C10", Offset = "0x4659C10", VA = "0x4659C10")]
	private string HashToHexString(string toBeHashed)
	{
		return null;
	}

	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x4659DA0", Offset = "0x4659DA0", VA = "0x4659DA0")]
	private string HA1(string username, string password)
	{
		return null;
	}

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x4659EE0", Offset = "0x4659EE0", VA = "0x4659EE0")]
	private string HA2(HttpWebRequest webRequest)
	{
		return null;
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x4659FC0", Offset = "0x4659FC0", VA = "0x4659FC0")]
	private string Response(string username, string password, HttpWebRequest webRequest)
	{
		return null;
	}

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x465A120", Offset = "0x465A120", VA = "0x465A120")]
	public Authorization Authenticate(WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}
}
