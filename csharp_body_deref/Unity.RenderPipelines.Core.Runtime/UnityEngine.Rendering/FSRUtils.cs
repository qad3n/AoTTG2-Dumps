using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001AC")]
public static class FSRUtils
{
	[Token(Token = "0x20001AD")]
	private static class ShaderConstants
	{
		[Token(Token = "0x4000766")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int _FsrEasuConstants0;

		[Token(Token = "0x4000767")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int _FsrEasuConstants1;

		[Token(Token = "0x4000768")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int _FsrEasuConstants2;

		[Token(Token = "0x4000769")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int _FsrEasuConstants3;

		[Token(Token = "0x400076A")]
		[FieldOffset(Offset = "0x10")]
		public static readonly int _FsrRcasConstants;
	}

	[Token(Token = "0x4000763")]
	internal const float kMaxSharpnessStops = 2.5f;

	[Token(Token = "0x4000764")]
	public const float kDefaultSharpnessStops = 0.2f;

	[Token(Token = "0x4000765")]
	public const float kDefaultSharpnessLinear = 0.92f;

	[Token(Token = "0x6000CD7")]
	[Address(RVA = "0x48D8EA0", Offset = "0x48D8EA0", VA = "0x48D8EA0")]
	public static void SetEasuConstants(CommandBuffer cmd, Vector2 inputViewportSizeInPixels, Vector2 inputImageSizeInPixels, Vector2 outputImageSizeInPixels)
	{
	}

	[Token(Token = "0x6000CD8")]
	[Address(RVA = "0x48D9050", Offset = "0x48D9050", VA = "0x48D9050")]
	public static void SetEasuConstants(BaseCommandBuffer cmd, Vector2 inputViewportSizeInPixels, Vector2 inputImageSizeInPixels, Vector2 outputImageSizeInPixels)
	{
	}

	[Token(Token = "0x6000CD9")]
	[Address(RVA = "0x48D9070", Offset = "0x48D9070", VA = "0x48D9070")]
	public static void SetRcasConstants(CommandBuffer cmd, float sharpnessStops = 0.2f)
	{
	}

	[Token(Token = "0x6000CDA")]
	[Address(RVA = "0x48D9120", Offset = "0x48D9120", VA = "0x48D9120")]
	public static void SetRcasConstantsLinear(CommandBuffer cmd, float sharpnessLinear = 0.92f)
	{
	}

	[Token(Token = "0x6000CDB")]
	[Address(RVA = "0x48D91E0", Offset = "0x48D91E0", VA = "0x48D91E0")]
	public static void SetRcasConstantsLinear(RasterCommandBuffer cmd, float sharpnessLinear = 0.92f)
	{
	}

	[Token(Token = "0x6000CDC")]
	[Address(RVA = "0x48D9200", Offset = "0x48D9200", VA = "0x48D9200")]
	public static bool IsSupported()
	{
		return default(bool);
	}
}
