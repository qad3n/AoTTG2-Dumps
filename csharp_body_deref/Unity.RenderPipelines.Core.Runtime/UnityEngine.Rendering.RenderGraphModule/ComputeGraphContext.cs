// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.ComputeGraphContext
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x2000270")]
[MovedFrom(true, "UnityEngine.Experimental.Rendering.RenderGraphModule", "UnityEngine.Rendering.RenderGraphModule", null)]
public class ComputeGraphContext : IDerivedRendergraphContext
{
	[Token(Token = "0x4000B09")]
	[FieldOffset(Offset = "0x10")]
	private InternalRenderGraphContext wrappedContext;

	[Token(Token = "0x4000B0A")]
	[FieldOffset(Offset = "0x18")]
	public ComputeCommandBuffer cmd;

	[Token(Token = "0x4000B0B")]
	[FieldOffset(Offset = "0x0")]
	internal static ComputeCommandBuffer computecmd;

	[Token(Token = "0x1700022E")]
	public RenderGraphDefaultResources defaultResources
	{
		[Token(Token = "0x6001128")]
		[Address(RVA = "0x1A4D250", Offset = "0x1A4B850", VA = "0x181A4D250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022F")]
	public RenderGraphObjectPool renderGraphPool
	{
		[Token(Token = "0x6001129")]
		[Address(RVA = "0x19BCDB0", Offset = "0x19BB3B0", VA = "0x1819BCDB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600112A")]
	[Address(RVA = "0x2B68D10", Offset = "0x2B67310", VA = "0x182B68D10", Slot = "4")]
	public void FromInternalContext(InternalRenderGraphContext context)
	{
	}

	[Token(Token = "0x600112B")]
	[Address(RVA = "0x2B68DF0", Offset = "0x2B673F0", VA = "0x182B68DF0")]
	public TextureUVOrigin GetTextureUVOrigin(in TextureHandle textureHandle)
	{
		return default(TextureUVOrigin);
	}

	[Token(Token = "0x600112C")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ComputeGraphContext()
	{
	}

	[Token(Token = "0x600112E")]
	[Address(RVA = "0x2B68DF0", Offset = "0x2B673F0", VA = "0x182B68DF0", Slot = "5")]
	private TextureUVOrigin UnityEngine_002ERendering_002ERenderGraphModule_002EIDerivedRendergraphContext_002EGetTextureUVOrigin(in TextureHandle textureHandle)
	{
		return default(TextureUVOrigin);
	}
}
