// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IndirectBufferContextHandles
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000B1")]
internal struct IndirectBufferContextHandles
{
	[Token(Token = "0x400034F")]
	[FieldOffset(Offset = "0x0")]
	public BufferHandle instanceBuffer;

	[Token(Token = "0x4000350")]
	[FieldOffset(Offset = "0xC")]
	public BufferHandle instanceInfoBuffer;

	[Token(Token = "0x4000351")]
	[FieldOffset(Offset = "0x18")]
	public BufferHandle dispatchArgsBuffer;

	[Token(Token = "0x4000352")]
	[FieldOffset(Offset = "0x24")]
	public BufferHandle drawArgsBuffer;

	[Token(Token = "0x4000353")]
	[FieldOffset(Offset = "0x30")]
	public BufferHandle drawInfoBuffer;

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x2BEE720", Offset = "0x2BECD20", VA = "0x182BEE720")]
	public void UseForOcclusionTest(IBaseRenderGraphBuilder builder)
	{
	}
}
