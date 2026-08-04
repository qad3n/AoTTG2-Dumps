// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ComputedTransitionProperty
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000272")]
internal struct ComputedTransitionProperty
{
	[Token(Token = "0x400090B")]
	[FieldOffset(Offset = "0x0")]
	public StylePropertyId id;

	[Token(Token = "0x400090C")]
	[FieldOffset(Offset = "0x4")]
	public int durationMs;

	[Token(Token = "0x400090D")]
	[FieldOffset(Offset = "0x8")]
	public int delayMs;

	[Token(Token = "0x400090E")]
	[FieldOffset(Offset = "0x10")]
	public Func<float, float> easingCurve;
}
