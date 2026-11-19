// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.LineInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000C3")]
internal struct LineInfo
{
	[Token(Token = "0x40004C9")]
	[FieldOffset(Offset = "0x0")]
	internal int lineNo;

	[Token(Token = "0x40004CA")]
	[FieldOffset(Offset = "0x4")]
	internal int linePos;

	[Token(Token = "0x6000A86")]
	[Address(RVA = "0x60E84F0", Offset = "0x60E74F0", VA = "0x60E84F0")]
	public LineInfo(int lineNo, int linePos)
	{
	}

	[Token(Token = "0x6000A87")]
	[Address(RVA = "0x60E8500", Offset = "0x60E7500", VA = "0x60E8500")]
	public void Set(int lineNo, int linePos)
	{
	}
}
