using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x200001E")]
[ExecuteInEditMode]
[AddComponentMenu("Image Effects/Color Adjustments/Contrast Stretch")]
public class ContrastStretch : MonoBehaviour
{
	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0x20")]
	[Range(0.0001f, 1f)]
	public float adaptationSpeed;

	[Token(Token = "0x40000EC")]
	[FieldOffset(Offset = "0x24")]
	[Range(0f, 1f)]
	public float limitMinimum;

	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0x28")]
	[Range(0f, 1f)]
	public float limitMaximum;

	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0x30")]
	private RenderTexture[] adaptRenderTex;

	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0x38")]
	private int curAdaptIndex;

	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0x40")]
	public Shader shaderLum;

	[Token(Token = "0x40000F1")]
	[FieldOffset(Offset = "0x48")]
	private Material m_materialLum;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0x50")]
	public Shader shaderReduce;

	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x58")]
	private Material m_materialReduce;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x60")]
	public Shader shaderAdapt;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x68")]
	private Material m_materialAdapt;

	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x70")]
	public Shader shaderApply;

	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x78")]
	private Material m_materialApply;

	[Token(Token = "0x17000002")]
	protected Material materialLum
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x415BC70", Offset = "0x415BC70", VA = "0x415BC70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	protected Material materialReduce
	{
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x415BD40", Offset = "0x415BD40", VA = "0x415BD40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	protected Material materialAdapt
	{
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x415BE10", Offset = "0x415BE10", VA = "0x415BE10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000005")]
	protected Material materialApply
	{
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x415BEE0", Offset = "0x415BEE0", VA = "0x415BEE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x415BFB0", Offset = "0x415BFB0", VA = "0x415BFB0")]
	private void Start()
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x415C030", Offset = "0x415C030", VA = "0x415C030")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x415C250", Offset = "0x415C250", VA = "0x415C250")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x415C460", Offset = "0x415C460", VA = "0x415C460")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x415C6A0", Offset = "0x415C6A0", VA = "0x415C6A0")]
	private void CalculateAdaptation(Texture curTexture)
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x415C870", Offset = "0x415C870", VA = "0x415C870")]
	public ContrastStretch()
	{
	}
}
