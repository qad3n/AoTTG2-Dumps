using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002C4")]
public sealed class RSAEncryptionPadding : IEquatable<RSAEncryptionPadding>
{
	[Token(Token = "0x4000CBE")]
	[FieldOffset(Offset = "0x0")]
	private static readonly RSAEncryptionPadding s_pkcs1;

	[Token(Token = "0x4000CBF")]
	[FieldOffset(Offset = "0x8")]
	private static readonly RSAEncryptionPadding s_oaepSHA1;

	[Token(Token = "0x4000CC0")]
	[FieldOffset(Offset = "0x10")]
	private static readonly RSAEncryptionPadding s_oaepSHA256;

	[Token(Token = "0x4000CC1")]
	[FieldOffset(Offset = "0x18")]
	private static readonly RSAEncryptionPadding s_oaepSHA384;

	[Token(Token = "0x4000CC2")]
	[FieldOffset(Offset = "0x20")]
	private static readonly RSAEncryptionPadding s_oaepSHA512;

	[Token(Token = "0x4000CC3")]
	[FieldOffset(Offset = "0x10")]
	private RSAEncryptionPaddingMode _mode;

	[Token(Token = "0x4000CC4")]
	[FieldOffset(Offset = "0x18")]
	private HashAlgorithmName _oaepHashAlgorithm;

	[Token(Token = "0x17000284")]
	public static RSAEncryptionPadding Pkcs1
	{
		[Token(Token = "0x6001853")]
		[Address(RVA = "0x4E45350", Offset = "0x4E45350", VA = "0x4E45350")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000285")]
	public static RSAEncryptionPadding OaepSHA1
	{
		[Token(Token = "0x6001854")]
		[Address(RVA = "0x4E453C0", Offset = "0x4E453C0", VA = "0x4E453C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000286")]
	public static RSAEncryptionPadding OaepSHA256
	{
		[Token(Token = "0x6001855")]
		[Address(RVA = "0x4E45430", Offset = "0x4E45430", VA = "0x4E45430")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000287")]
	public static RSAEncryptionPadding OaepSHA384
	{
		[Token(Token = "0x6001856")]
		[Address(RVA = "0x4E454A0", Offset = "0x4E454A0", VA = "0x4E454A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000288")]
	public static RSAEncryptionPadding OaepSHA512
	{
		[Token(Token = "0x6001857")]
		[Address(RVA = "0x4E45510", Offset = "0x4E45510", VA = "0x4E45510")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000289")]
	public RSAEncryptionPaddingMode Mode
	{
		[Token(Token = "0x600185A")]
		[Address(RVA = "0x4E45690", Offset = "0x4E45690", VA = "0x4E45690")]
		get
		{
			return default(RSAEncryptionPaddingMode);
		}
	}

	[Token(Token = "0x1700028A")]
	public HashAlgorithmName OaepHashAlgorithm
	{
		[Token(Token = "0x600185B")]
		[Address(RVA = "0x4E456A0", Offset = "0x4E456A0", VA = "0x4E456A0")]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x6001858")]
	[Address(RVA = "0x4E45580", Offset = "0x4E45580", VA = "0x4E45580")]
	private RSAEncryptionPadding(RSAEncryptionPaddingMode mode, HashAlgorithmName oaepHashAlgorithm)
	{
	}

	[Token(Token = "0x6001859")]
	[Address(RVA = "0x4E455B0", Offset = "0x4E455B0", VA = "0x4E455B0")]
	public static RSAEncryptionPadding CreateOaep(HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x600185C")]
	[Address(RVA = "0x4E456B0", Offset = "0x4E456B0", VA = "0x4E456B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600185D")]
	[Address(RVA = "0x4E45730", Offset = "0x4E45730", VA = "0x4E45730")]
	private static int CombineHashCodes(int h1, int h2)
	{
		return default(int);
	}

	[Token(Token = "0x600185E")]
	[Address(RVA = "0x4E45740", Offset = "0x4E45740", VA = "0x4E45740", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600185F")]
	[Address(RVA = "0x4E45790", Offset = "0x4E45790", VA = "0x4E45790", Slot = "4")]
	public bool Equals(RSAEncryptionPadding other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001860")]
	[Address(RVA = "0x4E459B0", Offset = "0x4E459B0", VA = "0x4E459B0")]
	public static bool operator ==(RSAEncryptionPadding left, RSAEncryptionPadding right)
	{
		return default(bool);
	}

	[Token(Token = "0x6001861")]
	[Address(RVA = "0x4E45930", Offset = "0x4E45930", VA = "0x4E45930")]
	public static bool operator !=(RSAEncryptionPadding left, RSAEncryptionPadding right)
	{
		return default(bool);
	}

	[Token(Token = "0x6001862")]
	[Address(RVA = "0x4E459D0", Offset = "0x4E459D0", VA = "0x4E459D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001864")]
	[Address(RVA = "0x4E45C20", Offset = "0x4E45C20", VA = "0x4E45C20")]
	internal RSAEncryptionPadding()
	{
	}
}
