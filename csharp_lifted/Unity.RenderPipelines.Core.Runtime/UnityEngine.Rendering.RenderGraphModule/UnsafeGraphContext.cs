// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.UnsafeGraphContext
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x65724E0", Offset = "0x65714E0", VA = "0x65724E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000231")]
	public RenderGraphObjectPool renderGraphPool
	{
		[Token(Token = "0x6001130")]
		[Address(RVA = "0x6572500", Offset = "0x6571500", VA = "0x6572500")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001131")]
	[Address(RVA = "0x6572520", Offset = "0x6571520", VA = "0x6572520", Slot = "4")]
	public void FromInternalContext(InternalRenderGraphContext context)
	{
	}

	[Token(Token = "0x6001132")]
	[Address(RVA = "0x6572600", Offset = "0x6571600", VA = "0x6572600")]
	public TextureUVOrigin GetTextureUVOrigin(in TextureHandle textureHandle)
	{
		return default(TextureUVOrigin);
	}

	[Token(Token = "0x6001133")]
	[Address(RVA = "0x6572650", Offset = "0x6571650", VA = "0x6572650")]
	public UnsafeGraphContext()
	{
	}

	[Token(Token = "0x6001135")]
	[Address(RVA = "0x65726E0", Offset = "0x65716E0", VA = "0x65726E0", Slot = "5")]
	private TextureUVOrigin UnityEngine_002ERendering_002ERenderGraphModule_002EIDerivedRendergraphContext_002EGetTextureUVOrigin(in TextureHandle textureHandle)
	{
		return default(TextureUVOrigin);
	}
}
