// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.DES
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002D9")]
[ComVisible(true)]
public abstract class DES : SymmetricAlgorithm
{
	[Token(Token = "0x4000CFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static KeySizes[] s_legalBlockSizes;

	[Token(Token = "0x4000CFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static KeySizes[] s_legalKeySizes;

	[Token(Token = "0x170002A3")]
	public override byte[] Key
	{
		[Token(Token = "0x60018E3")]
		[Address(RVA = "0x3B2E470", Offset = "0x3B2E470", VA = "0x3B2E470", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x60018E4")]
		[Address(RVA = "0x3B2E930", Offset = "0x3B2E930", VA = "0x3B2E930", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x60018E2")]
	[Address(RVA = "0x3B2E3D0", Offset = "0x3B2E3D0", VA = "0x3B2E3D0")]
	protected DES()
	{
	}

	[Token(Token = "0x60018E5")]
	[Address(RVA = "0x3B2EB40", Offset = "0x3B2EB40", VA = "0x3B2EB40")]
	public new static DES Create()
	{
		return null;
	}

	[Token(Token = "0x60018E6")]
	[Address(RVA = "0x3B2ED10", Offset = "0x3B2ED10", VA = "0x3B2ED10")]
	public new static DES Create(string algName)
	{
		return null;
	}

	[Token(Token = "0x60018E7")]
	[Address(RVA = "0x3B2E590", Offset = "0x3B2E590", VA = "0x3B2E590")]
	public static bool IsWeakKey(byte[] rgbKey)
	{
		return default(bool);
	}

	[Token(Token = "0x60018E8")]
	[Address(RVA = "0x3B2E700", Offset = "0x3B2E700", VA = "0x3B2E700")]
	public static bool IsSemiWeakKey(byte[] rgbKey)
	{
		return default(bool);
	}

	[Token(Token = "0x60018E9")]
	[Address(RVA = "0x3B2EDA0", Offset = "0x3B2EDA0", VA = "0x3B2EDA0")]
	private static bool IsLegalKeySize(byte[] rgbKey)
	{
		return default(bool);
	}

	[Token(Token = "0x60018EA")]
	[Address(RVA = "0x3B2EDB0", Offset = "0x3B2EDB0", VA = "0x3B2EDB0")]
	private static ulong QuadWordFromBigEndian(byte[] block)
	{
		return default(ulong);
	}
}
