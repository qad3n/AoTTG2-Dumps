using System.Collections.Generic;
using System.Xml;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200008F")]
internal sealed class XmlIgnoreNamespaceReader : XmlNodeReader
{
	[Token(Token = "0x40002EE")]
	[FieldOffset(Offset = "0x30")]
	private List<string> _namespacesToIgnore;

	[Token(Token = "0x600082F")]
	[Address(RVA = "0x42A39B0", Offset = "0x42A39B0", VA = "0x42A39B0")]
	internal XmlIgnoreNamespaceReader(XmlDocument xdoc, string[] namespacesToIgnore)
	{
	}

	[Token(Token = "0x6000830")]
	[Address(RVA = "0x42A3A40", Offset = "0x42A3A40", VA = "0x42A3A40", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000831")]
	[Address(RVA = "0x42A3B50", Offset = "0x42A3B50", VA = "0x42A3B50", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}
}
