// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.PostProcessUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200015D")]
public static class PostProcessUtils
{
	[Token(Token = "0x200015E")]
	private static class ShaderConstants
	{
		[Token(Token = "0x4000800")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int _Grain_Texture;

		[Token(Token = "0x4000801")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int _Grain_Params;

		[Token(Token = "0x4000802")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int _Grain_TilingParams;

		[Token(Token = "0x4000803")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int _BlueNoise_Texture;

		[Token(Token = "0x4000804")]
		[FieldOffset(Offset = "0x10")]
		public static readonly int _Dithering_Params;

		[Token(Token = "0x4000805")]
		[FieldOffset(Offset = "0x14")]
		public static readonly int _SourceSize;
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x6675A10", Offset = "0x6674A10", VA = "0x6675A10")]
	[Obsolete("This method is obsolete. Use ConfigureDithering override that takes camera pixel width and height instead. #from(2021.1)")]
	public static int ConfigureDithering(PostProcessData data, int index, Camera camera, Material material)
	{
		return default(int);
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x6675A60", Offset = "0x6674A60", VA = "0x6675A60")]
	public static int ConfigureDithering(PostProcessData data, int index, int cameraPixelWidth, int cameraPixelHeight, Material material)
	{
		return default(int);
	}

	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x6675C10", Offset = "0x6674C10", VA = "0x6675C10")]
	[Obsolete("This method is obsolete. Use ConfigureFilmGrain override that takes camera pixel width and height instead. #from(2021.1)")]
	public static void ConfigureFilmGrain(PostProcessData data, FilmGrain settings, Camera camera, Material material)
	{
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x6675C60", Offset = "0x6674C60", VA = "0x6675C60")]
	public static void ConfigureFilmGrain(PostProcessData data, FilmGrain settings, int cameraPixelWidth, int cameraPixelHeight, Material material)
	{
	}

	[Token(Token = "0x60007D3")]
	[Address(RVA = "0x6675F40", Offset = "0x6674F40", VA = "0x6675F40")]
	internal static void SetSourceSize(RasterCommandBuffer cmd, float width, float height, RenderTexture rt)
	{
	}

	[Token(Token = "0x60007D4")]
	[Address(RVA = "0x6671F60", Offset = "0x6670F60", VA = "0x6671F60")]
	internal static void SetSourceSize(CommandBuffer cmd, float width, float height, RenderTexture rt)
	{
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x666A850", Offset = "0x6669850", VA = "0x666A850")]
	internal static void SetSourceSize(RasterCommandBuffer cmd, RTHandle source)
	{
	}

	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x6669970", Offset = "0x6668970", VA = "0x6669970")]
	internal static void SetSourceSize(CommandBuffer cmd, RTHandle source)
	{
	}
}
