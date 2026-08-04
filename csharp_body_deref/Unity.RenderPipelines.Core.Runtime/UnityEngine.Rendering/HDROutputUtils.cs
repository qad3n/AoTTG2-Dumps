// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.HDROutputUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001C2")]
public static class HDROutputUtils
{
	[Token(Token = "0x20001C3")]
	[Flags]
	public enum Operation
	{
		[Token(Token = "0x40007C5")]
		None = 0,
		[Token(Token = "0x40007C6")]
		ColorConversion = 1,
		[Token(Token = "0x40007C7")]
		ColorEncoding = 2
	}

	[Token(Token = "0x20001C4")]
	public struct HDRDisplayInformation
	{
		[Token(Token = "0x40007C8")]
		[FieldOffset(Offset = "0x0")]
		public int maxFullFrameToneMapLuminance;

		[Token(Token = "0x40007C9")]
		[FieldOffset(Offset = "0x4")]
		public int maxToneMapLuminance;

		[Token(Token = "0x40007CA")]
		[FieldOffset(Offset = "0x8")]
		public int minToneMapLuminance;

		[Token(Token = "0x40007CB")]
		[FieldOffset(Offset = "0xC")]
		public float paperWhiteNits;

		[Token(Token = "0x6000D1B")]
		[Address(RVA = "0x4C02040", Offset = "0x4C02040", VA = "0x4C02040")]
		public HDRDisplayInformation(int maxFullFrameToneMapLuminance, int maxToneMapLuminance, int minToneMapLuminance, float hdrPaperWhiteNits)
		{
		}
	}

	[Token(Token = "0x20001C5")]
	public static class ShaderKeywords
	{
		[Token(Token = "0x40007CC")]
		public const string HDR_COLORSPACE_CONVERSION = "HDR_COLORSPACE_CONVERSION";

		[Token(Token = "0x40007CD")]
		public const string HDR_ENCODING = "HDR_ENCODING";

		[Token(Token = "0x40007CE")]
		public const string HDR_COLORSPACE_CONVERSION_AND_ENCODING = "HDR_COLORSPACE_CONVERSION_AND_ENCODING";

		[Token(Token = "0x40007CF")]
		public const string HDR_INPUT = "HDR_INPUT";

		[Token(Token = "0x40007D0")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly ShaderKeyword HDRColorSpaceConversion;

		[Token(Token = "0x40007D1")]
		[FieldOffset(Offset = "0x10")]
		internal static readonly ShaderKeyword HDREncoding;

		[Token(Token = "0x40007D2")]
		[FieldOffset(Offset = "0x20")]
		internal static readonly ShaderKeyword HDRColorSpaceConversionAndEncoding;

		[Token(Token = "0x40007D3")]
		[FieldOffset(Offset = "0x30")]
		internal static readonly ShaderKeyword HDRInput;
	}

	[Token(Token = "0x20001C6")]
	private static class ShaderPropertyId
	{
		[Token(Token = "0x40007D4")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int hdrColorSpace;

		[Token(Token = "0x40007D5")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int hdrEncoding;
	}

	[Token(Token = "0x6000D14")]
	[Address(RVA = "0x4C013F0", Offset = "0x4C013F0", VA = "0x4C013F0")]
	public static bool GetColorSpaceForGamut(ColorGamut gamut, out int colorspace)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D15")]
	[Address(RVA = "0x4C01610", Offset = "0x4C01610", VA = "0x4C01610")]
	public static bool GetColorEncodingForGamut(ColorGamut gamut, out int encoding)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D16")]
	[Address(RVA = "0x4C01790", Offset = "0x4C01790", VA = "0x4C01790")]
	public static void ConfigureHDROutput(Material material, ColorGamut gamut, Operation operations)
	{
	}

	[Token(Token = "0x6000D17")]
	[Address(RVA = "0x4C01A10", Offset = "0x4C01A10", VA = "0x4C01A10")]
	public static void ConfigureHDROutput(MaterialPropertyBlock properties, ColorGamut gamut)
	{
	}

	[Token(Token = "0x6000D18")]
	[Address(RVA = "0x4C01AD0", Offset = "0x4C01AD0", VA = "0x4C01AD0")]
	public static void ConfigureHDROutput(Material material, Operation operations)
	{
	}

	[Token(Token = "0x6000D19")]
	[Address(RVA = "0x4C01CA0", Offset = "0x4C01CA0", VA = "0x4C01CA0")]
	public static void ConfigureHDROutput(ComputeShader computeShader, ColorGamut gamut, Operation operations)
	{
	}

	[Token(Token = "0x6000D1A")]
	[Address(RVA = "0x4C01F20", Offset = "0x4C01F20", VA = "0x4C01F20")]
	public static bool IsShaderVariantValid(ShaderKeywordSet shaderKeywordSet, bool isHDREnabled)
	{
		return default(bool);
	}
}
