// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RSAEncryptionPadding
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002CC")]
public sealed class RSAEncryptionPadding : IEquatable<RSAEncryptionPadding>
{
	[Token(Token = "0x4000C2B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly RSAEncryptionPadding s_pkcs1;

	[Token(Token = "0x4000C2C")]
	[FieldOffset(Offset = "0x8")]
	private static readonly RSAEncryptionPadding s_oaepSHA1;

	[Token(Token = "0x4000C2D")]
	[FieldOffset(Offset = "0x10")]
	private static readonly RSAEncryptionPadding s_oaepSHA256;

	[Token(Token = "0x4000C2E")]
	[FieldOffset(Offset = "0x18")]
	private static readonly RSAEncryptionPadding s_oaepSHA384;

	[Token(Token = "0x4000C2F")]
	[FieldOffset(Offset = "0x20")]
	private static readonly RSAEncryptionPadding s_oaepSHA512;

	[Token(Token = "0x4000C30")]
	[FieldOffset(Offset = "0x10")]
	private RSAEncryptionPaddingMode _mode;

	[Token(Token = "0x4000C31")]
	[FieldOffset(Offset = "0x18")]
	private HashAlgorithmName _oaepHashAlgorithm;

	[Token(Token = "0x17000285")]
	public static RSAEncryptionPadding Pkcs1
	{
		[Token(Token = "0x6001898")]
		[Address(RVA = "0x5334FA0", Offset = "0x5333FA0", VA = "0x5334FA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000286")]
	public static RSAEncryptionPadding OaepSHA1
	{
		[Token(Token = "0x6001899")]
		[Address(RVA = "0x5335010", Offset = "0x5334010", VA = "0x5335010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000287")]
	public static RSAEncryptionPadding OaepSHA256
	{
		[Token(Token = "0x600189A")]
		[Address(RVA = "0x5335080", Offset = "0x5334080", VA = "0x5335080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000288")]
	public static RSAEncryptionPadding OaepSHA384
	{
		[Token(Token = "0x600189B")]
		[Address(RVA = "0x53350F0", Offset = "0x53340F0", VA = "0x53350F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000289")]
	public static RSAEncryptionPadding OaepSHA512
	{
		[Token(Token = "0x600189C")]
		[Address(RVA = "0x5335160", Offset = "0x5334160", VA = "0x5335160")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028A")]
	public RSAEncryptionPaddingMode Mode
	{
		[Token(Token = "0x600189F")]
		[Address(RVA = "0x53352E0", Offset = "0x53342E0", VA = "0x53352E0")]
		get
		{
			return default(RSAEncryptionPaddingMode);
		}
	}

	[Token(Token = "0x1700028B")]
	public HashAlgorithmName OaepHashAlgorithm
	{
		[Token(Token = "0x60018A0")]
		[Address(RVA = "0x53352F0", Offset = "0x53342F0", VA = "0x53352F0")]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x600189D")]
	[Address(RVA = "0x53351D0", Offset = "0x53341D0", VA = "0x53351D0")]
	private RSAEncryptionPadding(RSAEncryptionPaddingMode mode, HashAlgorithmName oaepHashAlgorithm)
	{
	}

	[Token(Token = "0x600189E")]
	[Address(RVA = "0x5335200", Offset = "0x5334200", VA = "0x5335200")]
	public static RSAEncryptionPadding CreateOaep(HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x60018A1")]
	[Address(RVA = "0x5335300", Offset = "0x5334300", VA = "0x5335300", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60018A2")]
	[Address(RVA = "0x5335370", Offset = "0x5334370", VA = "0x5335370")]
	private static int CombineHashCodes(int h1, int h2)
	{
		return default(int);
	}

	[Token(Token = "0x60018A3")]
	[Address(RVA = "0x5335380", Offset = "0x5334380", VA = "0x5335380", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60018A4")]
	[Address(RVA = "0x53353E0", Offset = "0x53343E0", VA = "0x53353E0", Slot = "4")]
	public bool Equals(RSAEncryptionPadding other)
	{
		return default(bool);
	}

	[Token(Token = "0x60018A5")]
	[Address(RVA = "0x53355B0", Offset = "0x53345B0", VA = "0x53355B0")]
	public static bool operator ==(RSAEncryptionPadding left, RSAEncryptionPadding right)
	{
		return default(bool);
	}

	[Token(Token = "0x60018A6")]
	[Address(RVA = "0x5335530", Offset = "0x5334530", VA = "0x5335530")]
	public static bool operator !=(RSAEncryptionPadding left, RSAEncryptionPadding right)
	{
		return default(bool);
	}

	[Token(Token = "0x60018A7")]
	[Address(RVA = "0x53355D0", Offset = "0x53345D0", VA = "0x53355D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60018A9")]
	[Address(RVA = "0x5335760", Offset = "0x5334760", VA = "0x5335760")]
	internal RSAEncryptionPadding()
	{
	}
}
