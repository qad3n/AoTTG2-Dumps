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
		[Address(RVA = "0x4E4DE20", Offset = "0x4E4DE20", VA = "0x4E4DE20")]
		get
		{
			return default(PaddingMode);
		}
		[Token(Token = "0x6001949")]
		[Address(RVA = "0x4E4DE50", Offset = "0x4E4DE50", VA = "0x4E4DE50")]
		set
		{
		}
	}

	[Token(Token = "0x6001944")]
	[Address(RVA = "0x4E4D9F0", Offset = "0x4E4D9F0", VA = "0x4E4D9F0")]
	public MACTripleDES()
	{
	}

	[Token(Token = "0x6001945")]
	[Address(RVA = "0x4E4DB90", Offset = "0x4E4DB90", VA = "0x4E4DB90")]
	public MACTripleDES(byte[] rgbKey)
	{
	}

	[Token(Token = "0x6001946")]
	[Address(RVA = "0x4E4DBD0", Offset = "0x4E4DBD0", VA = "0x4E4DBD0")]
	public MACTripleDES(string strTripleDES, byte[] rgbKey)
	{
	}

	[Token(Token = "0x6001947")]
	[Address(RVA = "0x4E4DE00", Offset = "0x4E4DE00", VA = "0x4E4DE00", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x600194A")]
	[Address(RVA = "0x4E4DEE0", Offset = "0x4E4DEE0", VA = "0x4E4DEE0", Slot = "18")]
	protected override void HashCore(byte[] rgbData, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x600194B")]
	[Address(RVA = "0x4E4E160", Offset = "0x4E4E160", VA = "0x4E4E160", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x600194C")]
	[Address(RVA = "0x4E4E420", Offset = "0x4E4E420", VA = "0x4E4E420", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}
}
