// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.ConstraintTable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200008C")]
internal sealed class ConstraintTable
{
	[Token(Token = "0x40002D6")]
	[FieldOffset(Offset = "0x10")]
	public DataTable table;

	[Token(Token = "0x40002D7")]
	[FieldOffset(Offset = "0x18")]
	public XmlSchemaIdentityConstraint constraint;

	[Token(Token = "0x60007F5")]
	[Address(RVA = "0x45CDA10", Offset = "0x45CDA10", VA = "0x45CDA10")]
	public ConstraintTable(DataTable t, XmlSchemaIdentityConstraint c)
	{
	}
}
