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
		[Address(RVA = "0x4E45C70", Offset = "0x4E45C70", VA = "0x4E45C70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028C")]
	public static RSASignaturePadding Pss
	{
		[Token(Token = "0x6001867")]
		[Address(RVA = "0x4E45CE0", Offset = "0x4E45CE0", VA = "0x4E45CE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028D")]
	public RSASignaturePaddingMode Mode
	{
		[Token(Token = "0x6001868")]
		[Address(RVA = "0x4E45D50", Offset = "0x4E45D50", VA = "0x4E45D50")]
		get
		{
			return default(RSASignaturePaddingMode);
		}
	}

	[Token(Token = "0x6001865")]
	[Address(RVA = "0x4E45C50", Offset = "0x4E45C50", VA = "0x4E45C50")]
	private RSASignaturePadding(RSASignaturePaddingMode mode)
	{
	}

	[Token(Token = "0x6001869")]
	[Address(RVA = "0x4E45D60", Offset = "0x4E45D60", VA = "0x4E45D60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600186A")]
	[Address(RVA = "0x4E45D70", Offset = "0x4E45D70", VA = "0x4E45D70", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600186B")]
	[Address(RVA = "0x4E45DC0", Offset = "0x4E45DC0", VA = "0x4E45DC0", Slot = "4")]
	public bool Equals(RSASignaturePadding other)
	{
		return default(bool);
	}

	[Token(Token = "0x600186C")]
	[Address(RVA = "0x4E45FC0", Offset = "0x4E45FC0", VA = "0x4E45FC0")]
	public static bool operator ==(RSASignaturePadding left, RSASignaturePadding right)
	{
		return default(bool);
	}

	[Token(Token = "0x600186D")]
	[Address(RVA = "0x4E45F40", Offset = "0x4E45F40", VA = "0x4E45F40")]
	public static bool operator !=(RSASignaturePadding left, RSASignaturePadding right)
	{
		return default(bool);
	}

	[Token(Token = "0x600186E")]
	[Address(RVA = "0x4E45FE0", Offset = "0x4E45FE0", VA = "0x4E45FE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001870")]
	[Address(RVA = "0x4E460E0", Offset = "0x4E460E0", VA = "0x4E460E0")]
	internal RSASignaturePadding()
	{
	}
}
