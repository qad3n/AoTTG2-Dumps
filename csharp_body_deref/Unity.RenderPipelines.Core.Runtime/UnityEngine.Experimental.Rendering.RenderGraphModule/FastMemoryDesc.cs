using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000059")]
public struct FastMemoryDesc
{
	[Token(Token = "0x4000151")]
	[FieldOffset(Offset = "0x0")]
	public bool inFastMemory;

	[Token(Token = "0x4000152")]
	[FieldOffset(Offset = "0x4")]
	public FastMemoryFlags flags;

	[Token(Token = "0x4000153")]
	[FieldOffset(Offset = "0x8")]
	public float residencyFraction;
}
