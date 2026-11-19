// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.STP
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Categorization;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000169")]
public static class STP
{
	[Token(Token = "0x200016A")]
	public struct PerViewConfig
	{
		[Token(Token = "0x40006FA")]
		[FieldOffset(Offset = "0x0")]
		public Matrix4x4 currentProj;

		[Token(Token = "0x40006FB")]
		[FieldOffset(Offset = "0x40")]
		public Matrix4x4 lastProj;

		[Token(Token = "0x40006FC")]
		[FieldOffset(Offset = "0x80")]
		public Matrix4x4 lastLastProj;

		[Token(Token = "0x40006FD")]
		[FieldOffset(Offset = "0xC0")]
		public Matrix4x4 currentView;

		[Token(Token = "0x40006FE")]
		[FieldOffset(Offset = "0x100")]
		public Matrix4x4 lastView;

		[Token(Token = "0x40006FF")]
		[FieldOffset(Offset = "0x140")]
		public Matrix4x4 lastLastView;
	}

	[Token(Token = "0x200016B")]
	public struct Config
	{
		[Token(Token = "0x4000700")]
		[FieldOffset(Offset = "0x0")]
		public Texture2D noiseTexture;

		[Token(Token = "0x4000701")]
		[FieldOffset(Offset = "0x8")]
		public TextureHandle inputColor;

		[Token(Token = "0x4000702")]
		[FieldOffset(Offset = "0x18")]
		public TextureHandle inputDepth;

		[Token(Token = "0x4000703")]
		[FieldOffset(Offset = "0x28")]
		public TextureHandle inputMotion;

		[Token(Token = "0x4000704")]
		[FieldOffset(Offset = "0x38")]
		public TextureHandle inputStencil;

		[Token(Token = "0x4000705")]
		[FieldOffset(Offset = "0x48")]
		public TextureHandle debugView;

		[Token(Token = "0x4000706")]
		[FieldOffset(Offset = "0x58")]
		public TextureHandle destination;

		[Token(Token = "0x4000707")]
		[FieldOffset(Offset = "0x68")]
		public HistoryContext historyContext;

		[Token(Token = "0x4000708")]
		[FieldOffset(Offset = "0x70")]
		public bool enableHwDrs;

		[Token(Token = "0x4000709")]
		[FieldOffset(Offset = "0x71")]
		public bool enableTexArray;

		[Token(Token = "0x400070A")]
		[FieldOffset(Offset = "0x72")]
		public bool enableMotionScaling;

		[Token(Token = "0x400070B")]
		[FieldOffset(Offset = "0x74")]
		public float nearPlane;

		[Token(Token = "0x400070C")]
		[FieldOffset(Offset = "0x78")]
		public float farPlane;

		[Token(Token = "0x400070D")]
		[FieldOffset(Offset = "0x7C")]
		public int frameIndex;

		[Token(Token = "0x400070E")]
		[FieldOffset(Offset = "0x80")]
		public bool hasValidHistory;

		[Token(Token = "0x400070F")]
		[FieldOffset(Offset = "0x84")]
		public int stencilMask;

		[Token(Token = "0x4000710")]
		[FieldOffset(Offset = "0x88")]
		public int debugViewIndex;

		[Token(Token = "0x4000711")]
		[FieldOffset(Offset = "0x8C")]
		public float deltaTime;

		[Token(Token = "0x4000712")]
		[FieldOffset(Offset = "0x90")]
		public float lastDeltaTime;

		[Token(Token = "0x4000713")]
		[FieldOffset(Offset = "0x94")]
		public Vector2Int currentImageSize;

		[Token(Token = "0x4000714")]
		[FieldOffset(Offset = "0x9C")]
		public Vector2Int priorImageSize;

		[Token(Token = "0x4000715")]
		[FieldOffset(Offset = "0xA4")]
		public Vector2Int outputImageSize;

		[Token(Token = "0x4000716")]
		[FieldOffset(Offset = "0xAC")]
		public int numActiveViews;

		[Token(Token = "0x4000717")]
		[FieldOffset(Offset = "0xB0")]
		public PerViewConfig[] perViewConfigs;
	}

