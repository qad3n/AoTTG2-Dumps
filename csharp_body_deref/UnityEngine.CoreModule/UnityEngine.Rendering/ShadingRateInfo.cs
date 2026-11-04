// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ShadingRateInfo
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000367")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShadingRateInfo.h")]
public static class ShadingRateInfo
{
	[Token(Token = "0x1700031C")]
	public static bool supportsPerImageTile
	{
		[Token(Token = "0x6001542")]
		[Address(RVA = "0x2F71940", Offset = "0x2F6FF40", VA = "0x182F71940")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700031D")]
	public static bool supportsPerDrawCall
	{
		[Token(Token = "0x6001543")]
		[Address(RVA = "0x2F71910", Offset = "0x2F6FF10", VA = "0x182F71910")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700031E")]
	public static Vector2Int imageTileSize
	{
		[Token(Token = "0x6001544")]
		[Address(RVA = "0x2F71890", Offset = "0x2F6FE90", VA = "0x182F71890")]
		get
		{
			return default(Vector2Int);
		}
	}

	[Token(Token = "0x1700031F")]
	public static ShadingRateFragmentSize[] availableFragmentSizes
	{
		[Token(Token = "0x6001545")]
		[Address(RVA = "0x2F71970", Offset = "0x2F6FF70", VA = "0x182F71970")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001546")]
	[Address(RVA = "0x2F718D0", Offset = "0x2F6FED0", VA = "0x182F718D0")]
	[UnityEngine.Bindings.FreeFunction("ShadingRateInfo::QueryNativeValue")]
	public static extern byte QueryNativeValue(ShadingRateFragmentSize fragmentSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001547")]
	[Address(RVA = "0x2F71940", Offset = "0x2F6FF40", VA = "0x182F71940")]
	[UnityEngine.Bindings.FreeFunction("ShadingRateInfo::SupportsPerImageTile")]
	private static extern bool SupportsPerImageTile();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001548")]
	[Address(RVA = "0x2F71910", Offset = "0x2F6FF10", VA = "0x182F71910")]
	[UnityEngine.Bindings.FreeFunction("ShadingRateInfo::SupportsPerDrawCall")]
	private static extern bool SupportsPerDrawCall();

	[Token(Token = "0x6001549")]
	[Address(RVA = "0x2F71890", Offset = "0x2F6FE90", VA = "0x182F71890")]
	[UnityEngine.Bindings.FreeFunction("ShadingRateInfo::GetImageTileSize")]
	private static Vector2Int GetImageTileSize()
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x600154A")]
	[Address(RVA = "0x2F71790", Offset = "0x2F6FD90", VA = "0x182F71790")]
	[UnityEngine.Bindings.FreeFunction("ShadingRateInfo::GetAvailableFragmentSizes")]
	private static ShadingRateFragmentSize[] GetAvailableFragmentSizes()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600154B")]
	[Address(RVA = "0x2F71850", Offset = "0x2F6FE50", VA = "0x182F71850")]
	private static extern void GetImageTileSize_Injected(out Vector2Int ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600154C")]
	[Address(RVA = "0x2F71750", Offset = "0x2F6FD50", VA = "0x182F71750")]
	private static extern void GetAvailableFragmentSizes_Injected(out BlittableArrayWrapper ret);
}
