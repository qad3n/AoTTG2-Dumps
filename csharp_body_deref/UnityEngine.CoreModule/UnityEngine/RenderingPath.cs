// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RenderingPath
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x20000D0")]
public enum RenderingPath
{
	[Token(Token = "0x400020E")]
	UsePlayerSettings = -1,
	[Token(Token = "0x400020F")]
	VertexLit,
	[Token(Token = "0x4000210")]
	Forward,
	[Token(Token = "0x4000211")]
	[Obsolete("DeferredLighting has been removed. Use DeferredShading, Forward or HDRP/URP instead.", false)]
	DeferredLighting,
	[Token(Token = "0x4000212")]
	DeferredShading
}
