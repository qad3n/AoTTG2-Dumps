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

[Token(Token = "0x20002DA")]
internal class DigestSession
{
	[Token(Token = "0x4000B09")]
	[FieldOffset(Offset = "0x0")]
	private static RandomNumberGenerator rng;

	[Token(Token = "0x4000B0A")]
	[FieldOffset(Offset = "0x10")]
	private DateTime lastUse;

	[Token(Token = "0x4000B0B")]
	[FieldOffset(Offset = "0x18")]
	private int _nc;

	[Token(Token = "0x4000B0C")]
	[FieldOffset(Offset = "0x20")]
	private HashAlgorithm hash;

	[Token(Token = "0x4000B0D")]
	[FieldOffset(Offset = "0x28")]
	private DigestHeaderParser parser;

	[Token(Token = "0x4000B0E")]
	[FieldOffset(Offset = "0x30")]
	private string _cnonce;

	[Token(Token = "0x1700044F")]
	public string Algorithm
	{
		[Token(Token = "0x600139A")]
		[Address(RVA = "0x6181240", Offset = "0x6180240", VA = "0x6181240")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000450")]
	public string Realm
	{
		[Token(Token = "0x600139B")]
		[Address(RVA = "0x6181270", Offset = "0x6180270", VA = "0x6181270")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000451")]
	public string Nonce
	{
		[Token(Token = "0x600139C")]
		[Address(RVA = "0x61812A0", Offset = "0x61802A0", VA = "0x61812A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000452")]
	public string Opaque
	{
		[Token(Token = "0x600139D")]
		[Address(RVA = "0x61812D0", Offset = "0x61802D0", VA = "0x61812D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000453")]
	public string QOP
	{
		[Token(Token = "0x600139E")]
		[Address(RVA = "0x6181300", Offset = "0x6180300", VA = "0x6181300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000454")]
	public string CNonce
	{
		[Token(Token = "0x600139F")]
		[Address(RVA = "0x6181330", Offset = "0x6180330", VA = "0x6181330")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000455")]
	public DateTime LastUse
	{
		[Token(Token = "0x60013A6")]
		[Address(RVA = "0x6182060", Offset = "0x6181060", VA = "0x6182060")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x6001398")]
	[Address(RVA = "0x6181190", Offset = "0x6180190", VA = "0x6181190")]
	static DigestSession()
	{
	}

	[Token(Token = "0x6001399")]
	[Address(RVA = "0x61811E0", Offset = "0x61801E0", VA = "0x61811E0")]
	public DigestSession()
	{
	}

	[Token(Token = "0x60013A0")]
	[Address(RVA = "0x6181430", Offset = "0x6180430", VA = "0x6181430")]
	public bool Parse(string challenge)
	{
		return default(bool);
	}

	[Token(Token = "0x60013A1")]
	[Address(RVA = "0x6181530", Offset = "0x6180530", VA = "0x6181530")]
	private string HashToHexString(string toBeHashed)
	{
		return null;
	}

	[Token(Token = "0x60013A2")]
	[Address(RVA = "0x61816C0", Offset = "0x61806C0", VA = "0x61816C0")]
	private string HA1(string username, string password)
	{
		return null;
	}

	[Token(Token = "0x60013A3")]
	[Address(RVA = "0x6181800", Offset = "0x6180800", VA = "0x6181800")]
	private string HA2(HttpWebRequest webRequest)
	{
		return null;
	}

	[Token(Token = "0x60013A4")]
	[Address(RVA = "0x61818E0", Offset = "0x61808E0", VA = "0x61818E0")]
	private string Response(string username, string password, HttpWebRequest webRequest)
	{
		return null;
	}

	[Token(Token = "0x60013A5")]
	[Address(RVA = "0x6181A40", Offset = "0x6180A40", VA = "0x6181A40")]
	public Authorization Authenticate(WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}
}
