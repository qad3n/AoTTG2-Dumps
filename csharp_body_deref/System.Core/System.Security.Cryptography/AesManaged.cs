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
		[Address(RVA = "0x4165F40", Offset = "0x4165F40", VA = "0x4165F40", Slot = "8")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x4165F70", Offset = "0x4165F70", VA = "0x4165F70", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public override byte[] IV
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x4165FA0", Offset = "0x4165FA0", VA = "0x4165FA0", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x4165FD0", Offset = "0x4165FD0", VA = "0x4165FD0", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public override byte[] Key
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x4166000", Offset = "0x4166000", VA = "0x4166000", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x4166030", Offset = "0x4166030", VA = "0x4166030", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public override int KeySize
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x4166060", Offset = "0x4166060", VA = "0x4166060", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x4166090", Offset = "0x4166090", VA = "0x4166090", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public override CipherMode Mode
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x41660C0", Offset = "0x41660C0", VA = "0x41660C0", Slot = "18")]
		get
		{
			return default(CipherMode);
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x41660F0", Offset = "0x41660F0", VA = "0x41660F0", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public override PaddingMode Padding
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x4166170", Offset = "0x4166170", VA = "0x4166170", Slot = "20")]
		get
		{
			return default(PaddingMode);
		}
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x41661A0", Offset = "0x41661A0", VA = "0x41661A0", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4165DD0", Offset = "0x4165DD0", VA = "0x4165DD0")]
	public AesManaged()
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x41661D0", Offset = "0x41661D0", VA = "0x41661D0", Slot = "24")]
	public override ICryptoTransform CreateDecryptor()
	{
		return null;
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x4166200", Offset = "0x4166200", VA = "0x4166200", Slot = "25")]
	public override ICryptoTransform CreateDecryptor(byte[] key, byte[] iv)
	{
		return null;
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x4166330", Offset = "0x4166330", VA = "0x4166330", Slot = "22")]
	public override ICryptoTransform CreateEncryptor()
	{
		return null;
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x4166360", Offset = "0x4166360", VA = "0x4166360", Slot = "23")]
	public override ICryptoTransform CreateEncryptor(byte[] key, byte[] iv)
	{
		return null;
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x4166490", Offset = "0x4166490", VA = "0x4166490", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x41665B0", Offset = "0x41665B0", VA = "0x41665B0", Slot = "27")]
	public override void GenerateIV()
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x41665E0", Offset = "0x41665E0", VA = "0x41665E0", Slot = "26")]
	public override void GenerateKey()
	{
	}
}
