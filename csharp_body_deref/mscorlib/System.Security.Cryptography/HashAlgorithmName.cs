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
		[Address(RVA = "0x4E45110", Offset = "0x4E45110", VA = "0x4E45110")]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x1700027F")]
	public static HashAlgorithmName SHA1
	{
		[Token(Token = "0x6001847")]
		[Address(RVA = "0x4E45150", Offset = "0x4E45150", VA = "0x4E45150")]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x17000280")]
	public static HashAlgorithmName SHA256
	{
		[Token(Token = "0x6001848")]
		[Address(RVA = "0x4E45190", Offset = "0x4E45190", VA = "0x4E45190")]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x17000281")]
	public static HashAlgorithmName SHA384
	{
		[Token(Token = "0x6001849")]
		[Address(RVA = "0x4E451D0", Offset = "0x4E451D0", VA = "0x4E451D0")]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x17000282")]
	public static HashAlgorithmName SHA512
	{
		[Token(Token = "0x600184A")]
		[Address(RVA = "0x4E45210", Offset = "0x4E45210", VA = "0x4E45210")]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x17000283")]
	public string Name
	{
		[Token(Token = "0x600184C")]
		[Address(RVA = "0x4E45260", Offset = "0x4E45260", VA = "0x4E45260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600184B")]
	[Address(RVA = "0x4E45250", Offset = "0x4E45250", VA = "0x4E45250")]
	public HashAlgorithmName(string name)
	{
	}

	[Token(Token = "0x600184D")]
	[Address(RVA = "0x4E45270", Offset = "0x4E45270", VA = "0x4E45270", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600184E")]
	[Address(RVA = "0x4E452A0", Offset = "0x4E452A0", VA = "0x4E452A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600184F")]
	[Address(RVA = "0x4E45300", Offset = "0x4E45300", VA = "0x4E45300", Slot = "4")]
	public bool Equals(HashAlgorithmName other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001850")]
	[Address(RVA = "0x4E45310", Offset = "0x4E45310", VA = "0x4E45310", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001851")]
	[Address(RVA = "0x4E45330", Offset = "0x4E45330", VA = "0x4E45330")]
	public static bool operator ==(HashAlgorithmName left, HashAlgorithmName right)
	{
		return default(bool);
	}

	[Token(Token = "0x6001852")]
	[Address(RVA = "0x4E45340", Offset = "0x4E45340", VA = "0x4E45340")]
	public static bool operator !=(HashAlgorithmName left, HashAlgorithmName right)
	{
		return default(bool);
	}
}
