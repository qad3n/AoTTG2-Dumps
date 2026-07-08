using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003A2")]
public sealed class WebUtilityElement : ConfigurationElement
{
	[Token(Token = "0x17000587")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001831")]
		[Address(RVA = "0x45D0290", Offset = "0x45D0290", VA = "0x45D0290", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000588")]
	public UnicodeDecodingConformance UnicodeDecodingConformance
	{
		[Token(Token = "0x6001832")]
		[Address(RVA = "0x45D02C0", Offset = "0x45D02C0", VA = "0x45D02C0")]
		get
		{
			return default(UnicodeDecodingConformance);
		}
		[Token(Token = "0x6001833")]
		[Address(RVA = "0x45D02F0", Offset = "0x45D02F0", VA = "0x45D02F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000589")]
	public UnicodeEncodingConformance UnicodeEncodingConformance
	{
		[Token(Token = "0x6001834")]
		[Address(RVA = "0x45D0320", Offset = "0x45D0320", VA = "0x45D0320")]
		get
		{
			return default(UnicodeEncodingConformance);
		}
		[Token(Token = "0x6001835")]
		[Address(RVA = "0x45D0350", Offset = "0x45D0350", VA = "0x45D0350")]
		set
		{
		}
	}

	[Token(Token = "0x6001830")]
	[Address(RVA = "0x45D0260", Offset = "0x45D0260", VA = "0x45D0260")]
	public WebUtilityElement()
	{
	}
}
