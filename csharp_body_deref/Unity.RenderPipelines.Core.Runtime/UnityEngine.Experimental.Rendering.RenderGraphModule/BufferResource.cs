using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200004A")]
[DebuggerDisplay("BufferResource ({desc.name})")]
internal class BufferResource : RenderGraphResource<BufferDesc, GraphicsBuffer>
{
	[Token(Token = "0x6000490")]
	[Address(RVA = "0x4868A70", Offset = "0x4868A70", VA = "0x4868A70", Slot = "5")]
	public override string GetName()
	{
		return null;
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x4868AB0", Offset = "0x4868AB0", VA = "0x4868AB0", Slot = "10")]
	public override void CreatePooledGraphicsResource()
	{
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x4868C40", Offset = "0x4868C40", VA = "0x4868C40", Slot = "12")]
	public override void ReleasePooledGraphicsResource(int frameIndex)
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x4868D90", Offset = "0x4868D90", VA = "0x4868D90", Slot = "11")]
	public override void CreateGraphicsResource(string name = "")
	{
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x4868EF0", Offset = "0x4868EF0", VA = "0x4868EF0", Slot = "13")]
	public override void ReleaseGraphicsResource()
	{
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x4868F40", Offset = "0x4868F40", VA = "0x4868F40", Slot = "14")]
	public override void LogCreation(RenderGraphLogger logger)
	{
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x48690B0", Offset = "0x48690B0", VA = "0x48690B0", Slot = "15")]
	public override void LogRelease(RenderGraphLogger logger)
	{
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x4869220", Offset = "0x4869220", VA = "0x4869220")]
	public BufferResource()
	{
	}
}
