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
	[Address(RVA = "0x42902B0", Offset = "0x42902B0", VA = "0x42902B0")]
	public ConstraintTable(DataTable t, XmlSchemaIdentityConstraint c)
	{
	}
}
