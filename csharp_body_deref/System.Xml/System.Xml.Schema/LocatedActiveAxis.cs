// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.LocatedActiveAxis
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200016B")]
internal class LocatedActiveAxis : ActiveAxis
{
	[Token(Token = "0x400075B")]
	[FieldOffset(Offset = "0x28")]
	private int column;

	[Token(Token = "0x400075C")]
	[FieldOffset(Offset = "0x2C")]
	internal bool isMatched;

	[Token(Token = "0x400075D")]
	[FieldOffset(Offset = "0x30")]
	internal KeySequence Ks;

	[Token(Token = "0x17000409")]
	internal int Column
	{
		[Token(Token = "0x6000F9F")]
		[Address(RVA = "0x48438D0", Offset = "0x48438D0", VA = "0x48438D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000FA0")]
	[Address(RVA = "0x48438E0", Offset = "0x48438E0", VA = "0x48438E0")]
	internal LocatedActiveAxis(Asttree astfield, KeySequence ks, int column)
	{
	}

	[Token(Token = "0x6000FA1")]
	[Address(RVA = "0x4843910", Offset = "0x4843910", VA = "0x4843910")]
	internal void Reactivate(KeySequence ks)
	{
	}
}
