// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.VisitReturnCode
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000009")]
public enum VisitReturnCode
{
	[Token(Token = "0x400000E")]
	Ok,
	[Token(Token = "0x400000F")]
	NullContainer,
	[Token(Token = "0x4000010")]
	InvalidContainerType,
	[Token(Token = "0x4000011")]
	MissingPropertyBag,
	[Token(Token = "0x4000012")]
	InvalidPath,
	[Token(Token = "0x4000013")]
	InvalidCast,
	[Token(Token = "0x4000014")]
	AccessViolation
}
