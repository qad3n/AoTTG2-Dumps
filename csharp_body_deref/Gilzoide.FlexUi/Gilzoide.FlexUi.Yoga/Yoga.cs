using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Gilzoide.FlexUi.Yoga;

[Token(Token = "0x200001E")]
public class Yoga
{
	[Token(Token = "0x200001F")]
	public delegate Vector2 YGMeasureFunc(IntPtr nodePtr, float width, MeasureMode widthMode, float height, MeasureMode heightMode);

	[Token(Token = "0x4000095")]
	private const string YogaDll = "flex-ui";

	[PreserveSig]
	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x39BCE20", Offset = "0x39BCE20", VA = "0x39BCE20")]
	public static extern IntPtr YGConfigNew();

	[PreserveSig]
	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x39BCFB0", Offset = "0x39BCFB0", VA = "0x39BCFB0")]
	public static extern void YGConfigFree(IntPtr config);

	[PreserveSig]
	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x39BCDA0", Offset = "0x39BCDA0", VA = "0x39BCDA0")]
	public static extern IntPtr YGConfigGetDefault();

	[PreserveSig]
	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x39BD030", Offset = "0x39BD030", VA = "0x39BD030")]
	public static extern void YGConfigSetPointScaleFactor(IntPtr config, float enabled);

	[PreserveSig]
	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x39BD0C0", Offset = "0x39BD0C0", VA = "0x39BD0C0")]
	public static extern void YGConfigSetErrata(IntPtr config, Errata errata);

	[PreserveSig]
	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x39BD140", Offset = "0x39BD140", VA = "0x39BD140")]
	public static extern void YGConfigSetExperimentalFeatureEnabled(IntPtr config, ExperimentalFeature feature, bool enabled);

	[PreserveSig]
	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x39BD1E0", Offset = "0x39BD1E0", VA = "0x39BD1E0")]
	public static extern IntPtr YGNodeNew();

