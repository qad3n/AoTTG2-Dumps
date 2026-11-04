// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.XmlIgnoreNamespaceReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Xml;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000099")]
internal sealed class XmlIgnoreNamespaceReader : XmlNodeReader
{
	[Token(Token = "0x4000301")]
	[FieldOffset(Offset = "0x30")]
	private List<string> _namespacesToIgnore;

	[Token(Token = "0x600084E")]
	[Address(RVA = "0x2544C10", Offset = "0x2543210", VA = "0x182544C10")]
	internal XmlIgnoreNamespaceReader(XmlDocument xdoc, string[] namespacesToIgnore)
	{
	}

	[Token(Token = "0x600084F")]
	[Address(RVA = "0x2544A00", Offset = "0x2543000", VA = "0x182544A00", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000850")]
	[Address(RVA = "0x2544B10", Offset = "0x2543110", VA = "0x182544B10", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}
}
