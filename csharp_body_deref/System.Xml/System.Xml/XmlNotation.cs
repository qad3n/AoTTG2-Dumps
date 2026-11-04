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
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B9")]
	public override string LocalName
	{
		[Token(Token = "0x6000A1F")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002BA")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000A20")]
		[Address(RVA = "0x847030", Offset = "0x845630", VA = "0x180847030", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170002BB")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x6000A22")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002BC")]
	public override string InnerXml
	{
		[Token(Token = "0x6000A23")]
		[Address(RVA = "0x273BBA0", Offset = "0x273A1A0", VA = "0x18273BBA0", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x6000A1D")]
	[Address(RVA = "0x273BAA0", Offset = "0x273A0A0", VA = "0x18273BAA0")]
	internal XmlNotation(string name, string publicId, string systemId, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000A21")]
	[Address(RVA = "0x273BA40", Offset = "0x273A040", VA = "0x18273BA40", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000A24")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000A25")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}
}
