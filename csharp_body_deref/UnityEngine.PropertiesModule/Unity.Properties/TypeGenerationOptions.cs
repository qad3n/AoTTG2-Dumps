// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.TypeGenerationOptions
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x200000C")]
[Flags]
public enum TypeGenerationOptions
{
	[Token(Token = "0x4000017")]
	None = 0,
	[Token(Token = "0x4000018")]
	ValueType = 2,
	[Token(Token = "0x4000019")]
	ReferenceType = 4,
	[Token(Token = "0x400001A")]
	Default = ValueType | ReferenceType
}
