// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.ConstraintStruct
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x48436B0", Offset = "0x48436B0", VA = "0x48436B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000F9E")]
	[Address(RVA = "0x48436C0", Offset = "0x48436C0", VA = "0x48436C0")]
	internal ConstraintStruct(CompiledIdentityConstraint constraint)
	{
	}
}
