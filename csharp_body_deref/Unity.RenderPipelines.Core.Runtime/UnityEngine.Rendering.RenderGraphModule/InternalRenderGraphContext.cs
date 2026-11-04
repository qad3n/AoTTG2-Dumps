// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.InternalRenderGraphContext
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x200026C")]
[MovedFrom(true, "UnityEngine.Experimental.Rendering.RenderGraphModule", "UnityEngine.Rendering.RenderGraphModule", null)]
public class InternalRenderGraphContext
{
	[Token(Token = "0x4000AFE")]
	[FieldOffset(Offset = "0x10")]
	internal ScriptableRenderContext renderContext;

	[Token(Token = "0x4000AFF")]
	[FieldOffset(Offset = "0x18")]
	internal CommandBuffer cmd;

	[Token(Token = "0x4000B00")]
	[FieldOffset(Offset = "0x20")]
	internal RenderGraphObjectPool renderGraphPool;

	[Token(Token = "0x4000B01")]
	[FieldOffset(Offset = "0x28")]
	internal RenderGraphDefaultResources defaultResources;

	[Token(Token = "0x4000B02")]
	[FieldOffset(Offset = "0x30")]
	internal RenderGraphPass executingPass;

	[Token(Token = "0x4000B03")]
	[FieldOffset(Offset = "0x38")]
	internal CompilerContextData compilerContext;

	[Token(Token = "0x4000B04")]
	[FieldOffset(Offset = "0x40")]
	internal bool contextlessTesting;

	[Token(Token = "0x6001118")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public InternalRenderGraphContext()
	{
	}
}
