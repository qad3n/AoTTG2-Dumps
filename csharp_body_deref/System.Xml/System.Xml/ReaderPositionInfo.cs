using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000C1")]
internal class ReaderPositionInfo : PositionInfo
{
	[Token(Token = "0x40004C8")]
	[FieldOffset(Offset = "0x10")]
	private IXmlLineInfo lineInfo;

	[Token(Token = "0x170002E6")]
	public override int LineNumber
	{
		[Token(Token = "0x6000A81")]
		[Address(RVA = "0x44A8210", Offset = "0x44A8210", VA = "0x44A8210", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002E7")]
	public override int LinePosition
	{
		[Token(Token = "0x6000A82")]
		[Address(RVA = "0x44A82B0", Offset = "0x44A82B0", VA = "0x44A82B0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000A7F")]
	[Address(RVA = "0x44A8140", Offset = "0x44A8140", VA = "0x44A8140")]
	public ReaderPositionInfo(IXmlLineInfo lineInfo)
	{
	}

	[Token(Token = "0x6000A80")]
	[Address(RVA = "0x44A8180", Offset = "0x44A8180", VA = "0x44A8180", Slot = "7")]
	public override bool HasLineInfo()
	{
		return default(bool);
	}
}
