using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000020")]
public class InternalRenderGraphContext
{
	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x10")]
	internal ScriptableRenderContext renderContext;

	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x18")]
	internal CommandBuffer cmd;

	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x20")]
	internal RenderGraphObjectPool renderGraphPool;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x28")]
	internal RenderGraphDefaultResources defaultResources;

	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x30")]
	internal RenderGraphPass executingPass;

	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0x38")]
	internal bool contextlessTesting;

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x4855930", Offset = "0x4855930", VA = "0x4855930")]
	public InternalRenderGraphContext()
	{
	}
}
