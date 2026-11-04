// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutStyleData
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x2000621")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/UIElements/Core/Layout/Native/LayoutModel.h")]
internal struct LayoutStyleData
{
	[Token(Token = "0x40016F0")]
	[FieldOffset(Offset = "0x0")]
	public static LayoutStyleData Default;

	[Token(Token = "0x40016F1")]
	[FieldOffset(Offset = "0x0")]
	public LayoutDirection Direction;

	[Token(Token = "0x40016F2")]
	[FieldOffset(Offset = "0x4")]
	public LayoutFlexDirection FlexDirection;

	[Token(Token = "0x40016F3")]
	[FieldOffset(Offset = "0x8")]
	public LayoutJustify JustifyContent;

	[Token(Token = "0x40016F4")]
	[FieldOffset(Offset = "0xC")]
	public LayoutAlign AlignContent;

	[Token(Token = "0x40016F5")]
	[FieldOffset(Offset = "0x10")]
	public LayoutAlign AlignItems;

	[Token(Token = "0x40016F6")]
	[FieldOffset(Offset = "0x14")]
	public LayoutAlign AlignSelf;

	[Token(Token = "0x40016F7")]
	[FieldOffset(Offset = "0x18")]
	public LayoutPositionType PositionType;

	[Token(Token = "0x40016F8")]
	[FieldOffset(Offset = "0x1C")]
	public float AspectRatio;

	[Token(Token = "0x40016F9")]
	[FieldOffset(Offset = "0x20")]
	public LayoutWrap FlexWrap;

	[Token(Token = "0x40016FA")]
	[FieldOffset(Offset = "0x24")]
	public LayoutOverflow Overflow;

	[Token(Token = "0x40016FB")]
	[FieldOffset(Offset = "0x28")]
	public LayoutDisplay Display;

	[Token(Token = "0x40016FC")]
	[FieldOffset(Offset = "0x2C")]
	public float FlexGrow;

	[Token(Token = "0x40016FD")]
	[FieldOffset(Offset = "0x30")]
	public float FlexShrink;

	[Token(Token = "0x40016FE")]
	[FieldOffset(Offset = "0x34")]
	public LayoutValue FlexBasis;

	[Token(Token = "0x40016FF")]
	[FieldOffset(Offset = "0x3C")]
	public FixedBuffer9<LayoutValue> border;

	[Token(Token = "0x4001700")]
	[FieldOffset(Offset = "0x84")]
	public FixedBuffer9<LayoutValue> position;

	[Token(Token = "0x4001701")]
	[FieldOffset(Offset = "0xCC")]
	public FixedBuffer9<LayoutValue> margin;

	[Token(Token = "0x4001702")]
	[FieldOffset(Offset = "0x114")]
	public FixedBuffer9<LayoutValue> padding;

	[Token(Token = "0x4001703")]
	[FieldOffset(Offset = "0x15C")]
	public FixedBuffer2<LayoutValue> maxDimensions;

	[Token(Token = "0x4001704")]
	[FieldOffset(Offset = "0x16C")]
	public FixedBuffer2<LayoutValue> minDimensions;

	[Token(Token = "0x4001705")]
	[FieldOffset(Offset = "0x17C")]
	public FixedBuffer2<LayoutValue> dimensions;
}
