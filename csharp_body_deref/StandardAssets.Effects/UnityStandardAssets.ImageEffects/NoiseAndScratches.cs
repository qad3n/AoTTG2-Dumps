using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x2000029")]
[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
[AddComponentMenu("Image Effects/Noise/Noise and Scratches")]
public class NoiseAndScratches : MonoBehaviour
{
	[Token(Token = "0x4000138")]
	[FieldOffset(Offset = "0x20")]
	public bool monochrome;

	[Token(Token = "0x4000139")]
	[FieldOffset(Offset = "0x21")]
	private bool rgbFallback;

	[Token(Token = "0x400013A")]
	[FieldOffset(Offset = "0x24")]
	[Range(0f, 5f)]
	public float grainIntensityMin;

	[Token(Token = "0x400013B")]
	[FieldOffset(Offset = "0x28")]
	[Range(0f, 5f)]
	public float grainIntensityMax;

	[Token(Token = "0x400013C")]
	[FieldOffset(Offset = "0x2C")]
	[Range(0.1f, 50f)]
	public float grainSize;

	[Token(Token = "0x400013D")]
	[FieldOffset(Offset = "0x30")]
	[Range(0f, 5f)]
	public float scratchIntensityMin;

	[Token(Token = "0x400013E")]
	[FieldOffset(Offset = "0x34")]
	[Range(0f, 5f)]
	public float scratchIntensityMax;

	[Token(Token = "0x400013F")]
	[FieldOffset(Offset = "0x38")]
	[Range(1f, 30f)]
	public float scratchFPS;

	[Token(Token = "0x4000140")]
	[FieldOffset(Offset = "0x3C")]
	[Range(0f, 1f)]
	public float scratchJitter;

	[Token(Token = "0x4000141")]
	[FieldOffset(Offset = "0x40")]
	public Texture grainTexture;

	[Token(Token = "0x4000142")]
	[FieldOffset(Offset = "0x48")]
	public Texture scratchTexture;

	[Token(Token = "0x4000143")]
	[FieldOffset(Offset = "0x50")]
	public Shader shaderRGB;

	[Token(Token = "0x4000144")]
	[FieldOffset(Offset = "0x58")]
	public Shader shaderYUV;

	[Token(Token = "0x4000145")]
	[FieldOffset(Offset = "0x60")]
	private Material m_MaterialRGB;

	[Token(Token = "0x4000146")]
	[FieldOffset(Offset = "0x68")]
	private Material m_MaterialYUV;

	[Token(Token = "0x4000147")]
	[FieldOffset(Offset = "0x70")]
	private float scratchTimeLeft;

	[Token(Token = "0x4000148")]
	[FieldOffset(Offset = "0x74")]
	private float scratchX;

	[Token(Token = "0x4000149")]
	[FieldOffset(Offset = "0x78")]
	private float scratchY;

	[Token(Token = "0x17000007")]
	protected Material material
	{
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x415F480", Offset = "0x415F480", VA = "0x415F480")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x415F370", Offset = "0x415F370", VA = "0x415F370")]
	protected void Start()
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x415F5E0", Offset = "0x415F5E0", VA = "0x415F5E0")]
	protected void OnDisable()
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x415F6A0", Offset = "0x415F6A0", VA = "0x415F6A0")]
	private void SanitizeParameters()
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x415F730", Offset = "0x415F730", VA = "0x415F730")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x415FB10", Offset = "0x415FB10", VA = "0x415FB10")]
	public NoiseAndScratches()
	{
	}
}
