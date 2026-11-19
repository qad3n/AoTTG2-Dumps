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
		[Address(RVA = "0x5F9DE90", Offset = "0x5F9CE90", VA = "0x5F9DE90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000002")]
	public XName Name
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x5F9DF30", Offset = "0x5F9CF30", VA = "0x5F9DF30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x5F9DF40", Offset = "0x5F9CF40", VA = "0x5F9DF40", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000004")]
	public string Value
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x5F9DF50", Offset = "0x5F9CF50", VA = "0x5F9DF50")]
		get
		{
			return null;
		}
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x5F9DF60", Offset = "0x5F9CF60", VA = "0x5F9DF60")]
		set
		{
		}
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x5F9D7A0", Offset = "0x5F9C7A0", VA = "0x5F9D7A0")]
	public XAttribute(XName name, object value)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x5F9DE00", Offset = "0x5F9CE00", VA = "0x5F9DE00")]
	public XAttribute(XAttribute other)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x5F9E2A0", Offset = "0x5F9D2A0", VA = "0x5F9E2A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x5F9E610", Offset = "0x5F9D610", VA = "0x5F9E610")]
	internal string GetPrefixOfNamespace(XNamespace ns)
	{
		return null;
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x5F9DBF0", Offset = "0x5F9CBF0", VA = "0x5F9DBF0")]
	private static void ValidateAttribute(XName name, string value)
	{
	}
}
