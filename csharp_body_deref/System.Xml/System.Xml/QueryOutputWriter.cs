// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.QueryOutputWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x26E1AB0", Offset = "0x26E00B0", VA = "0x1826E1AB0", Slot = "35")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	internal override bool SupportsNamespaceDeclarationInChunks
	{
		[Token(Token = "0x600018C")]
		[Address(RVA = "0x26E1A80", Offset = "0x26E0080", VA = "0x1826E1A80", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x26E17B0", Offset = "0x26DFDB0", VA = "0x1826E17B0")]
	public QueryOutputWriter(XmlRawWriter writer, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x26E1750", Offset = "0x26DFD50", VA = "0x1826E1750", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x26E1780", Offset = "0x26DFD80", VA = "0x1826E1780", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x26E1090", Offset = "0x26DF690", VA = "0x1826E1090", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x26E1410", Offset = "0x26DFA10", VA = "0x1826E1410", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x26E1100", Offset = "0x26DF700", VA = "0x1826E1100", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x26E11C0", Offset = "0x26DF7C0", VA = "0x1826E11C0", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x26E0F10", Offset = "0x26DF510", VA = "0x1826E0F10", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x26E13D0", Offset = "0x26DF9D0", VA = "0x1826E13D0", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x26E10D0", Offset = "0x26DF6D0", VA = "0x1826E10D0", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x26E1220", Offset = "0x26DF820", VA = "0x1826E1220", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string ns)
	{
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x26E15D0", Offset = "0x26DFBD0", VA = "0x1826E15D0", Slot = "44")]
	internal override void WriteStartNamespaceDeclaration(string prefix)
	{
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x26E1160", Offset = "0x26DF760", VA = "0x1826E1160", Slot = "45")]
	internal override void WriteEndNamespaceDeclaration()
	{
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x26E0F40", Offset = "0x26DF540", VA = "0x1826E0F40", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x26E1060", Offset = "0x26DF660", VA = "0x1826E1060", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x26E1250", Offset = "0x26DF850", VA = "0x1826E1250", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x26E16C0", Offset = "0x26DFCC0", VA = "0x1826E16C0", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x26E1600", Offset = "0x26DFC00", VA = "0x1826E1600", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x26E0FA0", Offset = "0x26DF5A0", VA = "0x1826E0FA0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x26E1190", Offset = "0x26DF790", VA = "0x1826E1190", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x26E0F70", Offset = "0x26DF570", VA = "0x1826E0F70", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x26E1690", Offset = "0x26DFC90", VA = "0x1826E1690", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x26E1280", Offset = "0x26DF880", VA = "0x1826E1280", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x26E1340", Offset = "0x26DF940", VA = "0x1826E1340", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x26E0DF0", Offset = "0x26DF3F0", VA = "0x1826E0DF0", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x26E0EA0", Offset = "0x26DF4A0", VA = "0x1826E0EA0", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x26E0ED0", Offset = "0x26DF4D0", VA = "0x1826E0ED0")]
	private bool StartCDataSection()
	{
		return default(bool);
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0xACCA60", Offset = "0xACB060", VA = "0x180ACCA60")]
	private void EndCDataSection()
	{
	}
}
