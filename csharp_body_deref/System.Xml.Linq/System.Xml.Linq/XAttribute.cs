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
		[Address(RVA = "0x468BDA0", Offset = "0x468BDA0", VA = "0x468BDA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000002")]
	public XName Name
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x468BE40", Offset = "0x468BE40", VA = "0x468BE40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x468BE50", Offset = "0x468BE50", VA = "0x468BE50", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000004")]
	public string Value
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x468BE60", Offset = "0x468BE60", VA = "0x468BE60")]
		get
		{
			return null;
		}
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x468BE70", Offset = "0x468BE70", VA = "0x468BE70")]
		set
		{
		}
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x468B610", Offset = "0x468B610", VA = "0x468B610")]
	public XAttribute(XName name, object value)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x468BD10", Offset = "0x468BD10", VA = "0x468BD10")]
	public XAttribute(XAttribute other)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x468C1E0", Offset = "0x468C1E0", VA = "0x468C1E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x468C620", Offset = "0x468C620", VA = "0x468C620")]
	internal string GetPrefixOfNamespace(XNamespace ns)
	{
		return null;
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x468BAF0", Offset = "0x468BAF0", VA = "0x468BAF0")]
	private static void ValidateAttribute(XName name, string value)
	{
	}
}
