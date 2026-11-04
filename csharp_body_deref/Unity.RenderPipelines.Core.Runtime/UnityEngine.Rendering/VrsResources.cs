// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VrsResources
// Update status: NEW in this game update
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
		[Address(RVA = "0x2B83290", Offset = "0x2B81890", VA = "0x182B83290")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FC0")]
	[Address(RVA = "0x2B831B0", Offset = "0x2B817B0", VA = "0x182B831B0")]
	internal VrsResources(VrsRenderPipelineRuntimeResources resources)
	{
	}

	[Token(Token = "0x6000FC1")]
	[Address(RVA = "0x2B82C10", Offset = "0x2B81210", VA = "0x182B82C10", Slot = "1")]
	~VrsResources()
	{
	}

	[Token(Token = "0x6000FC2")]
	[Address(RVA = "0x2B82C00", Offset = "0x2B81200", VA = "0x182B82C00", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000FC3")]
	[Address(RVA = "0x2B82F20", Offset = "0x2B81520", VA = "0x182B82F20")]
	private void InitializeResources(VrsRenderPipelineRuntimeResources resources)
	{
	}

	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x2B82B20", Offset = "0x2B81120", VA = "0x182B82B20")]
	private void DisposeResources()
	{
	}

	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x2B82970", Offset = "0x2B80F70", VA = "0x182B82970")]
	private void AllocFragmentSizeBuffer()
	{
	}

	[Token(Token = "0x6000FC6")]
	[Address(RVA = "0x2B82CB0", Offset = "0x2B812B0", VA = "0x182B82CB0")]
	private bool InitComputeShader(VrsRenderPipelineRuntimeResources resources)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC7")]
	[Address(RVA = "0x2B83160", Offset = "0x2B81760", VA = "0x182B83160")]
	private static int TryFindKernel(ComputeShader computeShader, string name)
	{
		return default(int);
	}
}
