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

[Token(Token = "0x2000316")]
[ComVisible(true)]
public abstract class TripleDES : SymmetricAlgorithm
{
	[Token(Token = "0x4000CFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static KeySizes[] s_legalBlockSizes;

	[Token(Token = "0x4000CFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static KeySizes[] s_legalKeySizes;

	[Token(Token = "0x170002E7")]
	public override byte[] Key
	{
		[Token(Token = "0x6001B06")]
		[Address(RVA = "0x53547D0", Offset = "0x53537D0", VA = "0x53547D0", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001B07")]
		[Address(RVA = "0x5354A20", Offset = "0x5353A20", VA = "0x5354A20", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6001B05")]
	[Address(RVA = "0x5354720", Offset = "0x5353720", VA = "0x5354720")]
	protected TripleDES()
	{
	}

	[Token(Token = "0x6001B08")]
	[Address(RVA = "0x5354C80", Offset = "0x5353C80", VA = "0x5354C80")]
	public new static TripleDES Create()
	{
		return null;
	}

	[Token(Token = "0x6001B09")]
	[Address(RVA = "0x5354DB0", Offset = "0x5353DB0", VA = "0x5354DB0")]
	public new static TripleDES Create(string str)
	{
		return null;
	}

	[Token(Token = "0x6001B0A")]
	[Address(RVA = "0x53548B0", Offset = "0x53538B0", VA = "0x53548B0")]
	public static bool IsWeakKey(byte[] rgbKey)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B0B")]
	[Address(RVA = "0x5354FB0", Offset = "0x5353FB0", VA = "0x5354FB0")]
	private static bool EqualBytes(byte[] rgbKey, int start1, int start2, int count)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B0C")]
	[Address(RVA = "0x5354EC0", Offset = "0x5353EC0", VA = "0x5354EC0")]
	private static bool IsLegalKeySize(byte[] rgbKey)
	{
		return default(bool);
	}
}
