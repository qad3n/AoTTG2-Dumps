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
		[Address(RVA = "0x4E50F90", Offset = "0x4E50F90", VA = "0x4E50F90", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600198A")]
		[Address(RVA = "0x4E50FB0", Offset = "0x4E50FB0", VA = "0x4E50FB0", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x170002BC")]
	public override int KeySize
	{
		[Token(Token = "0x600198B")]
		[Address(RVA = "0x4E51050", Offset = "0x4E51050", VA = "0x4E51050", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600198C")]
		[Address(RVA = "0x4E51060", Offset = "0x4E51060", VA = "0x4E51060", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x6001988")]
	[Address(RVA = "0x4E50EF0", Offset = "0x4E50EF0", VA = "0x4E50EF0")]
	protected RC2()
	{
	}

	[Token(Token = "0x600198D")]
	[Address(RVA = "0x4E510D0", Offset = "0x4E510D0", VA = "0x4E510D0")]
	public new static RC2 Create()
	{
		return null;
	}

	[Token(Token = "0x600198E")]
	[Address(RVA = "0x4E51350", Offset = "0x4E51350", VA = "0x4E51350")]
	public new static RC2 Create(string AlgName)
	{
		return null;
	}
}
