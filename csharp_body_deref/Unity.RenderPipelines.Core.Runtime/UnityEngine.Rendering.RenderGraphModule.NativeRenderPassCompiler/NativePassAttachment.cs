// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.NativePassAttachment
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler;

[Token(Token = "0x20002C1")]
[DebuggerDisplay("Res({handle.index}) : {loadAction} : {storeAction} : {memoryless}")]
internal readonly struct NativePassAttachment
{
	[Token(Token = "0x4000CB4")]
	[FieldOffset(Offset = "0x0")]
	public readonly ResourceHandle handle;

	[Token(Token = "0x4000CB5")]
	[FieldOffset(Offset = "0xC")]
	public readonly RenderBufferLoadAction loadAction;

	[Token(Token = "0x4000CB6")]
	[FieldOffset(Offset = "0x10")]
	public readonly RenderBufferStoreAction storeAction;

	[Token(Token = "0x4000CB7")]
	[FieldOffset(Offset = "0x14")]
	public readonly bool memoryless;

	[Token(Token = "0x4000CB8")]
	[FieldOffset(Offset = "0x18")]
	public readonly int mipLevel;

	[Token(Token = "0x4000CB9")]
	[FieldOffset(Offset = "0x1C")]
	public readonly int depthSlice;

	[Token(Token = "0x60013AD")]
	[Address(RVA = "0x2BB4CC0", Offset = "0x2BB32C0", VA = "0x182BB4CC0")]
	public NativePassAttachment(in ResourceHandle handle, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, bool memoryless, int mipLevel, int depthSlice)
	{
	}
}
