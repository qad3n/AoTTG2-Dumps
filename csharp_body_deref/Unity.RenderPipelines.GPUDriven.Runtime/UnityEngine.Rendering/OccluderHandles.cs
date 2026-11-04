// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.OccluderHandles
// Update status: NEW in this game update
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
	[Address(RVA = "0x2BF41B0", Offset = "0x2BF27B0", VA = "0x182BF41B0")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x2BF42C0", Offset = "0x2BF28C0", VA = "0x182BF42C0")]
	public void UseForOcclusionTest(IBaseRenderGraphBuilder builder)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x2BF4200", Offset = "0x2BF2800", VA = "0x182BF4200")]
	public void UseForOccluderUpdate(IBaseRenderGraphBuilder builder)
	{
	}
}
