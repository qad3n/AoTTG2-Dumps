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

[Token(Token = "0x20002F0")]
[ComVisible(true)]
public class MACTripleDES : KeyedHashAlgorithm
{
	[Token(Token = "0x4000C81")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private ICryptoTransform m_encryptor;

	[Token(Token = "0x4000C82")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private CryptoStream _cs;

	[Token(Token = "0x4000C83")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private System.Security.Cryptography.TailStream _ts;

	[Token(Token = "0x4000C84")]
	private const int m_bitsPerByte = 8;

	[Token(Token = "0x4000C85")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int m_bytesPerBlock;

	[Token(Token = "0x4000C86")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private TripleDES des;

	[Token(Token = "0x170002B1")]
	[ComVisible(false)]
	public PaddingMode Padding
	{
		[Token(Token = "0x600198D")]
		[Address(RVA = "0x533D770", Offset = "0x533C770", VA = "0x533D770")]
		get
		{
			return default(PaddingMode);
		}
		[Token(Token = "0x600198E")]
		[Address(RVA = "0x533D7A0", Offset = "0x533C7A0", VA = "0x533D7A0")]
		set
		{
		}
	}

	[Token(Token = "0x6001989")]
	[Address(RVA = "0x533D330", Offset = "0x533C330", VA = "0x533D330")]
	public MACTripleDES()
	{
	}

	[Token(Token = "0x600198A")]
	[Address(RVA = "0x533D4D0", Offset = "0x533C4D0", VA = "0x533D4D0")]
	public MACTripleDES(byte[] rgbKey)
	{
	}

	[Token(Token = "0x600198B")]
	[Address(RVA = "0x533D520", Offset = "0x533C520", VA = "0x533D520")]
	public MACTripleDES(string strTripleDES, byte[] rgbKey)
	{
	}

	[Token(Token = "0x600198C")]
	[Address(RVA = "0x533D750", Offset = "0x533C750", VA = "0x533D750", Slot = "20")]
	public override void Initialize()
	{
	}

	[Token(Token = "0x600198F")]
	[Address(RVA = "0x533D830", Offset = "0x533C830", VA = "0x533D830", Slot = "18")]
	protected override void HashCore(byte[] rgbData, int ibStart, int cbSize)
	{
	}

	[Token(Token = "0x6001990")]
	[Address(RVA = "0x533DAB0", Offset = "0x533CAB0", VA = "0x533DAB0", Slot = "19")]
	protected override byte[] HashFinal()
	{
		return null;
	}

	[Token(Token = "0x6001991")]
	[Address(RVA = "0x533DD60", Offset = "0x533CD60", VA = "0x533DD60", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}
}
