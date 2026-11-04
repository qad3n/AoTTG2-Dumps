// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ShadingRateImage
// Update status: NEW in this game update
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
	[Token(Token = "0x600153F")]
	[Address(RVA = "0x2F71620", Offset = "0x2F6FC20", VA = "0x182F71620")]
	[UnityEngine.Bindings.FreeFunction("ShadingRateImage::GetAllocSizeInternal")]
	internal static extern void GetAllocSizeInternal(int pixelWidth, int pixelHeight, out int tileWidth, out int tileHeight);

	[Token(Token = "0x6001540")]
	[Address(RVA = "0x2F71670", Offset = "0x2F6FC70", VA = "0x182F71670")]
	public static Vector2Int GetAllocTileSize(Vector2Int pixelSize)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6001541")]
	[Address(RVA = "0x2F716E0", Offset = "0x2F6FCE0", VA = "0x182F716E0")]
	public static Vector2Int GetAllocTileSize(int pixelWidth, int pixelHeight)
	{
		return default(Vector2Int);
	}
}
