// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.HashAlgorithmName
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002F2")]
public readonly struct HashAlgorithmName : IEquatable<HashAlgorithmName>
{
	[Token(Token = "0x4000CCA")]
	[FieldOffset(Offset = "0x0")]
	private readonly string _name;

	[Token(Token = "0x17000280")]
	public static HashAlgorithmName MD5
	{
		[Token(Token = "0x60018AE")]
		[Address(RVA = "0x19AA000", Offset = "0x19A8600", VA = "0x1819AA000")]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x17000281")]
	public static HashAlgorithmName SHA1
	{
		[Token(Token = "0x60018AF")]
		[Address(RVA = "0x19AA040", Offset = "0x19A8640", VA = "0x1819AA040")]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x17000282")]
	public static HashAlgorithmName SHA256
	{
		[Token(Token = "0x60018B0")]
		[Address(RVA = "0x19AA080", Offset = "0x19A8680", VA = "0x1819AA080")]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x17000283")]
	public static HashAlgorithmName SHA384
	{
		[Token(Token = "0x60018B1")]
		[Address(RVA = "0x19AA0C0", Offset = "0x19A86C0", VA = "0x1819AA0C0")]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x17000284")]
	public static HashAlgorithmName SHA512
	{
		[Token(Token = "0x60018B2")]
		[Address(RVA = "0x19AA100", Offset = "0x19A8700", VA = "0x1819AA100")]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x17000285")]
	public string Name
	{
		[Token(Token = "0x60018B4")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60018B3")]
	[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
	public HashAlgorithmName(string name)
	{
	}

	[Token(Token = "0x60018B5")]
	[Address(RVA = "0x19A9FE0", Offset = "0x19A85E0", VA = "0x1819A9FE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60018B6")]
	[Address(RVA = "0x19A9F20", Offset = "0x19A8520", VA = "0x1819A9F20", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60018B7")]
	[Address(RVA = "0x19A9FB0", Offset = "0x19A85B0", VA = "0x1819A9FB0", Slot = "4")]
	public bool Equals(HashAlgorithmName other)
	{
		return default(bool);
	}

	[Token(Token = "0x60018B8")]
	[Address(RVA = "0x19A9FC0", Offset = "0x19A85C0", VA = "0x1819A9FC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60018B9")]
	[Address(RVA = "0x19AA140", Offset = "0x19A8740", VA = "0x1819AA140")]
	public static bool operator ==(HashAlgorithmName left, HashAlgorithmName right)
	{
		return default(bool);
	}

	[Token(Token = "0x60018BA")]
	[Address(RVA = "0x19AA150", Offset = "0x19A8750", VA = "0x1819AA150")]
	public static bool operator !=(HashAlgorithmName left, HashAlgorithmName right)
	{
		return default(bool);
	}
}
