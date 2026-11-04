// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.PostProcessData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Categorization;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x200000F")]
public class PostProcessData : ScriptableObject
{
	[Serializable]
	[Token(Token = "0x2000010")]
	[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
	[CategoryInfo(Name = "R: Default PostProcess Shaders", Order = 1000)]
	[ElementInfo(Order = 0)]
	[HideInInspector]
	public sealed class ShaderResources : IRenderPipelineResources, IRenderPipelineGraphicsSettings
	{
		[Token(Token = "0x4000033")]
		[FieldOffset(Offset = "0x10")]
		[ResourcePath("Shaders/PostProcessing/StopNaN.shader", SearchType.ProjectPath)]
		public Shader stopNanPS;

		[Token(Token = "0x4000034")]
		[FieldOffset(Offset = "0x18")]
		[ResourcePath("Shaders/PostProcessing/SubpixelMorphologicalAntialiasing.shader", SearchType.ProjectPath)]
		public Shader subpixelMorphologicalAntialiasingPS;

		[Token(Token = "0x4000035")]
		[FieldOffset(Offset = "0x20")]
		[ResourcePath("Shaders/PostProcessing/GaussianDepthOfField.shader", SearchType.ProjectPath)]
		public Shader gaussianDepthOfFieldPS;

		[Token(Token = "0x4000036")]
		[FieldOffset(Offset = "0x28")]
		[ResourcePath("Shaders/PostProcessing/BokehDepthOfField.shader", SearchType.ProjectPath)]
		public Shader bokehDepthOfFieldPS;

		[Token(Token = "0x4000037")]
		[FieldOffset(Offset = "0x30")]
		[ResourcePath("Shaders/PostProcessing/CameraMotionBlur.shader", SearchType.ProjectPath)]
		public Shader cameraMotionBlurPS;

		[Token(Token = "0x4000038")]
		[FieldOffset(Offset = "0x38")]
		[ResourcePath("Shaders/PostProcessing/PaniniProjection.shader", SearchType.ProjectPath)]
		public Shader paniniProjectionPS;

		[Token(Token = "0x4000039")]
		[FieldOffset(Offset = "0x40")]
		[ResourcePath("Shaders/PostProcessing/LutBuilderLdr.shader", SearchType.ProjectPath)]
		public Shader lutBuilderLdrPS;

		[Token(Token = "0x400003A")]
		[FieldOffset(Offset = "0x48")]
		[ResourcePath("Shaders/PostProcessing/LutBuilderHdr.shader", SearchType.ProjectPath)]
		public Shader lutBuilderHdrPS;

		[Token(Token = "0x400003B")]
		[FieldOffset(Offset = "0x50")]
		[ResourcePath("Shaders/PostProcessing/Bloom.shader", SearchType.ProjectPath)]
		public Shader bloomPS;

		[Token(Token = "0x400003C")]
		[FieldOffset(Offset = "0x58")]
		[ResourcePath("Shaders/PostProcessing/TemporalAA.shader", SearchType.ProjectPath)]
		public Shader temporalAntialiasingPS;

		[Token(Token = "0x400003D")]
		[FieldOffset(Offset = "0x60")]
		[ResourcePath("Shaders/PostProcessing/LensFlareDataDriven.shader", SearchType.ProjectPath)]
		public Shader LensFlareDataDrivenPS;

		[Token(Token = "0x400003E")]
		[FieldOffset(Offset = "0x68")]
		[ResourcePath("Shaders/PostProcessing/LensFlareScreenSpace.shader", SearchType.ProjectPath)]
		public Shader LensFlareScreenSpacePS;

		[Token(Token = "0x400003F")]
		[FieldOffset(Offset = "0x70")]
		[ResourcePath("Shaders/PostProcessing/ScalingSetup.shader", SearchType.ProjectPath)]
		public Shader scalingSetupPS;

		[Token(Token = "0x4000040")]
		[FieldOffset(Offset = "0x78")]
		[ResourcePath("Shaders/PostProcessing/EdgeAdaptiveSpatialUpsampling.shader", SearchType.ProjectPath)]
		public Shader easuPS;

		[Token(Token = "0x4000041")]
		[FieldOffset(Offset = "0x80")]
		[ResourcePath("Shaders/PostProcessing/UberPost.shader", SearchType.ProjectPath)]
		public Shader uberPostPS;

		[Token(Token = "0x4000042")]
		[FieldOffset(Offset = "0x88")]
		[ResourcePath("Shaders/PostProcessing/FinalPost.shader", SearchType.ProjectPath)]
		public Shader finalPostPassPS;

		[Token(Token = "0x4000043")]
		[FieldOffset(Offset = "0x90")]
		[SerializeField]
		[HideInInspector]
		private int m_ShaderResourcesVersion;

		[Token(Token = "0x17000007")]
		public int version
		{
			[Token(Token = "0x600002C")]
			[Address(RVA = "0xE925C0", Offset = "0xE90BC0", VA = "0x180E925C0", Slot = "4")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000008")]
		public bool isAvailableInPlayerBuild
		{
			[Token(Token = "0x600002D")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "5")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600002E")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public ShaderResources()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000011")]
	[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
	[CategoryInfo(Name = "R: Default PostProcess Textures", Order = 1000)]
	[ElementInfo(Order = 0)]
	[HideInInspector]
	public sealed class TextureResources : IRenderPipelineResources, IRenderPipelineGraphicsSettings
	{
		[Token(Token = "0x4000044")]
		[FieldOffset(Offset = "0x10")]
		[ResourceFormattedPaths("Textures/BlueNoise16/L/LDR_LLL1_{0}.png", 0, 32, SearchType.ProjectPath)]
		public Texture2D[] blueNoise16LTex;

		[Token(Token = "0x4000045")]
		[FieldOffset(Offset = "0x18")]
		[ResourcePaths(new string[] { "Textures/FilmGrain/Thin01.png", "Textures/FilmGrain/Thin02.png", "Textures/FilmGrain/Medium01.png", "Textures/FilmGrain/Medium02.png", "Textures/FilmGrain/Medium03.png", "Textures/FilmGrain/Medium04.png", "Textures/FilmGrain/Medium05.png", "Textures/FilmGrain/Medium06.png", "Textures/FilmGrain/Large01.png", "Textures/FilmGrain/Large02.png" }, SearchType.ProjectPath)]
		public Texture2D[] filmGrainTex;

		[Token(Token = "0x4000046")]
		[FieldOffset(Offset = "0x20")]
		[ResourcePath("Textures/SMAA/AreaTex.tga", SearchType.ProjectPath)]
		public Texture2D smaaAreaTex;

		[Token(Token = "0x4000047")]
		[FieldOffset(Offset = "0x28")]
		[ResourcePath("Textures/SMAA/SearchTex.tga", SearchType.ProjectPath)]
		public Texture2D smaaSearchTex;

		[Token(Token = "0x4000048")]
		[FieldOffset(Offset = "0x30")]
		[SerializeField]
		[HideInInspector]
		private int m_TexturesResourcesVersion;

		[Token(Token = "0x17000009")]
		public int version
		{
			[Token(Token = "0x600002F")]
			[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60", Slot = "4")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700000A")]
		public bool isAvailableInPlayerBuild
		{
			[Token(Token = "0x6000030")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "5")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000031")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public TextureResources()
		{
		}
	}

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x18")]
	public ShaderResources shaders;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x20")]
	public TextureResources textures;

	[Token(Token = "0x600002B")]
	[Address(RVA = "0xC8D110", Offset = "0xC8B710", VA = "0x180C8D110")]
	public PostProcessData()
	{
	}
}
