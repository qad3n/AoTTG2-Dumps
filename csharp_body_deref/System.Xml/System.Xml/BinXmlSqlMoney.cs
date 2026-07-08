using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200000F")]
internal struct BinXmlSqlMoney
{
	[Token(Token = "0x4000069")]
	[FieldOffset(Offset = "0x0")]
	private long data;

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4348100", Offset = "0x4348100", VA = "0x4348100")]
	public BinXmlSqlMoney(int v)
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4348110", Offset = "0x4348110", VA = "0x4348110")]
	public BinXmlSqlMoney(long v)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4348120", Offset = "0x4348120", VA = "0x4348120")]
	public decimal ToDecimal()
	{
		return default(decimal);
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4348170", Offset = "0x4348170", VA = "0x4348170", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
