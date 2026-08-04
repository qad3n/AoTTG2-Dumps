// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.InternalRenderGraphContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4B7AA20", Offset = "0x4B7AA20", VA = "0x4B7AA20")]
	public InternalRenderGraphContext()
	{
	}
}
