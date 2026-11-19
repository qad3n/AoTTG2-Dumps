// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.OccluderHandles
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000A4")]
internal struct OccluderHandles
{
	[Token(Token = "0x4000311")]
	[FieldOffset(Offset = "0x0")]
	public TextureHandle occluderDepthPyramid;

	[Token(Token = "0x4000312")]
	[FieldOffset(Offset = "0x10")]
	public BufferHandle occlusionDebugOverlay;

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x65E50B0", Offset = "0x65E40B0", VA = "0x65E50B0")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x65E5220", Offset = "0x65E4220", VA = "0x65E5220")]
	public void UseForOcclusionTest(IBaseRenderGraphBuilder builder)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x65E5380", Offset = "0x65E4380", VA = "0x65E5380")]
	public void UseForOccluderUpdate(IBaseRenderGraphBuilder builder)
	{
	}
}
