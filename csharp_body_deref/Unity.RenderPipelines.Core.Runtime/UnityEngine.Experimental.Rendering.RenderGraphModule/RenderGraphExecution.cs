using System;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000027")]
public struct RenderGraphExecution : IDisposable
{
	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x0")]
	private RenderGraph renderGraph;

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x4855E70", Offset = "0x4855E70", VA = "0x4855E70")]
	internal RenderGraphExecution(RenderGraph renderGraph)
	{
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x4855E80", Offset = "0x4855E80", VA = "0x4855E80", Slot = "4")]
	public void Dispose()
	{
	}
}
