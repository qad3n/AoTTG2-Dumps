// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.DigestHeaderParser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000318")]
internal class DigestHeaderParser
{
	[Token(Token = "0x4000BD3")]
	[FieldOffset(Offset = "0x10")]
	private string header;

	[Token(Token = "0x4000BD4")]
	[FieldOffset(Offset = "0x18")]
	private int length;

	[Token(Token = "0x4000BD5")]
	[FieldOffset(Offset = "0x1C")]
	private int pos;

	[Token(Token = "0x4000BD6")]
	[FieldOffset(Offset = "0x0")]
	private static string[] keywords;

	[Token(Token = "0x4000BD7")]
	[FieldOffset(Offset = "0x20")]
	private string[] values;

	[Token(Token = "0x17000479")]
	public string Realm
	{
		[Token(Token = "0x600154C")]
		[Address(RVA = "0x1AA40B0", Offset = "0x1AA26B0", VA = "0x181AA40B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700047A")]
	public string Opaque
	{
		[Token(Token = "0x600154D")]
		[Address(RVA = "0x1AA3FC0", Offset = "0x1AA25C0", VA = "0x181AA3FC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700047B")]
	public string Nonce
	{
		[Token(Token = "0x600154E")]
		[Address(RVA = "0x1AA4020", Offset = "0x1AA2620", VA = "0x181AA4020")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700047C")]
	public string Algorithm
	{
		[Token(Token = "0x600154F")]
		[Address(RVA = "0x1AA4050", Offset = "0x1AA2650", VA = "0x181AA4050")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700047D")]
	public string QOP
	{
		[Token(Token = "0x6001550")]
		[Address(RVA = "0x1AA4080", Offset = "0x1AA2680", VA = "0x181AA4080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600154B")]
	[Address(RVA = "0x27DEEB0", Offset = "0x27DD4B0", VA = "0x1827DEEB0")]
	public DigestHeaderParser(string header)
	{
	}

	[Token(Token = "0x6001551")]
	[Address(RVA = "0x27DEB30", Offset = "0x27DD130", VA = "0x1827DEB30")]
	public bool Parse()
	{
		return default(bool);
	}

	[Token(Token = "0x6001552")]
	[Address(RVA = "0x27DECF0", Offset = "0x27DD2F0", VA = "0x1827DECF0")]
	private void SkipWhitespace()
	{
	}

	[Token(Token = "0x6001553")]
	[Address(RVA = "0x27DE7E0", Offset = "0x27DCDE0", VA = "0x1827DE7E0")]
	private string GetKey()
	{
		return null;
	}

	[Token(Token = "0x6001554")]
	[Address(RVA = "0x27DE8C0", Offset = "0x27DCEC0", VA = "0x1827DE8C0")]
	private bool GetKeywordAndValue(out string key, out string value)
	{
		return default(bool);
	}
}
