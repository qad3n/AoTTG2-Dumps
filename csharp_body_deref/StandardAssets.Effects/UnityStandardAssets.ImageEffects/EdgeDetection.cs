using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x2000020")]
[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
[AddComponentMenu("Image Effects/Edge Detection/Edge Detection")]
public class EdgeDetection : PostEffectsBase
{
	[Token(Token = "0x2000021")]
	public enum EdgeDetectMode
	{
		[Token(Token = "0x400010D")]
		TriangleDepthNormals,
		[Token(Token = "0x400010E")]
		RobertsCrossDepthNormals,
		[Token(Token = "0x400010F")]
		SobelDepth,
		[Token(Token = "0x4000110")]
		SobelDepthThin,
		[Token(Token = "0x4000111")]
		TriangleLuminance
	}

	[Token(Token = "0x4000101")]
	[FieldOffset(Offset = "0x30")]
	public EdgeDetectMode mode;

	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0x34")]
	public float sensitivityDepth;

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x38")]
	public float sensitivityNormals;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x3C")]
	public float lumThreshold;

	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x40")]
	public float edgeExp;

	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x44")]
	public float sampleDist;

	[Token(Token = "0x4000107")]
	[FieldOffset(Offset = "0x48")]
	public float edgesOnly;

	[Token(Token = "0x4000108")]
	[FieldOffset(Offset = "0x4C")]
	public Color edgesOnlyBgColor;

	[Token(Token = "0x4000109")]
	[FieldOffset(Offset = "0x60")]
	public Shader edgeDetectShader;

	[Token(Token = "0x400010A")]
	[FieldOffset(Offset = "0x68")]
	private Material edgeDetectMaterial;

	[Token(Token = "0x400010B")]
	[FieldOffset(Offset = "0x70")]
	private EdgeDetectMode oldMode;

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x415CD90", Offset = "0x415CD90", VA = "0x415CD90", Slot = "4")]
	public override bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x415CEB0", Offset = "0x415CEB0", VA = "0x415CEB0")]
	private new void Start()
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x415CE10", Offset = "0x415CE10", VA = "0x415CE10")]
	private void SetCameraFlag()
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x415CEC0", Offset = "0x415CEC0", VA = "0x415CEC0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x415CED0", Offset = "0x415CED0", VA = "0x415CED0")]
	[ImageEffectOpaque]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x415D0C0", Offset = "0x415D0C0", VA = "0x415D0C0")]
	public EdgeDetection()
	{
	}
}
