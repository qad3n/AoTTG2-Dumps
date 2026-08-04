// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.HMAC
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002DF")]
[ComVisible(true)]
public abstract class HMAC : KeyedHashAlgorithm
{
	[Token(Token = "0x4000D0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int blockSizeValue;

	[Token(Token = "0x4000D0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal string m_hashName;

	[Token(Token = "0x4000D0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal HashAlgorithm m_hash1;

	[Token(Token = "0x4000D0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	internal HashAlgorithm m_hash2;

	[Token(Token = "0x4000D0E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private byte[] m_inner;

	[Token(Token = "0x4000D0F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private byte[] m_outer;

	[Token(Token = "0x4000D10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private bool m_hashing;

	[Token(Token = "0x170002A4")]
	protected int BlockSizeValue
	{
		[Token(Token = "0x6001915")]
		[Address(RVA = "0x3B31C40", Offset = "0x3B31C40", VA = "0x3B31C40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001916")]
		[Address(RVA = "0x3B31C50", Offset = "0x3B31C50", VA = "0x3B31C50")]
		set
		{
		}
	}

	[Token(Token = "0x170002A5")]
	public override byte[] Key
	{
		[Token(Token = "0x6001919")]
		[Address(RVA = "0x3B31F10", Offset = "0x3B31F10", VA = "0x3B31F10", Slot = "23")]
		get
		{
			return null;
		}
		[Token(Token = "0x600191A")]
		[Address(RVA = "0x3B31F90", Offset = "0x3B31F90", VA = "0x3B31F90", Slot = "24")]
		set
		{
		}
	}

	[Token(Token = "0x170002A6")]
	public string HashName
	{
		[Token(Token = "0x600191B")]
		[Address(RVA = "0x3B32000", Offset = "0x3B32000", VA = "0x3B32000")]
		get
		{
			return null;
		}
		[Token(Token = "0x600191C")]
		[Address(RVA = "0x3B32010", Offset = "0x3B32010", VA = "0x3B32010")]
		set
		{
		}
	}

	[Token(Token = "0x6001917")]
	[Address(RVA = "0x3B31C60", Offset = "0x3B31C60", VA = "0x3B31C60")]
	private void UpdateIOPadBuffers()
	{
	}

	[Token(Token = "0x6001918")]
	[Address(RVA = "0x3B31E00", Offset = "0x3B31E00", VA = "0x3B31E00")]
	internal void InitializeKey(byte[] key)
	{
	}

	[Token(Token = "0x600191D")]
	[Address(RVA = "0x3B32160", Offset = "0x3B32160", VA = "0x3B32160")]
	public new static HMAC Create()
	{
		return null;
	}

	[Token(Token = "0x600191E")]
	[Address(RVA = "0x3B32250", Offset = "0x3B32250", VA = "0x3B32250")]
	public new static HMAC Create(string algorithmName)
	{
		return null;
	}

	[Token(Token = "0x600191F")]
	[Address(RVA = "0x3B322E0", Offset = "0x3B322E0", VA = "0x3B322E0", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001920")]
	[Address(RVA = "0x3B32330", Offset = "0x3B32330", VA = "0x3B32330", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ib, int cb)
	{
	}

	[Token(Token = "0x6001921")]
	[Address(RVA = "0x3B32400", Offset = "0x3B32400", VA = "0x3B32400", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001922")]
	[Address(RVA = "0x3B325B0", Offset = "0x3B325B0", VA = "0x3B325B0", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001923")]
	[Address(RVA = "0x3B32780", Offset = "0x3B32780", VA = "0x3B32780")]
	internal static HashAlgorithm GetHashAlgorithmWithFipsFallback(Func<HashAlgorithm> createStandardHashAlgorithmCallback, Func<HashAlgorithm> createFipsHashAlgorithmCallback)
	{
		return null;
	}

	[Token(Token = "0x6001924")]
	[Address(RVA = "0x3B32900", Offset = "0x3B32900", VA = "0x3B32900")]
	protected HMAC()
	{
	}
}
