// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.LogHistogram
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4B60AA0", Offset = "0x4B60AA0", VA = "0x4B60AA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x4B60AB0", Offset = "0x4B60AB0", VA = "0x4B60AB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x4B5A400", Offset = "0x4B5A400", VA = "0x4B5A400")]
	public void Generate(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x4B49540", Offset = "0x4B49540", VA = "0x4B49540")]
	public Vector4 GetHistogramScaleOffsetRes(PostProcessRenderContext context)
	{
		return default(Vector4);
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x4B50FC0", Offset = "0x4B50FC0", VA = "0x4B50FC0")]
	public void Release()
	{
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x4B4FD90", Offset = "0x4B4FD90", VA = "0x4B4FD90")]
	public LogHistogram()
	{
	}
}
