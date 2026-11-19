// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Diagnostics;
using System.IO;
using System.Reflection;
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000051")]
[DefaultMember("Item")]
[DebuggerDisplay("{debuggerDisplayProxy}")]
[DebuggerDisplay("{debuggerDisplayProxy}")]
public abstract class XmlReader : IDisposable
{
	[Token(Token = "0x40001B3")]
	[FieldOffset(Offset = "0x0")]
	private static uint IsTextualNodeBitmap;

	[Token(Token = "0x40001B4")]
	[FieldOffset(Offset = "0x4")]
	private static uint CanReadContentAsBitmap;

	[Token(Token = "0x40001B5")]
	[FieldOffset(Offset = "0x8")]
	private static uint HasValueBitmap;

	[Token(Token = "0x1700008D")]
	public virtual XmlReaderSettings Settings
	{
		[Token(Token = "0x6000330")]
		[Address(RVA = "0x60A4E70", Offset = "0x60A3E70", VA = "0x60A4E70", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008E")]
	public abstract XmlNodeType NodeType
	{
		[Token(Token = "0x6000331")]
		get;
	}

	[Token(Token = "0x1700008F")]
	public virtual string Name
	{
		[Token(Token = "0x6000332")]
		[Address(RVA = "0x60A4E80", Offset = "0x60A3E80", VA = "0x60A4E80", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000090")]
	public abstract string LocalName
	{
		[Token(Token = "0x6000333")]
		get;
	}

	[Token(Token = "0x17000091")]
	public abstract string NamespaceURI
	{
		[Token(Token = "0x6000334")]
		get;
	}

	[Token(Token = "0x17000092")]
	public abstract string Prefix
	{
		[Token(Token = "0x6000335")]
		get;
	}

	[Token(Token = "0x17000093")]
	public abstract string Value
	{
		[Token(Token = "0x6000336")]
		get;
	}

	[Token(Token = "0x17000094")]
	public abstract int Depth
	{
		[Token(Token = "0x6000337")]
		get;
	}

	[Token(Token = "0x17000095")]
	public abstract string BaseURI
	{
		[Token(Token = "0x6000338")]
		get;
	}

	[Token(Token = "0x17000096")]
	public abstract bool IsEmptyElement
	{
		[Token(Token = "0x6000339")]
		get;
	}

	[Token(Token = "0x17000097")]
	public virtual bool IsDefault
	{
		[Token(Token = "0x600033A")]
		[Address(RVA = "0x60A4F60", Offset = "0x60A3F60", VA = "0x60A4F60", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000098")]
	public virtual char QuoteChar
	{
		[Token(Token = "0x600033B")]
		[Address(RVA = "0x60A4F70", Offset = "0x60A3F70", VA = "0x60A4F70", Slot = "16")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000099")]
	public virtual XmlSpace XmlSpace
	{
		[Token(Token = "0x600033C")]
		[Address(RVA = "0x60A4F80", Offset = "0x60A3F80", VA = "0x60A4F80", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x1700009A")]
	public virtual string XmlLang
	{
		[Token(Token = "0x600033D")]
		[Address(RVA = "0x60A4F90", Offset = "0x60A3F90", VA = "0x60A4F90", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009B")]
	public virtual IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x600033E")]
		[Address(RVA = "0x60A4FB0", Offset = "0x60A3FB0", VA = "0x60A4FB0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009C")]
	public virtual Type ValueType
	{
		[Token(Token = "0x600033F")]
		[Address(RVA = "0x60A4FF0", Offset = "0x60A3FF0", VA = "0x60A4FF0", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009D")]
	public abstract int AttributeCount
	{
		[Token(Token = "0x6000340")]
		get;
	}

	[Token(Token = "0x1700009E")]
	public abstract bool EOF
	{
		[Token(Token = "0x600034B")]
		get;
	}

	[Token(Token = "0x1700009F")]
	public abstract ReadState ReadState
	{
		[Token(Token = "0x600034D")]
		get;
	}

	[Token(Token = "0x170000A0")]
	public abstract XmlNameTable NameTable
	{
		[Token(Token = "0x600034F")]
		get;
	}

	[Token(Token = "0x170000A1")]
	public virtual bool CanResolveEntity
	{
		[Token(Token = "0x6000351")]
		[Address(RVA = "0x60A52C0", Offset = "0x60A42C0", VA = "0x60A52C0", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A2")]
	public virtual bool CanReadValueChunk
	{
		[Token(Token = "0x6000353")]
		[Address(RVA = "0x60A52D0", Offset = "0x60A42D0", VA = "0x60A52D0", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A3")]
	public virtual bool HasAttributes
	{
		[Token(Token = "0x6000360")]
		[Address(RVA = "0x60A6530", Offset = "0x60A5530", VA = "0x60A6530", Slot = "49")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A4")]
	internal virtual XmlNamespaceManager NamespaceManager
	{
		[Token(Token = "0x6000363")]
		[Address(RVA = "0x60A6590", Offset = "0x60A5590", VA = "0x60A6590", Slot = "51")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A5")]
	internal bool IsDefaultInternal
	{
		[Token(Token = "0x6000367")]
		[Address(RVA = "0x60A6600", Offset = "0x60A5600", VA = "0x60A6600")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A6")]
	internal virtual IDtdInfo DtdInfo
	{
		[Token(Token = "0x6000368")]
		[Address(RVA = "0x60A66E0", Offset = "0x60A56E0", VA = "0x60A66E0", Slot = "52")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000341")]
	public abstract string GetAttribute(string name);

	[Token(Token = "0x6000342")]
	public abstract string GetAttribute(string name, string namespaceURI);

	[Token(Token = "0x6000343")]
	public abstract string GetAttribute(int i);

	[Token(Token = "0x6000344")]
	public abstract bool MoveToAttribute(string name);

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x60A5030", Offset = "0x60A4030", VA = "0x60A5030", Slot = "26")]
	public virtual void MoveToAttribute(int i)
	{
	}

	[Token(Token = "0x6000346")]
	public abstract bool MoveToFirstAttribute();

	[Token(Token = "0x6000347")]
	public abstract bool MoveToNextAttribute();

	[Token(Token = "0x6000348")]
	public abstract bool MoveToElement();

	[Token(Token = "0x6000349")]
	public abstract bool ReadAttributeValue();

	[Token(Token = "0x600034A")]
	public abstract bool Read();

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x60A50F0", Offset = "0x60A40F0", VA = "0x60A50F0", Slot = "33")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x60A5100", Offset = "0x60A4100", VA = "0x60A5100", Slot = "35")]
	public virtual void Skip()
	{
	}

	[Token(Token = "0x6000350")]
	public abstract string LookupNamespace(string prefix);

	[Token(Token = "0x6000352")]
	public abstract void ResolveEntity();

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x60A52E0", Offset = "0x60A42E0", VA = "0x60A52E0", Slot = "41")]
	public virtual int ReadValueChunk(char[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x60A5340", Offset = "0x60A4340", VA = "0x60A5340", Slot = "42")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public virtual string ReadString()
	{
		return null;
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x60A55C0", Offset = "0x60A45C0", VA = "0x60A55C0", Slot = "43")]
	public virtual XmlNodeType MoveToContent()
	{
		return default(XmlNodeType);
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x60A5640", Offset = "0x60A4640", VA = "0x60A5640", Slot = "44")]
	public virtual void ReadStartElement()
	{
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x60A5730", Offset = "0x60A4730", VA = "0x60A5730", Slot = "45")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public virtual string ReadElementString()
	{
		return null;
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x60A5990", Offset = "0x60A4990", VA = "0x60A5990", Slot = "46")]
	public virtual void ReadEndElement()
	{
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x60A5A80", Offset = "0x60A4A80", VA = "0x60A5A80", Slot = "47")]
	public virtual bool IsStartElement(string localname, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x60A5B00", Offset = "0x60A4B00", VA = "0x60A5B00", Slot = "48")]
	public virtual string ReadInnerXml()
	{
		return null;
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x60A5F70", Offset = "0x60A4F70", VA = "0x60A5F70")]
	private void WriteNode(XmlWriter xtw, bool defattr)
	{
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x60A5E30", Offset = "0x60A4E30", VA = "0x60A5E30")]
	private void WriteAttributeValue(XmlWriter xtw)
	{
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x60A5DD0", Offset = "0x60A4DD0", VA = "0x60A5DD0")]
	private XmlWriter CreateWriterForInnerOuterXml(StringWriter sw)
	{
		return null;
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x60A6430", Offset = "0x60A5430", VA = "0x60A6430")]
	private void SetNamespacesFlag(XmlTextWriter xtw)
	{
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x609C290", Offset = "0x609B290", VA = "0x609C290", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x60A6550", Offset = "0x60A5550", VA = "0x60A6550", Slot = "50")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x60A5560", Offset = "0x60A4560", VA = "0x60A5560")]
	internal static bool IsTextualNode(XmlNodeType nodeType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x60A65A0", Offset = "0x60A55A0", VA = "0x60A65A0")]
	internal static bool HasValueInternal(XmlNodeType nodeType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x60A51F0", Offset = "0x60A41F0", VA = "0x60A51F0")]
	private bool SkipSubtree()
	{
		return default(bool);
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x60A66F0", Offset = "0x60A56F0", VA = "0x60A66F0")]
	public static XmlReader Create(Stream input, XmlReaderSettings settings, string baseUri)
	{
		return null;
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x60A68F0", Offset = "0x60A58F0", VA = "0x60A68F0")]
	public static XmlReader Create(TextReader input, XmlReaderSettings settings, string baseUri)
	{
		return null;
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x60A6A80", Offset = "0x60A5A80", VA = "0x60A6A80")]
	internal static XmlReader CreateSqlReader(Stream input, XmlReaderSettings settings, XmlParserContext inputContext)
	{
		return null;
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x60A6E20", Offset = "0x60A5E20", VA = "0x60A6E20")]
	internal static int CalcBufferSize(Stream input)
	{
		return default(int);
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x609B740", Offset = "0x609A740", VA = "0x609B740")]
	protected XmlReader()
	{
	}
}
