// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RasterGraphContext
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x200026F")]
[MovedFrom(true, "UnityEngine.Experimental.Rendering.RenderGraphModule", "UnityEngine.Rendering.RenderGraphModule", null)]
public struct RasterGraphContext : IDerivedRendergraphContext
{
	[Token(Token = "0x4000B06")]
	[FieldOffset(Offset = "0x0")]
	private InternalRenderGraphContext wrappedContext;

	[Token(Token = "0x4000B07")]
	[FieldOffset(Offset = "0x8")]
	public RasterCommandBuffer cmd;

	[Token(Token = "0x4000B08")]
	[FieldOffset(Offset = "0x0")]
	internal static RasterCommandBuffer rastercmd;

	[Token(Token = "0x1700022C")]
	public RenderGraphDefaultResources defaultResources
	{
		[Token(Token = "0x6001122")]
		[Address(RVA = "0x26DA040", Offset = "0x26D8640", VA = "0x1826DA040")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022D")]
	public RenderGraphObjectPool renderGraphPool
	{
		[Token(Token = "0x6001123")]
		[Address(RVA = "0x26DA300", Offset = "0x26D8900", VA = "0x1826DA300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001124")]
	[Address(RVA = "0x2B6B490", Offset = "0x2B69A90", VA = "0x182B6B490", Slot = "4")]
	public void FromInternalContext(InternalRenderGraphContext context)
	{
	}

	[Token(Token = "0x6001125")]
	[Address(RVA = "0x2B6B570", Offset = "0x2B69B70", VA = "0x182B6B570")]
	public readonly TextureUVOrigin GetTextureUVOrigin(in TextureHandle textureHandle)
	{
		return default(TextureUVOrigin);
	}

	[Token(Token = "0x6001127")]
	[Address(RVA = "0x2B6B5D0", Offset = "0x2B69BD0", VA = "0x182B6B5D0", Slot = "5")]
	private TextureUVOrigin UnityEngine_002ERendering_002ERenderGraphModule_002EIDerivedRendergraphContext_002EGetTextureUVOrigin(in TextureHandle textureHandle)
	{
		return default(TextureUVOrigin);
	}
}
