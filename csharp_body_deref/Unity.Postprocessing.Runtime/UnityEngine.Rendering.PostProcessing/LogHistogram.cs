using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000080")]
internal sealed class LogHistogram
{
	[Token(Token = "0x4000249")]
	public const int rangeMin = -9;

	[Token(Token = "0x400024A")]
	public const int rangeMax = 9;

	[Token(Token = "0x400024B")]
	private const int k_Bins = 128;

	[Token(Token = "0x17000032")]
	public ComputeBuffer data
	{
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x483B9B0", Offset = "0x483B9B0", VA = "0x483B9B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x483B9C0", Offset = "0x483B9C0", VA = "0x483B9C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x4835310", Offset = "0x4835310", VA = "0x4835310")]
	public void Generate(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x4824450", Offset = "0x4824450", VA = "0x4824450")]
	public Vector4 GetHistogramScaleOffsetRes(PostProcessRenderContext context)
	{
		return default(Vector4);
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x482BED0", Offset = "0x482BED0", VA = "0x482BED0")]
	public void Release()
	{
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x482ACA0", Offset = "0x482ACA0", VA = "0x482ACA0")]
	public LogHistogram()
	{
	}
}
