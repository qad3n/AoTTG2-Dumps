using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RendererUtils;

[Token(Token = "0x2000322")]
public struct RendererListDesc
{
	[Token(Token = "0x40009F7")]
	[FieldOffset(Offset = "0x0")]
	public SortingCriteria sortingCriteria;

	[Token(Token = "0x40009F8")]
	[FieldOffset(Offset = "0x4")]
	public PerObjectData rendererConfiguration;

	[Token(Token = "0x40009F9")]
	[FieldOffset(Offset = "0x8")]
	public RenderQueueRange renderQueueRange;

	[Token(Token = "0x40009FA")]
	[FieldOffset(Offset = "0x10")]
	public RenderStateBlock? stateBlock;

	[Token(Token = "0x40009FB")]
	[FieldOffset(Offset = "0x80")]
	public Shader overrideShader;

	[Token(Token = "0x40009FC")]
	[FieldOffset(Offset = "0x88")]
	public Material overrideMaterial;

	[Token(Token = "0x40009FD")]
	[FieldOffset(Offset = "0x90")]
	public bool excludeObjectMotionVectors;

	[Token(Token = "0x40009FE")]
	[FieldOffset(Offset = "0x94")]
	public int layerMask;

	[Token(Token = "0x40009FF")]
	[FieldOffset(Offset = "0x98")]
	public uint renderingLayerMask;

	[Token(Token = "0x4000A00")]
	[FieldOffset(Offset = "0x9C")]
	public int overrideMaterialPassIndex;

	[Token(Token = "0x4000A01")]
	[FieldOffset(Offset = "0xA0")]
	public int overrideShaderPassIndex;

	[Token(Token = "0x4000A06")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ShaderTagId s_EmptyName;

	[Token(Token = "0x170002BC")]
	internal readonly CullingResults cullingResult
	{
		[Token(Token = "0x6001131")]
		[Address(RVA = "0x4B0EF80", Offset = "0x4B0EF80", VA = "0x4B0EF80")]
		[CompilerGenerated]
		get
		{
			return default(CullingResults);
		}
	}

	[Token(Token = "0x170002BD")]
	internal readonly Camera camera
	{
		[Token(Token = "0x6001132")]
		[Address(RVA = "0x4B0EF90", Offset = "0x4B0EF90", VA = "0x4B0EF90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002BE")]
	internal readonly ShaderTagId passName
	{
		[Token(Token = "0x6001133")]
		[Address(RVA = "0x4B0EFA0", Offset = "0x4B0EFA0", VA = "0x4B0EFA0")]
		[CompilerGenerated]
		get
		{
			return default(ShaderTagId);
		}
	}

	[Token(Token = "0x170002BF")]
	internal readonly ShaderTagId[] passNames
	{
		[Token(Token = "0x6001134")]
		[Address(RVA = "0x4B0EFB0", Offset = "0x4B0EFB0", VA = "0x4B0EFB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001135")]
	[Address(RVA = "0x4B0EFC0", Offset = "0x4B0EFC0", VA = "0x4B0EFC0")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x6001136")]
	[Address(RVA = "0x4B0F0F0", Offset = "0x4B0F0F0", VA = "0x4B0F0F0")]
	public static RendererListParams ConvertToParameters(in RendererListDesc desc)
	{
		return default(RendererListParams);
	}
}
