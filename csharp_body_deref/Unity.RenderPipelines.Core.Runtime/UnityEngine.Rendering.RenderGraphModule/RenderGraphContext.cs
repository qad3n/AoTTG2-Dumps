// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RenderGraphContext
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x200026E")]
[MovedFrom(true, "UnityEngine.Experimental.Rendering.RenderGraphModule", "UnityEngine.Rendering.RenderGraphModule", null)]
[Obsolete("RenderGraphContext is deprecated, use RasterGraphContext/ComputeGraphContext/UnsafeGraphContext instead.")]
public struct RenderGraphContext : IDerivedRendergraphContext
{
	[Token(Token = "0x4000B05")]
	[FieldOffset(Offset = "0x0")]
	private InternalRenderGraphContext wrappedContext;

	[Token(Token = "0x17000228")]
	public ScriptableRenderContext renderContext
	{
		[Token(Token = "0x600111D")]
		[Address(RVA = "0x194CC80", Offset = "0x194B280", VA = "0x18194CC80")]
		get
		{
			return default(ScriptableRenderContext);
		}
	}

	[Token(Token = "0x17000229")]
	public CommandBuffer cmd
	{
		[Token(Token = "0x600111E")]
		[Address(RVA = "0x26DA2B0", Offset = "0x26D88B0", VA = "0x1826DA2B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022A")]
	public RenderGraphObjectPool renderGraphPool
	{
		[Token(Token = "0x600111F")]
		[Address(RVA = "0x26DA300", Offset = "0x26D8900", VA = "0x1826DA300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022B")]
	public RenderGraphDefaultResources defaultResources
	{
		[Token(Token = "0x6001120")]
		[Address(RVA = "0x26DA040", Offset = "0x26D8640", VA = "0x1826DA040")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600111B")]
	[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150", Slot = "4")]
	public void FromInternalContext(InternalRenderGraphContext context)
	{
	}

	[Token(Token = "0x600111C")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
	public readonly TextureUVOrigin GetTextureUVOrigin(in TextureHandle textureHandle)
	{
		return default(TextureUVOrigin);
	}

	[Token(Token = "0x6001121")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "5")]
	private TextureUVOrigin UnityEngine_002ERendering_002ERenderGraphModule_002EIDerivedRendergraphContext_002EGetTextureUVOrigin(in TextureHandle textureHandle)
	{
		return default(TextureUVOrigin);
	}
}
