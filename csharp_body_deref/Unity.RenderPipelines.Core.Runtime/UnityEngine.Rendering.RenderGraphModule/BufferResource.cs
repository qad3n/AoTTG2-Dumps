// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.BufferResource
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x657DE80", Offset = "0x657CE80", VA = "0x657DE80", Slot = "5")]
	public override string GetName()
	{
		return null;
	}

	[Token(Token = "0x600122C")]
	[Address(RVA = "0x657DEC0", Offset = "0x657CEC0", VA = "0x657DEC0", Slot = "18")]
	public override int GetDescHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600122D")]
	[Address(RVA = "0x657DF00", Offset = "0x657CF00", VA = "0x657DF00", Slot = "11")]
	public override void CreateGraphicsResource()
	{
	}

	[Token(Token = "0x600122E")]
	[Address(RVA = "0x657DFA0", Offset = "0x657CFA0", VA = "0x657DFA0", Slot = "12")]
	public override void UpdateGraphicsResource()
	{
	}

	[Token(Token = "0x600122F")]
	[Address(RVA = "0x657DFD0", Offset = "0x657CFD0", VA = "0x657DFD0", Slot = "14")]
	public override void ReleaseGraphicsResource()
	{
	}

	[Token(Token = "0x6001230")]
	[Address(RVA = "0x657E010", Offset = "0x657D010", VA = "0x657E010", Slot = "15")]
	public override void LogCreation(RenderGraphLogger logger)
	{
	}

	[Token(Token = "0x6001231")]
	[Address(RVA = "0x657E110", Offset = "0x657D110", VA = "0x657E110", Slot = "16")]
	public override void LogRelease(RenderGraphLogger logger)
	{
	}

	[Token(Token = "0x6001232")]
	[Address(RVA = "0x657E210", Offset = "0x657D210", VA = "0x657E210")]
	public BufferResource()
	{
	}
}
