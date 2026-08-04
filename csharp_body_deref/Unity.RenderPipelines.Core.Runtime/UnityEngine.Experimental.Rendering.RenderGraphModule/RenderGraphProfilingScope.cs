// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphProfilingScope
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000038")]
public struct RenderGraphProfilingScope : IDisposable
{
	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x0")]
	private bool m_Disposed;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x8")]
	private ProfilingSampler m_Sampler;

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x10")]
	private RenderGraph m_RenderGraph;

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x4B87540", Offset = "0x4B87540", VA = "0x4B87540")]
	public RenderGraphProfilingScope(RenderGraph renderGraph, ProfilingSampler sampler)
	{
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x4B875C0", Offset = "0x4B875C0", VA = "0x4B875C0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x4B87620", Offset = "0x4B87620", VA = "0x4B87620")]
	private void Dispose(bool disposing)
	{
	}
}
