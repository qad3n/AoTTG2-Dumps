// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RSAEncryptionPadding
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3B2AE70", Offset = "0x3B2AE70", VA = "0x3B2AE70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000285")]
	public static RSAEncryptionPadding OaepSHA1
	{
		[Token(Token = "0x6001854")]
		[Address(RVA = "0x3B2AEE0", Offset = "0x3B2AEE0", VA = "0x3B2AEE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000286")]
	public static RSAEncryptionPadding OaepSHA256
	{
		[Token(Token = "0x6001855")]
		[Address(RVA = "0x3B2AF50", Offset = "0x3B2AF50", VA = "0x3B2AF50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000287")]
	public static RSAEncryptionPadding OaepSHA384
	{
		[Token(Token = "0x6001856")]
		[Address(RVA = "0x3B2AFC0", Offset = "0x3B2AFC0", VA = "0x3B2AFC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000288")]
	public static RSAEncryptionPadding OaepSHA512
	{
		[Token(Token = "0x6001857")]
		[Address(RVA = "0x3B2B030", Offset = "0x3B2B030", VA = "0x3B2B030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000289")]
	public RSAEncryptionPaddingMode Mode
	{
		[Token(Token = "0x600185A")]
		[Address(RVA = "0x3B2B1B0", Offset = "0x3B2B1B0", VA = "0x3B2B1B0")]
		get
		{
			return default(RSAEncryptionPaddingMode);
		}
	}

	[Token(Token = "0x1700028A")]
	public HashAlgorithmName OaepHashAlgorithm
	{
		[Token(Token = "0x600185B")]
		[Address(RVA = "0x3B2B1C0", Offset = "0x3B2B1C0", VA = "0x3B2B1C0")]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x6001858")]
	[Address(RVA = "0x3B2B0A0", Offset = "0x3B2B0A0", VA = "0x3B2B0A0")]
	private RSAEncryptionPadding(RSAEncryptionPaddingMode mode, HashAlgorithmName oaepHashAlgorithm)
	{
	}

	[Token(Token = "0x6001859")]
	[Address(RVA = "0x3B2B0D0", Offset = "0x3B2B0D0", VA = "0x3B2B0D0")]
	public static RSAEncryptionPadding CreateOaep(HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x600185C")]
	[Address(RVA = "0x3B2B1D0", Offset = "0x3B2B1D0", VA = "0x3B2B1D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600185D")]
	[Address(RVA = "0x3B2B250", Offset = "0x3B2B250", VA = "0x3B2B250")]
	private static int CombineHashCodes(int h1, int h2)
	{
		return default(int);
	}

	[Token(Token = "0x600185E")]
	[Address(RVA = "0x3B2B260", Offset = "0x3B2B260", VA = "0x3B2B260", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600185F")]
	[Address(RVA = "0x3B2B2B0", Offset = "0x3B2B2B0", VA = "0x3B2B2B0", Slot = "4")]
	public bool Equals(RSAEncryptionPadding other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001860")]
	[Address(RVA = "0x3B2B4D0", Offset = "0x3B2B4D0", VA = "0x3B2B4D0")]
	public static bool operator ==(RSAEncryptionPadding left, RSAEncryptionPadding right)
	{
		return default(bool);
	}

	[Token(Token = "0x6001861")]
	[Address(RVA = "0x3B2B450", Offset = "0x3B2B450", VA = "0x3B2B450")]
	public static bool operator !=(RSAEncryptionPadding left, RSAEncryptionPadding right)
	{
		return default(bool);
	}

	[Token(Token = "0x6001862")]
	[Address(RVA = "0x3B2B4F0", Offset = "0x3B2B4F0", VA = "0x3B2B4F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001864")]
	[Address(RVA = "0x3B2B740", Offset = "0x3B2B740", VA = "0x3B2B740")]
	internal RSAEncryptionPadding()
	{
	}
}
