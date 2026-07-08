using System.Xml.Linq;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001CA")]
internal class XDocumentTypeWrapper : XObjectWrapper, IXmlDocumentType, IXmlNode
{
	[Token(Token = "0x400081A")]
	[FieldOffset(Offset = "0x18")]
	private readonly XDocumentType _documentType;

	[Token(Token = "0x1700027F")]
	public string Name
	{
		[Token(Token = "0x6000F5B")]
		[Address(RVA = "0x3B54100", Offset = "0x3B54100", VA = "0x3B54100", Slot = "23")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000280")]
	public string? System
	{
		[Token(Token = "0x6000F5C")]
		[Address(RVA = "0x3B54120", Offset = "0x3B54120", VA = "0x3B54120", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000281")]
	public string? Public
	{
		[Token(Token = "0x6000F5D")]
		[Address(RVA = "0x3B54140", Offset = "0x3B54140", VA = "0x3B54140", Slot = "25")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000282")]
	public string? InternalSubset
	{
		[Token(Token = "0x6000F5E")]
		[Address(RVA = "0x3B54160", Offset = "0x3B54160", VA = "0x3B54160", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000283")]
	public override string? LocalName
	{
		[Token(Token = "0x6000F5F")]
		[Address(RVA = "0x3B54180", Offset = "0x3B54180", VA = "0x3B54180", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F5A")]
	[Address(RVA = "0x3B540C0", Offset = "0x3B540C0", VA = "0x3B540C0")]
	public XDocumentTypeWrapper(XDocumentType documentType)
	{
	}
}
