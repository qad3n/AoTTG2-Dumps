// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.DigestSession
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x497EA20", Offset = "0x497EA20", VA = "0x497EA20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022A")]
	public string Realm
	{
		[Token(Token = "0x6000999")]
		[Address(RVA = "0x497EA50", Offset = "0x497EA50", VA = "0x497EA50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022B")]
	public string Nonce
	{
		[Token(Token = "0x600099A")]
		[Address(RVA = "0x497EA80", Offset = "0x497EA80", VA = "0x497EA80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022C")]
	public string Opaque
	{
		[Token(Token = "0x600099B")]
		[Address(RVA = "0x497EAB0", Offset = "0x497EAB0", VA = "0x497EAB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022D")]
	public string QOP
	{
		[Token(Token = "0x600099C")]
		[Address(RVA = "0x497EAE0", Offset = "0x497EAE0", VA = "0x497EAE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022E")]
	public string CNonce
	{
		[Token(Token = "0x600099D")]
		[Address(RVA = "0x497EB10", Offset = "0x497EB10", VA = "0x497EB10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022F")]
	public DateTime LastUse
	{
		[Token(Token = "0x60009A4")]
		[Address(RVA = "0x497F850", Offset = "0x497F850", VA = "0x497F850")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x6000996")]
	[Address(RVA = "0x497E970", Offset = "0x497E970", VA = "0x497E970")]
	static DigestSession()
	{
	}

	[Token(Token = "0x6000997")]
	[Address(RVA = "0x497E9C0", Offset = "0x497E9C0", VA = "0x497E9C0")]
	public DigestSession()
	{
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x497EC10", Offset = "0x497EC10", VA = "0x497EC10")]
	public bool Parse(string challenge)
	{
		return default(bool);
	}

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x497ED10", Offset = "0x497ED10", VA = "0x497ED10")]
	private string HashToHexString(string toBeHashed)
	{
		return null;
	}

	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x497EEA0", Offset = "0x497EEA0", VA = "0x497EEA0")]
	private string HA1(string username, string password)
	{
		return null;
	}

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x497EFE0", Offset = "0x497EFE0", VA = "0x497EFE0")]
	private string HA2(HttpWebRequest webRequest)
	{
		return null;
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x497F0C0", Offset = "0x497F0C0", VA = "0x497F0C0")]
	private string Response(string username, string password, HttpWebRequest webRequest)
	{
		return null;
	}

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x497F220", Offset = "0x497F220", VA = "0x497F220")]
	public Authorization Authenticate(WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}
}
