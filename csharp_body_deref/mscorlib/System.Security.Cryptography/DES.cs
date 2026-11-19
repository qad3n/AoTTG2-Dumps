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

[Token(Token = "0x20002E1")]
[ComVisible(true)]
public abstract class DES : SymmetricAlgorithm
{
	[Token(Token = "0x4000C69")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static KeySizes[] s_legalBlockSizes;

	[Token(Token = "0x4000C6A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static KeySizes[] s_legalKeySizes;

	[Token(Token = "0x170002A4")]
	public override byte[] Key
	{
		[Token(Token = "0x6001928")]
		[Address(RVA = "0x5338500", Offset = "0x5337500", VA = "0x5338500", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001929")]
		[Address(RVA = "0x53389B0", Offset = "0x53379B0", VA = "0x53389B0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6001927")]
	[Address(RVA = "0x5338460", Offset = "0x5337460", VA = "0x5338460")]
	protected DES()
	{
	}

	[Token(Token = "0x600192A")]
	[Address(RVA = "0x5338BC0", Offset = "0x5337BC0", VA = "0x5338BC0")]
	public new static DES Create()
	{
		return null;
	}

	[Token(Token = "0x600192B")]
	[Address(RVA = "0x5338D90", Offset = "0x5337D90", VA = "0x5338D90")]
	public new static DES Create(string algName)
	{
		return null;
	}

	[Token(Token = "0x600192C")]
	[Address(RVA = "0x5338620", Offset = "0x5337620", VA = "0x5338620")]
	public static bool IsWeakKey(byte[] rgbKey)
	{
		return default(bool);
	}

	[Token(Token = "0x600192D")]
	[Address(RVA = "0x5338790", Offset = "0x5337790", VA = "0x5338790")]
	public static bool IsSemiWeakKey(byte[] rgbKey)
	{
		return default(bool);
	}

	[Token(Token = "0x600192E")]
	[Address(RVA = "0x5338E20", Offset = "0x5337E20", VA = "0x5338E20")]
	private static bool IsLegalKeySize(byte[] rgbKey)
	{
		return default(bool);
	}

	[Token(Token = "0x600192F")]
	[Address(RVA = "0x5338E30", Offset = "0x5337E30", VA = "0x5338E30")]
	private static ulong QuadWordFromBigEndian(byte[] block)
	{
		return default(ulong);
	}
}
