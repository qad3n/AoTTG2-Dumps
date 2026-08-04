// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.TextureResource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200005F")]
[DebuggerDisplay("TextureResource ({desc.name})")]
internal class TextureResource : RenderGraphResource<TextureDesc, RTHandle>
{
	[Token(Token = "0x4000188")]
	[FieldOffset(Offset = "0x0")]
	private static int m_TextureCreationIndex;

	[Token(Token = "0x6000535")]
	[Address(RVA = "0x4B93610", Offset = "0x4B93610", VA = "0x4B93610", Slot = "5")]
	public override string GetName()
	{
		return null;
	}

	[Token(Token = "0x6000536")]
	[Address(RVA = "0x4B93670", Offset = "0x4B93670", VA = "0x4B93670", Slot = "10")]
	public override void CreatePooledGraphicsResource()
	{
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x4B93800", Offset = "0x4B93800", VA = "0x4B93800", Slot = "12")]
	public override void ReleasePooledGraphicsResource(int frameIndex)
	{
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x4B93960", Offset = "0x4B93960", VA = "0x4B93960", Slot = "11")]
	public override void CreateGraphicsResource(string name = "")
	{
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x4B93DB0", Offset = "0x4B93DB0", VA = "0x4B93DB0", Slot = "13")]
	public override void ReleaseGraphicsResource()
	{
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x4B93E00", Offset = "0x4B93E00", VA = "0x4B93E00", Slot = "14")]
	public override void LogCreation(RenderGraphLogger logger)
	{
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x4B93F90", Offset = "0x4B93F90", VA = "0x4B93F90", Slot = "15")]
	public override void LogRelease(RenderGraphLogger logger)
	{
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x4B94100", Offset = "0x4B94100", VA = "0x4B94100")]
	public TextureResource()
	{
	}
}
