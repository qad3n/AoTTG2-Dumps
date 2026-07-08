using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000190")]
internal class DigestHeaderParser
{
	[Token(Token = "0x40007BD")]
	[FieldOffset(Offset = "0x10")]
	private string header;

	[Token(Token = "0x40007BE")]
	[FieldOffset(Offset = "0x18")]
	private int length;

	[Token(Token = "0x40007BF")]
	[FieldOffset(Offset = "0x1C")]
	private int pos;

	[Token(Token = "0x40007C0")]
	[FieldOffset(Offset = "0x0")]
	private static string[] keywords;

	[Token(Token = "0x40007C1")]
	[FieldOffset(Offset = "0x20")]
	private string[] values;

	[Token(Token = "0x17000224")]
	public string Realm
	{
		[Token(Token = "0x600098C")]
		[Address(RVA = "0x46590C0", Offset = "0x46590C0", VA = "0x46590C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000225")]
	public string Opaque
	{
		[Token(Token = "0x600098D")]
		[Address(RVA = "0x46590E0", Offset = "0x46590E0", VA = "0x46590E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000226")]
	public string Nonce
	{
		[Token(Token = "0x600098E")]
		[Address(RVA = "0x4659100", Offset = "0x4659100", VA = "0x4659100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000227")]
	public string Algorithm
	{
		[Token(Token = "0x600098F")]
		[Address(RVA = "0x4659120", Offset = "0x4659120", VA = "0x4659120")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000228")]
	public string QOP
	{
		[Token(Token = "0x6000990")]
		[Address(RVA = "0x4659140", Offset = "0x4659140", VA = "0x4659140")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600098B")]
	[Address(RVA = "0x4658FE0", Offset = "0x4658FE0", VA = "0x4658FE0")]
	public DigestHeaderParser(string header)
	{
	}

	[Token(Token = "0x6000991")]
	[Address(RVA = "0x4659160", Offset = "0x4659160", VA = "0x4659160")]
	public bool Parse()
	{
		return default(bool);
	}

	[Token(Token = "0x6000992")]
	[Address(RVA = "0x46595C0", Offset = "0x46595C0", VA = "0x46595C0")]
	private void SkipWhitespace()
	{
	}

	[Token(Token = "0x6000993")]
	[Address(RVA = "0x4659620", Offset = "0x4659620", VA = "0x4659620")]
	private string GetKey()
	{
		return null;
	}

	[Token(Token = "0x6000994")]
	[Address(RVA = "0x4659390", Offset = "0x4659390", VA = "0x4659390")]
	private bool GetKeywordAndValue(out string key, out string value)
	{
		return default(bool);
	}
}
