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
		[Address(RVA = "0x47A43B0", Offset = "0x47A43B0", VA = "0x47A43B0", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170000BD")]
	public override string Name
	{
		[Token(Token = "0x60003B8")]
		[Address(RVA = "0x47A43E0", Offset = "0x47A43E0", VA = "0x47A43E0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BE")]
	public override string LocalName
	{
		[Token(Token = "0x60003B9")]
		[Address(RVA = "0x47A4410", Offset = "0x47A4410", VA = "0x47A4410", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BF")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60003BA")]
		[Address(RVA = "0x47A4440", Offset = "0x47A4440", VA = "0x47A4440", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C0")]
	public override string Prefix
	{
		[Token(Token = "0x60003BB")]
		[Address(RVA = "0x47A4470", Offset = "0x47A4470", VA = "0x47A4470", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C1")]
	public override string Value
	{
		[Token(Token = "0x60003BC")]
		[Address(RVA = "0x47A44A0", Offset = "0x47A44A0", VA = "0x47A44A0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C2")]
	public override int Depth
	{
		[Token(Token = "0x60003BD")]
		[Address(RVA = "0x47A44D0", Offset = "0x47A44D0", VA = "0x47A44D0", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000C3")]
	public override string BaseURI
	{
		[Token(Token = "0x60003BE")]
		[Address(RVA = "0x47A4500", Offset = "0x47A4500", VA = "0x47A4500", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C4")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x60003BF")]
		[Address(RVA = "0x47A4530", Offset = "0x47A4530", VA = "0x47A4530", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C5")]
	public override bool IsDefault
	{
		[Token(Token = "0x60003C0")]
		[Address(RVA = "0x47A4560", Offset = "0x47A4560", VA = "0x47A4560", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C6")]
	public override char QuoteChar
	{
		[Token(Token = "0x60003C1")]
		[Address(RVA = "0x47A4590", Offset = "0x47A4590", VA = "0x47A4590", Slot = "16")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x170000C7")]
	public override XmlSpace XmlSpace
	{
		[Token(Token = "0x60003C2")]
		[Address(RVA = "0x47A45C0", Offset = "0x47A45C0", VA = "0x47A45C0", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x170000C8")]
	public override string XmlLang
	{
		[Token(Token = "0x60003C3")]
		[Address(RVA = "0x47A45F0", Offset = "0x47A45F0", VA = "0x47A45F0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C9")]
	public override int AttributeCount
	{
		[Token(Token = "0x60003C4")]
		[Address(RVA = "0x47A4620", Offset = "0x47A4620", VA = "0x47A4620", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000CA")]
	public override bool EOF
	{
		[Token(Token = "0x60003CF")]
		[Address(RVA = "0x47A4830", Offset = "0x47A4830", VA = "0x47A4830", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CB")]
	public override ReadState ReadState
	{
		[Token(Token = "0x60003D1")]
		[Address(RVA = "0x47A4890", Offset = "0x47A4890", VA = "0x47A4890", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x170000CC")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x60003D3")]
		[Address(RVA = "0x47A48F0", Offset = "0x47A48F0", VA = "0x47A48F0", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CD")]
	public override bool CanResolveEntity
	{
		[Token(Token = "0x60003D5")]
		[Address(RVA = "0x47A4960", Offset = "0x47A4960", VA = "0x47A4960", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CE")]
	public override bool CanReadValueChunk
	{
		[Token(Token = "0x60003D7")]
		[Address(RVA = "0x47A49A0", Offset = "0x47A49A0", VA = "0x47A49A0", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CF")]
	public int LineNumber
	{
		[Token(Token = "0x60003DA")]
		[Address(RVA = "0x47A49F0", Offset = "0x47A49F0", VA = "0x47A49F0", Slot = "54")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D0")]
	public int LinePosition
	{
		[Token(Token = "0x60003DB")]
		[Address(RVA = "0x47A4A10", Offset = "0x47A4A10", VA = "0x47A4A10", Slot = "55")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D1")]
	public bool Namespaces
	{
		[Token(Token = "0x60003DF")]
		[Address(RVA = "0x47A1290", Offset = "0x47A1290", VA = "0x47A1290")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D2")]
	public bool Normalization
	{
		[Token(Token = "0x60003E0")]
		[Address(RVA = "0x47A4AA0", Offset = "0x47A4AA0", VA = "0x47A4AA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003E1")]
		[Address(RVA = "0x47A4AC0", Offset = "0x47A4AC0", VA = "0x47A4AC0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D3")]
	public WhitespaceHandling WhitespaceHandling
	{
		[Token(Token = "0x60003E2")]
		[Address(RVA = "0x47A4AE0", Offset = "0x47A4AE0", VA = "0x47A4AE0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D4")]
	public EntityHandling EntityHandling
	{
		[Token(Token = "0x60003E3")]
		[Address(RVA = "0x47A4B00", Offset = "0x47A4B00", VA = "0x47A4B00")]
		set
		{
		}
	}

	[Token(Token = "0x170000D5")]
	public XmlResolver XmlResolver
	{
		[Token(Token = "0x60003E4")]
		[Address(RVA = "0x47A4B20", Offset = "0x47A4B20", VA = "0x47A4B20")]
		set
		{
		}
	}

	[Token(Token = "0x170000D6")]
	internal XmlTextReaderImpl Impl
	{
		[Token(Token = "0x60003E5")]
		[Address(RVA = "0x47A4B40", Offset = "0x47A4B40", VA = "0x47A4B40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D7")]
	internal override XmlNamespaceManager NamespaceManager
	{
		[Token(Token = "0x60003E6")]
		[Address(RVA = "0x47A4B50", Offset = "0x47A4B50", VA = "0x47A4B50", Slot = "51")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D8")]
	internal bool XmlValidatingReaderCompatibilityMode
	{
		[Token(Token = "0x60003E7")]
		[Address(RVA = "0x47A4B80", Offset = "0x47A4B80", VA = "0x47A4B80")]
		set
		{
		}
	}

	[Token(Token = "0x170000D9")]
	internal override IDtdInfo DtdInfo
	{
		[Token(Token = "0x60003E8")]
		[Address(RVA = "0x47A4BA0", Offset = "0x47A4BA0", VA = "0x47A4BA0", Slot = "52")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x47A4000", Offset = "0x47A4000", VA = "0x47A4000")]
	public XmlTextReader(Stream input)
	{
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x47A40B0", Offset = "0x47A40B0", VA = "0x47A40B0")]
	public XmlTextReader(string url, Stream input, XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x47A4180", Offset = "0x47A4180", VA = "0x47A4180")]
	public XmlTextReader(TextReader input)
	{
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x47A4230", Offset = "0x47A4230", VA = "0x47A4230")]
	public XmlTextReader(TextReader input, XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x47A42F0", Offset = "0x47A42F0", VA = "0x47A42F0")]
	public XmlTextReader(string url, XmlNameTable nt)
	{
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x47A4650", Offset = "0x47A4650", VA = "0x47A4650", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x47A4680", Offset = "0x47A4680", VA = "0x47A4680", Slot = "23")]
	public override string GetAttribute(string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x47A46B0", Offset = "0x47A46B0", VA = "0x47A46B0", Slot = "24")]
	public override string GetAttribute(int i)
	{
		return null;
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x47A46E0", Offset = "0x47A46E0", VA = "0x47A46E0", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x47A4710", Offset = "0x47A4710", VA = "0x47A4710", Slot = "26")]
	public override void MoveToAttribute(int i)
	{
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x47A4740", Offset = "0x47A4740", VA = "0x47A4740", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x47A4770", Offset = "0x47A4770", VA = "0x47A4770", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x47A47A0", Offset = "0x47A47A0", VA = "0x47A47A0", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x47A47D0", Offset = "0x47A47D0", VA = "0x47A47D0", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x47A4800", Offset = "0x47A4800", VA = "0x47A4800", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x47A4860", Offset = "0x47A4860", VA = "0x47A4860", Slot = "33")]
	public override void Close()
	{
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x47A48C0", Offset = "0x47A48C0", VA = "0x47A48C0", Slot = "35")]
	public override void Skip()
	{
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x47A4920", Offset = "0x47A4920", VA = "0x47A4920", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x47A4970", Offset = "0x47A4970", VA = "0x47A4970", Slot = "39")]
	public override void ResolveEntity()
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x47A49B0", Offset = "0x47A49B0", VA = "0x47A49B0", Slot = "42")]
	public override string ReadString()
	{
		return null;
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x47A49E0", Offset = "0x47A49E0", VA = "0x47A49E0", Slot = "53")]
	public bool HasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x47A4A30", Offset = "0x47A4A30", VA = "0x47A4A30", Slot = "56")]
	private IDictionary<string, string> System_002EXml_002EIXmlNamespaceResolver_002EGetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x47A4A50", Offset = "0x47A4A50", VA = "0x47A4A50", Slot = "57")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x47A4A80", Offset = "0x47A4A80", VA = "0x47A4A80", Slot = "58")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupPrefix(string namespaceName)
	{
		return null;
	}
}
