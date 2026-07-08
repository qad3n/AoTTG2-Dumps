using Il2CppDummyDll;

namespace System.Xml.Linq;

[Token(Token = "0x2000022")]
public class XProcessingInstruction : XNode
{
	[Token(Token = "0x4000059")]
	[FieldOffset(Offset = "0x28")]
	internal string target;

	[Token(Token = "0x400005A")]
	[FieldOffset(Offset = "0x30")]
	internal string data;

	[Token(Token = "0x1700002A")]
	public string Data
	{
		[Token(Token = "0x60000DA")]
		[Address(RVA = "0x4345D40", Offset = "0x4345D40", VA = "0x4345D40")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000DB")]
		[Address(RVA = "0x4345D50", Offset = "0x4345D50", VA = "0x4345D50")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60000DC")]
		[Address(RVA = "0x4345F80", Offset = "0x4345F80", VA = "0x4345F80", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x1700002C")]
	public string Target
	{
		[Token(Token = "0x60000DD")]
		[Address(RVA = "0x4345F90", Offset = "0x4345F90", VA = "0x4345F90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x4340EE0", Offset = "0x4340EE0", VA = "0x4340EE0")]
	public XProcessingInstruction(string target, string data)
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x4345CB0", Offset = "0x4345CB0", VA = "0x4345CB0")]
	public XProcessingInstruction(XProcessingInstruction other)
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x4345FA0", Offset = "0x4345FA0", VA = "0x4345FA0", Slot = "8")]
	public override void WriteTo(XmlWriter writer)
	{
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x4346010", Offset = "0x4346010", VA = "0x4346010", Slot = "10")]
	internal override XNode CloneNode()
	{
		return null;
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x4345BE0", Offset = "0x4345BE0", VA = "0x4345BE0")]
	private static void ValidateName(string name)
	{
	}
}
