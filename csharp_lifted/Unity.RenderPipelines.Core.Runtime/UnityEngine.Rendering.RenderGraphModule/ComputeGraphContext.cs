// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.ComputeGraphContext
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6572290", Offset = "0x6571290", VA = "0x6572290")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022F")]
	public RenderGraphObjectPool renderGraphPool
	{
		[Token(Token = "0x6001129")]
		[Address(RVA = "0x65722B0", Offset = "0x65712B0", VA = "0x65722B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600112A")]
	[Address(RVA = "0x65722D0", Offset = "0x65712D0", VA = "0x65722D0", Slot = "4")]
	public void FromInternalContext(InternalRenderGraphContext context)
	{
	}

	[Token(Token = "0x600112B")]
	[Address(RVA = "0x65723B0", Offset = "0x65713B0", VA = "0x65723B0")]
	public TextureUVOrigin GetTextureUVOrigin(in TextureHandle textureHandle)
	{
		return default(TextureUVOrigin);
	}

	[Token(Token = "0x600112C")]
	[Address(RVA = "0x6572400", Offset = "0x6571400", VA = "0x6572400")]
	public ComputeGraphContext()
	{
	}

	[Token(Token = "0x600112E")]
	[Address(RVA = "0x6572490", Offset = "0x6571490", VA = "0x6572490", Slot = "5")]
	private TextureUVOrigin UnityEngine_002ERendering_002ERenderGraphModule_002EIDerivedRendergraphContext_002EGetTextureUVOrigin(in TextureHandle textureHandle)
	{
		return default(TextureUVOrigin);
	}
}
