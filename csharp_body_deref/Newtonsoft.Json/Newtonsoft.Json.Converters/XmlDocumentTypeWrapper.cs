using System.Xml;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001C2")]
internal class XmlDocumentTypeWrapper : XmlNodeWrapper, IXmlDocumentType, IXmlNode
{
	[Token(Token = "0x4000815")]
	[FieldOffset(Offset = "0x28")]
	private readonly XmlDocumentType _documentType;

	[Token(Token = "0x1700025A")]
	public string Name
	{
		[Token(Token = "0x6000F1C")]
		[Address(RVA = "0x3B52FE0", Offset = "0x3B52FE0", VA = "0x3B52FE0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700025B")]
	public string? System
	{
		[Token(Token = "0x6000F1D")]
		[Address(RVA = "0x3B53010", Offset = "0x3B53010", VA = "0x3B53010", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700025C")]
	public string? Public
	{
		[Token(Token = "0x6000F1E")]
		[Address(RVA = "0x3B53030", Offset = "0x3B53030", VA = "0x3B53030", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700025D")]
	public string? InternalSubset
	{
		[Token(Token = "0x6000F1F")]
		[Address(RVA = "0x3B53050", Offset = "0x3B53050", VA = "0x3B53050", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700025E")]
	public override string? LocalName
	{
		[Token(Token = "0x6000F20")]
		[Address(RVA = "0x3B53070", Offset = "0x3B53070", VA = "0x3B53070", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F1B")]
	[Address(RVA = "0x3B529B0", Offset = "0x3B529B0", VA = "0x3B529B0")]
	public XmlDocumentTypeWrapper(XmlDocumentType documentType)
	{
	}
}
