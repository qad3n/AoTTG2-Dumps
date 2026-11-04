// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.CapturePass
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200011D")]
internal class CapturePass : ScriptableRenderPass
{
	[Token(Token = "0x200011E")]
	private class UnsafePassData
	{
		[Token(Token = "0x4000639")]
		[FieldOffset(Offset = "0x10")]
		internal TextureHandle source;

		[Token(Token = "0x400063A")]
		[FieldOffset(Offset = "0x20")]
		public IEnumerator<Action<RenderTargetIdentifier, CommandBuffer>> captureActions;

		[Token(Token = "0x60006FC")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public UnsafePassData()
		{
		}
	}

	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x2C55360", Offset = "0x2C53960", VA = "0x182C55360")]
	public CapturePass(RenderPassEvent evt)
	{
	}

	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x2C54F10", Offset = "0x2C53510", VA = "0x182C54F10", Slot = "11")]
	public override void RecordRenderGraph(RenderGraph renderGraph, ContextContainer frameData)
	{
	}
}
