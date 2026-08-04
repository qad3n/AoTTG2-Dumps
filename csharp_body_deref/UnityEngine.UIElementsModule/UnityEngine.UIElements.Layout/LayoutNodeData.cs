// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutNodeData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x2000512")]
internal struct LayoutNodeData
{
	[Token(Token = "0x40010E3")]
	[FieldOffset(Offset = "0x0")]
	public FixedBuffer2<LayoutValue> ResolvedDimensions;

	[Token(Token = "0x40010E4")]
	[FieldOffset(Offset = "0x10")]
	public bool IsDirty;

	[Token(Token = "0x40010E5")]
	[FieldOffset(Offset = "0x11")]
	public bool HasNewLayout;

	[Token(Token = "0x40010E6")]
	[FieldOffset(Offset = "0x14")]
	public int ManagedMeasureFunctionIndex;

	[Token(Token = "0x40010E7")]
	[FieldOffset(Offset = "0x18")]
	public int ManagedBaselineFunctionIndex;

	[Token(Token = "0x40010E8")]
	[FieldOffset(Offset = "0x1C")]
	public int ManagedOwnerIndex;

	[Token(Token = "0x40010E9")]
	[FieldOffset(Offset = "0x20")]
	public int LineIndex;

	[Token(Token = "0x40010EA")]
	[FieldOffset(Offset = "0x24")]
	public LayoutHandle Config;

	[Token(Token = "0x40010EB")]
	[FieldOffset(Offset = "0x2C")]
	public LayoutHandle Parent;

	[Token(Token = "0x40010EC")]
	[FieldOffset(Offset = "0x34")]
	public LayoutHandle NextChild;

	[Token(Token = "0x40010ED")]
	[FieldOffset(Offset = "0x40")]
	public LayoutList<LayoutHandle> Children;
}
