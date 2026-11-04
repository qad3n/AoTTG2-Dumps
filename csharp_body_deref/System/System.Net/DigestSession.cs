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

[Token(Token = "0x2000319")]
internal class DigestSession
{
	[Token(Token = "0x4000BD8")]
	[FieldOffset(Offset = "0x0")]
	private static RandomNumberGenerator rng;

	[Token(Token = "0x4000BD9")]
	[FieldOffset(Offset = "0x10")]
	private DateTime lastUse;

	[Token(Token = "0x4000BDA")]
	[FieldOffset(Offset = "0x18")]
	private int _nc;

	[Token(Token = "0x4000BDB")]
	[FieldOffset(Offset = "0x20")]
	private HashAlgorithm hash;

	[Token(Token = "0x4000BDC")]
	[FieldOffset(Offset = "0x28")]
	private DigestHeaderParser parser;

	[Token(Token = "0x4000BDD")]
	[FieldOffset(Offset = "0x30")]
	private string _cnonce;

	[Token(Token = "0x1700047E")]
	public string Algorithm
	{
		[Token(Token = "0x6001558")]
		[Address(RVA = "0x27DFEA0", Offset = "0x27DE4A0", VA = "0x1827DFEA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700047F")]
	public string Realm
	{
		[Token(Token = "0x6001559")]
		[Address(RVA = "0x27E00A0", Offset = "0x27DE6A0", VA = "0x1827E00A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000480")]
	public string Nonce
	{
		[Token(Token = "0x600155A")]
		[Address(RVA = "0x27DFFE0", Offset = "0x27DE5E0", VA = "0x1827DFFE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000481")]
	public string Opaque
	{
		[Token(Token = "0x600155B")]
		[Address(RVA = "0x27E0020", Offset = "0x27DE620", VA = "0x1827E0020")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000482")]
	public string QOP
	{
		[Token(Token = "0x600155C")]
		[Address(RVA = "0x27E0060", Offset = "0x27DE660", VA = "0x1827E0060")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000483")]
	public string CNonce
	{
		[Token(Token = "0x600155D")]
		[Address(RVA = "0x27DFEE0", Offset = "0x27DE4E0", VA = "0x1827DFEE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000484")]
	public DateTime LastUse
	{
		[Token(Token = "0x6001564")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x6001556")]
	[Address(RVA = "0x27DFDE0", Offset = "0x27DE3E0", VA = "0x1827DFDE0")]
	static DigestSession()
	{
	}

	[Token(Token = "0x6001557")]
	[Address(RVA = "0x27DFE40", Offset = "0x27DE440", VA = "0x1827DFE40")]
	public DigestSession()
	{
	}

	[Token(Token = "0x600155E")]
	[Address(RVA = "0x27DF8D0", Offset = "0x27DDED0", VA = "0x1827DF8D0")]
	public bool Parse(string challenge)
	{
		return default(bool);
	}

	[Token(Token = "0x600155F")]
	[Address(RVA = "0x27DF770", Offset = "0x27DDD70", VA = "0x1827DF770")]
	private string HashToHexString(string toBeHashed)
	{
		return null;
	}

	[Token(Token = "0x6001560")]
	[Address(RVA = "0x27DF520", Offset = "0x27DDB20", VA = "0x1827DF520")]
	private string HA1(string username, string password)
	{
		return null;
	}

	[Token(Token = "0x6001561")]
	[Address(RVA = "0x27DF680", Offset = "0x27DDC80", VA = "0x1827DF680")]
	private string HA2(HttpWebRequest webRequest)
	{
		return null;
	}

	[Token(Token = "0x6001562")]
	[Address(RVA = "0x27DFA90", Offset = "0x27DE090", VA = "0x1827DFA90")]
	private string Response(string username, string password, HttpWebRequest webRequest)
	{
		return null;
	}

	[Token(Token = "0x6001563")]
	[Address(RVA = "0x27DEF70", Offset = "0x27DD570", VA = "0x1827DEF70")]
	public Authorization Authenticate(WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}
}