	[PreserveSig]
	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x39BE3A0", Offset = "0x39BE3A0", VA = "0x39BE3A0")]
	public static extern void YGNodeFree(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x39BE420", Offset = "0x39BE420", VA = "0x39BE420")]
	public static extern void YGNodeCalculateLayout(IntPtr node, float availableWidth, float availableHeight, Direction ownerDirection);

	[PreserveSig]
	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x39BE4C0", Offset = "0x39BE4C0", VA = "0x39BE4C0")]
	public static extern string YGNodeInsertChild(IntPtr node, IntPtr child, int index);

	[PreserveSig]
	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x39BE570", Offset = "0x39BE570", VA = "0x39BE570")]
	public static extern void YGNodeRemoveChild(IntPtr node, IntPtr child);

	[PreserveSig]
	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x39BE5F0", Offset = "0x39BE5F0", VA = "0x39BE5F0")]
	public static extern void YGNodeRemoveAllChildren(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x39BE670", Offset = "0x39BE670", VA = "0x39BE670")]
	public static extern int YGNodeGetChildCount(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x39BE6F0", Offset = "0x39BE6F0", VA = "0x39BE6F0")]
	public static extern string YGNodeSetConfig(IntPtr node, IntPtr config);

	[PreserveSig]
	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x39BE790", Offset = "0x39BE790", VA = "0x39BE790")]
	public static extern void YGNodeSetContext(IntPtr node, IntPtr context);

	[PreserveSig]
	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x39BE810", Offset = "0x39BE810", VA = "0x39BE810")]
	public static extern IntPtr YGNodeGetContext(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x39BE980", Offset = "0x39BE980", VA = "0x39BE980")]
	public static extern void YGNodeSetMeasureFunc(IntPtr node, IntPtr measureFunc);

	[PreserveSig]
	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x39BEA00", Offset = "0x39BEA00", VA = "0x39BEA00")]
	public static extern bool YGNodeHasMeasureFunc(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x39BEA80", Offset = "0x39BEA80", VA = "0x39BEA80")]
	public static extern void YGNodeSetDirty(IntPtr node);

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x39BE8A0", Offset = "0x39BE8A0", VA = "0x39BE8A0")]
	public static void YGNodeSetMeasureFunc(IntPtr node, YGMeasureFunc measureFunc)
	{
	}

	[PreserveSig]
	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x39BEB00", Offset = "0x39BEB00", VA = "0x39BEB00")]
	public static extern float YGNodeLayoutGetLeft(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x39BEB80", Offset = "0x39BEB80", VA = "0x39BEB80")]
	public static extern float YGNodeLayoutGetTop(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x39BEC00", Offset = "0x39BEC00", VA = "0x39BEC00")]
	public static extern float YGNodeLayoutGetWidth(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x39BEC80", Offset = "0x39BEC80", VA = "0x39BEC80")]
	public static extern float YGNodeLayoutGetHeight(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x39BED00", Offset = "0x39BED00", VA = "0x39BED00")]
	public static extern void YGNodeStyleSetDirection(IntPtr node, Direction direction);

	[PreserveSig]
	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x39BED80", Offset = "0x39BED80", VA = "0x39BED80")]
	public static extern void YGNodeStyleSetFlexDirection(IntPtr node, FlexDirection flexDirection);

	[PreserveSig]
	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x39BEE00", Offset = "0x39BEE00", VA = "0x39BEE00")]
	public static extern void YGNodeStyleSetJustifyContent(IntPtr node, Justify justifyContent);

	[PreserveSig]
	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x39BEE80", Offset = "0x39BEE80", VA = "0x39BEE80")]
	public static extern void YGNodeStyleSetAlignContent(IntPtr node, Align alignContent);

	[PreserveSig]
	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x39BEF00", Offset = "0x39BEF00", VA = "0x39BEF00")]
	public static extern void YGNodeStyleSetAlignItems(IntPtr node, Align alignItems);

	[PreserveSig]
	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x39BEF80", Offset = "0x39BEF80", VA = "0x39BEF80")]
	public static extern void YGNodeStyleSetAlignSelf(IntPtr node, Align alignSelf);

	[PreserveSig]
	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x39BF000", Offset = "0x39BF000", VA = "0x39BF000")]
	public static extern void YGNodeStyleSetPositionType(IntPtr node, PositionType positionType);

	[PreserveSig]
	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x39BF080", Offset = "0x39BF080", VA = "0x39BF080")]
	public static extern void YGNodeStyleSetFlexWrap(IntPtr node, Wrap flexWrap);

	[PreserveSig]
	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x39BF100", Offset = "0x39BF100", VA = "0x39BF100")]
	public static extern void YGNodeStyleSetFlexGrow(IntPtr node, float flexGrow);

	[PreserveSig]
	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x39BF190", Offset = "0x39BF190", VA = "0x39BF190")]
	public static extern void YGNodeStyleSetFlexShrink(IntPtr node, float flexShrink);

	[PreserveSig]
	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x39BF220", Offset = "0x39BF220", VA = "0x39BF220")]
	public static extern void YGNodeStyleSetFlexBasis(IntPtr node, float flexBasis);

	[PreserveSig]
	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x39BF2B0", Offset = "0x39BF2B0", VA = "0x39BF2B0")]
	public static extern void YGNodeStyleSetFlexBasisPercent(IntPtr node, float flexBasis);

	[PreserveSig]
	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x39BF340", Offset = "0x39BF340", VA = "0x39BF340")]
	public static extern void YGNodeStyleSetFlexBasisAuto(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x39BF3C0", Offset = "0x39BF3C0", VA = "0x39BF3C0")]
	public static extern void YGNodeStyleSetPosition(IntPtr node, Edge edge, float position);

	[PreserveSig]
	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x39BF450", Offset = "0x39BF450", VA = "0x39BF450")]
	public static extern void YGNodeStyleSetPositionPercent(IntPtr node, Edge edge, float position);

	[PreserveSig]
	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x39BF4E0", Offset = "0x39BF4E0", VA = "0x39BF4E0")]
	public static extern void YGNodeStyleSetMargin(IntPtr node, Edge edge, float margin);

	[PreserveSig]
	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x39BF570", Offset = "0x39BF570", VA = "0x39BF570")]
	public static extern void YGNodeStyleSetMarginPercent(IntPtr node, Edge edge, float margin);

	[PreserveSig]
	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x39BF600", Offset = "0x39BF600", VA = "0x39BF600")]
	public static extern void YGNodeStyleSetMarginAuto(IntPtr node, Edge edge);

	[PreserveSig]
	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x39BF680", Offset = "0x39BF680", VA = "0x39BF680")]
	public static extern void YGNodeStyleSetPadding(IntPtr node, Edge edge, float padding);

	[PreserveSig]
	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x39BF710", Offset = "0x39BF710", VA = "0x39BF710")]
	public static extern void YGNodeStyleSetPaddingPercent(IntPtr node, Edge edge, float padding);

	[PreserveSig]
	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x39BF7A0", Offset = "0x39BF7A0", VA = "0x39BF7A0")]
	public static extern void YGNodeStyleSetGap(IntPtr node, Gutter gutter, float gapLength);

	[PreserveSig]
	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x39BF830", Offset = "0x39BF830", VA = "0x39BF830")]
	public static extern void YGNodeStyleSetWidth(IntPtr node, float width);

	[PreserveSig]
	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x39BF8C0", Offset = "0x39BF8C0", VA = "0x39BF8C0")]
	public static extern void YGNodeStyleSetWidthPercent(IntPtr node, float width);

	[PreserveSig]
	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x39BF950", Offset = "0x39BF950", VA = "0x39BF950")]
	public static extern void YGNodeStyleSetWidthAuto(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x39BF9D0", Offset = "0x39BF9D0", VA = "0x39BF9D0")]
	public static extern void YGNodeStyleSetHeight(IntPtr node, float height);

	[PreserveSig]
	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x39BFA60", Offset = "0x39BFA60", VA = "0x39BFA60")]
	public static extern void YGNodeStyleSetHeightPercent(IntPtr node, float height);

	[PreserveSig]
	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x39BFAF0", Offset = "0x39BFAF0", VA = "0x39BFAF0")]
	public static extern void YGNodeStyleSetHeightAuto(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x39BFB70", Offset = "0x39BFB70", VA = "0x39BFB70")]
	public static extern void YGNodeStyleSetMinWidth(IntPtr node, float minWidth);

	[PreserveSig]
	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x39BFC00", Offset = "0x39BFC00", VA = "0x39BFC00")]
	public static extern void YGNodeStyleSetMinWidthPercent(IntPtr node, float minWidth);

	[PreserveSig]
	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x39BFC90", Offset = "0x39BFC90", VA = "0x39BFC90")]
	public static extern void YGNodeStyleSetMinHeight(IntPtr node, float minHeight);

	[PreserveSig]
	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x39BFD20", Offset = "0x39BFD20", VA = "0x39BFD20")]
	public static extern void YGNodeStyleSetMinHeightPercent(IntPtr node, float minHeight);

	[PreserveSig]
	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x39BFDB0", Offset = "0x39BFDB0", VA = "0x39BFDB0")]
	public static extern void YGNodeStyleSetMaxWidth(IntPtr node, float maxWidth);

	[PreserveSig]
	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x39BFE40", Offset = "0x39BFE40", VA = "0x39BFE40")]
	public static extern void YGNodeStyleSetMaxWidthPercent(IntPtr node, float maxWidth);

	[PreserveSig]
	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x39BFED0", Offset = "0x39BFED0", VA = "0x39BFED0")]
	public static extern void YGNodeStyleSetMaxHeight(IntPtr node, float maxHeight);

	[PreserveSig]
	[Token(Token = "0x6000100")]
	[Address(RVA = "0x39BFF60", Offset = "0x39BFF60", VA = "0x39BFF60")]
	public static extern void YGNodeStyleSetMaxHeightPercent(IntPtr node, float maxHeight);

	[PreserveSig]
	[Token(Token = "0x6000101")]
	[Address(RVA = "0x39BFFF0", Offset = "0x39BFFF0", VA = "0x39BFFF0")]
	public static extern void YGNodeStyleSetAspectRatio(IntPtr node, float aspectRatio);

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x39C0140", Offset = "0x39C0140", VA = "0x39C0140")]
	public Yoga()
	{
	}
}
