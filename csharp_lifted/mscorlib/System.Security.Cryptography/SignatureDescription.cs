// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.SignatureDescription
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x200030E")]
[ComVisible(true)]
public class SignatureDescription
{
	[Token(Token = "0x4000CEC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string _strKey;

	[Token(Token = "0x4000CED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string _strDigest;

	[Token(Token = "0x4000CEE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string _strFormatter;

	[Token(Token = "0x4000CEF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string _strDeformatter;

	[Token(Token = "0x170002DA")]
	public string KeyAlgorithm
	{
		[Token(Token = "0x6001AD5")]
		[Address(RVA = "0x5353390", Offset = "0x5352390", VA = "0x5353390")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001AD6")]
		[Address(RVA = "0x53533A0", Offset = "0x53523A0", VA = "0x53533A0")]
		set
		{
		}
	}

	[Token(Token = "0x170002DB")]
	public string DigestAlgorithm
	{
		[Token(Token = "0x6001AD7")]
		[Address(RVA = "0x53533B0", Offset = "0x53523B0", VA = "0x53533B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001AD8")]
		[Address(RVA = "0x53533C0", Offset = "0x53523C0", VA = "0x53533C0")]
		set
		{
		}
	}

	[Token(Token = "0x170002DC")]
	public string FormatterAlgorithm
	{
		[Token(Token = "0x6001AD9")]
		[Address(RVA = "0x53533D0", Offset = "0x53523D0", VA = "0x53533D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001ADA")]
		[Address(RVA = "0x53533E0", Offset = "0x53523E0", VA = "0x53533E0")]
		set
		{
		}
	}

	[Token(Token = "0x170002DD")]
	public string DeformatterAlgorithm
	{
		[Token(Token = "0x6001ADB")]
		[Address(RVA = "0x53533F0", Offset = "0x53523F0", VA = "0x53533F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001ADC")]
		[Address(RVA = "0x5353400", Offset = "0x5352400", VA = "0x5353400")]
		set
		{
		}
	}

	[Token(Token = "0x6001AD3")]
	[Address(RVA = "0x5353240", Offset = "0x5352240", VA = "0x5353240")]
	public SignatureDescription()
	{
	}

	[Token(Token = "0x6001AD4")]
	[Address(RVA = "0x5353250", Offset = "0x5352250", VA = "0x5353250")]
	public SignatureDescription(SecurityElement el)
	{
	}

	[Token(Token = "0x6001ADD")]
	[Address(RVA = "0x5353410", Offset = "0x5352410", VA = "0x5353410", Slot = "4")]
	public virtual AsymmetricSignatureDeformatter CreateDeformatter(AsymmetricAlgorithm key)
	{
		return null;
	}

	[Token(Token = "0x6001ADE")]
	[Address(RVA = "0x5353520", Offset = "0x5352520", VA = "0x5353520", Slot = "5")]
	public virtual AsymmetricSignatureFormatter CreateFormatter(AsymmetricAlgorithm key)
	{
		return null;
	}

	[Token(Token = "0x6001ADF")]
	[Address(RVA = "0x5353630", Offset = "0x5352630", VA = "0x5353630", Slot = "6")]
	public virtual HashAlgorithm CreateDigest()
	{
		return null;
	}
}
