// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.GenericParameterAttributes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004DC")]
[Flags]
public enum GenericParameterAttributes
{
	[Token(Token = "0x40013FA")]
	None = 0,
	[Token(Token = "0x40013FB")]
	VarianceMask = 3,
	[Token(Token = "0x40013FC")]
	Covariant = 1,
	[Token(Token = "0x40013FD")]
	Contravariant = 2,
	[Token(Token = "0x40013FE")]
	SpecialConstraintMask = 0x1C,
	[Token(Token = "0x40013FF")]
	ReferenceTypeConstraint = 4,
	[Token(Token = "0x4001400")]
	NotNullableValueTypeConstraint = 8,
	[Token(Token = "0x4001401")]
	DefaultConstructorConstraint = 0x10
}
