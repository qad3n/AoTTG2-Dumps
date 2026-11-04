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

[Token(Token = "0x20003C9")]
[Flags]
public enum SortingCriteria
{
	[Token(Token = "0x4000C2D")]
	None = 0,
	[Token(Token = "0x4000C2E")]
	SortingLayer = 1,
	[Token(Token = "0x4000C2F")]
	RenderQueue = 2,
	[Token(Token = "0x4000C30")]
	BackToFront = 4,
	[Token(Token = "0x4000C31")]
	QuantizedFrontToBack = 8,
	[Token(Token = "0x4000C32")]
	OptimizeStateChanges = 0x10,
	[Token(Token = "0x4000C33")]
	CanvasOrder = 0x20,
	[Token(Token = "0x4000C34")]
	RendererPriority = 0x40,
	[Token(Token = "0x4000C35")]
	CommonOpaque = SortingLayer | RenderQueue | QuantizedFrontToBack | OptimizeStateChanges | CanvasOrder,
	[Token(Token = "0x4000C36")]
	CommonTransparent = SortingLayer | RenderQueue | BackToFront | OptimizeStateChanges
}
