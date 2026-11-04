// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.UnsafeGraphContext
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x2000271")]
[MovedFrom(true, "UnityEngine.Experimental.Rendering.RenderGraphModule", "UnityEngine.Rendering.RenderGraphModule", null)]
public class UnsafeGraphContext : IDerivedRendergraphContext
{
	[Token(Token = "0x4000B0C")]
	[FieldOffset(Offset = "0x10")]
	private InternalRenderGraphContext wrappedContext;

	[Token(Token = "0x4000B0D")]
	[FieldOffset(Offset = "0x18")]
	public UnsafeCommandBuffer cmd;

	[Token(Token = "0x4000B0E")]
	[FieldOffset(Offset = "0x0")]
	internal static UnsafeCommandBuffer unsCmd;

	[Token(Token = "0x17000230")]
	public RenderGraphDefaultResources defaultResources
	{
		[Token(Token = "0x600112F")]
		[Address(RVA = "0x1A4D250", Offset = "0x1A4B850", VA = "0x181A4D250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000231")]
	public RenderGraphObjectPool renderGraphPool
	{
		[Token(Token = "0x6001130")]
		[Address(RVA = "0x19BCDB0", Offset = "0x19BB3B0", VA = "0x1819BCDB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001131")]
	[Address(RVA = "0x2B819A0", Offset = "0x2B7FFA0", VA = "0x182B819A0", Slot = "4")]
	public void FromInternalContext(InternalRenderGraphContext context)
	{
	}

	[Token(Token = "0x6001132")]
	[Address(RVA = "0x2B68DF0", Offset = "0x2B673F0", VA = "0x182B68DF0")]
	public TextureUVOrigin GetTextureUVOrigin(in TextureHandle textureHandle)
	{
		return default(TextureUVOrigin);
	}

	[Token(Token = "0x6001133")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public UnsafeGraphContext()
	{
	}

	[Token(Token = "0x6001135")]
	[Address(RVA = "0x2B68DF0", Offset = "0x2B673F0", VA = "0x182B68DF0", Slot = "5")]
	private TextureUVOrigin UnityEngine_002ERendering_002ERenderGraphModule_002EIDerivedRendergraphContext_002EGetTextureUVOrigin(in TextureHandle textureHandle)
	{
		return default(TextureUVOrigin);
	}
}
