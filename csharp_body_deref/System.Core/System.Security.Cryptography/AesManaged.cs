// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.AesManaged
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000013")]
public sealed class AesManaged : Aes
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x48")]
	private RijndaelManaged m_rijndael;

	[Token(Token = "0x17000001")]
	public override int FeedbackSize
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x2400140", Offset = "0x23FE740", VA = "0x182400140", Slot = "8")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x2400260", Offset = "0x23FE860", VA = "0x182400260", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public override byte[] IV
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x2400170", Offset = "0x23FE770", VA = "0x182400170", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x2400290", Offset = "0x23FE890", VA = "0x182400290", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public override byte[] Key
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x24001D0", Offset = "0x23FE7D0", VA = "0x1824001D0", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x24002F0", Offset = "0x23FE8F0", VA = "0x1824002F0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public override int KeySize
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x24001A0", Offset = "0x23FE7A0", VA = "0x1824001A0", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x24002C0", Offset = "0x23FE8C0", VA = "0x1824002C0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public override CipherMode Mode
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x2400200", Offset = "0x23FE800", VA = "0x182400200", Slot = "18")]
		get
		{
			return default(CipherMode);
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x2400320", Offset = "0x23FE920", VA = "0x182400320", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public override PaddingMode Padding
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x2400230", Offset = "0x23FE830", VA = "0x182400230", Slot = "20")]
		get
		{
			return default(PaddingMode);
		}
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x24003C0", Offset = "0x23FE9C0", VA = "0x1824003C0", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x23FFFC0", Offset = "0x23FE5C0", VA = "0x1823FFFC0")]
	public AesManaged()
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x23FFD20", Offset = "0x23FE320", VA = "0x1823FFD20", Slot = "24")]
	public override ICryptoTransform CreateDecryptor()
	{
		return null;
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x23FFB90", Offset = "0x23FE190", VA = "0x1823FFB90", Slot = "25")]
	public override ICryptoTransform CreateDecryptor(byte[] key, byte[] iv)
	{
		return null;
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x23FFEE0", Offset = "0x23FE4E0", VA = "0x1823FFEE0", Slot = "22")]
	public override ICryptoTransform CreateEncryptor()
	{
		return null;
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x23FFD50", Offset = "0x23FE350", VA = "0x1823FFD50", Slot = "23")]
	public override ICryptoTransform CreateEncryptor(byte[] key, byte[] iv)
	{
		return null;
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x23FFF10", Offset = "0x23FE510", VA = "0x1823FFF10", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x1AC9C30", Offset = "0x1AC8230", VA = "0x181AC9C30", Slot = "27")]
	public override void GenerateIV()
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x1AC9C60", Offset = "0x1AC8260", VA = "0x181AC9C60", Slot = "26")]
	public override void GenerateKey()
	{
	}
}
