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

[Token(Token = "0x20002F7")]
[ComVisible(true)]
public abstract class RC2 : SymmetricAlgorithm
{
	[Token(Token = "0x4000C95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	protected int EffectiveKeySizeValue;

	[Token(Token = "0x4000C96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static KeySizes[] s_legalBlockSizes;

	[Token(Token = "0x4000C97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static KeySizes[] s_legalKeySizes;

	[Token(Token = "0x170002BC")]
	public virtual int EffectiveKeySize
	{
		[Token(Token = "0x60019CE")]
		[Address(RVA = "0x53406B0", Offset = "0x533F6B0", VA = "0x53406B0", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60019CF")]
		[Address(RVA = "0x53406D0", Offset = "0x533F6D0", VA = "0x53406D0", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x170002BD")]
	public override int KeySize
	{
		[Token(Token = "0x60019D0")]
		[Address(RVA = "0x5340770", Offset = "0x533F770", VA = "0x5340770", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60019D1")]
		[Address(RVA = "0x5340780", Offset = "0x533F780", VA = "0x5340780", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x60019CD")]
	[Address(RVA = "0x5340610", Offset = "0x533F610", VA = "0x5340610")]
	protected RC2()
	{
	}

	[Token(Token = "0x60019D2")]
	[Address(RVA = "0x53407F0", Offset = "0x533F7F0", VA = "0x53407F0")]
	public new static RC2 Create()
	{
		return null;
	}

	[Token(Token = "0x60019D3")]
	[Address(RVA = "0x5340A70", Offset = "0x533FA70", VA = "0x5340A70")]
	public new static RC2 Create(string AlgName)
	{
		return null;
	}
}
