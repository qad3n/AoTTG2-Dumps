// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlEventCache
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Xml.Xsl.Runtime;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200004C")]
internal sealed class XmlEventCache : XmlRawWriter
{
	[Token(Token = "0x200004D")]
	private enum XmlEventType
	{
		[Token(Token = "0x4000188")]
		Unknown,
		[Token(Token = "0x4000189")]
		DocType,
		[Token(Token = "0x400018A")]
		StartElem,
		[Token(Token = "0x400018B")]
		StartAttr,
		[Token(Token = "0x400018C")]
		EndAttr,
		[Token(Token = "0x400018D")]
		CData,
		[Token(Token = "0x400018E")]
		Comment,
		[Token(Token = "0x400018F")]
		PI,
		[Token(Token = "0x4000190")]
		Whitespace,
		[Token(Token = "0x4000191")]
		String,
		[Token(Token = "0x4000192")]
		Raw,
		[Token(Token = "0x4000193")]
		EntRef,
		[Token(Token = "0x4000194")]
		CharEnt,
		[Token(Token = "0x4000195")]
		SurrCharEnt,
		[Token(Token = "0x4000196")]
		Base64,
		[Token(Token = "0x4000197")]
		BinHex,
		[Token(Token = "0x4000198")]
		XmlDecl1,
		[Token(Token = "0x4000199")]
		XmlDecl2,
		[Token(Token = "0x400019A")]
		StartContent,
		[Token(Token = "0x400019B")]
		EndElem,
		[Token(Token = "0x400019C")]
		FullEndElem,
		[Token(Token = "0x400019D")]
		Nmsp,
		[Token(Token = "0x400019E")]
		EndBase64,
		[Token(Token = "0x400019F")]
		Close,
		[Token(Token = "0x40001A0")]
		Flush,
		[Token(Token = "0x40001A1")]
		Dispose
	}

	[Token(Token = "0x200004E")]
	private struct XmlEvent
	{
		[Token(Token = "0x40001A2")]
		[FieldOffset(Offset = "0x0")]
		private XmlEventType eventType;

		[Token(Token = "0x40001A3")]
		[FieldOffset(Offset = "0x8")]
		private string s1;

		[Token(Token = "0x40001A4")]
		[FieldOffset(Offset = "0x10")]
		private string s2;

		[Token(Token = "0x40001A5")]
		[FieldOffset(Offset = "0x18")]
		private string s3;

		[Token(Token = "0x40001A6")]
		[FieldOffset(Offset = "0x20")]
		private object o;

		[Token(Token = "0x1700007A")]
		public XmlEventType EventType
		{
			[Token(Token = "0x60002FC")]
			[Address(RVA = "0x479F0D0", Offset = "0x479F0D0", VA = "0x479F0D0")]
			get
			{
				return default(XmlEventType);
			}
		}

