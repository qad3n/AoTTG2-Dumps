// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutCacheData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x2000502")]
internal struct LayoutCacheData
{
	[Token(Token = "0x40010AE")]
	[FieldOffset(Offset = "0x0")]
	public static LayoutCacheData Default;

	[Token(Token = "0x40010AF")]
	[FieldOffset(Offset = "0x0")]
	public uint NextCachedMeasurementsIndex;

	[Token(Token = "0x40010B0")]
	[FieldOffset(Offset = "0x4")]
	public FixedBuffer16<LayoutCachedMeasurement> cachedMeasurements;

	[Token(Token = "0x40010B1")]
	[FieldOffset(Offset = "0x204")]
	public LayoutCachedMeasurement CachedLayout;
}
