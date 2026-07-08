using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200016A")]
internal sealed class ConstraintStruct
{
	[Token(Token = "0x4000755")]
	[FieldOffset(Offset = "0x10")]
	internal CompiledIdentityConstraint constraint;

	[Token(Token = "0x4000756")]
	[FieldOffset(Offset = "0x18")]
	internal SelectorActiveAxis axisSelector;

	[Token(Token = "0x4000757")]
	[FieldOffset(Offset = "0x20")]
	internal ArrayList axisFields;

	[Token(Token = "0x4000758")]
	[FieldOffset(Offset = "0x28")]
	internal Hashtable qualifiedTable;

	[Token(Token = "0x4000759")]
	[FieldOffset(Offset = "0x30")]
	internal Hashtable keyrefTable;

	[Token(Token = "0x400075A")]
	[FieldOffset(Offset = "0x38")]
	private int tableDim;

	[Token(Token = "0x17000408")]
	internal int TableDim
	{
		[Token(Token = "0x6000F9D")]
		[Address(RVA = "0x4505F50", Offset = "0x4505F50", VA = "0x4505F50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000F9E")]
	[Address(RVA = "0x4505F60", Offset = "0x4505F60", VA = "0x4505F60")]
	internal ConstraintStruct(CompiledIdentityConstraint constraint)
	{
	}
}
