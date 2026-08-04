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

[Token(Token = "0x200030D")]
[ComVisible(true)]
public abstract class SymmetricAlgorithm : IDisposable
{
	[Token(Token = "0x4000D84")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected int BlockSizeValue;

	[Token(Token = "0x4000D85")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	protected int FeedbackSizeValue;

	[Token(Token = "0x4000D86")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected byte[] IVValue;

	[Token(Token = "0x4000D87")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected byte[] KeyValue;

	[Token(Token = "0x4000D88")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	protected KeySizes[] LegalBlockSizesValue;

	[Token(Token = "0x4000D89")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	protected KeySizes[] LegalKeySizesValue;

	[Token(Token = "0x4000D8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected int KeySizeValue;

	[Token(Token = "0x4000D8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	protected CipherMode ModeValue;

	[Token(Token = "0x4000D8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected PaddingMode PaddingValue;

	[Token(Token = "0x170002DD")]
	public virtual int BlockSize
	{
		[Token(Token = "0x6001AA7")]
		[Address(RVA = "0x3B4A370", Offset = "0x3B4A370", VA = "0x3B4A370", Slot = "6")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001AA8")]
		[Address(RVA = "0x3B4A380", Offset = "0x3B4A380", VA = "0x3B4A380", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x170002DE")]
	public virtual int FeedbackSize
	{
		[Token(Token = "0x6001AA9")]
		[Address(RVA = "0x3B4A490", Offset = "0x3B4A490", VA = "0x3B4A490", Slot = "8")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001AAA")]
		[Address(RVA = "0x3B4A4A0", Offset = "0x3B4A4A0", VA = "0x3B4A4A0", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x170002DF")]
	public virtual byte[] IV
	{
		[Token(Token = "0x6001AAB")]
		[Address(RVA = "0x3B4A520", Offset = "0x3B4A520", VA = "0x3B4A520", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001AAC")]
		[Address(RVA = "0x3B4A5C0", Offset = "0x3B4A5C0", VA = "0x3B4A5C0", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x170002E0")]
	public virtual byte[] Key
	{
		[Token(Token = "0x6001AAD")]
		[Address(RVA = "0x3B4A710", Offset = "0x3B4A710", VA = "0x3B4A710", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001AAE")]
		[Address(RVA = "0x3B4A7B0", Offset = "0x3B4A7B0", VA = "0x3B4A7B0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x170002E1")]
	public virtual KeySizes[] LegalBlockSizes
	{
		[Token(Token = "0x6001AAF")]
		[Address(RVA = "0x3B4AA10", Offset = "0x3B4AA10", VA = "0x3B4AA10", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E2")]
	public virtual KeySizes[] LegalKeySizes
	{
		[Token(Token = "0x6001AB0")]
		[Address(RVA = "0x3B4AA90", Offset = "0x3B4AA90", VA = "0x3B4AA90", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E3")]
	public virtual int KeySize
	{
		[Token(Token = "0x6001AB1")]
		[Address(RVA = "0x3B4AB10", Offset = "0x3B4AB10", VA = "0x3B4AB10", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001AB2")]
		[Address(RVA = "0x3B4AB20", Offset = "0x3B4AB20", VA = "0x3B4AB20", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x170002E4")]
	public virtual CipherMode Mode
	{
		[Token(Token = "0x6001AB3")]
		[Address(RVA = "0x3B4AC20", Offset = "0x3B4AC20", VA = "0x3B4AC20", Slot = "18")]
		get
		{
			return default(CipherMode);
		}
		[Token(Token = "0x6001AB4")]
		[Address(RVA = "0x3B4AC30", Offset = "0x3B4AC30", VA = "0x3B4AC30", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x170002E5")]
	public virtual PaddingMode Padding
	{
		[Token(Token = "0x6001AB5")]
		[Address(RVA = "0x3B4ACA0", Offset = "0x3B4ACA0", VA = "0x3B4ACA0", Slot = "20")]
		get
		{
			return default(PaddingMode);
		}
		[Token(Token = "0x6001AB6")]
		[Address(RVA = "0x3B4ACB0", Offset = "0x3B4ACB0", VA = "0x3B4ACB0", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x6001AA3")]
	[Address(RVA = "0x3B4A1E0", Offset = "0x3B4A1E0", VA = "0x3B4A1E0")]
	protected SymmetricAlgorithm()
	{
	}

	[Token(Token = "0x6001AA4")]
	[Address(RVA = "0x3B4A200", Offset = "0x3B4A200", VA = "0x3B4A200", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001AA5")]
	[Address(RVA = "0x3B4A270", Offset = "0x3B4A270", VA = "0x3B4A270")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001AA6")]
	[Address(RVA = "0x3B4A300", Offset = "0x3B4A300", VA = "0x3B4A300", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001AB7")]
	[Address(RVA = "0x3B4A990", Offset = "0x3B4A990", VA = "0x3B4A990")]
	public bool ValidKeySize(int bitLength)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AB8")]
	[Address(RVA = "0x3B4AD20", Offset = "0x3B4AD20", VA = "0x3B4AD20")]
	public static SymmetricAlgorithm Create()
	{
		return null;
	}

	[Token(Token = "0x6001AB9")]
	[Address(RVA = "0x3B4AD60", Offset = "0x3B4AD60", VA = "0x3B4AD60")]
	public static SymmetricAlgorithm Create(string algName)
	{
		return null;
	}

	[Token(Token = "0x6001ABA")]
	[Address(RVA = "0x3B4AE70", Offset = "0x3B4AE70", VA = "0x3B4AE70", Slot = "22")]
	public virtual ICryptoTransform CreateEncryptor()
	{
		return null;
	}

	[Token(Token = "0x6001ABB")]
	public abstract ICryptoTransform CreateEncryptor(byte[] rgbKey, byte[] rgbIV);

	[Token(Token = "0x6001ABC")]
	[Address(RVA = "0x3B4AED0", Offset = "0x3B4AED0", VA = "0x3B4AED0", Slot = "24")]
	public virtual ICryptoTransform CreateDecryptor()
	{
		return null;
	}

	[Token(Token = "0x6001ABD")]
	public abstract ICryptoTransform CreateDecryptor(byte[] rgbKey, byte[] rgbIV);

	[Token(Token = "0x6001ABE")]
	public abstract void GenerateKey();

	[Token(Token = "0x6001ABF")]
	public abstract void GenerateIV();
}
