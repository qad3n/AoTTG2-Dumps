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
		[Address(RVA = "0x6082CA0", Offset = "0x6081CA0", VA = "0x6082CA0", Slot = "4")]
		get
		{
			return default(AstType);
		}
	}

	[Token(Token = "0x17000705")]
	public override XPathResultType ReturnType
	{
		[Token(Token = "0x6001B16")]
		[Address(RVA = "0x6082CB0", Offset = "0x6081CB0", VA = "0x6082CB0", Slot = "5")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x17000706")]
	public AstNode GroupNode
	{
		[Token(Token = "0x6001B17")]
		[Address(RVA = "0x6082CC0", Offset = "0x6081CC0", VA = "0x6082CC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001B14")]
	[Address(RVA = "0x6082C70", Offset = "0x6081C70", VA = "0x6082C70")]
	public Group(AstNode groupNode)
	{
	}
}
