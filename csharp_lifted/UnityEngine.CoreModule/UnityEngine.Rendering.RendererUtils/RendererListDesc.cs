// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RendererUtils.RendererListDesc
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RendererUtils;

[Token(Token = "0x20003DE")]
public struct RendererListDesc
{
	[Token(Token = "0x4000CB2")]
	[FieldOffset(Offset = "0x0")]
	public SortingCriteria sortingCriteria;

	[Token(Token = "0x4000CB3")]
	[FieldOffset(Offset = "0x4")]
	public PerObjectData rendererConfiguration;

	[Token(Token = "0x4000CB4")]
	[FieldOffset(Offset = "0x8")]
	public RenderQueueRange renderQueueRange;

	[Token(Token = "0x4000CB5")]
	[FieldOffset(Offset = "0x10")]
	public RenderStateBlock? stateBlock;

	[Token(Token = "0x4000CB6")]
	[FieldOffset(Offset = "0x80")]
	public Shader overrideShader;

	[Token(Token = "0x4000CB7")]
	[FieldOffset(Offset = "0x88")]
	public Material overrideMaterial;

	[Token(Token = "0x4000CB8")]
	[FieldOffset(Offset = "0x90")]
	public bool excludeObjectMotionVectors;

	[Token(Token = "0x4000CB9")]
	[FieldOffset(Offset = "0x94")]
	public int layerMask;

	[Token(Token = "0x4000CBA")]
	[FieldOffset(Offset = "0x98")]
	public uint renderingLayerMask;

	[Token(Token = "0x4000CBC")]
	[FieldOffset(Offset = "0xA0")]
	public int overrideMaterialPassIndex;

	[Token(Token = "0x4000CBD")]
	[FieldOffset(Offset = "0xA4")]
	public int overrideShaderPassIndex;

	[Token(Token = "0x4000CC2")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ShaderTagId s_EmptyName;

	[Token(Token = "0x170003CF")]
	public readonly uint batchLayerMask
	{
		[Token(Token = "0x60017B8")]
		[Address(RVA = "0x6969BE0", Offset = "0x6968BE0", VA = "0x6969BE0")]
		[CompilerGenerated]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x170003D0")]
	internal readonly CullingResults cullingResult
	{
		[Token(Token = "0x60017B9")]
		[Address(RVA = "0x6969BF0", Offset = "0x6968BF0", VA = "0x6969BF0")]
		[CompilerGenerated]
		get
		{
			return default(CullingResults);
		}
	}

	[Token(Token = "0x170003D1")]
	internal readonly Camera camera
	{
		[Token(Token = "0x60017BA")]
		[Address(RVA = "0x6969C00", Offset = "0x6968C00", VA = "0x6969C00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D2")]
	internal readonly ShaderTagId passName
	{
		[Token(Token = "0x60017BB")]
		[Address(RVA = "0x6969C10", Offset = "0x6968C10", VA = "0x6969C10")]
		[CompilerGenerated]
		get
		{
			return default(ShaderTagId);
		}
	}

	[Token(Token = "0x170003D3")]
	internal readonly ShaderTagId[] passNames
	{
		[Token(Token = "0x60017BC")]
		[Address(RVA = "0x6969C20", Offset = "0x6968C20", VA = "0x6969C20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60017BD")]
	[Address(RVA = "0x6969C30", Offset = "0x6968C30", VA = "0x6969C30")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x60017BE")]
	[Address(RVA = "0x6969D60", Offset = "0x6968D60", VA = "0x6969D60")]
	public static RendererListParams ConvertToParameters(in RendererListDesc desc)
	{
		return default(RendererListParams);
	}
}
