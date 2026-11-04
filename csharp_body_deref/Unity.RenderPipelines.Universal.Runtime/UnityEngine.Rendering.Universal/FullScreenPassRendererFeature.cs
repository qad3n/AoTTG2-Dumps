// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.FullScreenPassRendererFeature
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000176")]
[MovedFrom("")]
public class FullScreenPassRendererFeature : ScriptableRendererFeature, ISerializationCallbackReceiver
{
	[Token(Token = "0x2000177")]
	public enum InjectionPoint
	{
		[Token(Token = "0x400087B")]
		BeforeRenderingTransparents = 450,
		[Token(Token = "0x400087C")]
		BeforeRenderingPostProcessing = 550,
		[Token(Token = "0x400087D")]
		AfterRenderingPostProcessing = 600
	}

	[Token(Token = "0x2000178")]
	internal class FullScreenRenderPass : ScriptableRenderPass
	{
		[Token(Token = "0x2000179")]
		private class CopyPassData
		{
			[Token(Token = "0x4000883")]
			[FieldOffset(Offset = "0x10")]
			internal TextureHandle inputTexture;

			[Token(Token = "0x6000879")]
			[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
			public CopyPassData()
			{
			}
		}

		[Token(Token = "0x200017A")]
		private class MainPassData
		{
			[Token(Token = "0x4000884")]
			[FieldOffset(Offset = "0x10")]
			internal Material material;

			[Token(Token = "0x4000885")]
			[FieldOffset(Offset = "0x18")]
			internal int passIndex;

			[Token(Token = "0x4000886")]
			[FieldOffset(Offset = "0x1C")]
			internal TextureHandle inputTexture;

			[Token(Token = "0x600087A")]
			[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
			public MainPassData()
			{
			}
		}

		[Token(Token = "0x400087E")]
		[FieldOffset(Offset = "0x60")]
		private Material m_Material;

		[Token(Token = "0x400087F")]
		[FieldOffset(Offset = "0x68")]
		private int m_PassIndex;

		[Token(Token = "0x4000880")]
		[FieldOffset(Offset = "0x6C")]
		private bool m_FetchActiveColor;

		[Token(Token = "0x4000881")]
		[FieldOffset(Offset = "0x6D")]
		private bool m_BindDepthStencilAttachment;

		[Token(Token = "0x4000882")]
		[FieldOffset(Offset = "0x0")]
		private static MaterialPropertyBlock s_SharedPropertyBlock;

		[Token(Token = "0x6000870")]
		[Address(RVA = "0x2C71F00", Offset = "0x2C70500", VA = "0x182C71F00")]
		public FullScreenRenderPass(string passName)
		{
		}

		[Token(Token = "0x6000871")]
		[Address(RVA = "0x2C71E30", Offset = "0x2C70430", VA = "0x182C71E30")]
		public void SetupMembers(Material material, int passIndex, bool fetchActiveColor, bool bindDepthStencilAttachment)
		{
		}

		[Token(Token = "0x6000872")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		internal void ReAllocate(RenderTextureDescriptor desc)
		{
		}

		[Token(Token = "0x6000873")]
		[Address(RVA = "0x2C715E0", Offset = "0x2C6FBE0", VA = "0x182C715E0")]
		private static void ExecuteCopyColorPass(RasterCommandBuffer cmd, RTHandle sourceTexture)
		{
		}

		[Token(Token = "0x6000874")]
		[Address(RVA = "0x2C71660", Offset = "0x2C6FC60", VA = "0x182C71660")]
		private static void ExecuteMainPass(RasterCommandBuffer cmd, RTHandle sourceTexture, Material material, int passIndex)
		{
		}

		[Token(Token = "0x6000875")]
		[Address(RVA = "0x2C718C0", Offset = "0x2C6FEC0", VA = "0x182C718C0", Slot = "11")]
		public override void RecordRenderGraph(RenderGraph renderGraph, ContextContainer frameData)
		{
		}

		[Token(Token = "0x6000876")]
		[Address(RVA = "0x2C70C00", Offset = "0x2C6F200", VA = "0x182C70C00")]
		private void AddFullscreenRenderPassInputPass(RenderGraph renderGraph, UniversalResourceData resourcesData, UniversalCameraData cameraData, TextureHandle source, TextureHandle destination)
		{
		}

		[Token(Token = "0x6000877")]
		[Address(RVA = "0x2C70850", Offset = "0x2C6EE50", VA = "0x182C70850")]
		private void AddCopyPassRenderPassFullscreen(RenderGraph renderGraph, TextureHandle source, TextureHandle destination)
		{
		}
	}

	[Token(Token = "0x200017C")]
	private enum Version
	{
		[Token(Token = "0x400088B")]
		Uninitialised = -1,
		[Token(Token = "0x400088C")]
		Initial = 0,
		[Token(Token = "0x400088D")]
		AddFetchColorBufferCheckbox = 1,
		[Token(Token = "0x400088E")]
		Count = 2,
		[Token(Token = "0x400088F")]
		Latest = AddFetchColorBufferCheckbox
	}

	[Token(Token = "0x4000872")]
	[FieldOffset(Offset = "0x20")]
	public InjectionPoint injectionPoint;

	[Token(Token = "0x4000873")]
	[FieldOffset(Offset = "0x24")]
	public bool fetchColorBuffer;

	[Token(Token = "0x4000874")]
	[FieldOffset(Offset = "0x28")]
	public ScriptableRenderPassInput requirements;

	[Token(Token = "0x4000875")]
	[FieldOffset(Offset = "0x30")]
	public Material passMaterial;

	[Token(Token = "0x4000876")]
	[FieldOffset(Offset = "0x38")]
	public int passIndex;

	[Token(Token = "0x4000877")]
	[FieldOffset(Offset = "0x3C")]
	public bool bindDepthStencilAttachment;

	[Token(Token = "0x4000878")]
	[FieldOffset(Offset = "0x40")]
	private FullScreenRenderPass m_FullScreenPass;

	[Token(Token = "0x4000879")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	[HideInInspector]
	private Version m_Version;

	[Token(Token = "0x6000869")]
	[Address(RVA = "0x2C70740", Offset = "0x2C6ED40", VA = "0x182C70740", Slot = "7")]
	public override void Create()
	{
	}

	[Token(Token = "0x600086A")]
	[Address(RVA = "0x2C707F0", Offset = "0x2C6EDF0", VA = "0x182C707F0", Slot = "10")]
	internal override bool RequireRenderingLayers(bool isDeferred, bool needsGBufferAccurateNormals, out RenderingLayerUtils.Event atEvent, out RenderingLayerUtils.MaskSize maskSize)
	{
		return default(bool);
	}

	[Token(Token = "0x600086B")]
	[Address(RVA = "0x2C704F0", Offset = "0x2C6EAF0", VA = "0x182C704F0", Slot = "9")]
	public override void AddRenderPasses(ScriptableRenderer renderer, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x600086C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void UpgradeIfNeeded()
	{
	}

	[Token(Token = "0x600086D")]
	[Address(RVA = "0x2C70820", Offset = "0x2C6EE20", VA = "0x182C70820", Slot = "12")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x600086E")]
	[Address(RVA = "0x2C70810", Offset = "0x2C6EE10", VA = "0x182C70810", Slot = "13")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x600086F")]
	[Address(RVA = "0x2C70830", Offset = "0x2C6EE30", VA = "0x182C70830")]
	public FullScreenPassRendererFeature()
	{
	}
}
