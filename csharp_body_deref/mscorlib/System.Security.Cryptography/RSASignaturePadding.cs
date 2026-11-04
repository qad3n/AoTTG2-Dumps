// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RSASignaturePadding
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002F5")]
public sealed class RSASignaturePadding : IEquatable<RSASignaturePadding>
{
	[Token(Token = "0x4000CD5")]
	[FieldOffset(Offset = "0x0")]
	private static readonly RSASignaturePadding s_pkcs1;

	[Token(Token = "0x4000CD6")]
	[FieldOffset(Offset = "0x8")]
	private static readonly RSASignaturePadding s_pss;

	[Token(Token = "0x4000CD7")]
	[FieldOffset(Offset = "0x10")]
	private readonly RSASignaturePaddingMode _mode;

	[Token(Token = "0x1700028D")]
	public static RSASignaturePadding Pkcs1
	{
		[Token(Token = "0x60018CE")]
		[Address(RVA = "0x19B1700", Offset = "0x19AFD00", VA = "0x1819B1700")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028E")]
	public static RSASignaturePadding Pss
	{
		[Token(Token = "0x60018CF")]
		[Address(RVA = "0x19B1750", Offset = "0x19AFD50", VA = "0x1819B1750")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028F")]
	public RSASignaturePaddingMode Mode
	{
		[Token(Token = "0x60018D0")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(RSASignaturePaddingMode);
		}
	}

	[Token(Token = "0x60018CD")]
	[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
	private RSASignaturePadding(RSASignaturePaddingMode mode)
	{
	}

	[Token(Token = "0x60018D1")]
	[Address(RVA = "0x19B15A0", Offset = "0x19AFBA0", VA = "0x1819B15A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60018D2")]
	[Address(RVA = "0x19B1490", Offset = "0x19AFA90", VA = "0x1819B1490", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60018D3")]
	[Address(RVA = "0x19B14F0", Offset = "0x19AFAF0", VA = "0x1819B14F0", Slot = "4")]
	public bool Equals(RSASignaturePadding other)
	{
		return default(bool);
	}

	[Token(Token = "0x60018D4")]
	[Address(RVA = "0x19B17A0", Offset = "0x19AFDA0", VA = "0x1819B17A0")]
	public static bool operator ==(RSASignaturePadding left, RSASignaturePadding right)
	{
		return default(bool);
	}

	[Token(Token = "0x60018D5")]
	[Address(RVA = "0x19B17C0", Offset = "0x19AFDC0", VA = "0x1819B17C0")]
	public static bool operator !=(RSASignaturePadding left, RSASignaturePadding right)
	{
		return default(bool);
	}

	[Token(Token = "0x60018D6")]
	[Address(RVA = "0x19B15B0", Offset = "0x19AFBB0", VA = "0x1819B15B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60018D8")]
	[Address(RVA = "0x19B16D0", Offset = "0x19AFCD0", VA = "0x1819B16D0")]
	internal RSASignaturePadding()
	{
	}
}
