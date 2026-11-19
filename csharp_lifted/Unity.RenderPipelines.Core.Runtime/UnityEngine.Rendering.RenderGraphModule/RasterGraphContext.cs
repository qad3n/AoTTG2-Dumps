// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RasterGraphContext
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6572010", Offset = "0x6571010", VA = "0x6572010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022D")]
	public RenderGraphObjectPool renderGraphPool
	{
		[Token(Token = "0x6001123")]
		[Address(RVA = "0x6572030", Offset = "0x6571030", VA = "0x6572030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001124")]
	[Address(RVA = "0x6572050", Offset = "0x6571050", VA = "0x6572050", Slot = "4")]
	public void FromInternalContext(InternalRenderGraphContext context)
	{
	}

	[Token(Token = "0x6001125")]
	[Address(RVA = "0x6572120", Offset = "0x6571120", VA = "0x6572120")]
	public readonly TextureUVOrigin GetTextureUVOrigin(in TextureHandle textureHandle)
	{
		return default(TextureUVOrigin);
	}

	[Token(Token = "0x6001127")]
	[Address(RVA = "0x65721F0", Offset = "0x65711F0", VA = "0x65721F0", Slot = "5")]
	private TextureUVOrigin UnityEngine_002ERendering_002ERenderGraphModule_002EIDerivedRendergraphContext_002EGetTextureUVOrigin(in TextureHandle textureHandle)
	{
		return default(TextureUVOrigin);
	}
}
