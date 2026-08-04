// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.BufferResource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200004A")]
[DebuggerDisplay("BufferResource ({desc.name})")]
internal class BufferResource : RenderGraphResource<BufferDesc, GraphicsBuffer>
{
	[Token(Token = "0x6000490")]
	[Address(RVA = "0x4B8DB60", Offset = "0x4B8DB60", VA = "0x4B8DB60", Slot = "5")]
	public override string GetName()
	{
		return null;
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x4B8DBA0", Offset = "0x4B8DBA0", VA = "0x4B8DBA0", Slot = "10")]
	public override void CreatePooledGraphicsResource()
	{
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x4B8DD30", Offset = "0x4B8DD30", VA = "0x4B8DD30", Slot = "12")]
	public override void ReleasePooledGraphicsResource(int frameIndex)
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x4B8DE80", Offset = "0x4B8DE80", VA = "0x4B8DE80", Slot = "11")]
	public override void CreateGraphicsResource(string name = "")
	{
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x4B8DFE0", Offset = "0x4B8DFE0", VA = "0x4B8DFE0", Slot = "13")]
	public override void ReleaseGraphicsResource()
	{
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x4B8E030", Offset = "0x4B8E030", VA = "0x4B8E030", Slot = "14")]
	public override void LogCreation(RenderGraphLogger logger)
	{
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x4B8E1A0", Offset = "0x4B8E1A0", VA = "0x4B8E1A0", Slot = "15")]
	public override void LogRelease(RenderGraphLogger logger)
	{
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x4B8E310", Offset = "0x4B8E310", VA = "0x4B8E310")]
	public BufferResource()
	{
	}
}
