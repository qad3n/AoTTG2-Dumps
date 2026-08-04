// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlDeclaration
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200009F")]
public class XmlDeclaration : XmlLinkedNode
{
	[Token(Token = "0x400043B")]
	[FieldOffset(Offset = "0x20")]
	private string version;

	[Token(Token = "0x400043C")]
	[FieldOffset(Offset = "0x28")]
	private string encoding;

	[Token(Token = "0x400043D")]
	[FieldOffset(Offset = "0x30")]
	private string standalone;

	[Token(Token = "0x170001F7")]
	public string Version
	{
		[Token(Token = "0x6000827")]
		[Address(RVA = "0x47CBD00", Offset = "0x47CBD00", VA = "0x47CBD00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000828")]
		[Address(RVA = "0x47CBD10", Offset = "0x47CBD10", VA = "0x47CBD10")]
		internal set
		{
		}
	}

	[Token(Token = "0x170001F8")]
	public string Encoding
	{
		[Token(Token = "0x6000829")]
		[Address(RVA = "0x47CBD20", Offset = "0x47CBD20", VA = "0x47CBD20")]
		get
		{
			return null;
		}
		[Token(Token = "0x600082A")]
		[Address(RVA = "0x47CBB70", Offset = "0x47CBB70", VA = "0x47CBB70")]
		set
		{
		}
	}

	[Token(Token = "0x170001F9")]
	public string Standalone
	{
		[Token(Token = "0x600082B")]
		[Address(RVA = "0x47CBD30", Offset = "0x47CBD30", VA = "0x47CBD30")]
		get
		{
			return null;
		}
		[Token(Token = "0x600082C")]
		[Address(RVA = "0x47CBBB0", Offset = "0x47CBBB0", VA = "0x47CBBB0")]
		set
		{
		}
	}

	[Token(Token = "0x170001FA")]
	public override string Value
	{
		[Token(Token = "0x600082D")]
		[Address(RVA = "0x47CBD40", Offset = "0x47CBD40", VA = "0x47CBD40", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x600082E")]
		[Address(RVA = "0x47CBD60", Offset = "0x47CBD60", VA = "0x47CBD60", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170001FB")]
	public override string InnerText
	{
		[Token(Token = "0x600082F")]
		[Address(RVA = "0x47CBD80", Offset = "0x47CBD80", VA = "0x47CBD80", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000830")]
		[Address(RVA = "0x47CBEE0", Offset = "0x47CBEE0", VA = "0x47CBEE0", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x170001FC")]
	public override string Name
	{
		[Token(Token = "0x6000831")]
		[Address(RVA = "0x47CC110", Offset = "0x47CC110", VA = "0x47CC110", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FD")]
	public override string LocalName
	{
		[Token(Token = "0x6000832")]
		[Address(RVA = "0x47CC140", Offset = "0x47CC140", VA = "0x47CC140", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FE")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000833")]
		[Address(RVA = "0x47CC160", Offset = "0x47CC160", VA = "0x47CC160", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x47CB910", Offset = "0x47CB910", VA = "0x47CB910")]
	protected internal XmlDeclaration(string version, string encoding, string standalone, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000834")]
	[Address(RVA = "0x47CC170", Offset = "0x47CC170", VA = "0x47CC170", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000835")]
	[Address(RVA = "0x47CC1C0", Offset = "0x47CC1C0", VA = "0x47CC1C0", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x47CC220", Offset = "0x47CC220", VA = "0x47CC220", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000837")]
	[Address(RVA = "0x47CBB10", Offset = "0x47CBB10", VA = "0x47CBB10")]
	private bool IsValidXmlVersion(string ver)
	{
		return default(bool);
	}
}
