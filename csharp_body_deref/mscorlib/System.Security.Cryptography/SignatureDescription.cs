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
		[Address(RVA = "0x4E64010", Offset = "0x4E64010", VA = "0x4E64010")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A91")]
		[Address(RVA = "0x4E64020", Offset = "0x4E64020", VA = "0x4E64020")]
		set
		{
		}
	}

	[Token(Token = "0x170002DA")]
	public string DigestAlgorithm
	{
		[Token(Token = "0x6001A92")]
		[Address(RVA = "0x4E64030", Offset = "0x4E64030", VA = "0x4E64030")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A93")]
		[Address(RVA = "0x4E64040", Offset = "0x4E64040", VA = "0x4E64040")]
		set
		{
		}
	}

	[Token(Token = "0x170002DB")]
	public string FormatterAlgorithm
	{
		[Token(Token = "0x6001A94")]
		[Address(RVA = "0x4E64050", Offset = "0x4E64050", VA = "0x4E64050")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A95")]
		[Address(RVA = "0x4E64060", Offset = "0x4E64060", VA = "0x4E64060")]
		set
		{
		}
	}

	[Token(Token = "0x170002DC")]
	public string DeformatterAlgorithm
	{
		[Token(Token = "0x6001A96")]
		[Address(RVA = "0x4E64070", Offset = "0x4E64070", VA = "0x4E64070")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A97")]
		[Address(RVA = "0x4E64080", Offset = "0x4E64080", VA = "0x4E64080")]
		set
		{
		}
	}

	[Token(Token = "0x6001A8E")]
	[Address(RVA = "0x4E63EC0", Offset = "0x4E63EC0", VA = "0x4E63EC0")]
	public SignatureDescription()
	{
	}

	[Token(Token = "0x6001A8F")]
	[Address(RVA = "0x4E63ED0", Offset = "0x4E63ED0", VA = "0x4E63ED0")]
	public SignatureDescription(SecurityElement el)
	{
	}

	[Token(Token = "0x6001A98")]
	[Address(RVA = "0x4E64090", Offset = "0x4E64090", VA = "0x4E64090", Slot = "4")]
	public virtual AsymmetricSignatureDeformatter CreateDeformatter(AsymmetricAlgorithm key)
	{
		return null;
	}

	[Token(Token = "0x6001A99")]
	[Address(RVA = "0x4E641A0", Offset = "0x4E641A0", VA = "0x4E641A0", Slot = "5")]
	public virtual AsymmetricSignatureFormatter CreateFormatter(AsymmetricAlgorithm key)
	{
		return null;
	}

	[Token(Token = "0x6001A9A")]
	[Address(RVA = "0x4E642B0", Offset = "0x4E642B0", VA = "0x4E642B0", Slot = "6")]
	public virtual HashAlgorithm CreateDigest()
	{
		return null;
	}
}
