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

[Token(Token = "0x20002E7")]
[ComVisible(true)]
public abstract class HMAC : KeyedHashAlgorithm
{
	[Token(Token = "0x4000C77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int blockSizeValue;

	[Token(Token = "0x4000C78")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal string m_hashName;

	[Token(Token = "0x4000C79")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal HashAlgorithm m_hash1;

	[Token(Token = "0x4000C7A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	internal HashAlgorithm m_hash2;

	[Token(Token = "0x4000C7B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private byte[] m_inner;

	[Token(Token = "0x4000C7C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private byte[] m_outer;

	[Token(Token = "0x4000C7D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private bool m_hashing;

	[Token(Token = "0x170002A5")]
	protected int BlockSizeValue
	{
		[Token(Token = "0x600195A")]
		[Address(RVA = "0x533BBB0", Offset = "0x533ABB0", VA = "0x533BBB0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600195B")]
		[Address(RVA = "0x533BBC0", Offset = "0x533ABC0", VA = "0x533BBC0")]
		set
		{
		}
	}

	[Token(Token = "0x170002A6")]
	public override byte[] Key
	{
		[Token(Token = "0x600195E")]
		[Address(RVA = "0x533BE80", Offset = "0x533AE80", VA = "0x533BE80", Slot = "23")]
		get
		{
			return null;
		}
		[Token(Token = "0x600195F")]
		[Address(RVA = "0x533BF00", Offset = "0x533AF00", VA = "0x533BF00", Slot = "24")]
		set
		{
		}
	}

	[Token(Token = "0x170002A7")]
	public string HashName
	{
		[Token(Token = "0x6001960")]
		[Address(RVA = "0x533BF70", Offset = "0x533AF70", VA = "0x533BF70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001961")]
		[Address(RVA = "0x533BF80", Offset = "0x533AF80", VA = "0x533BF80")]
		set
		{
		}
	}

	[Token(Token = "0x600195C")]
	[Address(RVA = "0x533BBD0", Offset = "0x533ABD0", VA = "0x533BBD0")]
	private void UpdateIOPadBuffers()
	{
	}

	[Token(Token = "0x600195D")]
	[Address(RVA = "0x533BD70", Offset = "0x533AD70", VA = "0x533BD70")]
	internal void InitializeKey(byte[] key)
	{
	}

	[Token(Token = "0x6001962")]
	[Address(RVA = "0x533C030", Offset = "0x533B030", VA = "0x533C030")]
	public new static HMAC Create()
	{
		return null;
	}

	[Token(Token = "0x6001963")]
	[Address(RVA = "0x533C120", Offset = "0x533B120", VA = "0x533C120")]
	public new static HMAC Create(string algorithmName)
	{
		return null;
	}

	[Token(Token = "0x6001964")]
	[Address(RVA = "0x533C1B0", Offset = "0x533B1B0", VA = "0x533C1B0", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x6001965")]
	[Address(RVA = "0x533C200", Offset = "0x533B200", VA = "0x533C200", Slot = "18")]
	protected override void HashCore(byte[] rgb, int ib, int cb)
	{
	}

	[Token(Token = "0x6001966")]
	[Address(RVA = "0x533C280", Offset = "0x533B280", VA = "0x533C280", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001967")]
	[Address(RVA = "0x533C3E0", Offset = "0x533B3E0", VA = "0x533C3E0", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001968")]
	[Address(RVA = "0x533C5A0", Offset = "0x533B5A0", VA = "0x533C5A0")]
	internal static HashAlgorithm GetHashAlgorithmWithFipsFallback(Func<HashAlgorithm> createStandardHashAlgorithmCallback, Func<HashAlgorithm> createFipsHashAlgorithmCallback)
	{
		return null;
	}

	[Token(Token = "0x6001969")]
	[Address(RVA = "0x533C720", Offset = "0x533B720", VA = "0x533C720")]
	protected HMAC()
	{
	}
}
