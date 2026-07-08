using System.Collections;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000347")]
internal class ChannelData
{
	[Token(Token = "0x4000E97")]
	[FieldOffset(Offset = "0x10")]
	internal string Ref;

	[Token(Token = "0x4000E98")]
	[FieldOffset(Offset = "0x18")]
	internal string Type;

	[Token(Token = "0x4000E99")]
	[FieldOffset(Offset = "0x20")]
	internal string Id;

	[Token(Token = "0x4000E9A")]
	[FieldOffset(Offset = "0x28")]
	internal string DelayLoadAsClientChannel;

	[Token(Token = "0x4000E9B")]
	[FieldOffset(Offset = "0x30")]
	private ArrayList _serverProviders;

	[Token(Token = "0x4000E9C")]
	[FieldOffset(Offset = "0x38")]
	private ArrayList _clientProviders;

	[Token(Token = "0x4000E9D")]
	[FieldOffset(Offset = "0x40")]
	private Hashtable _customProperties;

	[Token(Token = "0x17000342")]
	internal ArrayList ServerProviders
	{
		[Token(Token = "0x6001C71")]
		[Address(RVA = "0x4E7F000", Offset = "0x4E7F000", VA = "0x4E7F000")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000343")]
	public ArrayList ClientProviders
	{
		[Token(Token = "0x6001C72")]
		[Address(RVA = "0x4E7F970", Offset = "0x4E7F970", VA = "0x4E7F970")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000344")]
	public Hashtable CustomProperties
	{
		[Token(Token = "0x6001C73")]
		[Address(RVA = "0x4E83B20", Offset = "0x4E83B20", VA = "0x4E83B20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C74")]
	[Address(RVA = "0x4E7E160", Offset = "0x4E7E160", VA = "0x4E7E160")]
	public void CopyFrom(System.Runtime.Remoting.ChannelData other)
	{
	}

	[Token(Token = "0x6001C75")]
	[Address(RVA = "0x4E83A60", Offset = "0x4E83A60", VA = "0x4E83A60")]
	public ChannelData()
	{
	}
}
