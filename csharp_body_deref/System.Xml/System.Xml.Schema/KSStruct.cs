// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.KSStruct
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200016D")]
internal class KSStruct
{
	[Token(Token = "0x4000761")]
	[FieldOffset(Offset = "0x10")]
	public int depth;

	[Token(Token = "0x4000762")]
	[FieldOffset(Offset = "0x18")]
	public KeySequence ks;

	[Token(Token = "0x4000763")]
	[FieldOffset(Offset = "0x20")]
	public LocatedActiveAxis[] fields;

	[Token(Token = "0x6000FA7")]
	[Address(RVA = "0x4843E70", Offset = "0x4843E70", VA = "0x4843E70")]
	public KSStruct(KeySequence ks, int dim)
	{
	}
}
