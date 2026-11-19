// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutCacheData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x20005F9")]
[UnityEngine.Bindings.NativeHeader("Modules/UIElements/Core/Layout/Native/LayoutNative.h")]
internal struct LayoutCacheData
{
	[Token(Token = "0x4001645")]
	[FieldOffset(Offset = "0x0")]
	public static LayoutCacheData Default;

	[Token(Token = "0x4001646")]
	[FieldOffset(Offset = "0x0")]
	public LayoutCachedMeasurement CachedLayout;

	[Token(Token = "0x6002C67")]
	[Address(RVA = "0x6BC3830", Offset = "0x6BC2830", VA = "0x6BC3830", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002C68")]
	[Address(RVA = "0x6BC39F0", Offset = "0x6BC29F0", VA = "0x6BC39F0")]
	public readonly int MeasurementCacheCount()
	{
		return default(int);
	}

	[Token(Token = "0x6002C69")]
	[Address(RVA = "0x6BC2650", Offset = "0x6BC1650", VA = "0x6BC2650")]
	public void ClearCachedMeasurements()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002C6A")]
	[Address(RVA = "0x6BC3A90", Offset = "0x6BC2A90", VA = "0x6BC3A90")]
	private unsafe static extern void ClearCachedMeasurements(void* LayoutCacheData);
}
