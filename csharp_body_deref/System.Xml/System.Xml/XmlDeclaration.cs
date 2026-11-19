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
		[Address(RVA = "0x60CF380", Offset = "0x60CE380", VA = "0x60CF380")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000828")]
		[Address(RVA = "0x60CF390", Offset = "0x60CE390", VA = "0x60CF390")]
		internal set
		{
		}
	}

	[Token(Token = "0x170001F8")]
	public string Encoding
	{
		[Token(Token = "0x6000829")]
		[Address(RVA = "0x60CF3A0", Offset = "0x60CE3A0", VA = "0x60CF3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600082A")]
		[Address(RVA = "0x60CF1F0", Offset = "0x60CE1F0", VA = "0x60CF1F0")]
		set
		{
		}
	}

	[Token(Token = "0x170001F9")]
	public string Standalone
	{
		[Token(Token = "0x600082B")]
		[Address(RVA = "0x60CF3B0", Offset = "0x60CE3B0", VA = "0x60CF3B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600082C")]
		[Address(RVA = "0x60CF230", Offset = "0x60CE230", VA = "0x60CF230")]
		set
		{
		}
	}

	[Token(Token = "0x170001FA")]
	public override string Value
	{
		[Token(Token = "0x600082D")]
		[Address(RVA = "0x60CF3C0", Offset = "0x60CE3C0", VA = "0x60CF3C0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x600082E")]
		[Address(RVA = "0x60CF3E0", Offset = "0x60CE3E0", VA = "0x60CF3E0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170001FB")]
	public override string InnerText
	{
		[Token(Token = "0x600082F")]
		[Address(RVA = "0x60CF400", Offset = "0x60CE400", VA = "0x60CF400", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000830")]
		[Address(RVA = "0x60CF560", Offset = "0x60CE560", VA = "0x60CF560", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x170001FC")]
	public override string Name
	{
		[Token(Token = "0x6000831")]
		[Address(RVA = "0x60CF750", Offset = "0x60CE750", VA = "0x60CF750", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FD")]
	public override string LocalName
	{
		[Token(Token = "0x6000832")]
		[Address(RVA = "0x60CF780", Offset = "0x60CE780", VA = "0x60CF780", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FE")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000833")]
		[Address(RVA = "0x60CF7A0", Offset = "0x60CE7A0", VA = "0x60CF7A0", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x60CEF90", Offset = "0x60CDF90", VA = "0x60CEF90")]
	protected internal XmlDeclaration(string version, string encoding, string standalone, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000834")]
	[Address(RVA = "0x60CF7B0", Offset = "0x60CE7B0", VA = "0x60CF7B0", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000835")]
	[Address(RVA = "0x60CF800", Offset = "0x60CE800", VA = "0x60CF800", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x60CF860", Offset = "0x60CE860", VA = "0x60CF860", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000837")]
	[Address(RVA = "0x60CF190", Offset = "0x60CE190", VA = "0x60CF190")]
	private bool IsValidXmlVersion(string ver)
	{
		return default(bool);
	}
}
