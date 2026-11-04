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

[Token(Token = "0x2000096")]
internal sealed class ConstraintTable
{
	[Token(Token = "0x40002E9")]
	[FieldOffset(Offset = "0x10")]
	public DataTable table;

	[Token(Token = "0x40002EA")]
	[FieldOffset(Offset = "0x18")]
	public XmlSchemaIdentityConstraint constraint;

	[Token(Token = "0x6000814")]
	[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
	public ConstraintTable(DataTable t, XmlSchemaIdentityConstraint c)
	{
	}
}