	[Token(Token = "0x200016C")]
	internal enum HistoryTextureType
	{
		[Token(Token = "0x4000719")]
		DepthMotion,
		[Token(Token = "0x400071A")]
		Luma,
		[Token(Token = "0x400071B")]
		Convergence,
		[Token(Token = "0x400071C")]
		Feedback,
		[Token(Token = "0x400071D")]
		Count
	}

	[Token(Token = "0x200016D")]
	public struct HistoryUpdateInfo
	{
		[Token(Token = "0x400071E")]
		[FieldOffset(Offset = "0x0")]
		public Vector2Int preUpscaleSize;

		[Token(Token = "0x400071F")]
		[FieldOffset(Offset = "0x8")]
		public Vector2Int postUpscaleSize;

		[Token(Token = "0x4000720")]
		[FieldOffset(Offset = "0x10")]
		public bool useHwDrs;

		[Token(Token = "0x4000721")]
		[FieldOffset(Offset = "0x11")]
		public bool useTexArray;
	}

	[Token(Token = "0x200016E")]
	public sealed class HistoryContext : IDisposable
	{
		[Token(Token = "0x4000722")]
		[FieldOffset(Offset = "0x10")]
		private RTHandle[] m_textures;

		[Token(Token = "0x4000723")]
		[FieldOffset(Offset = "0x18")]
		private Hash128 m_hash;

		[Token(Token = "0x6000B78")]
		[Address(RVA = "0x6523980", Offset = "0x6522980", VA = "0x6523980")]
		public bool Update(ref HistoryUpdateInfo info)
		{
			return default(bool);
		}

		[Token(Token = "0x6000B79")]
		[Address(RVA = "0x6523520", Offset = "0x6522520", VA = "0x6523520")]
		internal RTHandle GetCurrentHistoryTexture(HistoryTextureType historyType, int frameIndex)
		{
			return null;
		}

		[Token(Token = "0x6000B7A")]
		[Address(RVA = "0x65234F0", Offset = "0x65224F0", VA = "0x65234F0")]
		internal RTHandle GetPreviousHistoryTexture(HistoryTextureType historyType, int frameIndex)
		{
			return null;
		}

