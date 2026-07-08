using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x2000030")]
[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
[AddComponentMenu("Image Effects/Rendering/Screen Space Ambient Occlusion")]
public class ScreenSpaceAmbientOcclusion : MonoBehaviour
{
	[Token(Token = "0x2000031")]
	public enum SSAOSamples
	{
		[Token(Token = "0x400016F")]
		Low,
		[Token(Token = "0x4000170")]
		Medium,
		[Token(Token = "0x4000171")]
		High
	}

	[Token(Token = "0x4000163")]
	[FieldOffset(Offset = "0x20")]
	[Range(0.05f, 1f)]
	public float m_Radius;

	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x24")]
	public SSAOSamples m_SampleCount;

	[Token(Token = "0x4000165")]
	[FieldOffset(Offset = "0x28")]
	[Range(0.5f, 4f)]
	public float m_OcclusionIntensity;

	[Token(Token = "0x4000166")]
	[FieldOffset(Offset = "0x2C")]
	[Range(0f, 4f)]
	public int m_Blur;

	[Token(Token = "0x4000167")]
	[FieldOffset(Offset = "0x30")]
	[Range(1f, 6f)]
	public int m_Downsampling;

	[Token(Token = "0x4000168")]
	[FieldOffset(Offset = "0x34")]
	[Range(0.2f, 2f)]
	public float m_OcclusionAttenuation;

	[Token(Token = "0x4000169")]
	[FieldOffset(Offset = "0x38")]
	[Range(1E-05f, 0.5f)]
	public float m_MinZ;

	[Token(Token = "0x400016A")]
	[FieldOffset(Offset = "0x40")]
	public Shader m_SSAOShader;

	[Token(Token = "0x400016B")]
	[FieldOffset(Offset = "0x48")]
	private Material m_SSAOMaterial;

	[Token(Token = "0x400016C")]
	[FieldOffset(Offset = "0x50")]
	public Texture2D m_RandomTexture;

	[Token(Token = "0x400016D")]
	[FieldOffset(Offset = "0x58")]
	private bool m_Supported;

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x4162230", Offset = "0x4162230", VA = "0x4162230")]
	private static Material CreateMaterial(Shader shader)
	{
		return null;
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x41622D0", Offset = "0x41622D0", VA = "0x41622D0")]
	private static void DestroyMaterial(Material mat)
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x4162350", Offset = "0x4162350", VA = "0x4162350")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x41623D0", Offset = "0x41623D0", VA = "0x41623D0")]
	private void Start()
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x4162540", Offset = "0x4162540", VA = "0x4162540")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x4162480", Offset = "0x4162480", VA = "0x4162480")]
	private void CreateMaterials()
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x41625A0", Offset = "0x41625A0", VA = "0x41625A0")]
	[ImageEffectOpaque]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x4162C50", Offset = "0x4162C50", VA = "0x4162C50")]
	public ScreenSpaceAmbientOcclusion()
	{
	}
}
