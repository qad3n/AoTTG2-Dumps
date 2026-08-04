// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlNotation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000B6")]
public class XmlNotation : XmlNode
{
	[Token(Token = "0x40004BD")]
	[FieldOffset(Offset = "0x18")]
	private string publicId;

	[Token(Token = "0x40004BE")]
	[FieldOffset(Offset = "0x20")]
	private string systemId;

	[Token(Token = "0x40004BF")]
	[FieldOffset(Offset = "0x28")]
	private string name;

	[Token(Token = "0x170002B8")]
	public override string Name
	{
		[Token(Token = "0x6000A1E")]
		[Address(RVA = "0x47E4330", Offset = "0x47E4330", VA = "0x47E4330", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B9")]
	public override string LocalName
	{
		[Token(Token = "0x6000A1F")]
		[Address(RVA = "0x47E4340", Offset = "0x47E4340", VA = "0x47E4340", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002BA")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000A20")]
		[Address(RVA = "0x47E4350", Offset = "0x47E4350", VA = "0x47E4350", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170002BB")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x6000A22")]
		[Address(RVA = "0x47E43C0", Offset = "0x47E43C0", VA = "0x47E43C0", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002BC")]
	public override string InnerXml
	{
		[Token(Token = "0x6000A23")]
		[Address(RVA = "0x47E43D0", Offset = "0x47E43D0", VA = "0x47E43D0", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x6000A1D")]
	[Address(RVA = "0x47D90B0", Offset = "0x47D90B0", VA = "0x47D90B0")]
	internal XmlNotation(string name, string publicId, string systemId, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000A21")]
	[Address(RVA = "0x47E4360", Offset = "0x47E4360", VA = "0x47E4360", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000A24")]
	[Address(RVA = "0x47E4430", Offset = "0x47E4430", VA = "0x47E4430", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000A25")]
	[Address(RVA = "0x47E4440", Offset = "0x47E4440", VA = "0x47E4440", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}
}
