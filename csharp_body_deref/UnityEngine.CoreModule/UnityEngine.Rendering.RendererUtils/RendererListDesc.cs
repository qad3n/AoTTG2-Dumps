// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RendererUtils.RendererListDesc
// Update status: CHANGED in this game update
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
	[Token(Token = "0x4000CB4")]
	[FieldOffset(Offset = "0x0")]
	public SortingCriteria sortingCriteria;

	[Token(Token = "0x4000CB5")]
	[FieldOffset(Offset = "0x4")]
	public PerObjectData rendererConfiguration;

	[Token(Token = "0x4000CB6")]
	[FieldOffset(Offset = "0x8")]
	public RenderQueueRange renderQueueRange;

	[Token(Token = "0x4000CB7")]
	[FieldOffset(Offset = "0x10")]
	public RenderStateBlock? stateBlock;

	[Token(Token = "0x4000CB8")]
	[FieldOffset(Offset = "0x80")]
	public Shader overrideShader;

	[Token(Token = "0x4000CB9")]
	[FieldOffset(Offset = "0x88")]
	public Material overrideMaterial;

	[Token(Token = "0x4000CBA")]
	[FieldOffset(Offset = "0x90")]
	public bool excludeObjectMotionVectors;

	[Token(Token = "0x4000CBB")]
	[FieldOffset(Offset = "0x94")]
	public int layerMask;

	[Token(Token = "0x4000CBC")]
	[FieldOffset(Offset = "0x98")]
	public uint renderingLayerMask;

	[Token(Token = "0x4000CBE")]
	[FieldOffset(Offset = "0xA0")]
	public int overrideMaterialPassIndex;

	[Token(Token = "0x4000CBF")]
	[FieldOffset(Offset = "0xA4")]
	public int overrideShaderPassIndex;

	[Token(Token = "0x4000CC4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ShaderTagId s_EmptyName;

	[Token(Token = "0x170003CA")]
	public readonly uint batchLayerMask
	{
		[Token(Token = "0x60017A4")]
		[Address(RVA = "0x2F6C3E0", Offset = "0x2F6A9E0", VA = "0x182F6C3E0")]
		[CompilerGenerated]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x170003CB")]
	internal readonly CullingResults cullingResult
	{
		[Token(Token = "0x60017A5")]
		[Address(RVA = "0x2B97F00", Offset = "0x2B96500", VA = "0x182B97F00")]
		[CompilerGenerated]
		get
		{
			return default(CullingResults);
		}
	}

	[Token(Token = "0x170003CC")]
	internal readonly Camera camera
	{
		[Token(Token = "0x60017A6")]
		[Address(RVA = "0x187BC10", Offset = "0x187A210", VA = "0x18187BC10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003CD")]
	internal readonly ShaderTagId passName
	{
		[Token(Token = "0x60017A7")]
		[Address(RVA = "0x16F8DE0", Offset = "0x16F73E0", VA = "0x1816F8DE0")]
		[CompilerGenerated]
		get
		{
			return default(ShaderTagId);
		}
	}

	[Token(Token = "0x170003CE")]
	internal readonly ShaderTagId[] passNames
	{
		[Token(Token = "0x60017A8")]
		[Address(RVA = "0x187BC00", Offset = "0x187A200", VA = "0x18187BC00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60017A9")]
	[Address(RVA = "0x2F6C260", Offset = "0x2F6A860", VA = "0x182F6C260")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x60017AA")]
	[Address(RVA = "0x2F6B7D0", Offset = "0x2F69DD0", VA = "0x182F6B7D0")]
	public static RendererListParams ConvertToParameters(in RendererListDesc desc)
	{
		return default(RendererListParams);
	}
}
