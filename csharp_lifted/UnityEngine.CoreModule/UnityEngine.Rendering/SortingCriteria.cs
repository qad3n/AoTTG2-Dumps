// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SortingCriteria
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200039D")]
[Flags]
public enum SortingCriteria
{
	[Token(Token = "0x4000B0D")]
	None = 0,
	[Token(Token = "0x4000B0E")]
	SortingLayer = 1,
	[Token(Token = "0x4000B0F")]
	RenderQueue = 2,
	[Token(Token = "0x4000B10")]
	BackToFront = 4,
	[Token(Token = "0x4000B11")]
	QuantizedFrontToBack = 8,
	[Token(Token = "0x4000B12")]
	OptimizeStateChanges = 0x10,
	[Token(Token = "0x4000B13")]
	CanvasOrder = 0x20,
	[Token(Token = "0x4000B14")]
	RendererPriority = 0x40,
	[Token(Token = "0x4000B15")]
	CommonOpaque = SortingLayer | RenderQueue | QuantizedFrontToBack | OptimizeStateChanges | CanvasOrder,
	[Token(Token = "0x4000B16")]
	CommonTransparent = SortingLayer | RenderQueue | BackToFront | OptimizeStateChanges
}