		[Token(Token = "0x6000B7B")]
		[Address(RVA = "0x6523EE0", Offset = "0x6522EE0", VA = "0x6523EE0", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000B7C")]
		[Address(RVA = "0x6523F80", Offset = "0x6522F80", VA = "0x6523F80")]
		public HistoryContext()
		{
		}
	}

	[Token(Token = "0x200016F")]
	[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@6c7e6aba313a\\Runtime\\STP\\STP.cs")]
	private enum StpSetupPerViewConstants
	{
		[Token(Token = "0x4000725")]
		Count = 8
	}

	[Token(Token = "0x2000170")]
	[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@6c7e6aba313a\\Runtime\\STP\\STP.cs", needAccessors = false, generateCBuffer = true)]
	private struct StpConstantBufferData
	{
		[Token(Token = "0x4000726")]
		[FieldOffset(Offset = "0x0")]
		public Vector4 _StpCommonConstant;

		[Token(Token = "0x4000727")]
		[FieldOffset(Offset = "0x10")]
		public Vector4 _StpSetupConstants0;

		[Token(Token = "0x4000728")]
		[FieldOffset(Offset = "0x20")]
		public Vector4 _StpSetupConstants1;

		[Token(Token = "0x4000729")]
		[FieldOffset(Offset = "0x30")]
		public Vector4 _StpSetupConstants2;

		[Token(Token = "0x400072A")]
		[FieldOffset(Offset = "0x40")]
		public Vector4 _StpSetupConstants3;

		[Token(Token = "0x400072B")]
		[FieldOffset(Offset = "0x50")]
		public Vector4 _StpSetupConstants4;

		[Token(Token = "0x400072C")]
		[FieldOffset(Offset = "0x60")]
		public Vector4 _StpSetupConstants5;

		[Token(Token = "0x400072D")]
		[FieldOffset(Offset = "0x70")]
		[HLSLArray(16, typeof(Vector4))]
		public unsafe fixed float _StpSetupPerViewConstants[64];

		[Token(Token = "0x400072E")]
		[FieldOffset(Offset = "0x170")]
		public Vector4 _StpDilConstants0;

		[Token(Token = "0x400072F")]
		[FieldOffset(Offset = "0x180")]
		public Vector4 _StpTaaConstants0;

		[Token(Token = "0x4000730")]
		[FieldOffset(Offset = "0x190")]
		public Vector4 _StpTaaConstants1;

		[Token(Token = "0x4000731")]
		[FieldOffset(Offset = "0x1A0")]
		public Vector4 _StpTaaConstants2;

		[Token(Token = "0x4000732")]
		[FieldOffset(Offset = "0x1B0")]
		public Vector4 _StpTaaConstants3;
	}

	[Token(Token = "0x2000172")]
	private static class ShaderResources
	{
		[Token(Token = "0x4000734")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int _StpConstantBufferData;

		[Token(Token = "0x4000735")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int _StpBlueNoiseIn;

		[Token(Token = "0x4000736")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int _StpDebugOut;

		[Token(Token = "0x4000737")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int _StpInputColor;

		[Token(Token = "0x4000738")]
		[FieldOffset(Offset = "0x10")]
		public static readonly int _StpInputDepth;

		[Token(Token = "0x4000739")]
		[FieldOffset(Offset = "0x14")]
		public static readonly int _StpInputMotion;

		[Token(Token = "0x400073A")]
		[FieldOffset(Offset = "0x18")]
		public static readonly int _StpInputStencil;

		[Token(Token = "0x400073B")]
		[FieldOffset(Offset = "0x1C")]
		public static readonly int _StpIntermediateColor;

		[Token(Token = "0x400073C")]
		[FieldOffset(Offset = "0x20")]
		public static readonly int _StpIntermediateConvergence;

		[Token(Token = "0x400073D")]
		[FieldOffset(Offset = "0x24")]
		public static readonly int _StpIntermediateWeights;

		[Token(Token = "0x400073E")]
		[FieldOffset(Offset = "0x28")]
		public static readonly int _StpPriorLuma;

		[Token(Token = "0x400073F")]
		[FieldOffset(Offset = "0x2C")]
		public static readonly int _StpLuma;

		[Token(Token = "0x4000740")]
		[FieldOffset(Offset = "0x30")]
		public static readonly int _StpPriorDepthMotion;

		[Token(Token = "0x4000741")]
		[FieldOffset(Offset = "0x34")]
		public static readonly int _StpDepthMotion;

		[Token(Token = "0x4000742")]
		[FieldOffset(Offset = "0x38")]
		public static readonly int _StpPriorFeedback;

		[Token(Token = "0x4000743")]
		[FieldOffset(Offset = "0x3C")]
		public static readonly int _StpFeedback;

		[Token(Token = "0x4000744")]
		[FieldOffset(Offset = "0x40")]
		public static readonly int _StpPriorConvergence;

		[Token(Token = "0x4000745")]
		[FieldOffset(Offset = "0x44")]
		public static readonly int _StpConvergence;

		[Token(Token = "0x4000746")]
		[FieldOffset(Offset = "0x48")]
		public static readonly int _StpOutput;
	}

	[Token(Token = "0x2000173")]
	private static class ShaderKeywords
	{
		[Token(Token = "0x4000747")]
		[FieldOffset(Offset = "0x0")]
		public static readonly string EnableDebugMode;

		[Token(Token = "0x4000748")]
		[FieldOffset(Offset = "0x8")]
		public static readonly string EnableLargeKernel;

		[Token(Token = "0x4000749")]
		[FieldOffset(Offset = "0x10")]
		public static readonly string EnableStencilResponsive;

		[Token(Token = "0x400074A")]
		[FieldOffset(Offset = "0x18")]
		public static readonly string DisableTexture2DXArray;
	}

	[Serializable]
	[Token(Token = "0x2000174")]
	[SupportedOnRenderPipeline(new Type[] { })]
	[CategoryInfo(Name = "R: STP", Order = 1000)]
	[ElementInfo(Order = 0)]
	[HideInInspector]
	internal class RuntimeResources : IRenderPipelineResources, IRenderPipelineGraphicsSettings
	{
		[Token(Token = "0x400074B")]
		[FieldOffset(Offset = "0x10")]
		[SerializeField]
		[ResourcePath("Runtime/STP/StpSetup.compute", SearchType.ProjectPath)]
		private ComputeShader m_setupCS;

		[Token(Token = "0x400074C")]
		[FieldOffset(Offset = "0x18")]
		[SerializeField]
		[ResourcePath("Runtime/STP/StpPreTaa.compute", SearchType.ProjectPath)]
		private ComputeShader m_preTaaCS;

		[Token(Token = "0x400074D")]
		[FieldOffset(Offset = "0x20")]
		[SerializeField]
		[ResourcePath("Runtime/STP/StpTaa.compute", SearchType.ProjectPath)]
		private ComputeShader m_taaCS;

		[Token(Token = "0x1700015B")]
		public int version
		{
			[Token(Token = "0x6000B7F")]
			[Address(RVA = "0x6524420", Offset = "0x6523420", VA = "0x6524420", Slot = "4")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700015C")]
		public ComputeShader setupCS
		{
			[Token(Token = "0x6000B80")]
			[Address(RVA = "0x6524430", Offset = "0x6523430", VA = "0x6524430")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000B81")]
			[Address(RVA = "0x6524440", Offset = "0x6523440", VA = "0x6524440")]
			set
			{
			}
		}

		[Token(Token = "0x1700015D")]
		public ComputeShader preTaaCS
		{
			[Token(Token = "0x6000B82")]
			[Address(RVA = "0x65244A0", Offset = "0x65234A0", VA = "0x65244A0")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000B83")]
			[Address(RVA = "0x65244B0", Offset = "0x65234B0", VA = "0x65244B0")]
			set
			{
			}
		}

		[Token(Token = "0x1700015E")]
		public ComputeShader taaCS
		{
			[Token(Token = "0x6000B84")]
			[Address(RVA = "0x6524510", Offset = "0x6523510", VA = "0x6524510")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000B85")]
			[Address(RVA = "0x6524520", Offset = "0x6523520", VA = "0x6524520")]
			set
			{
			}
		}

		[Token(Token = "0x6000B86")]
		[Address(RVA = "0x6524580", Offset = "0x6523580", VA = "0x6524580")]
		public RuntimeResources()
		{
		}
	}

	[Token(Token = "0x2000175")]
	private enum ProfileId
	{
		[Token(Token = "0x400074F")]
		StpSetup,
		[Token(Token = "0x4000750")]
		StpPreTaa,
		[Token(Token = "0x4000751")]
		StpTaa
	}

	[Token(Token = "0x2000176")]
	private class SetupData
	{
		[Token(Token = "0x4000752")]
		[FieldOffset(Offset = "0x10")]
		public ComputeShader cs;

		[Token(Token = "0x4000753")]
		[FieldOffset(Offset = "0x18")]
		public int kernelIndex;

		[Token(Token = "0x4000754")]
		[FieldOffset(Offset = "0x1C")]
		public int viewCount;

		[Token(Token = "0x4000755")]
		[FieldOffset(Offset = "0x20")]
		public Vector2Int dispatchSize;

		[Token(Token = "0x4000756")]
		[FieldOffset(Offset = "0x28")]
		public StpConstantBufferData constantBufferData;

		[Token(Token = "0x4000757")]
		[FieldOffset(Offset = "0x1E8")]
		public TextureHandle noiseTexture;

		[Token(Token = "0x4000758")]
		[FieldOffset(Offset = "0x1F8")]
		public TextureHandle debugView;

		[Token(Token = "0x4000759")]
		[FieldOffset(Offset = "0x208")]
		public TextureHandle inputColor;

		[Token(Token = "0x400075A")]
		[FieldOffset(Offset = "0x218")]
		public TextureHandle inputDepth;

		[Token(Token = "0x400075B")]
		[FieldOffset(Offset = "0x228")]
		public TextureHandle inputMotion;

		[Token(Token = "0x400075C")]
		[FieldOffset(Offset = "0x238")]
		public TextureHandle inputStencil;

		[Token(Token = "0x400075D")]
		[FieldOffset(Offset = "0x248")]
		public TextureHandle intermediateColor;

		[Token(Token = "0x400075E")]
		[FieldOffset(Offset = "0x258")]
		public TextureHandle intermediateConvergence;

		[Token(Token = "0x400075F")]
		[FieldOffset(Offset = "0x268")]
		public TextureHandle priorDepthMotion;

		[Token(Token = "0x4000760")]
		[FieldOffset(Offset = "0x278")]
		public TextureHandle depthMotion;

		[Token(Token = "0x4000761")]
		[FieldOffset(Offset = "0x288")]
		public TextureHandle priorLuma;

		[Token(Token = "0x4000762")]
		[FieldOffset(Offset = "0x298")]
		public TextureHandle luma;

		[Token(Token = "0x4000763")]
		[FieldOffset(Offset = "0x2A8")]
		public TextureHandle priorFeedback;

		[Token(Token = "0x4000764")]
		[FieldOffset(Offset = "0x2B8")]
		public TextureHandle priorConvergence;

		[Token(Token = "0x6000B87")]
		[Address(RVA = "0x6524610", Offset = "0x6523610", VA = "0x6524610")]
		public SetupData()
		{
		}
	}

	[Token(Token = "0x2000177")]
	private class PreTaaData
	{
		[Token(Token = "0x4000765")]
		[FieldOffset(Offset = "0x10")]
		public ComputeShader cs;

		[Token(Token = "0x4000766")]
		[FieldOffset(Offset = "0x18")]
		public int kernelIndex;

		[Token(Token = "0x4000767")]
		[FieldOffset(Offset = "0x1C")]
		public int viewCount;

		[Token(Token = "0x4000768")]
		[FieldOffset(Offset = "0x20")]
		public Vector2Int dispatchSize;

		[Token(Token = "0x4000769")]
		[FieldOffset(Offset = "0x28")]
		public TextureHandle noiseTexture;

		[Token(Token = "0x400076A")]
		[FieldOffset(Offset = "0x38")]
		public TextureHandle debugView;

		[Token(Token = "0x400076B")]
		[FieldOffset(Offset = "0x48")]
		public TextureHandle intermediateConvergence;

		[Token(Token = "0x400076C")]
		[FieldOffset(Offset = "0x58")]
		public TextureHandle intermediateWeights;

		[Token(Token = "0x400076D")]
		[FieldOffset(Offset = "0x68")]
		public TextureHandle luma;

		[Token(Token = "0x400076E")]
		[FieldOffset(Offset = "0x78")]
		public TextureHandle convergence;

		[Token(Token = "0x6000B88")]
		[Address(RVA = "0x6524620", Offset = "0x6523620", VA = "0x6524620")]
		public PreTaaData()
		{
		}
	}

	[Token(Token = "0x2000178")]
	private class TaaData
	{
		[Token(Token = "0x400076F")]
		[FieldOffset(Offset = "0x10")]
		public ComputeShader cs;

		[Token(Token = "0x4000770")]
		[FieldOffset(Offset = "0x18")]
		public int kernelIndex;

		[Token(Token = "0x4000771")]
		[FieldOffset(Offset = "0x1C")]
		public int viewCount;

		[Token(Token = "0x4000772")]
		[FieldOffset(Offset = "0x20")]
		public Vector2Int dispatchSize;

		[Token(Token = "0x4000773")]
		[FieldOffset(Offset = "0x28")]
		public TextureHandle noiseTexture;

		[Token(Token = "0x4000774")]
		[FieldOffset(Offset = "0x38")]
		public TextureHandle debugView;

		[Token(Token = "0x4000775")]
		[FieldOffset(Offset = "0x48")]
		public TextureHandle intermediateColor;

		[Token(Token = "0x4000776")]
		[FieldOffset(Offset = "0x58")]
		public TextureHandle intermediateWeights;

		[Token(Token = "0x4000777")]
		[FieldOffset(Offset = "0x68")]
		public TextureHandle priorFeedback;

		[Token(Token = "0x4000778")]
		[FieldOffset(Offset = "0x78")]
		public TextureHandle depthMotion;

		[Token(Token = "0x4000779")]
		[FieldOffset(Offset = "0x88")]
		public TextureHandle convergence;

		[Token(Token = "0x400077A")]
		[FieldOffset(Offset = "0x98")]
		public TextureHandle feedback;

		[Token(Token = "0x400077B")]
		[FieldOffset(Offset = "0xA8")]
		public TextureHandle output;

		[Token(Token = "0x6000B89")]
		[Address(RVA = "0x6524630", Offset = "0x6523630", VA = "0x6524630")]
		public TaaData()
		{
		}
	}

	[Token(Token = "0x40006F2")]
	private const int kNumDebugViews = 6;

	[Token(Token = "0x40006F3")]
	[FieldOffset(Offset = "0x0")]
	private static readonly GUIContent[] s_DebugViewDescriptions;

	[Token(Token = "0x40006F4")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int[] s_DebugViewIndices;

	[Token(Token = "0x40006F5")]
	private const int kMaxPerViewConfigs = 2;

	[Token(Token = "0x40006F6")]
	[FieldOffset(Offset = "0x10")]
	private static PerViewConfig[] s_PerViewConfigs;

	[Token(Token = "0x40006F7")]
	private const int kNumHistoryTextureTypes = 4;

	[Token(Token = "0x40006F8")]
	private const int kTotalSetupViewConstantsCount = 16;

	[Token(Token = "0x40006F9")]
	[FieldOffset(Offset = "0x18")]
	private static readonly int kQualcommVendorId;

	[Token(Token = "0x17000158")]
	public static GUIContent[] debugViewDescriptions
	{
		[Token(Token = "0x6000B6B")]
		[Address(RVA = "0x651DC60", Offset = "0x651CC60", VA = "0x651DC60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000159")]
	public static int[] debugViewIndices
	{
		[Token(Token = "0x6000B6C")]
		[Address(RVA = "0x651DCD0", Offset = "0x651CCD0", VA = "0x651DCD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015A")]
	public static PerViewConfig[] perViewConfigs
	{
		[Token(Token = "0x6000B6D")]
		[Address(RVA = "0x651DD40", Offset = "0x651CD40", VA = "0x651DD40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B6E")]
		[Address(RVA = "0x651DDB0", Offset = "0x651CDB0", VA = "0x651DDB0")]
		set
		{
		}
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x651DC00", Offset = "0x651CC00", VA = "0x651DC00")]
	public static bool IsSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x651DC20", Offset = "0x651CC20", VA = "0x651DC20")]
	public static Vector2 Jit16(int frameIndex)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000B6F")]
	[Address(RVA = "0x651DE10", Offset = "0x651CE10", VA = "0x651DE10")]
	private static Hash128 ComputeHistoryHash(ref HistoryUpdateInfo info)
	{
		return default(Hash128);
	}

	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x651DEB0", Offset = "0x651CEB0", VA = "0x651DEB0")]
	private static Vector2Int CalculateConvergenceTextureSize(Vector2Int historyTextureSize)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x651DF20", Offset = "0x651CF20", VA = "0x651DF20")]
	private static float CalculateMotionScale(float deltaTime, float lastDeltaTime)
	{
		return default(float);
	}

	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x651DFC0", Offset = "0x651CFC0", VA = "0x651DFC0")]
	private static Matrix4x4 ExtractRotation(Matrix4x4 input)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000B73")]
	[Address(RVA = "0x651DFF0", Offset = "0x651CFF0", VA = "0x651DFF0")]
	private static int PackVector2ToInt(Vector2 value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x651E020", Offset = "0x651D020", VA = "0x651E020")]
	private static void PopulateConstantData(ref Config config, ref StpConstantBufferData constants)
	{
	}

	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x651FCD0", Offset = "0x651ECD0", VA = "0x651FCD0")]
	private static TextureHandle UseTexture(IBaseRenderGraphBuilder builder, in TextureHandle texture, AccessFlags flags = AccessFlags.Read)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x651FD80", Offset = "0x651ED80", VA = "0x651FD80")]
	public static TextureHandle Execute(RenderGraph renderGraph, ref Config config)
	{
		return default(TextureHandle);
	}
}
