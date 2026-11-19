// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.DigestHeaderParser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002D9")]
internal class DigestHeaderParser
{
	[Token(Token = "0x4000B04")]
	[FieldOffset(Offset = "0x10")]
	private string header;

	[Token(Token = "0x4000B05")]
	[FieldOffset(Offset = "0x18")]
	private int length;

	[Token(Token = "0x4000B06")]
	[FieldOffset(Offset = "0x1C")]
	private int pos;

	[Token(Token = "0x4000B07")]
	[FieldOffset(Offset = "0x0")]
	private static string[] keywords;

	[Token(Token = "0x4000B08")]
	[FieldOffset(Offset = "0x20")]
	private string[] values;

	[Token(Token = "0x1700044A")]
	public string Realm
	{
		[Token(Token = "0x600138E")]
		[Address(RVA = "0x61809D0", Offset = "0x617F9D0", VA = "0x61809D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700044B")]
	public string Opaque
	{
		[Token(Token = "0x600138F")]
		[Address(RVA = "0x61809F0", Offset = "0x617F9F0", VA = "0x61809F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700044C")]
	public string Nonce
	{
		[Token(Token = "0x6001390")]
		[Address(RVA = "0x6180A20", Offset = "0x617FA20", VA = "0x6180A20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700044D")]
	public string Algorithm
	{
		[Token(Token = "0x6001391")]
		[Address(RVA = "0x6180A40", Offset = "0x617FA40", VA = "0x6180A40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700044E")]
	public string QOP
	{
		[Token(Token = "0x6001392")]
		[Address(RVA = "0x6180A70", Offset = "0x617FA70", VA = "0x6180A70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600138D")]
	[Address(RVA = "0x61808F0", Offset = "0x617F8F0", VA = "0x61808F0")]
	public DigestHeaderParser(string header)
	{
	}

	[Token(Token = "0x6001393")]
	[Address(RVA = "0x6180A90", Offset = "0x617FA90", VA = "0x6180A90")]
	public bool Parse()
	{
		return default(bool);
	}

	[Token(Token = "0x6001394")]
	[Address(RVA = "0x6180EE0", Offset = "0x617FEE0", VA = "0x6180EE0")]
	private void SkipWhitespace()
	{
	}

	[Token(Token = "0x6001395")]
	[Address(RVA = "0x6180F40", Offset = "0x617FF40", VA = "0x6180F40")]
	private string GetKey()
	{
		return null;
	}

	[Token(Token = "0x6001396")]
	[Address(RVA = "0x6180CB0", Offset = "0x617FCB0", VA = "0x6180CB0")]
	private bool GetKeywordAndValue(out string key, out string value)
	{
		return default(bool);
	}
}
