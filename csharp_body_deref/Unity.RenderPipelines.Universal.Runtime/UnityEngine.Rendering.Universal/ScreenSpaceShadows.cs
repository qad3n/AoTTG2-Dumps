// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ScreenSpaceShadows
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200018E")]
[SupportedOnRenderer(typeof(UniversalRendererData))]
[DisallowMultipleRendererFeature("Screen Space Shadows")]
[Tooltip("Screen Space Shadows")]
internal class ScreenSpaceShadows : ScriptableRendererFeature
{
	[Token(Token = "0x200018F")]
	private class ScreenSpaceShadowsPass : ScriptableRenderPass
	{
		[Token(Token = "0x2000190")]
		private class PassData
		{
			[Token(Token = "0x40008E9")]
			[FieldOffset(Offset = "0x10")]
			internal TextureHandle target;

			[Token(Token = "0x40008EA")]
			[FieldOffset(Offset = "0x20")]
			internal Material material;

			[Token(Token = "0x60008A6")]
			[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
			public PassData()
			{
			}
		}

		[Token(Token = "0x40008E6")]
		[FieldOffset(Offset = "0x60")]
		private Material m_Material;

		[Token(Token = "0x40008E7")]
		[FieldOffset(Offset = "0x68")]
		private ScreenSpaceShadowsSettings m_CurrentSettings;

		[Token(Token = "0x40008E8")]
		[FieldOffset(Offset = "0x70")]
		private int m_ScreenSpaceShadowmapTextureID;

		[Token(Token = "0x60008A1")]
		[Address(RVA = "0x2C84650", Offset = "0x2C82C50", VA = "0x182C84650")]
		internal ScreenSpaceShadowsPass()
		{
		}

		[Token(Token = "0x60008A2")]
		[Address(RVA = "0x2C845C0", Offset = "0x2C82BC0", VA = "0x182C845C0")]
		internal bool Setup(ScreenSpaceShadowsSettings featureSettings, Material material)
		{
			return default(bool);
		}

		[Token(Token = "0x60008A3")]
		[Address(RVA = "0x2C83E60", Offset = "0x2C82460", VA = "0x182C83E60")]
		private void InitPassData(ref PassData passData)
		{
		}

		[Token(Token = "0x60008A4")]
		[Address(RVA = "0x2C83E90", Offset = "0x2C82490", VA = "0x182C83E90", Slot = "11")]
		public override void RecordRenderGraph(RenderGraph renderGraph, ContextContainer frameData)
		{
		}

		[Token(Token = "0x60008A5")]
		[Address(RVA = "0x2C83D00", Offset = "0x2C82300", VA = "0x182C83D00")]
		private static void ExecutePass(UnsafeCommandBuffer cmd, PassData data, RTHandle target)
		{
		}
	}

	[Token(Token = "0x2000192")]
	private class ScreenSpaceShadowsPostPass : ScriptableRenderPass
	{
		[Token(Token = "0x2000193")]
		internal class PassData
		{
			[Token(Token = "0x40008ED")]
			[FieldOffset(Offset = "0x10")]
			internal UniversalShadowData shadowData;

			[Token(Token = "0x60008AD")]
			[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
			public PassData()
			{
			}
		}

		[Token(Token = "0x60008AA")]
		[Address(RVA = "0x2C84C10", Offset = "0x2C83210", VA = "0x182C84C10")]
		internal ScreenSpaceShadowsPostPass()
		{
		}

		[Token(Token = "0x60008AB")]
		[Address(RVA = "0x2C84720", Offset = "0x2C82D20", VA = "0x182C84720")]
		private static void ExecutePass(RasterCommandBuffer cmd, UniversalShadowData shadowData)
		{
		}

		[Token(Token = "0x60008AC")]
		[Address(RVA = "0x2C847F0", Offset = "0x2C82DF0", VA = "0x182C847F0", Slot = "11")]
		public override void RecordRenderGraph(RenderGraph renderGraph, ContextContainer frameData)
		{
		}
	}

	[Token(Token = "0x40008E0")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[HideInInspector]
	private Shader m_Shader;

	[Token(Token = "0x40008E1")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private ScreenSpaceShadowsSettings m_Settings;

	[Token(Token = "0x40008E2")]
	[FieldOffset(Offset = "0x30")]
	private Material m_Material;

	[Token(Token = "0x40008E3")]
	[FieldOffset(Offset = "0x38")]
	private ScreenSpaceShadowsPass m_SSShadowsPass;

	[Token(Token = "0x40008E4")]
	[FieldOffset(Offset = "0x40")]
	private ScreenSpaceShadowsPostPass m_SSShadowsPostPass;

	[Token(Token = "0x40008E5")]
	private const string k_ShaderName = "Hidden/Universal Render Pipeline/ScreenSpaceShadows";

	[Token(Token = "0x600089C")]
	[Address(RVA = "0x2C84F80", Offset = "0x2C83580", VA = "0x182C84F80", Slot = "7")]
	public override void Create()
	{
	}

	[Token(Token = "0x600089D")]
	[Address(RVA = "0x2C84C90", Offset = "0x2C83290", VA = "0x182C84C90", Slot = "9")]
	public override void AddRenderPasses(ScriptableRenderer renderer, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x600089E")]
	[Address(RVA = "0x2C85170", Offset = "0x2C83770", VA = "0x182C85170", Slot = "11")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600089F")]
	[Address(RVA = "0x2C851D0", Offset = "0x2C837D0", VA = "0x182C851D0")]
	private bool LoadMaterial()
	{
		return default(bool);
	}

	[Token(Token = "0x60008A0")]
	[Address(RVA = "0x2C85330", Offset = "0x2C83930", VA = "0x182C85330")]
	public ScreenSpaceShadows()
	{
	}
}
