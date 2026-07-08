using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x2000395")]
public sealed class HttpWebRequestElement : ConfigurationElement
{
	[Token(Token = "0x17000545")]
	public int MaximumErrorResponseLength
	{
		[Token(Token = "0x60017B8")]
		[Address(RVA = "0x45CEBE0", Offset = "0x45CEBE0", VA = "0x45CEBE0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60017B9")]
		[Address(RVA = "0x45CEC10", Offset = "0x45CEC10", VA = "0x45CEC10")]
		set
		{
		}
	}

	[Token(Token = "0x17000546")]
	public int MaximumResponseHeadersLength
	{
		[Token(Token = "0x60017BA")]
		[Address(RVA = "0x45CEC40", Offset = "0x45CEC40", VA = "0x45CEC40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60017BB")]
		[Address(RVA = "0x45CEC70", Offset = "0x45CEC70", VA = "0x45CEC70")]
		set
		{
		}
	}

	[Token(Token = "0x17000547")]
	public int MaximumUnauthorizedUploadLength
	{
		[Token(Token = "0x60017BC")]
		[Address(RVA = "0x45CECA0", Offset = "0x45CECA0", VA = "0x45CECA0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60017BD")]
		[Address(RVA = "0x45CECD0", Offset = "0x45CECD0", VA = "0x45CECD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000548")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60017BE")]
		[Address(RVA = "0x45CED00", Offset = "0x45CED00", VA = "0x45CED00", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000549")]
	public bool UseUnsafeHeaderParsing
	{
		[Token(Token = "0x60017BF")]
		[Address(RVA = "0x45CED30", Offset = "0x45CED30", VA = "0x45CED30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60017C0")]
		[Address(RVA = "0x45CED60", Offset = "0x45CED60", VA = "0x45CED60")]
		set
		{
		}
	}

	[Token(Token = "0x60017B7")]
	[Address(RVA = "0x45CEBB0", Offset = "0x45CEBB0", VA = "0x45CEBB0")]
	public HttpWebRequestElement()
	{
	}

	[Token(Token = "0x60017C1")]
	[Address(RVA = "0x45CED90", Offset = "0x45CED90", VA = "0x45CED90", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
