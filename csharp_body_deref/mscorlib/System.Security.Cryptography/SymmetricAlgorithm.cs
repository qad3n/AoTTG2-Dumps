// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.SymmetricAlgorithm
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x200033C")]
[ComVisible(true)]
public abstract class SymmetricAlgorithm : IDisposable
{
	[Token(Token = "0x4000D91")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected int BlockSizeValue;

	[Token(Token = "0x4000D92")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	protected int FeedbackSizeValue;

	[Token(Token = "0x4000D93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected byte[] IVValue;

	[Token(Token = "0x4000D94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected byte[] KeyValue;

	[Token(Token = "0x4000D95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	protected KeySizes[] LegalBlockSizesValue;

	[Token(Token = "0x4000D96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	protected KeySizes[] LegalKeySizesValue;

	[Token(Token = "0x4000D97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected int KeySizeValue;

	[Token(Token = "0x4000D98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	protected CipherMode ModeValue;

	[Token(Token = "0x4000D99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected PaddingMode PaddingValue;

	[Token(Token = "0x170002DF")]
	public virtual int BlockSize
	{
		[Token(Token = "0x6001B0F")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "6")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001B10")]
		[Address(RVA = "0x19CF1D0", Offset = "0x19CD7D0", VA = "0x1819CF1D0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x170002E0")]
	public virtual int FeedbackSize
	{
		[Token(Token = "0x6001B11")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0", Slot = "8")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001B12")]
		[Address(RVA = "0x19CF2F0", Offset = "0x19CD8F0", VA = "0x1819CF2F0", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x170002E1")]
	public virtual byte[] IV
	{
		[Token(Token = "0x6001B13")]
		[Address(RVA = "0x19CEF80", Offset = "0x19CD580", VA = "0x1819CEF80", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001B14")]
		[Address(RVA = "0x19CF380", Offset = "0x19CD980", VA = "0x1819CF380", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x170002E2")]
	public virtual byte[] Key
	{
		[Token(Token = "0x6001B15")]
		[Address(RVA = "0x19CF020", Offset = "0x19CD620", VA = "0x1819CF020", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001B16")]
		[Address(RVA = "0x19CF590", Offset = "0x19CDB90", VA = "0x1819CF590", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x170002E3")]
	public virtual KeySizes[] LegalBlockSizes
	{
		[Token(Token = "0x6001B17")]
		[Address(RVA = "0x19CF0C0", Offset = "0x19CD6C0", VA = "0x1819CF0C0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E4")]
	public virtual KeySizes[] LegalKeySizes
	{
		[Token(Token = "0x6001B18")]
		[Address(RVA = "0x19CF140", Offset = "0x19CD740", VA = "0x1819CF140", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E5")]
	public virtual int KeySize
	{
		[Token(Token = "0x6001B19")]
		[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001B1A")]
		[Address(RVA = "0x19CF4F0", Offset = "0x19CDAF0", VA = "0x1819CF4F0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x170002E6")]
	public virtual CipherMode Mode
	{
		[Token(Token = "0x6001B1B")]
		[Address(RVA = "0x19CF1C0", Offset = "0x19CD7C0", VA = "0x1819CF1C0", Slot = "18")]
		get
		{
			return default(CipherMode);
		}
		[Token(Token = "0x6001B1C")]
		[Address(RVA = "0x19CF720", Offset = "0x19CDD20", VA = "0x1819CF720", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x170002E7")]
	public virtual PaddingMode Padding
	{
		[Token(Token = "0x6001B1D")]
		[Address(RVA = "0x58A8B0", Offset = "0x588EB0", VA = "0x18058A8B0", Slot = "20")]
		get
		{
			return default(PaddingMode);
		}
		[Token(Token = "0x6001B1E")]
		[Address(RVA = "0x19CF7A0", Offset = "0x19CDDA0", VA = "0x1819CF7A0", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x6001B0B")]
	[Address(RVA = "0x19CEF50", Offset = "0x19CD550", VA = "0x1819CEF50")]
	protected SymmetricAlgorithm()
	{
	}

	[Token(Token = "0x6001B0C")]
	[Address(RVA = "0x19CEE40", Offset = "0x19CD440", VA = "0x1819CEE40", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001B0D")]
	[Address(RVA = "0x19CEB30", Offset = "0x19CD130", VA = "0x1819CEB30")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001B0E")]
	[Address(RVA = "0x19CEDC0", Offset = "0x19CD3C0", VA = "0x1819CEDC0", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001B1F")]
	[Address(RVA = "0x19CEEA0", Offset = "0x19CD4A0", VA = "0x1819CEEA0")]
	public bool ValidKeySize(int bitLength)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B20")]
	[Address(RVA = "0x19CECA0", Offset = "0x19CD2A0", VA = "0x1819CECA0")]
	public static SymmetricAlgorithm Create()
	{
		return null;
	}

	[Token(Token = "0x6001B21")]
	[Address(RVA = "0x19CECF0", Offset = "0x19CD2F0", VA = "0x1819CECF0")]
	public static SymmetricAlgorithm Create(string algName)
	{
		return null;
	}

	[Token(Token = "0x6001B22")]
	[Address(RVA = "0x19CEC40", Offset = "0x19CD240", VA = "0x1819CEC40", Slot = "22")]
	public virtual ICryptoTransform CreateEncryptor()
	{
		return null;
	}

	[Token(Token = "0x6001B23")]
	public abstract ICryptoTransform CreateEncryptor(byte[] rgbKey, byte[] rgbIV);

	[Token(Token = "0x6001B24")]
	[Address(RVA = "0x19CEBE0", Offset = "0x19CD1E0", VA = "0x1819CEBE0", Slot = "24")]
	public virtual ICryptoTransform CreateDecryptor()
	{
		return null;
	}

	[Token(Token = "0x6001B25")]
	public abstract ICryptoTransform CreateDecryptor(byte[] rgbKey, byte[] rgbIV);

	[Token(Token = "0x6001B26")]
	public abstract void GenerateKey();

	[Token(Token = "0x6001B27")]
	public abstract void GenerateIV();
}
