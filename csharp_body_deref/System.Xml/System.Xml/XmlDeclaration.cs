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
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000828")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		internal set
		{
		}
	}

	[Token(Token = "0x170001F8")]
	public string Encoding
	{
		[Token(Token = "0x6000829")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600082A")]
		[Address(RVA = "0x270F3B0", Offset = "0x270D9B0", VA = "0x18270F3B0")]
		set
		{
		}
	}

	[Token(Token = "0x170001F9")]
	public string Standalone
	{
		[Token(Token = "0x600082B")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600082C")]
		[Address(RVA = "0x270F6D0", Offset = "0x270DCD0", VA = "0x18270F6D0")]
		set
		{
		}
	}

	[Token(Token = "0x170001FA")]
	public override string Value
	{
		[Token(Token = "0x600082D")]
		[Address(RVA = "0x270E270", Offset = "0x270C870", VA = "0x18270E270", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x600082E")]
		[Address(RVA = "0x270E5E0", Offset = "0x270CBE0", VA = "0x18270E5E0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170001FB")]
	public override string InnerText
	{
		[Token(Token = "0x600082F")]
		[Address(RVA = "0x270F220", Offset = "0x270D820", VA = "0x18270F220", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000830")]
		[Address(RVA = "0x270F3F0", Offset = "0x270D9F0", VA = "0x18270F3F0", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x170001FC")]
	public override string Name
	{
		[Token(Token = "0x6000831")]
		[Address(RVA = "0x270F380", Offset = "0x270D980", VA = "0x18270F380", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FD")]
	public override string LocalName
	{
		[Token(Token = "0x6000832")]
		[Address(RVA = "0x1B53230", Offset = "0x1B51830", VA = "0x181B53230", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FE")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000833")]
		[Address(RVA = "0x1CB0BF0", Offset = "0x1CAF1F0", VA = "0x181CB0BF0", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x270EFF0", Offset = "0x270D5F0", VA = "0x18270EFF0")]
	protected internal XmlDeclaration(string version, string encoding, string standalone, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000834")]
	[Address(RVA = "0x270EEC0", Offset = "0x270D4C0", VA = "0x18270EEC0", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000835")]
	[Address(RVA = "0x270EF80", Offset = "0x270D580", VA = "0x18270EF80", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000837")]
	[Address(RVA = "0x270EF10", Offset = "0x270D510", VA = "0x18270EF10")]
	private bool IsValidXmlVersion(string ver)
	{
		return default(bool);
	}
}
