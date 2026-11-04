// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.TripleDES
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x200033D")]
[ComVisible(true)]
public abstract class TripleDES : SymmetricAlgorithm
{
	[Token(Token = "0x4000D9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static KeySizes[] s_legalBlockSizes;

	[Token(Token = "0x4000D9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static KeySizes[] s_legalKeySizes;

	[Token(Token = "0x170002E8")]
	public override byte[] Key
	{
		[Token(Token = "0x6001B29")]
		[Address(RVA = "0x19D04B0", Offset = "0x19CEAB0", VA = "0x1819D04B0", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001B2A")]
		[Address(RVA = "0x19D0580", Offset = "0x19CEB80", VA = "0x1819D0580", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6001B28")]
	[Address(RVA = "0x19D0400", Offset = "0x19CEA00", VA = "0x1819D0400")]
	protected TripleDES()
	{
	}

	[Token(Token = "0x6001B2B")]
	[Address(RVA = "0x19CFDE0", Offset = "0x19CE3E0", VA = "0x1819CFDE0")]
	public new static TripleDES Create()
	{
		return null;
	}

	[Token(Token = "0x6001B2C")]
	[Address(RVA = "0x19CFD10", Offset = "0x19CE310", VA = "0x1819CFD10")]
	public new static TripleDES Create(string str)
	{
		return null;
	}

	[Token(Token = "0x6001B2D")]
	[Address(RVA = "0x19D0070", Offset = "0x19CE670", VA = "0x1819D0070")]
	public static bool IsWeakKey(byte[] rgbKey)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B2E")]
	[Address(RVA = "0x19CFE30", Offset = "0x19CE430", VA = "0x1819CFE30")]
	private static bool EqualBytes(byte[] rgbKey, int start1, int start2, int count)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B2F")]
	[Address(RVA = "0x19D0050", Offset = "0x19CE650", VA = "0x1819D0050")]
	private static bool IsLegalKeySize(byte[] rgbKey)
	{
		return default(bool);
	}
}
