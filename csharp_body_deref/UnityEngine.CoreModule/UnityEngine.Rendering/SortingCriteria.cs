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

[Token(Token = "0x2000300")]
[Flags]
public enum SortingCriteria
{
	[Token(Token = "0x4000923")]
	None = 0,
	[Token(Token = "0x4000924")]
	SortingLayer = 1,
	[Token(Token = "0x4000925")]
	RenderQueue = 2,
	[Token(Token = "0x4000926")]
	BackToFront = 4,
	[Token(Token = "0x4000927")]
	QuantizedFrontToBack = 8,
	[Token(Token = "0x4000928")]
	OptimizeStateChanges = 0x10,
	[Token(Token = "0x4000929")]
	CanvasOrder = 0x20,
	[Token(Token = "0x400092A")]
	RendererPriority = 0x40,
	[Token(Token = "0x400092B")]
	CommonOpaque = 0x3B,
	[Token(Token = "0x400092C")]
	CommonTransparent = 0x17
}
