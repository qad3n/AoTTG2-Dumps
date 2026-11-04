// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RSAEncryptionPadding
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002F3")]
public sealed class RSAEncryptionPadding : IEquatable<RSAEncryptionPadding>
{
	[Token(Token = "0x4000CCB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly RSAEncryptionPadding s_pkcs1;

	[Token(Token = "0x4000CCC")]
	[FieldOffset(Offset = "0x8")]
	private static readonly RSAEncryptionPadding s_oaepSHA1;

	[Token(Token = "0x4000CCD")]
	[FieldOffset(Offset = "0x10")]
	private static readonly RSAEncryptionPadding s_oaepSHA256;

	[Token(Token = "0x4000CCE")]
	[FieldOffset(Offset = "0x18")]
	private static readonly RSAEncryptionPadding s_oaepSHA384;

	[Token(Token = "0x4000CCF")]
	[FieldOffset(Offset = "0x20")]
	private static readonly RSAEncryptionPadding s_oaepSHA512;

	[Token(Token = "0x4000CD0")]
	[FieldOffset(Offset = "0x10")]
	private RSAEncryptionPaddingMode _mode;

	[Token(Token = "0x4000CD1")]
	[FieldOffset(Offset = "0x18")]
	private HashAlgorithmName _oaepHashAlgorithm;

	[Token(Token = "0x17000286")]
	public static RSAEncryptionPadding Pkcs1
	{
		[Token(Token = "0x60018BB")]
		[Address(RVA = "0x19B13A0", Offset = "0x19AF9A0", VA = "0x1819B13A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000287")]
	public static RSAEncryptionPadding OaepSHA1
	{
		[Token(Token = "0x60018BC")]
		[Address(RVA = "0x19B1260", Offset = "0x19AF860", VA = "0x1819B1260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000288")]
	public static RSAEncryptionPadding OaepSHA256
	{
		[Token(Token = "0x60018BD")]
		[Address(RVA = "0x19B12B0", Offset = "0x19AF8B0", VA = "0x1819B12B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000289")]
	public static RSAEncryptionPadding OaepSHA384
	{
		[Token(Token = "0x60018BE")]
		[Address(RVA = "0x19B1300", Offset = "0x19AF900", VA = "0x1819B1300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028A")]
	public static RSAEncryptionPadding OaepSHA512
	{
		[Token(Token = "0x60018BF")]
		[Address(RVA = "0x19B1350", Offset = "0x19AF950", VA = "0x1819B1350")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028B")]
	public RSAEncryptionPaddingMode Mode
	{
		[Token(Token = "0x60018C2")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(RSAEncryptionPaddingMode);
		}
	}

	[Token(Token = "0x1700028C")]
	public HashAlgorithmName OaepHashAlgorithm
	{
		[Token(Token = "0x60018C3")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x60018C0")]
	[Address(RVA = "0x19B11F0", Offset = "0x19AF7F0", VA = "0x1819B11F0")]
	private RSAEncryptionPadding(RSAEncryptionPaddingMode mode, HashAlgorithmName oaepHashAlgorithm)
	{
	}

	[Token(Token = "0x60018C1")]
	[Address(RVA = "0x19B0CD0", Offset = "0x19AF2D0", VA = "0x1819B0CD0")]
	public static RSAEncryptionPadding CreateOaep(HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x60018C4")]
	[Address(RVA = "0x19B0ED0", Offset = "0x19AF4D0", VA = "0x1819B0ED0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60018C5")]
	[Address(RVA = "0xA43250", Offset = "0xA41850", VA = "0x180A43250")]
	private static int CombineHashCodes(int h1, int h2)
	{
		return default(int);
	}

	[Token(Token = "0x60018C6")]
	[Address(RVA = "0x19B0DB0", Offset = "0x19AF3B0", VA = "0x1819B0DB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60018C7")]
	[Address(RVA = "0x19B0E10", Offset = "0x19AF410", VA = "0x1819B0E10", Slot = "4")]
	public bool Equals(RSAEncryptionPadding other)
	{
		return default(bool);
	}

	[Token(Token = "0x60018C8")]
	[Address(RVA = "0x19B13F0", Offset = "0x19AF9F0", VA = "0x1819B13F0")]
	public static bool operator ==(RSAEncryptionPadding left, RSAEncryptionPadding right)
	{
		return default(bool);
	}

	[Token(Token = "0x60018C9")]
	[Address(RVA = "0x19B1410", Offset = "0x19AFA10", VA = "0x1819B1410")]
	public static bool operator !=(RSAEncryptionPadding left, RSAEncryptionPadding right)
	{
		return default(bool);
	}

	[Token(Token = "0x60018CA")]
	[Address(RVA = "0x19B0F50", Offset = "0x19AF550", VA = "0x1819B0F50", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60018CC")]
	[Address(RVA = "0x19B1230", Offset = "0x19AF830", VA = "0x1819B1230")]
	internal RSAEncryptionPadding()
	{
	}
}
