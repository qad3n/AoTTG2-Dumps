// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Linq.XAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Linq;

[Token(Token = "0x2000006")]
public class XAttribute : XObject
{
	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x20")]
	internal XAttribute next;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x28")]
	internal XName name;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x30")]
	internal string value;

	[Token(Token = "0x17000001")]
	public bool IsNamespaceDeclaration
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x25E5AD0", Offset = "0x25E40D0", VA = "0x1825E5AD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000002")]
	public XName Name
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000004")]
	public string Value
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x25E5B60", Offset = "0x25E4160", VA = "0x1825E5B60")]
		set
		{
		}
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x25E5920", Offset = "0x25E3F20", VA = "0x1825E5920")]
	public XAttribute(XName name, object value)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x25E5A30", Offset = "0x25E4030", VA = "0x1825E5A30")]
	public XAttribute(XAttribute other)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x25E51F0", Offset = "0x25E37F0", VA = "0x1825E51F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x25E50C0", Offset = "0x25E36C0", VA = "0x1825E50C0")]
	internal string GetPrefixOfNamespace(XNamespace ns)
	{
		return null;
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x25E5570", Offset = "0x25E3B70", VA = "0x1825E5570")]
	private static void ValidateAttribute(XName name, string value)
	{
	}
}
