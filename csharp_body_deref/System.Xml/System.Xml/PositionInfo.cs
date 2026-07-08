using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000C0")]
internal class PositionInfo : IXmlLineInfo
{
	[Token(Token = "0x170002E4")]
	public virtual int LineNumber
	{
		[Token(Token = "0x6000A7B")]
		[Address(RVA = "0x44A8070", Offset = "0x44A8070", VA = "0x44A8070", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002E5")]
	public virtual int LinePosition
	{
		[Token(Token = "0x6000A7C")]
		[Address(RVA = "0x44A8080", Offset = "0x44A8080", VA = "0x44A8080", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000A7A")]
	[Address(RVA = "0x44A8060", Offset = "0x44A8060", VA = "0x44A8060", Slot = "7")]
	public virtual bool HasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A7D")]
	[Address(RVA = "0x44A8090", Offset = "0x44A8090", VA = "0x44A8090")]
	public static PositionInfo GetPositionInfo(object o)
	{
		return null;
	}

	[Token(Token = "0x6000A7E")]
	[Address(RVA = "0x44A8170", Offset = "0x44A8170", VA = "0x44A8170")]
	public PositionInfo()
	{
	}
}
