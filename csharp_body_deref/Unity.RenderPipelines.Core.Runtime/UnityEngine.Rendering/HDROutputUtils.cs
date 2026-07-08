using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001BD")]
public static class HDROutputUtils
{
	[Token(Token = "0x20001BE")]
	[Flags]
	public enum Operation
	{
		[Token(Token = "0x40007B0")]
		None = 0,
		[Token(Token = "0x40007B1")]
		ColorConversion = 1,
		[Token(Token = "0x40007B2")]
		ColorEncoding = 2
	}

	[Token(Token = "0x20001BF")]
	public struct HDRDisplayInformation
	{
		[Token(Token = "0x40007B3")]
		[FieldOffset(Offset = "0x0")]
		public int maxFullFrameToneMapLuminance;

		[Token(Token = "0x40007B4")]
		[FieldOffset(Offset = "0x4")]
		public int maxToneMapLuminance;

		[Token(Token = "0x40007B5")]
		[FieldOffset(Offset = "0x8")]
		public int minToneMapLuminance;

		[Token(Token = "0x40007B6")]
		[FieldOffset(Offset = "0xC")]
		public float paperWhiteNits;

		[Token(Token = "0x6000D01")]
		[Address(RVA = "0x48DC2A0", Offset = "0x48DC2A0", VA = "0x48DC2A0")]
		public HDRDisplayInformation(int maxFullFrameToneMapLuminance, int maxToneMapLuminance, int minToneMapLuminance, float hdrPaperWhiteNits)
		{
		}
	}

	[Token(Token = "0x20001C0")]
	public static class ShaderKeywords
	{
		[Token(Token = "0x40007B7")]
		public const string HDR_COLORSPACE_CONVERSION = "HDR_COLORSPACE_CONVERSION";

		[Token(Token = "0x40007B8")]
		public const string HDR_ENCODING = "HDR_ENCODING";

		[Token(Token = "0x40007B9")]
		public const string HDR_COLORSPACE_CONVERSION_AND_ENCODING = "HDR_COLORSPACE_CONVERSION_AND_ENCODING";

		[Token(Token = "0x40007BA")]
		public const string HDR_INPUT = "HDR_INPUT";

		[Token(Token = "0x40007BB")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly ShaderKeyword HDRColorSpaceConversion;

		[Token(Token = "0x40007BC")]
		[FieldOffset(Offset = "0x10")]
		internal static readonly ShaderKeyword HDREncoding;

		[Token(Token = "0x40007BD")]
		[FieldOffset(Offset = "0x20")]
		internal static readonly ShaderKeyword HDRColorSpaceConversionAndEncoding;

		[Token(Token = "0x40007BE")]
		[FieldOffset(Offset = "0x30")]
		internal static readonly ShaderKeyword HDRInput;
	}

	[Token(Token = "0x20001C1")]
	private static class ShaderPropertyId
	{
		[Token(Token = "0x40007BF")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int hdrColorSpace;

		[Token(Token = "0x40007C0")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int hdrEncoding;
	}

	[Token(Token = "0x6000CFA")]
	[Address(RVA = "0x48DB650", Offset = "0x48DB650", VA = "0x48DB650")]
	public static bool GetColorSpaceForGamut(ColorGamut gamut, out int colorspace)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x48DB870", Offset = "0x48DB870", VA = "0x48DB870")]
	public static bool GetColorEncodingForGamut(ColorGamut gamut, out int encoding)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CFC")]
	[Address(RVA = "0x48DB9F0", Offset = "0x48DB9F0", VA = "0x48DB9F0")]
	public static void ConfigureHDROutput(Material material, ColorGamut gamut, Operation operations)
	{
	}

	[Token(Token = "0x6000CFD")]
	[Address(RVA = "0x48DBC70", Offset = "0x48DBC70", VA = "0x48DBC70")]
	public static void ConfigureHDROutput(MaterialPropertyBlock properties, ColorGamut gamut)
	{
	}

	[Token(Token = "0x6000CFE")]
	[Address(RVA = "0x48DBD30", Offset = "0x48DBD30", VA = "0x48DBD30")]
	public static void ConfigureHDROutput(Material material, Operation operations)
	{
	}

	[Token(Token = "0x6000CFF")]
	[Address(RVA = "0x48DBF00", Offset = "0x48DBF00", VA = "0x48DBF00")]
	public static void ConfigureHDROutput(ComputeShader computeShader, ColorGamut gamut, Operation operations)
	{
	}

	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x48DC180", Offset = "0x48DC180", VA = "0x48DC180")]
	public static bool IsShaderVariantValid(ShaderKeywordSet shaderKeywordSet, bool isHDREnabled)
	{
		return default(bool);
	}
}
