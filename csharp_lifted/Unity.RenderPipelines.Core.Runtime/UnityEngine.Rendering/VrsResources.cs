// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VrsResources
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000232")]
internal class VrsResources : IDisposable
{
	[Token(Token = "0x40009DA")]
	[FieldOffset(Offset = "0x10")]
	internal ProfilingSampler conversionProfilingSampler;

	[Token(Token = "0x40009DB")]
	[FieldOffset(Offset = "0x18")]
	internal ProfilingSampler visualizationProfilingSampler;

	[Token(Token = "0x40009DC")]
	[FieldOffset(Offset = "0x20")]
	internal GraphicsBuffer conversionLutBuffer;

	[Token(Token = "0x40009DD")]
	[FieldOffset(Offset = "0x28")]
	internal GraphicsBuffer visualizationLutBuffer;

	[Token(Token = "0x40009DE")]
	[FieldOffset(Offset = "0x30")]
	internal ComputeShader textureComputeShader;

	[Token(Token = "0x40009DF")]
	[FieldOffset(Offset = "0x38")]
	internal int textureReduceKernel;

	[Token(Token = "0x40009E0")]
	[FieldOffset(Offset = "0x3C")]
	internal int textureCopyKernel;

	[Token(Token = "0x40009E1")]
	[FieldOffset(Offset = "0x40")]
	internal Vector2Int tileSize;

	[Token(Token = "0x40009E2")]
	[FieldOffset(Offset = "0x48")]
	internal GraphicsBuffer validatedShadingRateFragmentSizeBuffer;

	[Token(Token = "0x40009E3")]
	[FieldOffset(Offset = "0x50")]
	private Shader m_VisualizationShader;

	[Token(Token = "0x40009E4")]
	[FieldOffset(Offset = "0x58")]
	private Material m_VisualizationMaterial;

	[Token(Token = "0x17000206")]
	internal Material visualizationMaterial
	{
		[Token(Token = "0x6000FBF")]
		[Address(RVA = "0x6559CD0", Offset = "0x6558CD0", VA = "0x6559CD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FC0")]
	[Address(RVA = "0x65583F0", Offset = "0x65573F0", VA = "0x65583F0")]
	internal VrsResources(VrsRenderPipelineRuntimeResources resources)
	{
	}

	[Token(Token = "0x6000FC1")]
	[Address(RVA = "0x655B570", Offset = "0x655A570", VA = "0x655B570", Slot = "1")]
	~VrsResources()
	{
	}

	[Token(Token = "0x6000FC2")]
	[Address(RVA = "0x6558580", Offset = "0x6557580", VA = "0x6558580", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000FC3")]
	[Address(RVA = "0x655B4E0", Offset = "0x655A4E0", VA = "0x655B4E0")]
	private void InitializeResources(VrsRenderPipelineRuntimeResources resources)
	{
	}

	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x655B640", Offset = "0x655A640", VA = "0x655B640")]
	private void DisposeResources()
	{
	}

	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x655B9B0", Offset = "0x655A9B0", VA = "0x655B9B0")]
	private void AllocFragmentSizeBuffer()
	{
	}

	[Token(Token = "0x6000FC6")]
	[Address(RVA = "0x655B730", Offset = "0x655A730", VA = "0x655B730")]
	private bool InitComputeShader(VrsRenderPipelineRuntimeResources resources)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC7")]
	[Address(RVA = "0x655BB40", Offset = "0x655AB40", VA = "0x655BB40")]
	private static int TryFindKernel(ComputeShader computeShader, string name)
	{
		return default(int);
	}
}
