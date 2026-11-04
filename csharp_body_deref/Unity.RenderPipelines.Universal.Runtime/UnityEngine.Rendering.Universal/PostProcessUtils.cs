// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.PostProcessUtils
// Update status: NEW in this game update
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
	[Address(RVA = "0x2C728D0", Offset = "0x2C70ED0", VA = "0x182C728D0")]
	[Obsolete("This method is obsolete. Use ConfigureDithering override that takes camera pixel width and height instead. #from(2021.1)")]
	public static int ConfigureDithering(PostProcessData data, int index, Camera camera, Material material)
	{
		return default(int);
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x2C726D0", Offset = "0x2C70CD0", VA = "0x182C726D0")]
	public static int ConfigureDithering(PostProcessData data, int index, int cameraPixelWidth, int cameraPixelHeight, Material material)
	{
		return default(int);
	}

	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x2C72E00", Offset = "0x2C71400", VA = "0x182C72E00")]
	[Obsolete("This method is obsolete. Use ConfigureFilmGrain override that takes camera pixel width and height instead. #from(2021.1)")]
	public static void ConfigureFilmGrain(PostProcessData data, FilmGrain settings, Camera camera, Material material)
	{
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x2C72AD0", Offset = "0x2C710D0", VA = "0x182C72AD0")]
	public static void ConfigureFilmGrain(PostProcessData data, FilmGrain settings, int cameraPixelWidth, int cameraPixelHeight, Material material)
	{
	}

	[Token(Token = "0x60007D3")]
	[Address(RVA = "0x2C73060", Offset = "0x2C71660", VA = "0x182C73060")]
	internal static void SetSourceSize(RasterCommandBuffer cmd, float width, float height, RenderTexture rt)
	{
	}

	[Token(Token = "0x60007D4")]
	[Address(RVA = "0x2C72FD0", Offset = "0x2C715D0", VA = "0x182C72FD0")]
	internal static void SetSourceSize(CommandBuffer cmd, float width, float height, RenderTexture rt)
	{
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x2C72E70", Offset = "0x2C71470", VA = "0x182C72E70")]
	internal static void SetSourceSize(RasterCommandBuffer cmd, RTHandle source)
	{
	}

	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x2C72F00", Offset = "0x2C71500", VA = "0x182C72F00")]
	internal static void SetSourceSize(CommandBuffer cmd, RTHandle source)
	{
	}
}
