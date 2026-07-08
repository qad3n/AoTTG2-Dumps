using System.Collections.Generic;
using System.ComponentModel;
using System.IO;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000055")]
[EditorBrowsable(EditorBrowsableState.Never)]
public class XmlTextReader : XmlReader, IXmlLineInfo, IXmlNamespaceResolver
{
	[Token(Token = "0x40001D5")]
	[FieldOffset(Offset = "0x10")]
	private XmlTextReaderImpl impl;

	[Token(Token = "0x170000BC")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60003B7")]
		[Address(RVA = "0x4466C50", Offset = "0x4466C50", VA = "0x4466C50", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170000BD")]
	public override string Name
	{
		[Token(Token = "0x60003B8")]
		[Address(RVA = "0x4466C80", Offset = "0x4466C80", VA = "0x4466C80", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BE")]
	public override string LocalName
	{
		[Token(Token = "0x60003B9")]
		[Address(RVA = "0x4466CB0", Offset = "0x4466CB0", VA = "0x4466CB0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BF")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60003BA")]
		[Address(RVA = "0x4466CE0", Offset = "0x4466CE0", VA = "0x4466CE0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C0")]
	public override string Prefix
	{
		[Token(Token = "0x60003BB")]
		[Address(RVA = "0x4466D10", Offset = "0x4466D10", VA = "0x4466D10", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C1")]
	public override string Value
	{
		[Token(Token = "0x60003BC")]
		[Address(RVA = "0x4466D40", Offset = "0x4466D40", VA = "0x4466D40", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C2")]
	public override int Depth
	{
		[Token(Token = "0x60003BD")]
		[Address(RVA = "0x4466D70", Offset = "0x4466D70", VA = "0x4466D70", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000C3")]
	public override string BaseURI
	{
		[Token(Token = "0x60003BE")]
		[Address(RVA = "0x4466DA0", Offset = "0x4466DA0", VA = "0x4466DA0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C4")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x60003BF")]
		[Address(RVA = "0x4466DD0", Offset = "0x4466DD0", VA = "0x4466DD0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C5")]
	public override bool IsDefault
	{
		[Token(Token = "0x60003C0")]
		[Address(RVA = "0x4466E00", Offset = "0x4466E00", VA = "0x4466E00", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C6")]
	public override char QuoteChar
	{
		[Token(Token = "0x60003C1")]
		[Address(RVA = "0x4466E30", Offset = "0x4466E30", VA = "0x4466E30", Slot = "16")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x170000C7")]
	public override XmlSpace XmlSpace
	{
		[Token(Token = "0x60003C2")]
		[Address(RVA = "0x4466E60", Offset = "0x4466E60", VA = "0x4466E60", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x170000C8")]
	public override string XmlLang
	{
		[Token(Token = "0x60003C3")]
		[Address(RVA = "0x4466E90", Offset = "0x4466E90", VA = "0x4466E90", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C9")]
	public override int AttributeCount
	{
		[Token(Token = "0x60003C4")]
		[Address(RVA = "0x4466EC0", Offset = "0x4466EC0", VA = "0x4466EC0", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000CA")]
	public override bool EOF
	{
		[Token(Token = "0x60003CF")]
		[Address(RVA = "0x44670D0", Offset = "0x44670D0", VA = "0x44670D0", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CB")]
	public override ReadState ReadState
	{
		[Token(Token = "0x60003D1")]
		[Address(RVA = "0x4467130", Offset = "0x4467130", VA = "0x4467130", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x170000CC")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x60003D3")]
		[Address(RVA = "0x4467190", Offset = "0x4467190", VA = "0x4467190", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CD")]
	public override bool CanResolveEntity
	{
		[Token(Token = "0x60003D5")]
		[Address(RVA = "0x4467200", Offset = "0x4467200", VA = "0x4467200", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CE")]
	public override bool CanReadValueChunk
	{
		[Token(Token = "0x60003D7")]
		[Address(RVA = "0x4467240", Offset = "0x4467240", VA = "0x4467240", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CF")]
	public int LineNumber
	{
		[Token(Token = "0x60003DA")]
		[Address(RVA = "0x4467290", Offset = "0x4467290", VA = "0x4467290", Slot = "54")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D0")]
	public int LinePosition
	{
		[Token(Token = "0x60003DB")]
		[Address(RVA = "0x44672B0", Offset = "0x44672B0", VA = "0x44672B0", Slot = "55")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D1")]
	public bool Namespaces
	{
		[Token(Token = "0x60003DF")]
		[Address(RVA = "0x4463B30", Offset = "0x4463B30", VA = "0x4463B30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D2")]
	public bool Normalization
	{
		[Token(Token = "0x60003E0")]
		[Address(RVA = "0x4467340", Offset = "0x4467340", VA = "0x4467340")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003E1")]
		[Address(RVA = "0x4467360", Offset = "0x4467360", VA = "0x4467360")]
		set
		{
		}
	}

	[Token(Token = "0x170000D3")]
	public WhitespaceHandling WhitespaceHandling
	{
		[Token(Token = "0x60003E2")]
		[Address(RVA = "0x4467380", Offset = "0x4467380", VA = "0x4467380")]
		set
		{
		}
	}

	[Token(Token = "0x170000D4")]
	public EntityHandling EntityHandling
	{
		[Token(Token = "0x60003E3")]
		[Address(RVA = "0x44673A0", Offset = "0x44673A0", VA = "0x44673A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D5")]
	public XmlResolver XmlResolver
	{
		[Token(Token = "0x60003E4")]
		[Address(RVA = "0x44673C0", Offset = "0x44673C0", VA = "0x44673C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D6")]
	internal XmlTextReaderImpl Impl
	{
		[Token(Token = "0x60003E5")]
		[Address(RVA = "0x44673E0", Offset = "0x44673E0", VA = "0x44673E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D7")]
	internal override XmlNamespaceManager NamespaceManager
	{
		[Token(Token = "0x60003E6")]
		[Address(RVA = "0x44673F0", Offset = "0x44673F0", VA = "0x44673F0", Slot = "51")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D8")]
	internal bool XmlValidatingReaderCompatibilityMode
	{
		[Token(Token = "0x60003E7")]
		[Address(RVA = "0x4467420", Offset = "0x4467420", VA = "0x4467420")]
		set
		{
		}
	}

	[Token(Token = "0x170000D9")]
	internal override IDtdInfo DtdInfo
	{
		[Token(Token = "0x60003E8")]
		[Address(RVA = "0x4467440", Offset = "0x4467440", VA = "0x4467440", Slot = "52")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x44668A0", Offset = "0x44668A0", VA = "0x44668A0")]
	public XmlTextReader(Stream input)
	{
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x4466950", Offset = "0x4466950", VA = "0x4466950")]
	public XmlTextReader(string url, Stream input, XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x4466A20", Offset = "0x4466A20", VA = "0x4466A20")]
	public XmlTextReader(TextReader input)
	{
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x4466AD0", Offset = "0x4466AD0", VA = "0x4466AD0")]
	public XmlTextReader(TextReader input, XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x4466B90", Offset = "0x4466B90", VA = "0x4466B90")]
	public XmlTextReader(string url, XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x4466EF0", Offset = "0x4466EF0", VA = "0x4466EF0", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x4466F20", Offset = "0x4466F20", VA = "0x4466F20", Slot = "23")]
	public override string GetAttribute(string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x4466F50", Offset = "0x4466F50", VA = "0x4466F50", Slot = "24")]
	public override string GetAttribute(int i)
	{
		return null;
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x4466F80", Offset = "0x4466F80", VA = "0x4466F80", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x4466FB0", Offset = "0x4466FB0", VA = "0x4466FB0", Slot = "26")]
	public override void MoveToAttribute(int i)
	{
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x4466FE0", Offset = "0x4466FE0", VA = "0x4466FE0", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x4467010", Offset = "0x4467010", VA = "0x4467010", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x4467040", Offset = "0x4467040", VA = "0x4467040", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x4467070", Offset = "0x4467070", VA = "0x4467070", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x44670A0", Offset = "0x44670A0", VA = "0x44670A0", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x4467100", Offset = "0x4467100", VA = "0x4467100", Slot = "33")]
	public override void Close()
	{
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x4467160", Offset = "0x4467160", VA = "0x4467160", Slot = "35")]
	public override void Skip()
	{
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x44671C0", Offset = "0x44671C0", VA = "0x44671C0", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x4467210", Offset = "0x4467210", VA = "0x4467210", Slot = "39")]
	public override void ResolveEntity()
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x4467250", Offset = "0x4467250", VA = "0x4467250", Slot = "42")]
	public override string ReadString()
	{
		return null;
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x4467280", Offset = "0x4467280", VA = "0x4467280", Slot = "53")]
	public bool HasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x44672D0", Offset = "0x44672D0", VA = "0x44672D0", Slot = "56")]
	private IDictionary<string, string> System_002EXml_002EIXmlNamespaceResolver_002EGetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x44672F0", Offset = "0x44672F0", VA = "0x44672F0", Slot = "57")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x4467320", Offset = "0x4467320", VA = "0x4467320", Slot = "58")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupPrefix(string namespaceName)
	{
		return null;
	}
}
