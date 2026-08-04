// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.HashAlgorithmName
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002C3")]
public readonly struct HashAlgorithmName : IEquatable<HashAlgorithmName>
{
	[Token(Token = "0x4000CBD")]
	[FieldOffset(Offset = "0x0")]
	private readonly string _name;

	[Token(Token = "0x1700027E")]
	public static HashAlgorithmName MD5
	{
		[Token(Token = "0x6001846")]
		[Address(RVA = "0x3B2AC30", Offset = "0x3B2AC30", VA = "0x3B2AC30")]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x1700027F")]
	public static HashAlgorithmName SHA1
	{
		[Token(Token = "0x6001847")]
		[Address(RVA = "0x3B2AC70", Offset = "0x3B2AC70", VA = "0x3B2AC70")]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x17000280")]
	public static HashAlgorithmName SHA256
	{
		[Token(Token = "0x6001848")]
		[Address(RVA = "0x3B2ACB0", Offset = "0x3B2ACB0", VA = "0x3B2ACB0")]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x17000281")]
	public static HashAlgorithmName SHA384
	{
		[Token(Token = "0x6001849")]
		[Address(RVA = "0x3B2ACF0", Offset = "0x3B2ACF0", VA = "0x3B2ACF0")]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x17000282")]
	public static HashAlgorithmName SHA512
	{
		[Token(Token = "0x600184A")]
		[Address(RVA = "0x3B2AD30", Offset = "0x3B2AD30", VA = "0x3B2AD30")]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x17000283")]
	public string Name
	{
		[Token(Token = "0x600184C")]
		[Address(RVA = "0x3B2AD80", Offset = "0x3B2AD80", VA = "0x3B2AD80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600184B")]
	[Address(RVA = "0x3B2AD70", Offset = "0x3B2AD70", VA = "0x3B2AD70")]
	public HashAlgorithmName(string name)
	{
	}

	[Token(Token = "0x600184D")]
	[Address(RVA = "0x3B2AD90", Offset = "0x3B2AD90", VA = "0x3B2AD90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600184E")]
	[Address(RVA = "0x3B2ADC0", Offset = "0x3B2ADC0", VA = "0x3B2ADC0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600184F")]
	[Address(RVA = "0x3B2AE20", Offset = "0x3B2AE20", VA = "0x3B2AE20", Slot = "4")]
	public bool Equals(HashAlgorithmName other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001850")]
	[Address(RVA = "0x3B2AE30", Offset = "0x3B2AE30", VA = "0x3B2AE30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001851")]
	[Address(RVA = "0x3B2AE50", Offset = "0x3B2AE50", VA = "0x3B2AE50")]
	public static bool operator ==(HashAlgorithmName left, HashAlgorithmName right)
	{
		return default(bool);
	}

	[Token(Token = "0x6001852")]
	[Address(RVA = "0x3B2AE60", Offset = "0x3B2AE60", VA = "0x3B2AE60")]
	public static bool operator !=(HashAlgorithmName left, HashAlgorithmName right)
	{
		return default(bool);
	}
}
