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

[Token(Token = "0x2000335")]
[ComVisible(true)]
public class SignatureDescription
{
	[Token(Token = "0x4000D8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string _strKey;

	[Token(Token = "0x4000D8D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string _strDigest;

	[Token(Token = "0x4000D8E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string _strFormatter;

	[Token(Token = "0x4000D8F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string _strDeformatter;

	[Token(Token = "0x170002DB")]
	public string KeyAlgorithm
	{
		[Token(Token = "0x6001AF8")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001AF9")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x170002DC")]
	public string DigestAlgorithm
	{
		[Token(Token = "0x6001AFA")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001AFB")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x170002DD")]
	public string FormatterAlgorithm
	{
		[Token(Token = "0x6001AFC")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001AFD")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x170002DE")]
	public string DeformatterAlgorithm
	{
		[Token(Token = "0x6001AFE")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001AFF")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		set
		{
		}
	}

	[Token(Token = "0x6001AF6")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public SignatureDescription()
	{
	}

	[Token(Token = "0x6001AF7")]
	[Address(RVA = "0x19CE9F0", Offset = "0x19CCFF0", VA = "0x1819CE9F0")]
	public SignatureDescription(SecurityElement el)
	{
	}

	[Token(Token = "0x6001B00")]
	[Address(RVA = "0x19CE720", Offset = "0x19CCD20", VA = "0x1819CE720", Slot = "4")]
	public virtual AsymmetricSignatureDeformatter CreateDeformatter(AsymmetricAlgorithm key)
	{
		return null;
	}

	[Token(Token = "0x6001B01")]
	[Address(RVA = "0x19CE8F0", Offset = "0x19CCEF0", VA = "0x1819CE8F0", Slot = "5")]
	public virtual AsymmetricSignatureFormatter CreateFormatter(AsymmetricAlgorithm key)
	{
		return null;
	}

	[Token(Token = "0x6001B02")]
	[Address(RVA = "0x19CE820", Offset = "0x19CCE20", VA = "0x1819CE820", Slot = "6")]
	public virtual HashAlgorithm CreateDigest()
	{
		return null;
	}
}
