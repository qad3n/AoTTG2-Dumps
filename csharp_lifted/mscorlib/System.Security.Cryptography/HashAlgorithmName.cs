// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.HashAlgorithmName
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002CB")]
public readonly struct HashAlgorithmName : IEquatable<HashAlgorithmName>
{
	[Token(Token = "0x4000C2A")]
	[FieldOffset(Offset = "0x0")]
	private readonly string _name;

	[Token(Token = "0x1700027F")]
	public static HashAlgorithmName MD5
	{
		[Token(Token = "0x600188B")]
		[Address(RVA = "0x5334B70", Offset = "0x5333B70", VA = "0x5334B70")]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x17000280")]
	public static HashAlgorithmName SHA1
	{
		[Token(Token = "0x600188C")]
		[Address(RVA = "0x532D970", Offset = "0x532C970", VA = "0x532D970")]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x17000281")]
	public static HashAlgorithmName SHA256
	{
		[Token(Token = "0x600188D")]
		[Address(RVA = "0x532EF10", Offset = "0x532DF10", VA = "0x532EF10")]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x17000282")]
	public static HashAlgorithmName SHA384
	{
		[Token(Token = "0x600188E")]
		[Address(RVA = "0x532EF50", Offset = "0x532DF50", VA = "0x532EF50")]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x17000283")]
	public static HashAlgorithmName SHA512
	{
		[Token(Token = "0x600188F")]
		[Address(RVA = "0x532EF90", Offset = "0x532DF90", VA = "0x532EF90")]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x17000284")]
	public string Name
	{
		[Token(Token = "0x6001891")]
		[Address(RVA = "0x5334BC0", Offset = "0x5333BC0", VA = "0x5334BC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001890")]
	[Address(RVA = "0x5334BB0", Offset = "0x5333BB0", VA = "0x5334BB0")]
	public HashAlgorithmName(string name)
	{
	}

	[Token(Token = "0x6001892")]
	[Address(RVA = "0x5334BD0", Offset = "0x5333BD0", VA = "0x5334BD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001893")]
	[Address(RVA = "0x5334C00", Offset = "0x5333C00", VA = "0x5334C00", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001894")]
	[Address(RVA = "0x5334C60", Offset = "0x5333C60", VA = "0x5334C60", Slot = "4")]
	public bool Equals(HashAlgorithmName other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001895")]
	[Address(RVA = "0x5334C70", Offset = "0x5333C70", VA = "0x5334C70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001896")]
	[Address(RVA = "0x532EF00", Offset = "0x532DF00", VA = "0x532EF00")]
	public static bool operator ==(HashAlgorithmName left, HashAlgorithmName right)
	{
		return default(bool);
	}

	[Token(Token = "0x6001897")]
	[Address(RVA = "0x5334C90", Offset = "0x5333C90", VA = "0x5334C90")]
	public static bool operator !=(HashAlgorithmName left, HashAlgorithmName right)
	{
		return default(bool);
	}
}
