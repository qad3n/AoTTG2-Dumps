// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.Group
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002A5")]
internal class Group : AstNode
{
	[Token(Token = "0x4000E52")]
	[FieldOffset(Offset = "0x10")]
	private AstNode _groupNode;

	[Token(Token = "0x17000704")]
	public override AstType Type
	{
		[Token(Token = "0x6001B15")]
		[Address(RVA = "0x8680A0", Offset = "0x8666A0", VA = "0x1808680A0", Slot = "4")]
		get
		{
			return default(AstType);
		}
	}

	[Token(Token = "0x17000705")]
	public override XPathResultType ReturnType
	{
		[Token(Token = "0x6001B16")]
		[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0", Slot = "5")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x17000706")]
	public AstNode GroupNode
	{
		[Token(Token = "0x6001B17")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001B14")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public Group(AstNode groupNode)
	{
	}
}
