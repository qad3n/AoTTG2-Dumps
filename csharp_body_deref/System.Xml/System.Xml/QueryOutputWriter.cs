using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000035")]
internal class QueryOutputWriter : XmlRawWriter
{
	[Token(Token = "0x400010C")]
	[FieldOffset(Offset = "0x28")]
	private XmlRawWriter wrapped;

	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x30")]
	private bool inCDataSection;

	[Token(Token = "0x400010E")]
	[FieldOffset(Offset = "0x38")]
	private Dictionary<XmlQualifiedName, int> lookupCDataElems;

	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0x40")]
	private BitStack bitsCData;

	[Token(Token = "0x4000110")]
	[FieldOffset(Offset = "0x48")]
	private XmlQualifiedName qnameCData;

	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0x50")]
	private bool outputDocType;

	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x51")]
	private bool checkWellFormedDoc;

	[Token(Token = "0x4000113")]
	[FieldOffset(Offset = "0x52")]
	private bool hasDocElem;

	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0x53")]
	private bool inAttr;

	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x58")]
	private string systemId;

	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x60")]
	private string publicId;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x68")]
	private int depth;

	[Token(Token = "0x17000045")]
	internal override IXmlNamespaceResolver NamespaceResolver
	{
		[Token(Token = "0x6000181")]
		[Address(RVA = "0x44567A0", Offset = "0x44567A0", VA = "0x44567A0", Slot = "35")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	internal override bool SupportsNamespaceDeclarationInChunks
	{
		[Token(Token = "0x600018C")]
		[Address(RVA = "0x4456BC0", Offset = "0x4456BC0", VA = "0x4456BC0", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x4456470", Offset = "0x4456470", VA = "0x4456470")]
	public QueryOutputWriter(XmlRawWriter writer, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x44567F0", Offset = "0x44567F0", VA = "0x44567F0", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x4456820", Offset = "0x4456820", VA = "0x4456820", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x4456850", Offset = "0x4456850", VA = "0x4456850", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x4456890", Offset = "0x4456890", VA = "0x4456890", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x4456A60", Offset = "0x4456A60", VA = "0x4456A60", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x4456AB0", Offset = "0x4456AB0", VA = "0x4456AB0", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x4456B00", Offset = "0x4456B00", VA = "0x4456B00", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x4456B30", Offset = "0x4456B30", VA = "0x4456B30", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x4456B60", Offset = "0x4456B60", VA = "0x4456B60", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x4456B90", Offset = "0x4456B90", VA = "0x4456B90", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string ns)
	{
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x4456BF0", Offset = "0x4456BF0", VA = "0x4456BF0", Slot = "44")]
	internal override void WriteStartNamespaceDeclaration(string prefix)
	{
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x4456C20", Offset = "0x4456C20", VA = "0x4456C20", Slot = "45")]
	internal override void WriteEndNamespaceDeclaration()
	{
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x4456C50", Offset = "0x4456C50", VA = "0x4456C50", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x4456C80", Offset = "0x4456C80", VA = "0x4456C80", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x4456CB0", Offset = "0x4456CB0", VA = "0x4456CB0", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x4456CE0", Offset = "0x4456CE0", VA = "0x4456CE0", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x4456DC0", Offset = "0x4456DC0", VA = "0x4456DC0", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x4456E50", Offset = "0x4456E50", VA = "0x4456E50", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x4456F20", Offset = "0x4456F20", VA = "0x4456F20", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x4456F50", Offset = "0x4456F50", VA = "0x4456F50", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x4456F80", Offset = "0x4456F80", VA = "0x4456F80", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x4456FB0", Offset = "0x4456FB0", VA = "0x4456FB0", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x4457080", Offset = "0x4457080", VA = "0x4457080", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x4457110", Offset = "0x4457110", VA = "0x4457110", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x44571B0", Offset = "0x44571B0", VA = "0x44571B0", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x4456D70", Offset = "0x4456D70", VA = "0x4456D70")]
	private bool StartCDataSection()
	{
		return default(bool);
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x4456A50", Offset = "0x4456A50", VA = "0x4456A50")]
	private void EndCDataSection()
	{
	}
}
