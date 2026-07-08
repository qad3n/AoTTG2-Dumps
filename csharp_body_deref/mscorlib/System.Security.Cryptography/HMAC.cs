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
		[Address(RVA = "0x4E4C120", Offset = "0x4E4C120", VA = "0x4E4C120")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001916")]
		[Address(RVA = "0x4E4C130", Offset = "0x4E4C130", VA = "0x4E4C130")]
		set
		{
		}
	}

	[Token(Token = "0x170002A5")]
	public override byte[] Key
	{
		[Token(Token = "0x6001919")]
		[Address(RVA = "0x4E4C3F0", Offset = "0x4E4C3F0", VA = "0x4E4C3F0", Slot = "23")]
		get
		{
			return null;
		}
		[Token(Token = "0x600191A")]
		[Address(RVA = "0x4E4C470", Offset = "0x4E4C470", VA = "0x4E4C470", Slot = "24")]
		set
		{
		}
	}

	[Token(Token = "0x170002A6")]
	public string HashName
	{
		[Token(Token = "0x600191B")]
		[Address(RVA = "0x4E4C4E0", Offset = "0x4E4C4E0", VA = "0x4E4C4E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600191C")]
		[Address(RVA = "0x4E4C4F0", Offset = "0x4E4C4F0", VA = "0x4E4C4F0")]
		set
		{
		}
	}

	[Token(Token = "0x6001917")]
	[Address(RVA = "0x4E4C140", Offset = "0x4E4C140", VA = "0x4E4C140")]
	private void UpdateIOPadBuffers()
	{
	}

	[Token(Token = "0x6001918")]
	[Address(RVA = "0x4E4C2E0", Offset = "0x4E4C2E0", VA = "0x4E4C2E0")]
	internal void InitializeKey(byte[] key)
	{
	}

	[Token(Token = "0x600191D")]
	[Address(RVA = "0x4E4C640", Offset = "0x4E4C640", VA = "0x4E4C640")]
	public new static HMAC Create()
	{
		return null;
	}

	[Token(Token = "0x600191E")]
	[Address(RVA = "0x4E4C730", Offset = "0x4E4C730", VA = "0x4E4C730")]
	public new static HMAC Create(string algorithmName)
	{
		return null;
	}

	[Token(Token = "0x600191F")]
	[Address(RVA = "0x4E4C7C0", Offset = "0x4E4C7C0", VA = "0x4E4C7C0", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001920")]
	[Address(RVA = "0x4E4C810", Offset = "0x4E4C810", VA = "0x4E4C810", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ib, int cb)
	{
	}

	[Token(Token = "0x6001921")]
	[Address(RVA = "0x4E4C8E0", Offset = "0x4E4C8E0", VA = "0x4E4C8E0", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001922")]
	[Address(RVA = "0x4E4CA90", Offset = "0x4E4CA90", VA = "0x4E4CA90", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001923")]
	[Address(RVA = "0x4E4CC60", Offset = "0x4E4CC60", VA = "0x4E4CC60")]
	internal static HashAlgorithm GetHashAlgorithmWithFipsFallback(Func<HashAlgorithm> createStandardHashAlgorithmCallback, Func<HashAlgorithm> createFipsHashAlgorithmCallback)
	{
		return null;
	}

	[Token(Token = "0x6001924")]
	[Address(RVA = "0x4E4CDE0", Offset = "0x4E4CDE0", VA = "0x4E4CDE0")]
	protected HMAC()
	{
	}
}
