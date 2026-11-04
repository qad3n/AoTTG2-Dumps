// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutCacheData
// Update status: CHANGED in this game update
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
	[Address(RVA = "0x31BC850", Offset = "0x31BAE50", VA = "0x1831BC850", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002C68")]
	[Address(RVA = "0x31BC7D0", Offset = "0x31BADD0", VA = "0x1831BC7D0")]
	public readonly int MeasurementCacheCount()
	{
		return default(int);
	}

	[Token(Token = "0x6002C69")]
	[Address(RVA = "0x31BC6F0", Offset = "0x31BACF0", VA = "0x1831BC6F0")]
	public void ClearCachedMeasurements()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002C6A")]
	[Address(RVA = "0x31BC790", Offset = "0x31BAD90", VA = "0x1831BC790")]
	private unsafe static extern void ClearCachedMeasurements(void* LayoutCacheData);
}
