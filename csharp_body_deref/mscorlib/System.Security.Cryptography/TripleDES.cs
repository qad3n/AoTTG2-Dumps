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

[Token(Token = "0x200030E")]
[ComVisible(true)]
public abstract class TripleDES : SymmetricAlgorithm
{
	[Token(Token = "0x4000D8D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static KeySizes[] s_legalBlockSizes;

	[Token(Token = "0x4000D8E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static KeySizes[] s_legalKeySizes;

	[Token(Token = "0x170002E6")]
	public override byte[] Key
	{
		[Token(Token = "0x6001AC1")]
		[Address(RVA = "0x3B4AFE0", Offset = "0x3B4AFE0", VA = "0x3B4AFE0", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001AC2")]
		[Address(RVA = "0x3B4B250", Offset = "0x3B4B250", VA = "0x3B4B250", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6001AC0")]
	[Address(RVA = "0x3B4AF30", Offset = "0x3B4AF30", VA = "0x3B4AF30")]
	protected TripleDES()
	{
	}

	[Token(Token = "0x6001AC3")]
	[Address(RVA = "0x3B4B4C0", Offset = "0x3B4B4C0", VA = "0x3B4B4C0")]
	public new static TripleDES Create()
	{
		return null;
	}

	[Token(Token = "0x6001AC4")]
	[Address(RVA = "0x3B4B5F0", Offset = "0x3B4B5F0", VA = "0x3B4B5F0")]
	public new static TripleDES Create(string str)
	{
		return null;
	}

	[Token(Token = "0x6001AC5")]
	[Address(RVA = "0x3B4B0D0", Offset = "0x3B4B0D0", VA = "0x3B4B0D0")]
	public static bool IsWeakKey(byte[] rgbKey)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AC6")]
	[Address(RVA = "0x3B4B7E0", Offset = "0x3B4B7E0", VA = "0x3B4B7E0")]
	private static bool EqualBytes(byte[] rgbKey, int start1, int start2, int count)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AC7")]
	[Address(RVA = "0x3B4B700", Offset = "0x3B4B700", VA = "0x3B4B700")]
	private static bool IsLegalKeySize(byte[] rgbKey)
	{
		return default(bool);
	}
}
