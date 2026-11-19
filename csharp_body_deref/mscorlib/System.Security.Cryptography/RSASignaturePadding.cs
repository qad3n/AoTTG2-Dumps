// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RSASignaturePadding
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002CE")]
public sealed class RSASignaturePadding : IEquatable<RSASignaturePadding>
{
	[Token(Token = "0x4000C35")]
	[FieldOffset(Offset = "0x0")]
	private static readonly RSASignaturePadding s_pkcs1;

	[Token(Token = "0x4000C36")]
	[FieldOffset(Offset = "0x8")]
	private static readonly RSASignaturePadding s_pss;

	[Token(Token = "0x4000C37")]
	[FieldOffset(Offset = "0x10")]
	private readonly RSASignaturePaddingMode _mode;

	[Token(Token = "0x1700028C")]
	public static RSASignaturePadding Pkcs1
	{
		[Token(Token = "0x60018AB")]
		[Address(RVA = "0x53357B0", Offset = "0x53347B0", VA = "0x53357B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028D")]
	public static RSASignaturePadding Pss
	{
		[Token(Token = "0x60018AC")]
		[Address(RVA = "0x5335820", Offset = "0x5334820", VA = "0x5335820")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028E")]
	public RSASignaturePaddingMode Mode
	{
		[Token(Token = "0x60018AD")]
		[Address(RVA = "0x5335890", Offset = "0x5334890", VA = "0x5335890")]
		get
		{
			return default(RSASignaturePaddingMode);
		}
	}

	[Token(Token = "0x60018AA")]
	[Address(RVA = "0x5335790", Offset = "0x5334790", VA = "0x5335790")]
	private RSASignaturePadding(RSASignaturePaddingMode mode)
	{
	}

	[Token(Token = "0x60018AE")]
	[Address(RVA = "0x53358A0", Offset = "0x53348A0", VA = "0x53358A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60018AF")]
	[Address(RVA = "0x53358B0", Offset = "0x53348B0", VA = "0x53358B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60018B0")]
	[Address(RVA = "0x5335910", Offset = "0x5334910", VA = "0x5335910", Slot = "4")]
	public bool Equals(RSASignaturePadding other)
	{
		return default(bool);
	}

	[Token(Token = "0x60018B1")]
	[Address(RVA = "0x5335B10", Offset = "0x5334B10", VA = "0x5335B10")]
	public static bool operator ==(RSASignaturePadding left, RSASignaturePadding right)
	{
		return default(bool);
	}

	[Token(Token = "0x60018B2")]
	[Address(RVA = "0x5335A90", Offset = "0x5334A90", VA = "0x5335A90")]
	public static bool operator !=(RSASignaturePadding left, RSASignaturePadding right)
	{
		return default(bool);
	}

	[Token(Token = "0x60018B3")]
	[Address(RVA = "0x5335B30", Offset = "0x5334B30", VA = "0x5335B30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60018B5")]
	[Address(RVA = "0x5335C30", Offset = "0x5334C30", VA = "0x5335C30")]
	internal RSASignaturePadding()
	{
	}
}
