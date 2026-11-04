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

[Token(Token = "0x200030E")]
[ComVisible(true)]
public abstract class HMAC : KeyedHashAlgorithm
{
	[Token(Token = "0x4000D17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int blockSizeValue;

	[Token(Token = "0x4000D18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal string m_hashName;

	[Token(Token = "0x4000D19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal HashAlgorithm m_hash1;

	[Token(Token = "0x4000D1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	internal HashAlgorithm m_hash2;

	[Token(Token = "0x4000D1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private byte[] m_inner;

	[Token(Token = "0x4000D1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private byte[] m_outer;

	[Token(Token = "0x4000D1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private bool m_hashing;

	[Token(Token = "0x170002A6")]
	protected int BlockSizeValue
	{
		[Token(Token = "0x600197D")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600197E")]
		[Address(RVA = "0x1826560", Offset = "0x1824B60", VA = "0x181826560")]
		set
		{
		}
	}

	[Token(Token = "0x170002A7")]
	public override byte[] Key
	{
		[Token(Token = "0x6001981")]
		[Address(RVA = "0x19A9D60", Offset = "0x19A8360", VA = "0x1819A9D60", Slot = "23")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001982")]
		[Address(RVA = "0x19A9EA0", Offset = "0x19A84A0", VA = "0x1819A9EA0", Slot = "24")]
		set
		{
		}
	}

	[Token(Token = "0x170002A8")]
	public string HashName
	{
		[Token(Token = "0x6001983")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001984")]
		[Address(RVA = "0x19A9DE0", Offset = "0x19A83E0", VA = "0x1819A9DE0")]
		set
		{
		}
	}

	[Token(Token = "0x600197F")]
	[Address(RVA = "0x19A9BF0", Offset = "0x19A81F0", VA = "0x1819A9BF0")]
	private void UpdateIOPadBuffers()
	{
	}

	[Token(Token = "0x6001980")]
	[Address(RVA = "0x19A98E0", Offset = "0x19A7EE0", VA = "0x1819A98E0")]
	internal void InitializeKey(byte[] key)
	{
	}

	[Token(Token = "0x6001985")]
	[Address(RVA = "0x19A9370", Offset = "0x19A7970", VA = "0x1819A9370")]
	public new static HMAC Create()
	{
		return null;
	}

	[Token(Token = "0x6001986")]
	[Address(RVA = "0x19A92D0", Offset = "0x19A78D0", VA = "0x1819A92D0")]
	public new static HMAC Create(string algorithmName)
	{
		return null;
	}

	[Token(Token = "0x6001987")]
	[Address(RVA = "0x19A9BA0", Offset = "0x19A81A0", VA = "0x1819A9BA0", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001988")]
	[Address(RVA = "0x19A95C0", Offset = "0x19A7BC0", VA = "0x1819A95C0", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ib, int cb)
	{
	}

	[Token(Token = "0x6001989")]
	[Address(RVA = "0x19A96C0", Offset = "0x19A7CC0", VA = "0x1819A96C0", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x600198A")]
	[Address(RVA = "0x19A93C0", Offset = "0x19A79C0", VA = "0x1819A93C0", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600198B")]
	[Address(RVA = "0x19A94A0", Offset = "0x19A7AA0", VA = "0x1819A94A0")]
	internal static HashAlgorithm GetHashAlgorithmWithFipsFallback(Func<HashAlgorithm> createStandardHashAlgorithmCallback, Func<HashAlgorithm> createFipsHashAlgorithmCallback)
	{
		return null;
	}

	[Token(Token = "0x600198C")]
	[Address(RVA = "0x19A9D50", Offset = "0x19A8350", VA = "0x1819A9D50")]
	protected HMAC()
	{
	}
}
