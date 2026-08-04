// ==================== AoTTG2 cross-reference ====================
// Type: JetBrains.Annotations.CollectionAccessType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace JetBrains.Annotations;

[Token(Token = "0x200006E")]
[Flags]
public enum CollectionAccessType
{
	[Token(Token = "0x40000E6")]
	None = 0,
	[Token(Token = "0x40000E7")]
	Read = 1,
	[Token(Token = "0x40000E8")]
	ModifyExistingContent = 2,
	[Token(Token = "0x40000E9")]
	UpdatedContent = 6
}
