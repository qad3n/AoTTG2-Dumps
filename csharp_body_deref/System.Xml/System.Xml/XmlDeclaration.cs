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
		[Address(RVA = "0x448E5A0", Offset = "0x448E5A0", VA = "0x448E5A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000828")]
		[Address(RVA = "0x448E5B0", Offset = "0x448E5B0", VA = "0x448E5B0")]
		internal set
		{
		}
	}

	[Token(Token = "0x170001F8")]
	public string Encoding
	{
		[Token(Token = "0x6000829")]
		[Address(RVA = "0x448E5C0", Offset = "0x448E5C0", VA = "0x448E5C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600082A")]
		[Address(RVA = "0x448E410", Offset = "0x448E410", VA = "0x448E410")]
		set
		{
		}
	}

	[Token(Token = "0x170001F9")]
	public string Standalone
	{
		[Token(Token = "0x600082B")]
		[Address(RVA = "0x448E5D0", Offset = "0x448E5D0", VA = "0x448E5D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600082C")]
		[Address(RVA = "0x448E450", Offset = "0x448E450", VA = "0x448E450")]
		set
		{
		}
	}

	[Token(Token = "0x170001FA")]
	public override string Value
	{
		[Token(Token = "0x600082D")]
		[Address(RVA = "0x448E5E0", Offset = "0x448E5E0", VA = "0x448E5E0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x600082E")]
		[Address(RVA = "0x448E600", Offset = "0x448E600", VA = "0x448E600", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170001FB")]
	public override string InnerText
	{
		[Token(Token = "0x600082F")]
		[Address(RVA = "0x448E620", Offset = "0x448E620", VA = "0x448E620", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000830")]
		[Address(RVA = "0x448E780", Offset = "0x448E780", VA = "0x448E780", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x170001FC")]
	public override string Name
	{
		[Token(Token = "0x6000831")]
		[Address(RVA = "0x448E9B0", Offset = "0x448E9B0", VA = "0x448E9B0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FD")]
	public override string LocalName
	{
		[Token(Token = "0x6000832")]
		[Address(RVA = "0x448E9E0", Offset = "0x448E9E0", VA = "0x448E9E0", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FE")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000833")]
		[Address(RVA = "0x448EA00", Offset = "0x448EA00", VA = "0x448EA00", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x448E1B0", Offset = "0x448E1B0", VA = "0x448E1B0")]
	protected internal XmlDeclaration(string version, string encoding, string standalone, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000834")]
	[Address(RVA = "0x448EA10", Offset = "0x448EA10", VA = "0x448EA10", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000835")]
	[Address(RVA = "0x448EA60", Offset = "0x448EA60", VA = "0x448EA60", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x448EAC0", Offset = "0x448EAC0", VA = "0x448EAC0", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000837")]
	[Address(RVA = "0x448E3B0", Offset = "0x448E3B0", VA = "0x448E3B0")]
	private bool IsValidXmlVersion(string ver)
	{
		return default(bool);
	}
}
