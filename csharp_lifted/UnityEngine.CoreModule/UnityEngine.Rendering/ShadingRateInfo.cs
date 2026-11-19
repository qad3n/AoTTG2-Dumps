// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ShadingRateInfo
// Update status: unchanged since the previous dump
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
	[Token(Token = "0x17000321")]
	public static bool supportsPerImageTile
	{
		[Token(Token = "0x6001556")]
		[Address(RVA = "0x6954350", Offset = "0x6953350", VA = "0x6954350")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000322")]
	public static bool supportsPerDrawCall
	{
		[Token(Token = "0x6001557")]
		[Address(RVA = "0x69543B0", Offset = "0x69533B0", VA = "0x69543B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000323")]
	public static Vector2Int imageTileSize
	{
		[Token(Token = "0x6001558")]
		[Address(RVA = "0x6954410", Offset = "0x6953410", VA = "0x6954410")]
		get
		{
			return default(Vector2Int);
		}
	}

	[Token(Token = "0x17000324")]
	public static ShadingRateFragmentSize[] availableFragmentSizes
	{
		[Token(Token = "0x6001559")]
		[Address(RVA = "0x6954490", Offset = "0x6953490", VA = "0x6954490")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600155A")]
	[Address(RVA = "0x69545A0", Offset = "0x69535A0", VA = "0x69545A0")]
	[UnityEngine.Bindings.FreeFunction("ShadingRateInfo::QueryNativeValue")]
	public static extern byte QueryNativeValue(ShadingRateFragmentSize fragmentSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600155B")]
	[Address(RVA = "0x6954380", Offset = "0x6953380", VA = "0x6954380")]
	[UnityEngine.Bindings.FreeFunction("ShadingRateInfo::SupportsPerImageTile")]
	private static extern bool SupportsPerImageTile();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600155C")]
	[Address(RVA = "0x69543E0", Offset = "0x69533E0", VA = "0x69543E0")]
	[UnityEngine.Bindings.FreeFunction("ShadingRateInfo::SupportsPerDrawCall")]
	private static extern bool SupportsPerDrawCall();

	[Token(Token = "0x600155D")]
	[Address(RVA = "0x6954450", Offset = "0x6953450", VA = "0x6954450")]
	[UnityEngine.Bindings.FreeFunction("ShadingRateInfo::GetImageTileSize")]
	private static Vector2Int GetImageTileSize()
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x600155E")]
	[Address(RVA = "0x69544A0", Offset = "0x69534A0", VA = "0x69544A0")]
	[UnityEngine.Bindings.FreeFunction("ShadingRateInfo::GetAvailableFragmentSizes")]
	private static ShadingRateFragmentSize[] GetAvailableFragmentSizes()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600155F")]
	[Address(RVA = "0x69545D0", Offset = "0x69535D0", VA = "0x69545D0")]
	private static extern void GetImageTileSize_Injected(out Vector2Int ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001560")]
	[Address(RVA = "0x6954600", Offset = "0x6953600", VA = "0x6954600")]
	private static extern void GetAvailableFragmentSizes_Injected(out BlittableArrayWrapper ret);
}
