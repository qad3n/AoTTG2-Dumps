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
		[Address(RVA = "0x4E64850", Offset = "0x4E64850", VA = "0x4E64850", Slot = "6")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001AA8")]
		[Address(RVA = "0x4E64860", Offset = "0x4E64860", VA = "0x4E64860", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x170002DE")]
	public virtual int FeedbackSize
	{
		[Token(Token = "0x6001AA9")]
		[Address(RVA = "0x4E64970", Offset = "0x4E64970", VA = "0x4E64970", Slot = "8")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001AAA")]
		[Address(RVA = "0x4E64980", Offset = "0x4E64980", VA = "0x4E64980", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x170002DF")]
	public virtual byte[] IV
	{
		[Token(Token = "0x6001AAB")]
		[Address(RVA = "0x4E64A00", Offset = "0x4E64A00", VA = "0x4E64A00", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001AAC")]
		[Address(RVA = "0x4E64AA0", Offset = "0x4E64AA0", VA = "0x4E64AA0", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x170002E0")]
	public virtual byte[] Key
	{
		[Token(Token = "0x6001AAD")]
		[Address(RVA = "0x4E64BF0", Offset = "0x4E64BF0", VA = "0x4E64BF0", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001AAE")]
		[Address(RVA = "0x4E64C90", Offset = "0x4E64C90", VA = "0x4E64C90", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x170002E1")]
	public virtual KeySizes[] LegalBlockSizes
	{
		[Token(Token = "0x6001AAF")]
		[Address(RVA = "0x4E64EF0", Offset = "0x4E64EF0", VA = "0x4E64EF0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E2")]
	public virtual KeySizes[] LegalKeySizes
	{
		[Token(Token = "0x6001AB0")]
		[Address(RVA = "0x4E64F70", Offset = "0x4E64F70", VA = "0x4E64F70", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E3")]
	public virtual int KeySize
	{
		[Token(Token = "0x6001AB1")]
		[Address(RVA = "0x4E64FF0", Offset = "0x4E64FF0", VA = "0x4E64FF0", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001AB2")]
		[Address(RVA = "0x4E65000", Offset = "0x4E65000", VA = "0x4E65000", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x170002E4")]
	public virtual CipherMode Mode
	{
		[Token(Token = "0x6001AB3")]
		[Address(RVA = "0x4E65100", Offset = "0x4E65100", VA = "0x4E65100", Slot = "18")]
		get
		{
			return default(CipherMode);
		}
		[Token(Token = "0x6001AB4")]
		[Address(RVA = "0x4E65110", Offset = "0x4E65110", VA = "0x4E65110", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x170002E5")]
	public virtual PaddingMode Padding
	{
		[Token(Token = "0x6001AB5")]
		[Address(RVA = "0x4E65180", Offset = "0x4E65180", VA = "0x4E65180", Slot = "20")]
		get
		{
			return default(PaddingMode);
		}
		[Token(Token = "0x6001AB6")]
		[Address(RVA = "0x4E65190", Offset = "0x4E65190", VA = "0x4E65190", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x6001AA3")]
	[Address(RVA = "0x4E646C0", Offset = "0x4E646C0", VA = "0x4E646C0")]
	protected SymmetricAlgorithm()
	{
	}

	[Token(Token = "0x6001AA4")]
	[Address(RVA = "0x4E646E0", Offset = "0x4E646E0", VA = "0x4E646E0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001AA5")]
	[Address(RVA = "0x4E64750", Offset = "0x4E64750", VA = "0x4E64750")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001AA6")]
	[Address(RVA = "0x4E647E0", Offset = "0x4E647E0", VA = "0x4E647E0", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001AB7")]
	[Address(RVA = "0x4E64E70", Offset = "0x4E64E70", VA = "0x4E64E70")]
	public bool ValidKeySize(int bitLength)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AB8")]
	[Address(RVA = "0x4E65200", Offset = "0x4E65200", VA = "0x4E65200")]
	public static SymmetricAlgorithm Create()
	{
		return null;
	}

	[Token(Token = "0x6001AB9")]
	[Address(RVA = "0x4E65240", Offset = "0x4E65240", VA = "0x4E65240")]
	public static SymmetricAlgorithm Create(string algName)
	{
		return null;
	}

	[Token(Token = "0x6001ABA")]
	[Address(RVA = "0x4E65350", Offset = "0x4E65350", VA = "0x4E65350", Slot = "22")]
	public virtual ICryptoTransform CreateEncryptor()
	{
		return null;
	}

	[Token(Token = "0x6001ABB")]
	public abstract ICryptoTransform CreateEncryptor(byte[] rgbKey, byte[] rgbIV);

	[Token(Token = "0x6001ABC")]
	[Address(RVA = "0x4E653B0", Offset = "0x4E653B0", VA = "0x4E653B0", Slot = "24")]
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
