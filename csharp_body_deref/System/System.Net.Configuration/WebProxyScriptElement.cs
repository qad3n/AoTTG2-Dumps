using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003A1")]
public sealed class WebProxyScriptElement : ConfigurationElement
{
	[Token(Token = "0x17000584")]
	public int AutoConfigUrlRetryInterval
	{
		[Token(Token = "0x600182A")]
		[Address(RVA = "0x45D0140", Offset = "0x45D0140", VA = "0x45D0140")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600182B")]
		[Address(RVA = "0x45D0170", Offset = "0x45D0170", VA = "0x45D0170")]
		set
		{
		}
	}

	[Token(Token = "0x17000585")]
	public TimeSpan DownloadTimeout
	{
		[Token(Token = "0x600182C")]
		[Address(RVA = "0x45D01A0", Offset = "0x45D01A0", VA = "0x45D01A0")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x600182D")]
		[Address(RVA = "0x45D01D0", Offset = "0x45D01D0", VA = "0x45D01D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000586")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x600182E")]
		[Address(RVA = "0x45D0200", Offset = "0x45D0200", VA = "0x45D0200", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001829")]
	[Address(RVA = "0x45D0110", Offset = "0x45D0110", VA = "0x45D0110")]
	public WebProxyScriptElement()
	{
	}

	[Token(Token = "0x600182F")]
	[Address(RVA = "0x45D0230", Offset = "0x45D0230", VA = "0x45D0230", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
