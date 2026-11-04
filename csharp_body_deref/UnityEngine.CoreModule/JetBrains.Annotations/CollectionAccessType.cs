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

[Token(Token = "0x2000084")]
[Flags]
public enum CollectionAccessType
{
	[Token(Token = "0x4000120")]
	None = 0,
	[Token(Token = "0x4000121")]
	Read = 1,
	[Token(Token = "0x4000122")]
	ModifyExistingContent = 2,
	[Token(Token = "0x4000123")]
	UpdatedContent = 6
}
