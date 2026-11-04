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

[Token(Token = "0x200031E")]
[ComVisible(true)]
public abstract class RC2 : SymmetricAlgorithm
{
	[Token(Token = "0x4000D35")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected int EffectiveKeySizeValue;

	[Token(Token = "0x4000D36")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static KeySizes[] s_legalBlockSizes;

	[Token(Token = "0x4000D37")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static KeySizes[] s_legalKeySizes;

	[Token(Token = "0x170002BD")]
	public virtual int EffectiveKeySize
	{
		[Token(Token = "0x60019F1")]
		[Address(RVA = "0x19AE330", Offset = "0x19AC930", VA = "0x1819AE330", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60019F2")]
		[Address(RVA = "0x19AE340", Offset = "0x19AC940", VA = "0x1819AE340", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x170002BE")]
	public override int KeySize
	{
		[Token(Token = "0x60019F3")]
		[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60019F4")]
		[Address(RVA = "0x19AE490", Offset = "0x19ACA90", VA = "0x1819AE490", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x60019F0")]
	[Address(RVA = "0x19AE290", Offset = "0x19AC890", VA = "0x1819AE290")]
	protected RC2()
	{
	}

	[Token(Token = "0x60019F5")]
	[Address(RVA = "0x19AE030", Offset = "0x19AC630", VA = "0x1819AE030")]
	public new static RC2 Create()
	{
		return null;
	}

	[Token(Token = "0x60019F6")]
	[Address(RVA = "0x19AE080", Offset = "0x19AC680", VA = "0x1819AE080")]
	public new static RC2 Create(string AlgName)
	{
		return null;
	}
}
