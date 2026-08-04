// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.FastMemoryDesc
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200005D")]
public struct FastMemoryDesc
{
	[Token(Token = "0x4000169")]
	[FieldOffset(Offset = "0x0")]
	public bool inFastMemory;

	[Token(Token = "0x400016A")]
	[FieldOffset(Offset = "0x4")]
	public FastMemoryFlags flags;

	[Token(Token = "0x400016B")]
	[FieldOffset(Offset = "0x8")]
	public float residencyFraction;
}
