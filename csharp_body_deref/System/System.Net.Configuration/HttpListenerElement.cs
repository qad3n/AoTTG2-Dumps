using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x2000393")]
public sealed class HttpListenerElement : ConfigurationElement
{
	[Token(Token = "0x1700053B")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60017AC")]
		[Address(RVA = "0x45CE9A0", Offset = "0x45CE9A0", VA = "0x45CE9A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053C")]
	public HttpListenerTimeoutsElement Timeouts
	{
		[Token(Token = "0x60017AD")]
		[Address(RVA = "0x45CE9D0", Offset = "0x45CE9D0", VA = "0x45CE9D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053D")]
	public bool UnescapeRequestUrl
	{
		[Token(Token = "0x60017AE")]
		[Address(RVA = "0x45CEA00", Offset = "0x45CEA00", VA = "0x45CEA00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60017AB")]
	[Address(RVA = "0x45CE970", Offset = "0x45CE970", VA = "0x45CE970")]
	public HttpListenerElement()
	{
	}
}
