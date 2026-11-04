// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RenderGraphParameters
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x2000272")]
[MovedFrom(true, "UnityEngine.Experimental.Rendering.RenderGraphModule", "UnityEngine.Rendering.RenderGraphModule", null)]
public struct RenderGraphParameters
{
	[Token(Token = "0x4000B0F")]
	[FieldOffset(Offset = "0x0")]
	[Obsolete("Not used anymore. The debugging tools use the name of the object identified by executionId. #from(6000.3)")]
	public string executionName;

	[Token(Token = "0x4000B10")]
	[FieldOffset(Offset = "0x8")]
	public EntityId executionId;

	[Token(Token = "0x4000B11")]
	[FieldOffset(Offset = "0xC")]
	public bool generateDebugData;

	[Token(Token = "0x4000B12")]
	[FieldOffset(Offset = "0x10")]
	public int currentFrameIndex;

	[Token(Token = "0x4000B13")]
	[FieldOffset(Offset = "0x14")]
	public bool rendererListCulling;

	[Token(Token = "0x4000B14")]
	[FieldOffset(Offset = "0x18")]
	public ScriptableRenderContext scriptableRenderContext;

	[Token(Token = "0x4000B15")]
	[FieldOffset(Offset = "0x20")]
	public CommandBuffer commandBuffer;

	[Token(Token = "0x4000B16")]
	[FieldOffset(Offset = "0x28")]
	internal bool invalidContextForTesting;

	[Token(Token = "0x4000B17")]
	[FieldOffset(Offset = "0x2C")]
	public RenderTextureUVOriginStrategy renderTextureUVOriginStrategy;
}
