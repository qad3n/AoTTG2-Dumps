// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.TemporalAntialiasing
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x2000042")]
[Preserve]
public sealed class TemporalAntialiasing
{
	[Token(Token = "0x2000043")]
	private enum Pass
	{
		[Token(Token = "0x4000126")]
		SolverDilate,
		[Token(Token = "0x4000127")]
		SolverNoDilate
	}

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x10")]
	[Tooltip("The diameter (in texels) inside which jitter samples are spread. Smaller values result in crisper but more aliased output, while larger values result in more stable, but blurrier, output.")]
	[Range(0.1f, 1f)]
	public float jitterSpread;

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x14")]
	[Tooltip("Controls the amount of sharpening applied to the color buffer. High values may introduce dark-border artifacts.")]
	[Range(0f, 3f)]
	public float sharpness;

	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x18")]
	[Tooltip("The blend coefficient for a stationary fragment. Controls the percentage of history sample blended into the final color.")]
	[Range(0f, 0.99f)]
	public float stationaryBlending;

	[Token(Token = "0x400011A")]
	[FieldOffset(Offset = "0x1C")]
	[Tooltip("The blend coefficient for a fragment with significant motion. Controls the percentage of history sample blended into the final color.")]
	[Range(0f, 0.99f)]
	public float motionBlending;

	[Token(Token = "0x400011B")]
	[FieldOffset(Offset = "0x20")]
	public Func<Camera, Vector2, Matrix4x4> jitteredMatrixFunc;

	[Token(Token = "0x400011D")]
	[FieldOffset(Offset = "0x30")]
	private readonly RenderTargetIdentifier[] m_Mrt;

	[Token(Token = "0x400011E")]
	[FieldOffset(Offset = "0x38")]
	private bool m_ResetHistory;

	[Token(Token = "0x400011F")]
	private const int k_SampleCount = 8;

	[Token(Token = "0x4000121")]
	private const int k_NumEyes = 2;

	[Token(Token = "0x4000122")]
	private const int k_NumHistoryTextures = 2;

	[Token(Token = "0x4000123")]
	[FieldOffset(Offset = "0x40")]
	private readonly RenderTexture[][] m_HistoryTextures;

	[Token(Token = "0x4000124")]
	[FieldOffset(Offset = "0x48")]
	private readonly int[] m_HistoryPingPong;

	[Token(Token = "0x17000001")]
	public Vector2 jitter
	{
		[Token(Token = "0x600008B")]
		[Address(RVA = "0x4B46540", Offset = "0x4B46540", VA = "0x4B46540")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600008C")]
		[Address(RVA = "0x4B46550", Offset = "0x4B46550", VA = "0x4B46550")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public int sampleIndex
	{
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x4B46560", Offset = "0x4B46560", VA = "0x4B46560")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x4B46570", Offset = "0x4B46570", VA = "0x4B46570")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x4B46580", Offset = "0x4B46580", VA = "0x4B46580")]
	public bool IsSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x4B465A0", Offset = "0x4B465A0", VA = "0x4B465A0")]
	internal DepthTextureMode GetCameraFlags()
	{
		return default(DepthTextureMode);
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x4B465B0", Offset = "0x4B465B0", VA = "0x4B465B0")]
	internal void ResetHistory()
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x4B465C0", Offset = "0x4B465C0", VA = "0x4B465C0")]
	private Vector2 GenerateRandomOffset()
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x4B46630", Offset = "0x4B46630", VA = "0x4B46630")]
	public Matrix4x4 GetJitteredProjectionMatrix(Camera camera)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x4B46890", Offset = "0x4B46890", VA = "0x4B46890")]
	public void ConfigureJitteredProjectionMatrix(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x4B469A0", Offset = "0x4B469A0", VA = "0x4B469A0")]
	public void ConfigureStereoJitteredProjectionMatrices(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x4B46DC0", Offset = "0x4B46DC0", VA = "0x4B46DC0")]
	private void GenerateHistoryName(RenderTexture rt, int id, PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x4B46EA0", Offset = "0x4B46EA0", VA = "0x4B46EA0")]
	private RenderTexture CheckHistory(int id, PostProcessRenderContext context)
	{
		return null;
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x4B47460", Offset = "0x4B47460", VA = "0x4B47460")]
	internal void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x4B47910", Offset = "0x4B47910", VA = "0x4B47910")]
	internal void Release()
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x4B47A60", Offset = "0x4B47A60", VA = "0x4B47A60")]
	public TemporalAntialiasing()
	{
	}
}
