// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.TextureResource
// Update status: NEW in this game update
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
	[Address(RVA = "0x2BA7BF0", Offset = "0x2BA61F0", VA = "0x182BA7BF0", Slot = "5")]
	public override string GetName()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E5")]
	[Address(RVA = "0x2BA7BE0", Offset = "0x2BA61E0", VA = "0x182BA7BE0", Slot = "18")]
	public override int GetDescHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60012E6")]
	[Address(RVA = "0x2BA7870", Offset = "0x2BA5E70", VA = "0x182BA7870", Slot = "11")]
	public override void CreateGraphicsResource()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E7")]
	[Address(RVA = "0x2BA7DE0", Offset = "0x2BA63E0", VA = "0x182BA7DE0", Slot = "12")]
	public override void UpdateGraphicsResource()
	{
	}

	[Token(Token = "0x60012E8")]
	[Address(RVA = "0x2BA7D90", Offset = "0x2BA6390", VA = "0x182BA7D90", Slot = "14")]
	public override void ReleaseGraphicsResource()
	{
	}

	[Token(Token = "0x60012E9")]
	[Address(RVA = "0x2BA7C60", Offset = "0x2BA6260", VA = "0x182BA7C60", Slot = "15")]
	public override void LogCreation(RenderGraphLogger logger)
	{
	}

	[Token(Token = "0x60012EA")]
	[Address(RVA = "0x2BA7D10", Offset = "0x2BA6310", VA = "0x182BA7D10", Slot = "16")]
	public override void LogRelease(RenderGraphLogger logger)
	{
	}

	[Token(Token = "0x60012EB")]
	[Address(RVA = "0x2BA7E30", Offset = "0x2BA6430", VA = "0x182BA7E30")]
	public TextureResource()
	{
	}
}
