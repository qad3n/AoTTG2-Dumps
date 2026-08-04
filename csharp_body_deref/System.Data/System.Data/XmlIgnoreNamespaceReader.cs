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

[Token(Token = "0x200008F")]
internal sealed class XmlIgnoreNamespaceReader : XmlNodeReader
{
	[Token(Token = "0x40002EE")]
	[FieldOffset(Offset = "0x30")]
	private List<string> _namespacesToIgnore;

	[Token(Token = "0x600082F")]
	[Address(RVA = "0x45E1110", Offset = "0x45E1110", VA = "0x45E1110")]
	internal XmlIgnoreNamespaceReader(XmlDocument xdoc, string[] namespacesToIgnore)
	{
	}

	[Token(Token = "0x6000830")]
	[Address(RVA = "0x45E11A0", Offset = "0x45E11A0", VA = "0x45E11A0", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000831")]
	[Address(RVA = "0x45E12B0", Offset = "0x45E12B0", VA = "0x45E12B0", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}
}
