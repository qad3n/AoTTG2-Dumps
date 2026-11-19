// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.InvokeOnRenderObjectCallbackPass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200012A")]
internal class InvokeOnRenderObjectCallbackPass : ScriptableRenderPass
{
	[Token(Token = "0x200012B")]
	private class PassData
	{
		[Token(Token = "0x4000661")]
		[FieldOffset(Offset = "0x10")]
		internal TextureHandle colorTarget;

		[Token(Token = "0x4000662")]
		[FieldOffset(Offset = "0x20")]
		internal TextureHandle depthTarget;

		[Token(Token = "0x6000724")]
		[Address(RVA = "0x6652E80", Offset = "0x6651E80", VA = "0x6652E80")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x6000722")]
	[Address(RVA = "0x6652940", Offset = "0x6651940", VA = "0x6652940")]
	public InvokeOnRenderObjectCallbackPass(RenderPassEvent evt)
	{
	}

	[Token(Token = "0x6000723")]
	[Address(RVA = "0x66529C0", Offset = "0x66519C0", VA = "0x66529C0")]
	internal void Render(RenderGraph renderGraph, TextureHandle colorTarget, TextureHandle depthTarget)
	{
	}
}
