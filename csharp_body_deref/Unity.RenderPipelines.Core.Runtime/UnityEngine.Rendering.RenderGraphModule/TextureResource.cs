// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.TextureResource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x20002A2")]
[DebuggerDisplay("TextureResource ({desc.name})")]
internal class TextureResource : RenderGraphResource<TextureDesc, RTHandle>
{
	[Token(Token = "0x4000BD6")]
	[FieldOffset(Offset = "0x0")]
	private static int m_TextureCreationIndex;

	[Token(Token = "0x4000BD7")]
	[FieldOffset(Offset = "0xC0")]
	internal TextureUVOriginSelection textureUVOrigin;

	[Token(Token = "0x60012E4")]
	[Address(RVA = "0x6586700", Offset = "0x6585700", VA = "0x6586700", Slot = "5")]
	public override string GetName()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E5")]
	[Address(RVA = "0x6586760", Offset = "0x6585760", VA = "0x6586760", Slot = "18")]
	public override int GetDescHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60012E6")]
	[Address(RVA = "0x6586770", Offset = "0x6585770", VA = "0x6586770", Slot = "11")]
	public override void CreateGraphicsResource()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E7")]
	[Address(RVA = "0x6586BD0", Offset = "0x6585BD0", VA = "0x6586BD0", Slot = "12")]
	public override void UpdateGraphicsResource()
	{
	}

	[Token(Token = "0x60012E8")]
	[Address(RVA = "0x6586C10", Offset = "0x6585C10", VA = "0x6586C10", Slot = "14")]
	public override void ReleaseGraphicsResource()
	{
	}

	[Token(Token = "0x60012E9")]
	[Address(RVA = "0x6586C50", Offset = "0x6585C50", VA = "0x6586C50", Slot = "15")]
	public override void LogCreation(RenderGraphLogger logger)
	{
	}

	[Token(Token = "0x60012EA")]
	[Address(RVA = "0x6586D80", Offset = "0x6585D80", VA = "0x6586D80", Slot = "16")]
	public override void LogRelease(RenderGraphLogger logger)
	{
	}

	[Token(Token = "0x60012EB")]
	[Address(RVA = "0x6586E80", Offset = "0x6585E80", VA = "0x6586E80")]
	public TextureResource()
	{
	}
}
