using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002B2")]
internal sealed class OperandQuery : ValueQuery
{
	[Token(Token = "0x4000E69")]
	[FieldOffset(Offset = "0x18")]
	internal object val;

	[Token(Token = "0x17000713")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001B82")]
		[Address(RVA = "0x4446400", Offset = "0x4446400", VA = "0x4446400", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001B80")]
	[Address(RVA = "0x44463C0", Offset = "0x44463C0", VA = "0x44463C0")]
	public OperandQuery(object val)
	{
	}

	[Token(Token = "0x6001B81")]
	[Address(RVA = "0x44463F0", Offset = "0x44463F0", VA = "0x44463F0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001B83")]
	[Address(RVA = "0x4446410", Offset = "0x4446410", VA = "0x4446410", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
