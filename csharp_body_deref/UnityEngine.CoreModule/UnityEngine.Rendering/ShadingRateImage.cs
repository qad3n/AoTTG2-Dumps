// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ShadingRateImage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000366")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShadingRateImage.h")]
public static class ShadingRateImage
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001553")]
	[Address(RVA = "0x6954230", Offset = "0x6953230", VA = "0x6954230")]
	[UnityEngine.Bindings.FreeFunction("ShadingRateImage::GetAllocSizeInternal")]
	internal static extern void GetAllocSizeInternal(int pixelWidth, int pixelHeight, out int tileWidth, out int tileHeight);

	[Token(Token = "0x6001554")]
	[Address(RVA = "0x6954280", Offset = "0x6953280", VA = "0x6954280")]
	public static Vector2Int GetAllocTileSize(Vector2Int pixelSize)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6001555")]
	[Address(RVA = "0x69542F0", Offset = "0x69532F0", VA = "0x69542F0")]
	public static Vector2Int GetAllocTileSize(int pixelWidth, int pixelHeight)
	{
		return default(Vector2Int);
	}
}
