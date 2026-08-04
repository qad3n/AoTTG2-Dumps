// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RC2
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002EF")]
[ComVisible(true)]
public abstract class RC2 : SymmetricAlgorithm
{
	[Token(Token = "0x4000D28")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	protected int EffectiveKeySizeValue;

	[Token(Token = "0x4000D29")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static KeySizes[] s_legalBlockSizes;

	[Token(Token = "0x4000D2A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static KeySizes[] s_legalKeySizes;

	[Token(Token = "0x170002BB")]
	public virtual int EffectiveKeySize
	{
		[Token(Token = "0x6001989")]
		[Address(RVA = "0x3B36AB0", Offset = "0x3B36AB0", VA = "0x3B36AB0", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600198A")]
		[Address(RVA = "0x3B36AD0", Offset = "0x3B36AD0", VA = "0x3B36AD0", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x170002BC")]
	public override int KeySize
	{
		[Token(Token = "0x600198B")]
		[Address(RVA = "0x3B36B70", Offset = "0x3B36B70", VA = "0x3B36B70", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600198C")]
		[Address(RVA = "0x3B36B80", Offset = "0x3B36B80", VA = "0x3B36B80", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x6001988")]
	[Address(RVA = "0x3B36A10", Offset = "0x3B36A10", VA = "0x3B36A10")]
	protected RC2()
	{
	}

	[Token(Token = "0x600198D")]
	[Address(RVA = "0x3B36BF0", Offset = "0x3B36BF0", VA = "0x3B36BF0")]
	public new static RC2 Create()
	{
		return null;
	}

	[Token(Token = "0x600198E")]
	[Address(RVA = "0x3B36E70", Offset = "0x3B36E70", VA = "0x3B36E70")]
	public new static RC2 Create(string AlgName)
	{
		return null;
	}
}
