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
	[Address(RVA = "0x4862450", Offset = "0x4862450", VA = "0x4862450")]
	public RenderGraphProfilingScope(RenderGraph renderGraph, ProfilingSampler sampler)
	{
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x48624D0", Offset = "0x48624D0", VA = "0x48624D0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x4862530", Offset = "0x4862530", VA = "0x4862530")]
	private void Dispose(bool disposing)
	{
	}
}
