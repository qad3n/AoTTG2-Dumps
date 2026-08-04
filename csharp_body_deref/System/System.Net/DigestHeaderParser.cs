// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.DigestHeaderParser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x497E1C0", Offset = "0x497E1C0", VA = "0x497E1C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000225")]
	public string Opaque
	{
		[Token(Token = "0x600098D")]
		[Address(RVA = "0x497E1E0", Offset = "0x497E1E0", VA = "0x497E1E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000226")]
	public string Nonce
	{
		[Token(Token = "0x600098E")]
		[Address(RVA = "0x497E200", Offset = "0x497E200", VA = "0x497E200")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000227")]
	public string Algorithm
	{
		[Token(Token = "0x600098F")]
		[Address(RVA = "0x497E220", Offset = "0x497E220", VA = "0x497E220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000228")]
	public string QOP
	{
		[Token(Token = "0x6000990")]
		[Address(RVA = "0x497E240", Offset = "0x497E240", VA = "0x497E240")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600098B")]
	[Address(RVA = "0x497E0E0", Offset = "0x497E0E0", VA = "0x497E0E0")]
	public DigestHeaderParser(string header)
	{
	}

	[Token(Token = "0x6000991")]
	[Address(RVA = "0x497E260", Offset = "0x497E260", VA = "0x497E260")]
	public bool Parse()
	{
		return default(bool);
	}

	[Token(Token = "0x6000992")]
	[Address(RVA = "0x497E6C0", Offset = "0x497E6C0", VA = "0x497E6C0")]
	private void SkipWhitespace()
	{
	}

	[Token(Token = "0x6000993")]
	[Address(RVA = "0x497E720", Offset = "0x497E720", VA = "0x497E720")]
	private string GetKey()
	{
		return null;
	}

	[Token(Token = "0x6000994")]
	[Address(RVA = "0x497E490", Offset = "0x497E490", VA = "0x497E490")]
	private bool GetKeywordAndValue(out string key, out string value)
	{
		return default(bool);
	}
}
