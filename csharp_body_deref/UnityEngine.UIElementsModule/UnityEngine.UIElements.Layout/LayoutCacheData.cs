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
