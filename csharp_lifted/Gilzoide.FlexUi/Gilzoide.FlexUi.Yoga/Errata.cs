// ==================== AoTTG2 cross-reference ====================
// Type: Gilzoide.FlexUi.Yoga.Errata
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gilzoide.FlexUi.Yoga;

[Token(Token = "0x200000D")]
[Flags]
public enum Errata
{
	[Token(Token = "0x4000054")]
	None = 0,
	[Token(Token = "0x4000055")]
	StretchFlexBasis = 1,
	[Token(Token = "0x4000056")]
	StartingEndingEdgeFromFlexDirection = 2,
	[Token(Token = "0x4000057")]
	PositionStaticBehavesLikeRelative = 4,
	[Token(Token = "0x4000058")]
	All = 0x7FFFFFFF,
	[Token(Token = "0x4000059")]
	Classic = 0x7FFFFFFE
}
