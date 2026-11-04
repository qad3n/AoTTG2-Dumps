// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RendererListResource
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x2000299")]
internal struct RendererListResource
{
	[Token(Token = "0x4000B9F")]
	[FieldOffset(Offset = "0x0")]
	public RendererListParams desc;

	[Token(Token = "0x4000BA0")]
	[FieldOffset(Offset = "0x130")]
	public RendererList rendererList;

	[Token(Token = "0x60012C3")]
	[Address(RVA = "0x2BA5C00", Offset = "0x2BA4200", VA = "0x182BA5C00")]
	internal RendererListResource(in RendererListParams desc)
	{
	}
}
