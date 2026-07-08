using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000056")]
internal struct RendererListLegacyResource
{
	[Token(Token = "0x4000148")]
	[FieldOffset(Offset = "0x0")]
	public RendererList rendererList;

	[Token(Token = "0x4000149")]
	[FieldOffset(Offset = "0x18")]
	public bool isActive;

	[Token(Token = "0x6000506")]
	[Address(RVA = "0x486DD60", Offset = "0x486DD60", VA = "0x486DD60")]
	internal RendererListLegacyResource(in bool active = false)
	{
	}
}
