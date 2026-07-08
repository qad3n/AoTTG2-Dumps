using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000055")]
internal struct RendererListResource
{
	[Token(Token = "0x4000146")]
	[FieldOffset(Offset = "0x0")]
	public RendererListParams desc;

	[Token(Token = "0x4000147")]
	[FieldOffset(Offset = "0x128")]
	public RendererList rendererList;

	[Token(Token = "0x6000505")]
	[Address(RVA = "0x486C0A0", Offset = "0x486C0A0", VA = "0x486C0A0")]
	internal RendererListResource(in RendererListParams desc)
	{
	}
}
