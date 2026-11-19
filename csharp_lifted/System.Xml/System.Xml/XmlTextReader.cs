// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlTextReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x60A9590", Offset = "0x60A8590", VA = "0x60A9590", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170000BD")]
	public override string Name
	{
		[Token(Token = "0x60003B8")]
		[Address(RVA = "0x60A95C0", Offset = "0x60A85C0", VA = "0x60A95C0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BE")]
	public override string LocalName
	{
		[Token(Token = "0x60003B9")]
		[Address(RVA = "0x60A95F0", Offset = "0x60A85F0", VA = "0x60A95F0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BF")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60003BA")]
		[Address(RVA = "0x60A9620", Offset = "0x60A8620", VA = "0x60A9620", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C0")]
	public override string Prefix
	{
		[Token(Token = "0x60003BB")]
		[Address(RVA = "0x60A9650", Offset = "0x60A8650", VA = "0x60A9650", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C1")]
	public override string Value
	{
		[Token(Token = "0x60003BC")]
		[Address(RVA = "0x60A9680", Offset = "0x60A8680", VA = "0x60A9680", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C2")]
	public override int Depth
	{
		[Token(Token = "0x60003BD")]
		[Address(RVA = "0x60A96B0", Offset = "0x60A86B0", VA = "0x60A96B0", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000C3")]
	public override string BaseURI
	{
		[Token(Token = "0x60003BE")]
		[Address(RVA = "0x60A96E0", Offset = "0x60A86E0", VA = "0x60A96E0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C4")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x60003BF")]
		[Address(RVA = "0x60A9710", Offset = "0x60A8710", VA = "0x60A9710", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C5")]
	public override bool IsDefault
	{
		[Token(Token = "0x60003C0")]
		[Address(RVA = "0x60A9740", Offset = "0x60A8740", VA = "0x60A9740", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C6")]
	public override char QuoteChar
	{
		[Token(Token = "0x60003C1")]
		[Address(RVA = "0x60A9770", Offset = "0x60A8770", VA = "0x60A9770", Slot = "16")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x170000C7")]
	public override XmlSpace XmlSpace
	{
		[Token(Token = "0x60003C2")]
		[Address(RVA = "0x60A97A0", Offset = "0x60A87A0", VA = "0x60A97A0", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x170000C8")]
	public override string XmlLang
	{
		[Token(Token = "0x60003C3")]
		[Address(RVA = "0x60A97D0", Offset = "0x60A87D0", VA = "0x60A97D0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C9")]
	public override int AttributeCount
	{
		[Token(Token = "0x60003C4")]
		[Address(RVA = "0x60A9800", Offset = "0x60A8800", VA = "0x60A9800", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000CA")]
	public override bool EOF
	{
		[Token(Token = "0x60003CF")]
		[Address(RVA = "0x60A9A10", Offset = "0x60A8A10", VA = "0x60A9A10", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CB")]
	public override ReadState ReadState
	{
		[Token(Token = "0x60003D1")]
		[Address(RVA = "0x60A9A70", Offset = "0x60A8A70", VA = "0x60A9A70", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x170000CC")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x60003D3")]
		[Address(RVA = "0x60A9AD0", Offset = "0x60A8AD0", VA = "0x60A9AD0", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CD")]
	public override bool CanResolveEntity
	{
		[Token(Token = "0x60003D5")]
		[Address(RVA = "0x60A9B40", Offset = "0x60A8B40", VA = "0x60A9B40", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CE")]
	public override bool CanReadValueChunk
	{
		[Token(Token = "0x60003D7")]
		[Address(RVA = "0x60A9B80", Offset = "0x60A8B80", VA = "0x60A9B80", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CF")]
	public int LineNumber
	{
		[Token(Token = "0x60003DA")]
		[Address(RVA = "0x60A9BD0", Offset = "0x60A8BD0", VA = "0x60A9BD0", Slot = "54")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D0")]
	public int LinePosition
	{
		[Token(Token = "0x60003DB")]
		[Address(RVA = "0x60A9BF0", Offset = "0x60A8BF0", VA = "0x60A9BF0", Slot = "55")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D1")]
	public bool Namespaces
	{
		[Token(Token = "0x60003DF")]
		[Address(RVA = "0x60A6510", Offset = "0x60A5510", VA = "0x60A6510")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D2")]
	public bool Normalization
	{
		[Token(Token = "0x60003E0")]
		[Address(RVA = "0x60A9C80", Offset = "0x60A8C80", VA = "0x60A9C80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003E1")]
		[Address(RVA = "0x60A9CA0", Offset = "0x60A8CA0", VA = "0x60A9CA0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D3")]
	public WhitespaceHandling WhitespaceHandling
	{
		[Token(Token = "0x60003E2")]
		[Address(RVA = "0x60A9CC0", Offset = "0x60A8CC0", VA = "0x60A9CC0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D4")]
	public EntityHandling EntityHandling
	{
		[Token(Token = "0x60003E3")]
		[Address(RVA = "0x60A9CE0", Offset = "0x60A8CE0", VA = "0x60A9CE0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D5")]
	public XmlResolver XmlResolver
	{
		[Token(Token = "0x60003E4")]
		[Address(RVA = "0x60A9D00", Offset = "0x60A8D00", VA = "0x60A9D00")]
		set
		{
		}
	}

	[Token(Token = "0x170000D6")]
	internal XmlTextReaderImpl Impl
	{
		[Token(Token = "0x60003E5")]
		[Address(RVA = "0x60A9D20", Offset = "0x60A8D20", VA = "0x60A9D20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D7")]
	internal override XmlNamespaceManager NamespaceManager
	{
		[Token(Token = "0x60003E6")]
		[Address(RVA = "0x60A9D30", Offset = "0x60A8D30", VA = "0x60A9D30", Slot = "51")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D8")]
	internal bool XmlValidatingReaderCompatibilityMode
	{
		[Token(Token = "0x60003E7")]
		[Address(RVA = "0x60A9D60", Offset = "0x60A8D60", VA = "0x60A9D60")]
		set
		{
		}
	}

	[Token(Token = "0x170000D9")]
	internal override IDtdInfo DtdInfo
	{
		[Token(Token = "0x60003E8")]
		[Address(RVA = "0x60A9D80", Offset = "0x60A8D80", VA = "0x60A9D80", Slot = "52")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x60A91E0", Offset = "0x60A81E0", VA = "0x60A91E0")]
	public XmlTextReader(Stream input)
	{
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x60A9290", Offset = "0x60A8290", VA = "0x60A9290")]
	public XmlTextReader(string url, Stream input, XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x60A9360", Offset = "0x60A8360", VA = "0x60A9360")]
	public XmlTextReader(TextReader input)
	{
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x60A9410", Offset = "0x60A8410", VA = "0x60A9410")]
	public XmlTextReader(TextReader input, XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x60A94D0", Offset = "0x60A84D0", VA = "0x60A94D0")]
	public XmlTextReader(string url, XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x60A9830", Offset = "0x60A8830", VA = "0x60A9830", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x60A9860", Offset = "0x60A8860", VA = "0x60A9860", Slot = "23")]
	public override string GetAttribute(string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x60A9890", Offset = "0x60A8890", VA = "0x60A9890", Slot = "24")]
	public override string GetAttribute(int i)
	{
		return null;
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x60A98C0", Offset = "0x60A88C0", VA = "0x60A98C0", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x60A98F0", Offset = "0x60A88F0", VA = "0x60A98F0", Slot = "26")]
	public override void MoveToAttribute(int i)
	{
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x60A9920", Offset = "0x60A8920", VA = "0x60A9920", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x60A9950", Offset = "0x60A8950", VA = "0x60A9950", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x60A9980", Offset = "0x60A8980", VA = "0x60A9980", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x60A99B0", Offset = "0x60A89B0", VA = "0x60A99B0", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x60A99E0", Offset = "0x60A89E0", VA = "0x60A99E0", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x60A9A40", Offset = "0x60A8A40", VA = "0x60A9A40", Slot = "33")]
	public override void Close()
	{
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x60A9AA0", Offset = "0x60A8AA0", VA = "0x60A9AA0", Slot = "35")]
	public override void Skip()
	{
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x60A9B00", Offset = "0x60A8B00", VA = "0x60A9B00", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x60A9B50", Offset = "0x60A8B50", VA = "0x60A9B50", Slot = "39")]
	public override void ResolveEntity()
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x60A9B90", Offset = "0x60A8B90", VA = "0x60A9B90", Slot = "42")]
	public override string ReadString()
	{
		return null;
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x60A9BC0", Offset = "0x60A8BC0", VA = "0x60A9BC0", Slot = "53")]
	public bool HasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x60A9C10", Offset = "0x60A8C10", VA = "0x60A9C10", Slot = "56")]
	private IDictionary<string, string> System_002EXml_002EIXmlNamespaceResolver_002EGetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x60A9C30", Offset = "0x60A8C30", VA = "0x60A9C30", Slot = "57")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x60A9C60", Offset = "0x60A8C60", VA = "0x60A9C60", Slot = "58")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupPrefix(string namespaceName)
	{
		return null;
	}
}
