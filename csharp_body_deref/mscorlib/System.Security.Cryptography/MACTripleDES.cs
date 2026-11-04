// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.MACTripleDES
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000317")]
[ComVisible(true)]
public class MACTripleDES : KeyedHashAlgorithm
{
	[Token(Token = "0x4000D21")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private ICryptoTransform m_encryptor;

	[Token(Token = "0x4000D22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private CryptoStream _cs;

	[Token(Token = "0x4000D23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private System.Security.Cryptography.TailStream _ts;

	[Token(Token = "0x4000D24")]
	private const int m_bitsPerByte = 8;

	[Token(Token = "0x4000D25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int m_bytesPerBlock;

	[Token(Token = "0x4000D26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private TripleDES des;

	[Token(Token = "0x170002B2")]
	[ComVisible(false)]
	public PaddingMode Padding
	{
		[Token(Token = "0x60019B0")]
		[Address(RVA = "0x19ABD10", Offset = "0x19AA310", VA = "0x1819ABD10")]
		get
		{
			return default(PaddingMode);
		}
		[Token(Token = "0x60019B1")]
		[Address(RVA = "0x19ABD40", Offset = "0x19AA340", VA = "0x1819ABD40")]
		set
		{
		}
	}

	[Token(Token = "0x60019AC")]
	[Address(RVA = "0x19AB900", Offset = "0x19A9F00", VA = "0x1819AB900")]
	public MACTripleDES()
	{
	}

	[Token(Token = "0x60019AD")]
	[Address(RVA = "0x19ABA90", Offset = "0x19AA090", VA = "0x1819ABA90")]
	public MACTripleDES(byte[] rgbKey)
	{
	}

	[Token(Token = "0x60019AE")]
	[Address(RVA = "0x19ABAE0", Offset = "0x19AA0E0", VA = "0x1819ABAE0")]
	public MACTripleDES(string strTripleDES, byte[] rgbKey)
	{
	}

	[Token(Token = "0x60019AF")]
	[Address(RVA = "0x19AB8E0", Offset = "0x19A9EE0", VA = "0x1819AB8E0", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x60019B2")]
	[Address(RVA = "0x19AB550", Offset = "0x19A9B50", VA = "0x1819AB550", Slot = "18")]
	protected override void HashCore(byte[] rgbData, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x60019B3")]
	[Address(RVA = "0x19AB700", Offset = "0x19A9D00", VA = "0x1819AB700", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x60019B4")]
	[Address(RVA = "0x19AB480", Offset = "0x19A9A80", VA = "0x1819AB480", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}
}
