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
		[Address(RVA = "0x2547600", Offset = "0x2545C00", VA = "0x182547600", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170000BD")]
	public override string Name
	{
		[Token(Token = "0x60003B8")]
		[Address(RVA = "0x1CA8960", Offset = "0x1CA6F60", VA = "0x181CA8960", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BE")]
	public override string LocalName
	{
		[Token(Token = "0x60003B9")]
		[Address(RVA = "0x25475D0", Offset = "0x2545BD0", VA = "0x1825475D0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BF")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60003BA")]
		[Address(RVA = "0x1A1F330", Offset = "0x1A1D930", VA = "0x181A1F330", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C0")]
	public override string Prefix
	{
		[Token(Token = "0x60003BB")]
		[Address(RVA = "0x1A1F420", Offset = "0x1A1DA20", VA = "0x181A1F420", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C1")]
	public override string Value
	{
		[Token(Token = "0x60003BC")]
		[Address(RVA = "0x1A1F3F0", Offset = "0x1A1D9F0", VA = "0x181A1F3F0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C2")]
	public override int Depth
	{
		[Token(Token = "0x60003BD")]
		[Address(RVA = "0x2547540", Offset = "0x2545B40", VA = "0x182547540", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000C3")]
	public override string BaseURI
	{
		[Token(Token = "0x60003BE")]
		[Address(RVA = "0x25474E0", Offset = "0x2545AE0", VA = "0x1825474E0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C4")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x60003BF")]
		[Address(RVA = "0x25475A0", Offset = "0x2545BA0", VA = "0x1825475A0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C5")]
	public override bool IsDefault
	{
		[Token(Token = "0x60003C0")]
		[Address(RVA = "0x1A1F3C0", Offset = "0x1A1D9C0", VA = "0x181A1F3C0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C6")]
	public override char QuoteChar
	{
		[Token(Token = "0x60003C1")]
		[Address(RVA = "0x1A1F300", Offset = "0x1A1D900", VA = "0x181A1F300", Slot = "16")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x170000C7")]
	public override XmlSpace XmlSpace
	{
		[Token(Token = "0x60003C2")]
		[Address(RVA = "0x1A1F390", Offset = "0x1A1D990", VA = "0x181A1F390", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x170000C8")]
	public override string XmlLang
	{
		[Token(Token = "0x60003C3")]
		[Address(RVA = "0x2547660", Offset = "0x2545C60", VA = "0x182547660", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C9")]
	public override int AttributeCount
	{
		[Token(Token = "0x60003C4")]
		[Address(RVA = "0x25474B0", Offset = "0x2545AB0", VA = "0x1825474B0", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000CA")]
	public override bool EOF
	{
		[Token(Token = "0x60003CF")]
		[Address(RVA = "0x2547570", Offset = "0x2545B70", VA = "0x182547570", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CB")]
	public override ReadState ReadState
	{
		[Token(Token = "0x60003D1")]
		[Address(RVA = "0x2547630", Offset = "0x2545C30", VA = "0x182547630", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x170000CC")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x60003D3")]
		[Address(RVA = "0x1CBA960", Offset = "0x1CB8F60", VA = "0x181CBA960", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CD")]
	public override bool CanResolveEntity
	{
		[Token(Token = "0x60003D5")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CE")]
	public override bool CanReadValueChunk
	{
		[Token(Token = "0x60003D7")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CF")]
	public int LineNumber
	{
		[Token(Token = "0x60003DA")]
		[Address(RVA = "0x26F21D0", Offset = "0x26F07D0", VA = "0x1826F21D0", Slot = "54")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D0")]
	public int LinePosition
	{
		[Token(Token = "0x60003DB")]
		[Address(RVA = "0x26F21F0", Offset = "0x26F07F0", VA = "0x1826F21F0", Slot = "55")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D1")]
	public bool Namespaces
	{
		[Token(Token = "0x60003DF")]
		[Address(RVA = "0x26DF7C0", Offset = "0x26DDDC0", VA = "0x1826DF7C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D2")]
	public bool Normalization
	{
		[Token(Token = "0x60003E0")]
		[Address(RVA = "0x26DF7E0", Offset = "0x26DDDE0", VA = "0x1826DF7E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003E1")]
		[Address(RVA = "0x26F2260", Offset = "0x26F0860", VA = "0x1826F2260")]
		set
		{
		}
	}

	[Token(Token = "0x170000D3")]
	public WhitespaceHandling WhitespaceHandling
	{
		[Token(Token = "0x60003E2")]
		[Address(RVA = "0x26F2280", Offset = "0x26F0880", VA = "0x1826F2280")]
		set
		{
		}
	}

	[Token(Token = "0x170000D4")]
	public EntityHandling EntityHandling
	{
		[Token(Token = "0x60003E3")]
		[Address(RVA = "0x26F2240", Offset = "0x26F0840", VA = "0x1826F2240")]
		set
		{
		}
	}

	[Token(Token = "0x170000D5")]
	public XmlResolver XmlResolver
	{
		[Token(Token = "0x60003E4")]
		[Address(RVA = "0x26F22A0", Offset = "0x26F08A0", VA = "0x1826F22A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D6")]
	internal XmlTextReaderImpl Impl
	{
		[Token(Token = "0x60003E5")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D7")]
	internal override XmlNamespaceManager NamespaceManager
	{
		[Token(Token = "0x60003E6")]
		[Address(RVA = "0x26F2210", Offset = "0x26F0810", VA = "0x1826F2210", Slot = "51")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D8")]
	internal bool XmlValidatingReaderCompatibilityMode
	{
		[Token(Token = "0x60003E7")]
		[Address(RVA = "0x26F22C0", Offset = "0x26F08C0", VA = "0x1826F22C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D9")]
	internal override IDtdInfo DtdInfo
	{
		[Token(Token = "0x60003E8")]
		[Address(RVA = "0x26F21A0", Offset = "0x26F07A0", VA = "0x1826F21A0", Slot = "52")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x26F1E90", Offset = "0x26F0490", VA = "0x1826F1E90")]
	public XmlTextReader(Stream input)
	{
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x26F20D0", Offset = "0x26F06D0", VA = "0x1826F20D0")]
	public XmlTextReader(string url, Stream input, XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x26F2010", Offset = "0x26F0610", VA = "0x1826F2010")]
	public XmlTextReader(TextReader input)
	{
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x26F1F50", Offset = "0x26F0550", VA = "0x1826F1F50")]
	public XmlTextReader(TextReader input, XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x26F1DD0", Offset = "0x26F03D0", VA = "0x1826F1DD0")]
	public XmlTextReader(string url, XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x24447C0", Offset = "0x2442DC0", VA = "0x1824447C0", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x25472F0", Offset = "0x25458F0", VA = "0x1825472F0", Slot = "23")]
	public override string GetAttribute(string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x2547320", Offset = "0x2545920", VA = "0x182547320", Slot = "24")]
	public override string GetAttribute(int i)
	{
		return null;
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x2547350", Offset = "0x2545950", VA = "0x182547350", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x8F67D0", Offset = "0x8F4DD0", VA = "0x1808F67D0", Slot = "26")]
	public override void MoveToAttribute(int i)
	{
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x2547380", Offset = "0x2545980", VA = "0x182547380", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x1AC1C00", Offset = "0x1AC0200", VA = "0x181AC1C00", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x197BE90", Offset = "0x197A490", VA = "0x18197BE90", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x25473B0", Offset = "0x25459B0", VA = "0x1825473B0", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x2547410", Offset = "0x2545A10", VA = "0x182547410", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x1CBA900", Offset = "0x1CB8F00", VA = "0x181CBA900", Slot = "33")]
	public override void Close()
	{
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x1AD59E0", Offset = "0x1AD3FE0", VA = "0x181AD59E0", Slot = "35")]
	public override void Skip()
	{
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x26F1D20", Offset = "0x26F0320", VA = "0x1826F1D20", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x1CBA930", Offset = "0x1CB8F30", VA = "0x181CBA930", Slot = "39")]
	public override void ResolveEntity()
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x26F1D60", Offset = "0x26F0360", VA = "0x1826F1D60", Slot = "42")]
	public override string ReadString()
	{
		return null;
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "53")]
	public bool HasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x26F1D90", Offset = "0x26F0390", VA = "0x1826F1D90", Slot = "56")]
	private IDictionary<string, string> System_002EXml_002EIXmlNamespaceResolver_002EGetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x1AE50F0", Offset = "0x1AE36F0", VA = "0x181AE50F0", Slot = "57")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x26F1DB0", Offset = "0x26F03B0", VA = "0x1826F1DB0", Slot = "58")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupPrefix(string namespaceName)
	{
		return null;
	}
}
