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

[Token(Token = "0x20002E8")]
[ComVisible(true)]
public class MACTripleDES : KeyedHashAlgorithm
{
	[Token(Token = "0x4000D14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private ICryptoTransform m_encryptor;

	[Token(Token = "0x4000D15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private CryptoStream _cs;

	[Token(Token = "0x4000D16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private System.Security.Cryptography.TailStream _ts;

	[Token(Token = "0x4000D17")]
	private const int m_bitsPerByte = 8;

	[Token(Token = "0x4000D18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int m_bytesPerBlock;

	[Token(Token = "0x4000D19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private TripleDES des;

	[Token(Token = "0x170002B0")]
	[ComVisible(false)]
	public PaddingMode Padding
	{
		[Token(Token = "0x6001948")]
		[Address(RVA = "0x3B33940", Offset = "0x3B33940", VA = "0x3B33940")]
		get
		{
			return default(PaddingMode);
		}
		[Token(Token = "0x6001949")]
		[Address(RVA = "0x3B33970", Offset = "0x3B33970", VA = "0x3B33970")]
		set
		{
		}
	}

	[Token(Token = "0x6001944")]
	[Address(RVA = "0x3B33510", Offset = "0x3B33510", VA = "0x3B33510")]
	public MACTripleDES()
	{
	}

	[Token(Token = "0x6001945")]
	[Address(RVA = "0x3B336B0", Offset = "0x3B336B0", VA = "0x3B336B0")]
	public MACTripleDES(byte[] rgbKey)
	{
	}

	[Token(Token = "0x6001946")]
	[Address(RVA = "0x3B336F0", Offset = "0x3B336F0", VA = "0x3B336F0")]
	public MACTripleDES(string strTripleDES, byte[] rgbKey)
	{
	}

	[Token(Token = "0x6001947")]
	[Address(RVA = "0x3B33920", Offset = "0x3B33920", VA = "0x3B33920", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x600194A")]
	[Address(RVA = "0x3B33A00", Offset = "0x3B33A00", VA = "0x3B33A00", Slot = "18")]
	protected override void HashCore(byte[] rgbData, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x600194B")]
	[Address(RVA = "0x3B33C80", Offset = "0x3B33C80", VA = "0x3B33C80", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x600194C")]
	[Address(RVA = "0x3B33F40", Offset = "0x3B33F40", VA = "0x3B33F40", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}
}
