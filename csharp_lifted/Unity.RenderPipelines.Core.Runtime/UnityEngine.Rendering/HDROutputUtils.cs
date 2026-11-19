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

[Token(Token = "0x20001D5")]
public static class HDROutputUtils
{
	[Token(Token = "0x20001D6")]
	[Flags]
	public enum Operation
	{
		[Token(Token = "0x4000921")]
		None = 0,
		[Token(Token = "0x4000922")]
		ColorConversion = 1,
		[Token(Token = "0x4000923")]
		ColorEncoding = 2
	}

	[Token(Token = "0x20001D7")]
	public struct HDRDisplayInformation
	{
		[Token(Token = "0x4000924")]
		[FieldOffset(Offset = "0x0")]
		public int maxFullFrameToneMapLuminance;

		[Token(Token = "0x4000925")]
		[FieldOffset(Offset = "0x4")]
		public int maxToneMapLuminance;

		[Token(Token = "0x4000926")]
		[FieldOffset(Offset = "0x8")]
		public int minToneMapLuminance;

		[Token(Token = "0x4000927")]
		[FieldOffset(Offset = "0xC")]
		public float paperWhiteNits;

		[Token(Token = "0x6000E3B")]
		[Address(RVA = "0x654BD70", Offset = "0x654AD70", VA = "0x654BD70")]
		public HDRDisplayInformation(int maxFullFrameToneMapLuminance, int maxToneMapLuminance, int minToneMapLuminance, float hdrPaperWhiteNits)
		{
		}
	}

	[Token(Token = "0x20001D8")]
	public static class ShaderKeywords
	{
		[Token(Token = "0x4000928")]
		public const string HDR_COLORSPACE_CONVERSION = "HDR_COLORSPACE_CONVERSION";

		[Token(Token = "0x4000929")]
		public const string HDR_ENCODING = "HDR_ENCODING";

		[Token(Token = "0x400092A")]
		public const string HDR_COLORSPACE_CONVERSION_AND_ENCODING = "HDR_COLORSPACE_CONVERSION_AND_ENCODING";

		[Token(Token = "0x400092B")]
		public const string HDR_INPUT = "HDR_INPUT";

		[Token(Token = "0x400092C")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly ShaderKeyword HDRColorSpaceConversion;

		[Token(Token = "0x400092D")]
		[FieldOffset(Offset = "0x10")]
		internal static readonly ShaderKeyword HDREncoding;

		[Token(Token = "0x400092E")]
		[FieldOffset(Offset = "0x20")]
		internal static readonly ShaderKeyword HDRColorSpaceConversionAndEncoding;

		[Token(Token = "0x400092F")]
		[FieldOffset(Offset = "0x30")]
		internal static readonly ShaderKeyword HDRInput;
	}

	[Token(Token = "0x20001D9")]
	private static class ShaderPropertyId
	{
		[Token(Token = "0x4000930")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int hdrColorSpace;

		[Token(Token = "0x4000931")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int hdrEncoding;
	}

	[Token(Token = "0x6000E34")]
	[Address(RVA = "0x654B010", Offset = "0x654A010", VA = "0x654B010")]
	public static bool GetColorSpaceForGamut(ColorGamut gamut, out int colorspace)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E35")]
	[Address(RVA = "0x654B230", Offset = "0x654A230", VA = "0x654B230")]
	public static bool GetColorEncodingForGamut(ColorGamut gamut, out int encoding)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E36")]
	[Address(RVA = "0x654B3B0", Offset = "0x654A3B0", VA = "0x654B3B0")]
	public static void ConfigureHDROutput(Material material, ColorGamut gamut, Operation operations)
	{
	}

	[Token(Token = "0x6000E37")]
	[Address(RVA = "0x654B680", Offset = "0x654A680", VA = "0x654B680")]
	public static void ConfigureHDROutput(MaterialPropertyBlock properties, ColorGamut gamut)
	{
	}

	[Token(Token = "0x6000E38")]
	[Address(RVA = "0x654B740", Offset = "0x654A740", VA = "0x654B740")]
	public static void ConfigureHDROutput(Material material, Operation operations)
	{
	}

	[Token(Token = "0x6000E39")]
	[Address(RVA = "0x654B980", Offset = "0x654A980", VA = "0x654B980")]
	public static void ConfigureHDROutput(ComputeShader computeShader, ColorGamut gamut, Operation operations)
	{
	}

	[Token(Token = "0x6000E3A")]
	[Address(RVA = "0x654BC50", Offset = "0x654AC50", VA = "0x654BC50")]
	public static bool IsShaderVariantValid(ShaderKeywordSet shaderKeywordSet, bool isHDREnabled)
	{
		return default(bool);
	}
}
