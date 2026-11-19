// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.CapturePass
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x664EAC0", Offset = "0x664DAC0", VA = "0x664EAC0")]
		public UnsafePassData()
		{
		}
	}

	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x664E560", Offset = "0x664D560", VA = "0x664E560")]
	public CapturePass(RenderPassEvent evt)
	{
	}

	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x664E5E0", Offset = "0x664D5E0", VA = "0x664E5E0", Slot = "11")]
	public override void RecordRenderGraph(RenderGraph renderGraph, ContextContainer frameData)
	{
	}
}
