// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.BufferResource
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x200028A")]
[DebuggerDisplay("BufferResource ({desc.name})")]
internal class BufferResource : RenderGraphResource<BufferDesc, GraphicsBuffer>
{
	[Token(Token = "0x600122B")]
	[Address(RVA = "0x2B88F70", Offset = "0x2B87570", VA = "0x182B88F70", Slot = "5")]
	public override string GetName()
	{
		return null;
	}

	[Token(Token = "0x600122C")]
	[Address(RVA = "0x2B88F30", Offset = "0x2B87530", VA = "0x182B88F30", Slot = "18")]
	public override int GetDescHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600122D")]
	[Address(RVA = "0x2B88E90", Offset = "0x2B87490", VA = "0x182B88E90", Slot = "11")]
	public override void CreateGraphicsResource()
	{
	}

	[Token(Token = "0x600122E")]
	[Address(RVA = "0x2B89110", Offset = "0x2B87710", VA = "0x182B89110", Slot = "12")]
	public override void UpdateGraphicsResource()
	{
	}

	[Token(Token = "0x600122F")]
	[Address(RVA = "0x2B890C0", Offset = "0x2B876C0", VA = "0x182B890C0", Slot = "14")]
	public override void ReleaseGraphicsResource()
	{
	}

	[Token(Token = "0x6001230")]
	[Address(RVA = "0x2B88FC0", Offset = "0x2B875C0", VA = "0x182B88FC0", Slot = "15")]
	public override void LogCreation(RenderGraphLogger logger)
	{
	}

	[Token(Token = "0x6001231")]
	[Address(RVA = "0x2B89040", Offset = "0x2B87640", VA = "0x182B89040", Slot = "16")]
	public override void LogRelease(RenderGraphLogger logger)
	{
	}

	[Token(Token = "0x6001232")]
	[Address(RVA = "0x2B89160", Offset = "0x2B87760", VA = "0x182B89160")]
	public BufferResource()
	{
	}
}
