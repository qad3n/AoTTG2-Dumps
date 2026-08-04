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

[Token(Token = "0x2000306")]
[ComVisible(true)]
public class SignatureDescription
{
	[Token(Token = "0x4000D7F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string _strKey;

	[Token(Token = "0x4000D80")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string _strDigest;

	[Token(Token = "0x4000D81")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string _strFormatter;

	[Token(Token = "0x4000D82")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string _strDeformatter;

	[Token(Token = "0x170002D9")]
	public string KeyAlgorithm
	{
		[Token(Token = "0x6001A90")]
		[Address(RVA = "0x3B49B30", Offset = "0x3B49B30", VA = "0x3B49B30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A91")]
		[Address(RVA = "0x3B49B40", Offset = "0x3B49B40", VA = "0x3B49B40")]
		set
		{
		}
	}

	[Token(Token = "0x170002DA")]
	public string DigestAlgorithm
	{
		[Token(Token = "0x6001A92")]
		[Address(RVA = "0x3B49B50", Offset = "0x3B49B50", VA = "0x3B49B50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A93")]
		[Address(RVA = "0x3B49B60", Offset = "0x3B49B60", VA = "0x3B49B60")]
		set
		{
		}
	}

	[Token(Token = "0x170002DB")]
	public string FormatterAlgorithm
	{
		[Token(Token = "0x6001A94")]
		[Address(RVA = "0x3B49B70", Offset = "0x3B49B70", VA = "0x3B49B70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A95")]
		[Address(RVA = "0x3B49B80", Offset = "0x3B49B80", VA = "0x3B49B80")]
		set
		{
		}
	}

	[Token(Token = "0x170002DC")]
	public string DeformatterAlgorithm
	{
		[Token(Token = "0x6001A96")]
		[Address(RVA = "0x3B49B90", Offset = "0x3B49B90", VA = "0x3B49B90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A97")]
		[Address(RVA = "0x3B49BA0", Offset = "0x3B49BA0", VA = "0x3B49BA0")]
		set
		{
		}
	}

	[Token(Token = "0x6001A8E")]
	[Address(RVA = "0x3B499E0", Offset = "0x3B499E0", VA = "0x3B499E0")]
	public SignatureDescription()
	{
	}

	[Token(Token = "0x6001A8F")]
	[Address(RVA = "0x3B499F0", Offset = "0x3B499F0", VA = "0x3B499F0")]
	public SignatureDescription(SecurityElement el)
	{
	}

	[Token(Token = "0x6001A98")]
	[Address(RVA = "0x3B49BB0", Offset = "0x3B49BB0", VA = "0x3B49BB0", Slot = "4")]
	public virtual AsymmetricSignatureDeformatter CreateDeformatter(AsymmetricAlgorithm key)
	{
		return null;
	}

	[Token(Token = "0x6001A99")]
	[Address(RVA = "0x3B49CC0", Offset = "0x3B49CC0", VA = "0x3B49CC0", Slot = "5")]
	public virtual AsymmetricSignatureFormatter CreateFormatter(AsymmetricAlgorithm key)
	{
		return null;
	}

	[Token(Token = "0x6001A9A")]
	[Address(RVA = "0x3B49DD0", Offset = "0x3B49DD0", VA = "0x3B49DD0", Slot = "6")]
	public virtual HashAlgorithm CreateDigest()
	{
		return null;
	}
}