		[Token(Token = "0x1700007B")]
		public string String1
		{
			[Token(Token = "0x60002FD")]
			[Address(RVA = "0x479F0E0", Offset = "0x479F0E0", VA = "0x479F0E0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007C")]
		public string String2
		{
			[Token(Token = "0x60002FE")]
			[Address(RVA = "0x479F0F0", Offset = "0x479F0F0", VA = "0x479F0F0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007D")]
		public string String3
		{
			[Token(Token = "0x60002FF")]
			[Address(RVA = "0x479F100", Offset = "0x479F100", VA = "0x479F100")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007E")]
		public object Object
		{
			[Token(Token = "0x6000300")]
			[Address(RVA = "0x479F110", Offset = "0x479F110", VA = "0x479F110")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002F6")]
		[Address(RVA = "0x479F0C0", Offset = "0x479F0C0", VA = "0x479F0C0")]
		public void InitEvent(XmlEventType eventType)
		{
		}

		[Token(Token = "0x60002F7")]
		[Address(RVA = "0x479EF80", Offset = "0x479EF80", VA = "0x479EF80")]
		public void InitEvent(XmlEventType eventType, string s1)
		{
		}

		[Token(Token = "0x60002F8")]
		[Address(RVA = "0x479EFA0", Offset = "0x479EFA0", VA = "0x479EFA0")]
		public void InitEvent(XmlEventType eventType, string s1, string s2)
		{
		}

		[Token(Token = "0x60002F9")]
		[Address(RVA = "0x479EFE0", Offset = "0x479EFE0", VA = "0x479EFE0")]
		public void InitEvent(XmlEventType eventType, string s1, string s2, string s3)
		{
		}

		[Token(Token = "0x60002FA")]
		[Address(RVA = "0x479F030", Offset = "0x479F030", VA = "0x479F030")]
		public void InitEvent(XmlEventType eventType, string s1, string s2, string s3, object o)
		{
		}

		[Token(Token = "0x60002FB")]
		[Address(RVA = "0x479F0A0", Offset = "0x479F0A0", VA = "0x479F0A0")]
		public void InitEvent(XmlEventType eventType, object o)
		{
		}
	}

	[Token(Token = "0x4000181")]
	[FieldOffset(Offset = "0x28")]
	private List<XmlEvent[]> pages;

	[Token(Token = "0x4000182")]
	[FieldOffset(Offset = "0x30")]
	private XmlEvent[] pageCurr;

	[Token(Token = "0x4000183")]
	[FieldOffset(Offset = "0x38")]
	private int pageSize;

	[Token(Token = "0x4000184")]
	[FieldOffset(Offset = "0x3C")]
	private bool hasRootNode;

	[Token(Token = "0x4000185")]
	[FieldOffset(Offset = "0x40")]
	private StringConcat singleText;

	[Token(Token = "0x4000186")]
	[FieldOffset(Offset = "0x78")]
	private string baseUri;

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x4798100", Offset = "0x4798100", VA = "0x4798100")]
	public XmlEventCache(string baseUri, bool hasRootNode)
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x4798D40", Offset = "0x4798D40", VA = "0x4798D40")]
	public void EndEvents()
	{
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x4798D80", Offset = "0x4798D80", VA = "0x4798D80")]
	public void EventsToWriter(XmlWriter writer)
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x479DDA0", Offset = "0x479DDA0", VA = "0x479DDA0", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x479DE80", Offset = "0x479DE80", VA = "0x479DE80", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x479DFC0", Offset = "0x479DFC0", VA = "0x479DFC0", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x479E060", Offset = "0x479E060", VA = "0x479E060", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x479E0A0", Offset = "0x479E0A0", VA = "0x479E0A0", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x479E150", Offset = "0x479E150", VA = "0x479E150", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x479E1B0", Offset = "0x479E1B0", VA = "0x479E1B0", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x479E2B0", Offset = "0x479E2B0", VA = "0x479E2B0", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x479E310", Offset = "0x479E310", VA = "0x479E310", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x479E390", Offset = "0x479E390", VA = "0x479E390", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x479E3C0", Offset = "0x479E3C0", VA = "0x479E3C0", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x479E3F0", Offset = "0x479E3F0", VA = "0x479E3F0", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x479E450", Offset = "0x479E450", VA = "0x479E450", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x479E4B0", Offset = "0x479E4B0", VA = "0x479E4B0", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x479E580", Offset = "0x479E580", VA = "0x479E580", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x479E630", Offset = "0x479E630", VA = "0x479E630", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x479E7B0", Offset = "0x479E7B0", VA = "0x479E7B0", Slot = "26")]
	public override void WriteBinHex(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x479E8A0", Offset = "0x479E8A0", VA = "0x479E8A0", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x479E8E0", Offset = "0x479E8E0", VA = "0x479E8E0", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x479E920", Offset = "0x479E920", VA = "0x479E920", Slot = "31")]
	public override void WriteValue(string value)
	{
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x479E940", Offset = "0x479E940", VA = "0x479E940", Slot = "34")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x479EA10", Offset = "0x479EA10", VA = "0x479EA10", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x479EAA0", Offset = "0x479EAA0", VA = "0x479EAA0", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x479EB00", Offset = "0x479EB00", VA = "0x479EB00", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x479EB40", Offset = "0x479EB40", VA = "0x479EB40", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x479EBE0", Offset = "0x479EBE0", VA = "0x479EBE0", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x479EC80", Offset = "0x479EC80", VA = "0x479EC80", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string ns)
	{
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x479ED00", Offset = "0x479ED00", VA = "0x479ED00", Slot = "46")]
	internal override void WriteEndBase64()
	{
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x479DD60", Offset = "0x479DD60", VA = "0x479DD60")]
	private void AddEvent(XmlEventType eventType)
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x479E100", Offset = "0x479E100", VA = "0x479E100")]
	private void AddEvent(XmlEventType eventType, string s1)
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x479E230", Offset = "0x479E230", VA = "0x479E230")]
	private void AddEvent(XmlEventType eventType, string s1, string s2)
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x479DF20", Offset = "0x479DF20", VA = "0x479DF20")]
	private void AddEvent(XmlEventType eventType, string s1, string s2, string s3)
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x479DDC0", Offset = "0x479DDC0", VA = "0x479DDC0")]
	private void AddEvent(XmlEventType eventType, string s1, string s2, string s3, object o)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x479E530", Offset = "0x479E530", VA = "0x479E530")]
	private void AddEvent(XmlEventType eventType, object o)
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x479ED40", Offset = "0x479ED40", VA = "0x479ED40")]
	private int NewEvent()
	{
		return default(int);
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x479E720", Offset = "0x479E720", VA = "0x479E720")]
	private static byte[] ToBytes(byte[] buffer, int index, int count)
	{
		return null;
	}
}
