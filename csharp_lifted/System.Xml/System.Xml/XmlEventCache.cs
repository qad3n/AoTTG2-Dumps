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
			[Address(RVA = "0x60A42D0", Offset = "0x60A32D0", VA = "0x60A42D0")]
			get
			{
				return default(XmlEventType);
			}
		}

		[Token(Token = "0x1700007B")]
		public string String1
		{
			[Token(Token = "0x60002FD")]
			[Address(RVA = "0x60A42E0", Offset = "0x60A32E0", VA = "0x60A42E0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007C")]
		public string String2
		{
			[Token(Token = "0x60002FE")]
			[Address(RVA = "0x60A42F0", Offset = "0x60A32F0", VA = "0x60A42F0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007D")]
		public string String3
		{
			[Token(Token = "0x60002FF")]
			[Address(RVA = "0x60A4300", Offset = "0x60A3300", VA = "0x60A4300")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007E")]
		public object Object
		{
			[Token(Token = "0x6000300")]
			[Address(RVA = "0x60A4310", Offset = "0x60A3310", VA = "0x60A4310")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002F6")]
		[Address(RVA = "0x60A42C0", Offset = "0x60A32C0", VA = "0x60A42C0")]
		public void InitEvent(XmlEventType eventType)
		{
		}

		[Token(Token = "0x60002F7")]
		[Address(RVA = "0x60A4180", Offset = "0x60A3180", VA = "0x60A4180")]
		public void InitEvent(XmlEventType eventType, string s1)
		{
		}

		[Token(Token = "0x60002F8")]
		[Address(RVA = "0x60A41A0", Offset = "0x60A31A0", VA = "0x60A41A0")]
		public void InitEvent(XmlEventType eventType, string s1, string s2)
		{
		}

		[Token(Token = "0x60002F9")]
		[Address(RVA = "0x60A41E0", Offset = "0x60A31E0", VA = "0x60A41E0")]
		public void InitEvent(XmlEventType eventType, string s1, string s2, string s3)
		{
		}

		[Token(Token = "0x60002FA")]
		[Address(RVA = "0x60A4230", Offset = "0x60A3230", VA = "0x60A4230")]
		public void InitEvent(XmlEventType eventType, string s1, string s2, string s3, object o)
		{
		}

		[Token(Token = "0x60002FB")]
		[Address(RVA = "0x60A42A0", Offset = "0x60A32A0", VA = "0x60A42A0")]
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
	[Address(RVA = "0x609D680", Offset = "0x609C680", VA = "0x609D680")]
	public XmlEventCache(string baseUri, bool hasRootNode)
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x609E290", Offset = "0x609D290", VA = "0x609E290")]
	public void EndEvents()
	{
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x609E2D0", Offset = "0x609D2D0", VA = "0x609E2D0")]
	public void EventsToWriter(XmlWriter writer)
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x60A2FB0", Offset = "0x60A1FB0", VA = "0x60A2FB0", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x60A3090", Offset = "0x60A2090", VA = "0x60A3090", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x60A31D0", Offset = "0x60A21D0", VA = "0x60A31D0", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x60A3270", Offset = "0x60A2270", VA = "0x60A3270", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x60A32B0", Offset = "0x60A22B0", VA = "0x60A32B0", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x60A3360", Offset = "0x60A2360", VA = "0x60A3360", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x60A33C0", Offset = "0x60A23C0", VA = "0x60A33C0", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x60A34C0", Offset = "0x60A24C0", VA = "0x60A34C0", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x60A3520", Offset = "0x60A2520", VA = "0x60A3520", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x60A35A0", Offset = "0x60A25A0", VA = "0x60A35A0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x60A35D0", Offset = "0x60A25D0", VA = "0x60A35D0", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x60A3600", Offset = "0x60A2600", VA = "0x60A3600", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x60A3660", Offset = "0x60A2660", VA = "0x60A3660", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x60A36C0", Offset = "0x60A26C0", VA = "0x60A36C0", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x60A3790", Offset = "0x60A2790", VA = "0x60A3790", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x60A3840", Offset = "0x60A2840", VA = "0x60A3840", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x60A39D0", Offset = "0x60A29D0", VA = "0x60A39D0", Slot = "26")]
	public override void WriteBinHex(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x60A3AC0", Offset = "0x60A2AC0", VA = "0x60A3AC0", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x60A3B00", Offset = "0x60A2B00", VA = "0x60A3B00", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x60A3B40", Offset = "0x60A2B40", VA = "0x60A3B40", Slot = "31")]
	public override void WriteValue(string value)
	{
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x60A3B60", Offset = "0x60A2B60", VA = "0x60A3B60", Slot = "34")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x60A3C20", Offset = "0x60A2C20", VA = "0x60A3C20", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x60A3CB0", Offset = "0x60A2CB0", VA = "0x60A3CB0", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x60A3D10", Offset = "0x60A2D10", VA = "0x60A3D10", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x60A3D50", Offset = "0x60A2D50", VA = "0x60A3D50", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x60A3DF0", Offset = "0x60A2DF0", VA = "0x60A3DF0", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x60A3E90", Offset = "0x60A2E90", VA = "0x60A3E90", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string ns)
	{
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x60A3F10", Offset = "0x60A2F10", VA = "0x60A3F10", Slot = "46")]
	internal override void WriteEndBase64()
	{
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x60A2F70", Offset = "0x60A1F70", VA = "0x60A2F70")]
	private void AddEvent(XmlEventType eventType)
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x60A3310", Offset = "0x60A2310", VA = "0x60A3310")]
	private void AddEvent(XmlEventType eventType, string s1)
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x60A3440", Offset = "0x60A2440", VA = "0x60A3440")]
	private void AddEvent(XmlEventType eventType, string s1, string s2)
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x60A3130", Offset = "0x60A2130", VA = "0x60A3130")]
	private void AddEvent(XmlEventType eventType, string s1, string s2, string s3)
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x60A2FD0", Offset = "0x60A1FD0", VA = "0x60A2FD0")]
	private void AddEvent(XmlEventType eventType, string s1, string s2, string s3, object o)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x60A3740", Offset = "0x60A2740", VA = "0x60A3740")]
	private void AddEvent(XmlEventType eventType, object o)
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x60A3F50", Offset = "0x60A2F50", VA = "0x60A3F50")]
	private int NewEvent()
	{
		return default(int);
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x60A3930", Offset = "0x60A2930", VA = "0x60A3930")]
	private static byte[] ToBytes(byte[] buffer, int index, int count)
	{
		return null;
	}
}
