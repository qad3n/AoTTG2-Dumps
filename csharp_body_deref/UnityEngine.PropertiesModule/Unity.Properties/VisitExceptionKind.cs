// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.VisitExceptionKind
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000002")]
[Flags]
public enum VisitExceptionKind
{
	[Token(Token = "0x4000002")]
	None = 0,
	[Token(Token = "0x4000003")]
	Internal = 1,
	[Token(Token = "0x4000004")]
	Visitor = 2,
	[Token(Token = "0x4000005")]
	All = Internal | Visitor
}
