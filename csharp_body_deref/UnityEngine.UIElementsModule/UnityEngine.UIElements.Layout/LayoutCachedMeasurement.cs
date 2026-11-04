// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutCachedMeasurement
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x20005FA")]
internal struct LayoutCachedMeasurement
{
	[Token(Token = "0x4001647")]
	[FieldOffset(Offset = "0x0")]
	public static LayoutCachedMeasurement Default;

	[Token(Token = "0x4001648")]
	[FieldOffset(Offset = "0x0")]
	public float AvailableWidth;

	[Token(Token = "0x4001649")]
	[FieldOffset(Offset = "0x4")]
	public float AvailableHeight;

	[Token(Token = "0x400164A")]
	[FieldOffset(Offset = "0x8")]
	public float ParentWidth;

	[Token(Token = "0x400164B")]
	[FieldOffset(Offset = "0xC")]
	public float ParentHeight;

	[Token(Token = "0x400164C")]
	[FieldOffset(Offset = "0x10")]
	public LayoutMeasureMode WidthMeasureMode;

	[Token(Token = "0x400164D")]
	[FieldOffset(Offset = "0x14")]
	public LayoutMeasureMode HeightMeasureMode;

	[Token(Token = "0x400164E")]
	[FieldOffset(Offset = "0x18")]
	public float ComputedWidth;

	[Token(Token = "0x400164F")]
	[FieldOffset(Offset = "0x1C")]
	public float ComputedHeight;

	[Token(Token = "0x4001650")]
	[FieldOffset(Offset = "0x20")]
	private unsafe void* m_NextMeasurementCachePtr;

	[Token(Token = "0x17000AFC")]
	public unsafe LayoutCachedMeasurement* NextMeasurementCache
	{
		[Token(Token = "0x6002C6C")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			//IL_0002: Expected I, but got O
			return (LayoutCachedMeasurement*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x6002C6D")]
	[Address(RVA = "0x31BC9C0", Offset = "0x31BAFC0", VA = "0x1831BC9C0", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}
}
