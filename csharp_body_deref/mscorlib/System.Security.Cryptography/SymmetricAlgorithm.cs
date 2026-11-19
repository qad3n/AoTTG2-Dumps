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

[Token(Token = "0x2000315")]
[ComVisible(true)]
public abstract class SymmetricAlgorithm : IDisposable
{
	[Token(Token = "0x4000CF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected int BlockSizeValue;

	[Token(Token = "0x4000CF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	protected int FeedbackSizeValue;

	[Token(Token = "0x4000CF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected byte[] IVValue;

	[Token(Token = "0x4000CF4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected byte[] KeyValue;

	[Token(Token = "0x4000CF5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	protected KeySizes[] LegalBlockSizesValue;

	[Token(Token = "0x4000CF6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	protected KeySizes[] LegalKeySizesValue;

	[Token(Token = "0x4000CF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected int KeySizeValue;

	[Token(Token = "0x4000CF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	protected CipherMode ModeValue;

	[Token(Token = "0x4000CF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected PaddingMode PaddingValue;

	[Token(Token = "0x170002DE")]
	public virtual int BlockSize
	{
		[Token(Token = "0x6001AEC")]
		[Address(RVA = "0x5353BD0", Offset = "0x5352BD0", VA = "0x5353BD0", Slot = "6")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001AED")]
		[Address(RVA = "0x5353BE0", Offset = "0x5352BE0", VA = "0x5353BE0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x170002DF")]
	public virtual int FeedbackSize
	{
		[Token(Token = "0x6001AEE")]
		[Address(RVA = "0x5353CC0", Offset = "0x5352CC0", VA = "0x5353CC0", Slot = "8")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001AEF")]
		[Address(RVA = "0x5353CD0", Offset = "0x5352CD0", VA = "0x5353CD0", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x170002E0")]
	public virtual byte[] IV
	{
		[Token(Token = "0x6001AF0")]
		[Address(RVA = "0x5353D50", Offset = "0x5352D50", VA = "0x5353D50", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001AF1")]
		[Address(RVA = "0x5353DE0", Offset = "0x5352DE0", VA = "0x5353DE0", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x170002E1")]
	public virtual byte[] Key
	{
		[Token(Token = "0x6001AF2")]
		[Address(RVA = "0x5353F30", Offset = "0x5352F30", VA = "0x5353F30", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001AF3")]
		[Address(RVA = "0x5353FC0", Offset = "0x5352FC0", VA = "0x5353FC0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x170002E2")]
	public virtual KeySizes[] LegalBlockSizes
	{
		[Token(Token = "0x6001AF4")]
		[Address(RVA = "0x5354210", Offset = "0x5353210", VA = "0x5354210", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E3")]
	public virtual KeySizes[] LegalKeySizes
	{
		[Token(Token = "0x6001AF5")]
		[Address(RVA = "0x5354290", Offset = "0x5353290", VA = "0x5354290", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E4")]
	public virtual int KeySize
	{
		[Token(Token = "0x6001AF6")]
		[Address(RVA = "0x5354310", Offset = "0x5353310", VA = "0x5354310", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001AF7")]
		[Address(RVA = "0x5354320", Offset = "0x5353320", VA = "0x5354320", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x170002E5")]
	public virtual CipherMode Mode
	{
		[Token(Token = "0x6001AF8")]
		[Address(RVA = "0x5354410", Offset = "0x5353410", VA = "0x5354410", Slot = "18")]
		get
		{
			return default(CipherMode);
		}
		[Token(Token = "0x6001AF9")]
		[Address(RVA = "0x5354420", Offset = "0x5353420", VA = "0x5354420", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x170002E6")]
	public virtual PaddingMode Padding
	{
		[Token(Token = "0x6001AFA")]
		[Address(RVA = "0x5354490", Offset = "0x5353490", VA = "0x5354490", Slot = "20")]
		get
		{
			return default(PaddingMode);
		}
		[Token(Token = "0x6001AFB")]
		[Address(RVA = "0x53544A0", Offset = "0x53534A0", VA = "0x53544A0", Slot = "21")]
		set
		{
		}
	}

	[Token(Token = "0x6001AE8")]
	[Address(RVA = "0x5353A40", Offset = "0x5352A40", VA = "0x5353A40")]
	protected SymmetricAlgorithm()
	{
	}

	[Token(Token = "0x6001AE9")]
	[Address(RVA = "0x5353A60", Offset = "0x5352A60", VA = "0x5353A60", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001AEA")]
	[Address(RVA = "0x5353AD0", Offset = "0x5352AD0", VA = "0x5353AD0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001AEB")]
	[Address(RVA = "0x5353B60", Offset = "0x5352B60", VA = "0x5353B60", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001AFC")]
	[Address(RVA = "0x5354190", Offset = "0x5353190", VA = "0x5354190")]
	public bool ValidKeySize(int bitLength)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AFD")]
	[Address(RVA = "0x5354510", Offset = "0x5353510", VA = "0x5354510")]
	public static SymmetricAlgorithm Create()
	{
		return null;
	}

	[Token(Token = "0x6001AFE")]
	[Address(RVA = "0x5354550", Offset = "0x5353550", VA = "0x5354550")]
	public static SymmetricAlgorithm Create(string algName)
	{
		return null;
	}

	[Token(Token = "0x6001AFF")]
	[Address(RVA = "0x5354660", Offset = "0x5353660", VA = "0x5354660", Slot = "22")]
	public virtual ICryptoTransform CreateEncryptor()
	{
		return null;
	}

	[Token(Token = "0x6001B00")]
	public abstract ICryptoTransform CreateEncryptor(byte[] rgbKey, byte[] rgbIV);

	[Token(Token = "0x6001B01")]
	[Address(RVA = "0x53546C0", Offset = "0x53536C0", VA = "0x53546C0", Slot = "24")]
	public virtual ICryptoTransform CreateDecryptor()
	{
		return null;
	}

	[Token(Token = "0x6001B02")]
	public abstract ICryptoTransform CreateDecryptor(byte[] rgbKey, byte[] rgbIV);

	[Token(Token = "0x6001B03")]
	public abstract void GenerateKey();

	[Token(Token = "0x6001B04")]
	public abstract void GenerateIV();
}
