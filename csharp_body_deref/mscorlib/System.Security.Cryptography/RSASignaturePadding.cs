// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RSASignaturePadding
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002C6")]
public sealed class RSASignaturePadding : IEquatable<RSASignaturePadding>
{
	[Token(Token = "0x4000CC8")]
	[FieldOffset(Offset = "0x0")]
	private static readonly RSASignaturePadding s_pkcs1;

	[Token(Token = "0x4000CC9")]
	[FieldOffset(Offset = "0x8")]
	private static readonly RSASignaturePadding s_pss;

	[Token(Token = "0x4000CCA")]
	[FieldOffset(Offset = "0x10")]
	private readonly RSASignaturePaddingMode _mode;

	[Token(Token = "0x1700028B")]
	public static RSASignaturePadding Pkcs1
	{
		[Token(Token = "0x6001866")]
		[Address(RVA = "0x3B2B790", Offset = "0x3B2B790", VA = "0x3B2B790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028C")]
	public static RSASignaturePadding Pss
	{
		[Token(Token = "0x6001867")]
		[Address(RVA = "0x3B2B800", Offset = "0x3B2B800", VA = "0x3B2B800")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028D")]
	public RSASignaturePaddingMode Mode
	{
		[Token(Token = "0x6001868")]
		[Address(RVA = "0x3B2B870", Offset = "0x3B2B870", VA = "0x3B2B870")]
		get
		{
			return default(RSASignaturePaddingMode);
		}
	}

	[Token(Token = "0x6001865")]
	[Address(RVA = "0x3B2B770", Offset = "0x3B2B770", VA = "0x3B2B770")]
	private RSASignaturePadding(RSASignaturePaddingMode mode)
	{
	}

	[Token(Token = "0x6001869")]
	[Address(RVA = "0x3B2B880", Offset = "0x3B2B880", VA = "0x3B2B880", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600186A")]
	[Address(RVA = "0x3B2B890", Offset = "0x3B2B890", VA = "0x3B2B890", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600186B")]
	[Address(RVA = "0x3B2B8E0", Offset = "0x3B2B8E0", VA = "0x3B2B8E0", Slot = "4")]
	public bool Equals(RSASignaturePadding other)
	{
		return default(bool);
	}

	[Token(Token = "0x600186C")]
	[Address(RVA = "0x3B2BAE0", Offset = "0x3B2BAE0", VA = "0x3B2BAE0")]
	public static bool operator ==(RSASignaturePadding left, RSASignaturePadding right)
	{
		return default(bool);
	}

	[Token(Token = "0x600186D")]
	[Address(RVA = "0x3B2BA60", Offset = "0x3B2BA60", VA = "0x3B2BA60")]
	public static bool operator !=(RSASignaturePadding left, RSASignaturePadding right)
	{
		return default(bool);
	}

	[Token(Token = "0x600186E")]
	[Address(RVA = "0x3B2BB00", Offset = "0x3B2BB00", VA = "0x3B2BB00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001870")]
	[Address(RVA = "0x3B2BC00", Offset = "0x3B2BC00", VA = "0x3B2BC00")]
	internal RSASignaturePadding()
	{
	}
}
