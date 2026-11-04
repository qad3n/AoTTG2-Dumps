// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RenderTargetInfo
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x2000291")]
[MovedFrom(true, "UnityEngine.Experimental.Rendering.RenderGraphModule", "UnityEngine.Rendering.RenderGraphModule", null)]
public struct RenderTargetInfo
{
	[Token(Token = "0x4000B7A")]
	[FieldOffset(Offset = "0x0")]
	public int width;

	[Token(Token = "0x4000B7B")]
	[FieldOffset(Offset = "0x4")]
	public int height;

	[Token(Token = "0x4000B7C")]
	[FieldOffset(Offset = "0x8")]
	public int volumeDepth;

	[Token(Token = "0x4000B7D")]
	[FieldOffset(Offset = "0xC")]
	public int msaaSamples;

	[Token(Token = "0x4000B7E")]
	[FieldOffset(Offset = "0x10")]
	public GraphicsFormat format;

	[Token(Token = "0x4000B7F")]
	[FieldOffset(Offset = "0x14")]
	public bool bindMS;
}
