// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.XContainerWrapper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Xml.Linq;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001CF")]
internal class XContainerWrapper : XObjectWrapper
{
	[Token(Token = "0x400081B")]
	[FieldOffset(Offset = "0x18")]
	private List<IXmlNode>? _childNodes;

	[Token(Token = "0x17000291")]
	private XContainer Container
	{
		[Token(Token = "0x6000F81")]
		[Address(RVA = "0x563D360", Offset = "0x563C360", VA = "0x563D360")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000292")]
	public override List<IXmlNode> ChildNodes
	{
		[Token(Token = "0x6000F83")]
		[Address(RVA = "0x563B870", Offset = "0x563A870", VA = "0x563B870", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000293")]
	protected virtual bool HasChildNodes
	{
		[Token(Token = "0x6000F84")]
		[Address(RVA = "0x563BDC0", Offset = "0x563ADC0", VA = "0x563BDC0", Slot = "23")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000294")]
	public override IXmlNode? ParentNode
	{
		[Token(Token = "0x6000F85")]
		[Address(RVA = "0x563D3C0", Offset = "0x563C3C0", VA = "0x563D3C0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F82")]
	[Address(RVA = "0x563B600", Offset = "0x563A600", VA = "0x563B600")]
	public XContainerWrapper(XContainer container)
	{
	}

	[Token(Token = "0x6000F86")]
	[Address(RVA = "0x563CC30", Offset = "0x563BC30", VA = "0x563CC30")]
	internal static IXmlNode WrapNode(XObject node)
	{
		return null;
	}

	[Token(Token = "0x6000F87")]
	[Address(RVA = "0x563C860", Offset = "0x563B860", VA = "0x563C860", Slot = "21")]
	public override IXmlNode AppendChild(IXmlNode newChild)
	{
		return null;
	}
}
