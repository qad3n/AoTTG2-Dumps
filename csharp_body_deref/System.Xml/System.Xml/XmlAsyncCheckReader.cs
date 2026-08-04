// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlAsyncCheckReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using System.Threading.Tasks;
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000043")]
[DefaultMember("Item")]
internal class XmlAsyncCheckReader : XmlReader
{
	[Token(Token = "0x400014D")]
	[FieldOffset(Offset = "0x10")]
	private readonly XmlReader coreReader;

	[Token(Token = "0x400014E")]
	[FieldOffset(Offset = "0x18")]
	private Task lastTask;

	[Token(Token = "0x17000053")]
	internal XmlReader CoreReader
	{
		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x4795CE0", Offset = "0x4795CE0", VA = "0x4795CE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000054")]
	public override XmlReaderSettings Settings
	{
		[Token(Token = "0x60001F7")]
		[Address(RVA = "0x4796250", Offset = "0x4796250", VA = "0x4796250", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000055")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60001F8")]
		[Address(RVA = "0x4796410", Offset = "0x4796410", VA = "0x4796410", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000056")]
	public override string Name
	{
		[Token(Token = "0x60001F9")]
		[Address(RVA = "0x4796440", Offset = "0x4796440", VA = "0x4796440", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000057")]
	public override string LocalName
	{
		[Token(Token = "0x60001FA")]
		[Address(RVA = "0x4796470", Offset = "0x4796470", VA = "0x4796470", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000058")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x47964A0", Offset = "0x47964A0", VA = "0x47964A0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000059")]
	public override string Prefix
	{
		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x47964D0", Offset = "0x47964D0", VA = "0x47964D0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005A")]
	public override string Value
	{
		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x4796500", Offset = "0x4796500", VA = "0x4796500", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005B")]
	public override int Depth
	{
		[Token(Token = "0x60001FE")]
		[Address(RVA = "0x4796530", Offset = "0x4796530", VA = "0x4796530", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700005C")]
	public override string BaseURI
	{
		[Token(Token = "0x60001FF")]
		[Address(RVA = "0x4796560", Offset = "0x4796560", VA = "0x4796560", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005D")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x6000200")]
		[Address(RVA = "0x4796590", Offset = "0x4796590", VA = "0x4796590", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005E")]
	public override bool IsDefault
	{
		[Token(Token = "0x6000201")]
		[Address(RVA = "0x47965C0", Offset = "0x47965C0", VA = "0x47965C0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005F")]
	public override char QuoteChar
	{
		[Token(Token = "0x6000202")]
		[Address(RVA = "0x47965F0", Offset = "0x47965F0", VA = "0x47965F0", Slot = "16")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000060")]
	public override XmlSpace XmlSpace
	{
		[Token(Token = "0x6000203")]
		[Address(RVA = "0x4796620", Offset = "0x4796620", VA = "0x4796620", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x17000061")]
	public override string XmlLang
	{
		[Token(Token = "0x6000204")]
		[Address(RVA = "0x4796650", Offset = "0x4796650", VA = "0x4796650", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000062")]
	public override IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x6000205")]
		[Address(RVA = "0x4796680", Offset = "0x4796680", VA = "0x4796680", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000063")]
	public override Type ValueType
	{
		[Token(Token = "0x6000206")]
		[Address(RVA = "0x47966B0", Offset = "0x47966B0", VA = "0x47966B0", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000064")]
	public override int AttributeCount
	{
		[Token(Token = "0x6000207")]
		[Address(RVA = "0x47966E0", Offset = "0x47966E0", VA = "0x47966E0", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000065")]
	public override bool EOF
	{
		[Token(Token = "0x6000212")]
		[Address(RVA = "0x4796940", Offset = "0x4796940", VA = "0x4796940", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000066")]
	public override ReadState ReadState
	{
		[Token(Token = "0x6000214")]
		[Address(RVA = "0x47969A0", Offset = "0x47969A0", VA = "0x47969A0", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x17000067")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x6000216")]
		[Address(RVA = "0x4796A00", Offset = "0x4796A00", VA = "0x4796A00", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000068")]
	public override bool CanResolveEntity
	{
		[Token(Token = "0x6000218")]
		[Address(RVA = "0x4796A70", Offset = "0x4796A70", VA = "0x4796A70", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000069")]
	public override bool CanReadValueChunk
	{
		[Token(Token = "0x600021A")]
		[Address(RVA = "0x4796AD0", Offset = "0x4796AD0", VA = "0x4796AD0", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006A")]
	public override bool HasAttributes
	{
		[Token(Token = "0x6000223")]
		[Address(RVA = "0x4796CB0", Offset = "0x4796CB0", VA = "0x4796CB0", Slot = "49")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006B")]
	internal override XmlNamespaceManager NamespaceManager
	{
		[Token(Token = "0x6000225")]
		[Address(RVA = "0x4796D30", Offset = "0x4796D30", VA = "0x4796D30", Slot = "51")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006C")]
	internal override IDtdInfo DtdInfo
	{
		[Token(Token = "0x6000226")]
		[Address(RVA = "0x4796D60", Offset = "0x4796D60", VA = "0x4796D60", Slot = "52")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x4795CF0", Offset = "0x4795CF0", VA = "0x4795CF0")]
	public static XmlAsyncCheckReader CreateAsyncCheckWrapper(XmlReader reader)
	{
		return null;
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x4796120", Offset = "0x4796120", VA = "0x4796120")]
	public XmlAsyncCheckReader(XmlReader reader)
	{
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x47961D0", Offset = "0x47961D0", VA = "0x47961D0")]
	private void CheckAsync()
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x4796710", Offset = "0x4796710", VA = "0x4796710", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x4796750", Offset = "0x4796750", VA = "0x4796750", Slot = "23")]
	public override string GetAttribute(string name, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x4796790", Offset = "0x4796790", VA = "0x4796790", Slot = "24")]
	public override string GetAttribute(int i)
	{
		return null;
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x47967D0", Offset = "0x47967D0", VA = "0x47967D0", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x4796810", Offset = "0x4796810", VA = "0x4796810", Slot = "26")]
	public override void MoveToAttribute(int i)
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x4796850", Offset = "0x4796850", VA = "0x4796850", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x4796880", Offset = "0x4796880", VA = "0x4796880", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x47968B0", Offset = "0x47968B0", VA = "0x47968B0", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x47968E0", Offset = "0x47968E0", VA = "0x47968E0", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x4796910", Offset = "0x4796910", VA = "0x4796910", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x4796970", Offset = "0x4796970", VA = "0x4796970", Slot = "33")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x47969D0", Offset = "0x47969D0", VA = "0x47969D0", Slot = "35")]
	public override void Skip()
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x4796A30", Offset = "0x4796A30", VA = "0x4796A30", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x4796AA0", Offset = "0x4796AA0", VA = "0x4796AA0", Slot = "39")]
	public override void ResolveEntity()
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x4796B00", Offset = "0x4796B00", VA = "0x4796B00", Slot = "41")]
	public override int ReadValueChunk(char[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x4796B50", Offset = "0x4796B50", VA = "0x4796B50", Slot = "42")]
	public override string ReadString()
	{
		return null;
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x4796B80", Offset = "0x4796B80", VA = "0x4796B80", Slot = "43")]
	public override XmlNodeType MoveToContent()
	{
		return default(XmlNodeType);
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x4796BB0", Offset = "0x4796BB0", VA = "0x4796BB0", Slot = "44")]
	public override void ReadStartElement()
	{
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x4796BE0", Offset = "0x4796BE0", VA = "0x4796BE0", Slot = "45")]
	public override string ReadElementString()
	{
		return null;
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x4796C10", Offset = "0x4796C10", VA = "0x4796C10", Slot = "46")]
	public override void ReadEndElement()
	{
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x4796C40", Offset = "0x4796C40", VA = "0x4796C40", Slot = "47")]
	public override bool IsStartElement(string localname, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x4796C80", Offset = "0x4796C80", VA = "0x4796C80", Slot = "48")]
	public override string ReadInnerXml()
	{
		return null;
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x4796CE0", Offset = "0x4796CE0", VA = "0x4796CE0", Slot = "50")]
	protected override void Dispose(bool disposing)
	{
	}
}
