using System.Xml.Linq;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001CE")]
internal class XProcessingInstructionWrapper : XObjectWrapper
{
	[Token(Token = "0x1700028E")]
	private XProcessingInstruction ProcessingInstruction
	{
		[Token(Token = "0x6000F7C")]
		[Address(RVA = "0x3B55E50", Offset = "0x3B55E50", VA = "0x3B55E50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028F")]
	public override string? LocalName
	{
		[Token(Token = "0x6000F7E")]
		[Address(RVA = "0x3B55EB0", Offset = "0x3B55EB0", VA = "0x3B55EB0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000290")]
	public override string? Value
	{
		[Token(Token = "0x6000F7F")]
		[Address(RVA = "0x3B55F20", Offset = "0x3B55F20", VA = "0x3B55F20", Slot = "19")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F80")]
		[Address(RVA = "0x3B55F90", Offset = "0x3B55F90", VA = "0x3B55F90", Slot = "20")]
		set
		{
		}
	}

	[Token(Token = "0x6000F7D")]
	[Address(RVA = "0x3B54FC0", Offset = "0x3B54FC0", VA = "0x3B54FC0")]
	public XProcessingInstructionWrapper(XProcessingInstruction processingInstruction)
	{
	}
}
