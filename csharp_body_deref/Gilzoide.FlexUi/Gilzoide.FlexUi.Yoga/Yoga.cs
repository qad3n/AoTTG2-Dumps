// ==================== AoTTG2 cross-reference ====================
// Type: Gilzoide.FlexUi.Yoga.Yoga
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gilzoide/FlexUi/Yoga/Yoga.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3A26070", Offset = "0x3A26070", VA = "0x3A26070")]
	public static extern IntPtr YGConfigNew();

	[PreserveSig]
	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x3A26200", Offset = "0x3A26200", VA = "0x3A26200")]
	public static extern void YGConfigFree(IntPtr config);

	[PreserveSig]
	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x3A25FF0", Offset = "0x3A25FF0", VA = "0x3A25FF0")]
	public static extern IntPtr YGConfigGetDefault();

	[PreserveSig]
	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x3A26280", Offset = "0x3A26280", VA = "0x3A26280")]
	public static extern void YGConfigSetPointScaleFactor(IntPtr config, float enabled);

	[PreserveSig]
	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x3A26310", Offset = "0x3A26310", VA = "0x3A26310")]
	public static extern void YGConfigSetErrata(IntPtr config, Errata errata);

	[PreserveSig]
	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x3A26390", Offset = "0x3A26390", VA = "0x3A26390")]
	public static extern void YGConfigSetExperimentalFeatureEnabled(IntPtr config, ExperimentalFeature feature, bool enabled);

	[PreserveSig]
	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x3A26430", Offset = "0x3A26430", VA = "0x3A26430")]
	public static extern IntPtr YGNodeNew();

	[PreserveSig]
	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x3A275F0", Offset = "0x3A275F0", VA = "0x3A275F0")]
	public static extern void YGNodeFree(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x3A27670", Offset = "0x3A27670", VA = "0x3A27670")]
	public static extern void YGNodeCalculateLayout(IntPtr node, float availableWidth, float availableHeight, Direction ownerDirection);

	[PreserveSig]
	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x3A27710", Offset = "0x3A27710", VA = "0x3A27710")]
	public static extern string YGNodeInsertChild(IntPtr node, IntPtr child, int index);

	[PreserveSig]
	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x3A277C0", Offset = "0x3A277C0", VA = "0x3A277C0")]
	public static extern void YGNodeRemoveChild(IntPtr node, IntPtr child);

	[PreserveSig]
	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x3A27840", Offset = "0x3A27840", VA = "0x3A27840")]
	public static extern void YGNodeRemoveAllChildren(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x3A278C0", Offset = "0x3A278C0", VA = "0x3A278C0")]
	public static extern int YGNodeGetChildCount(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x3A27940", Offset = "0x3A27940", VA = "0x3A27940")]
	public static extern string YGNodeSetConfig(IntPtr node, IntPtr config);

	[PreserveSig]
	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x3A279E0", Offset = "0x3A279E0", VA = "0x3A279E0")]
	public static extern void YGNodeSetContext(IntPtr node, IntPtr context);

	[PreserveSig]
	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x3A27A60", Offset = "0x3A27A60", VA = "0x3A27A60")]
	public static extern IntPtr YGNodeGetContext(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x3A27BD0", Offset = "0x3A27BD0", VA = "0x3A27BD0")]
	public static extern void YGNodeSetMeasureFunc(IntPtr node, IntPtr measureFunc);

	[PreserveSig]
	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x3A27C50", Offset = "0x3A27C50", VA = "0x3A27C50")]
	public static extern bool YGNodeHasMeasureFunc(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x3A27CD0", Offset = "0x3A27CD0", VA = "0x3A27CD0")]
	public static extern void YGNodeSetDirty(IntPtr node);

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x3A27AF0", Offset = "0x3A27AF0", VA = "0x3A27AF0")]
	public static void YGNodeSetMeasureFunc(IntPtr node, YGMeasureFunc measureFunc)
	{
	}

	[PreserveSig]
	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x3A27D50", Offset = "0x3A27D50", VA = "0x3A27D50")]
	public static extern float YGNodeLayoutGetLeft(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x3A27DD0", Offset = "0x3A27DD0", VA = "0x3A27DD0")]
	public static extern float YGNodeLayoutGetTop(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x3A27E50", Offset = "0x3A27E50", VA = "0x3A27E50")]
	public static extern float YGNodeLayoutGetWidth(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x3A27ED0", Offset = "0x3A27ED0", VA = "0x3A27ED0")]
	public static extern float YGNodeLayoutGetHeight(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x3A27F50", Offset = "0x3A27F50", VA = "0x3A27F50")]
	public static extern void YGNodeStyleSetDirection(IntPtr node, Direction direction);

	[PreserveSig]
	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x3A27FD0", Offset = "0x3A27FD0", VA = "0x3A27FD0")]
	public static extern void YGNodeStyleSetFlexDirection(IntPtr node, FlexDirection flexDirection);

	[PreserveSig]
	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x3A28050", Offset = "0x3A28050", VA = "0x3A28050")]
	public static extern void YGNodeStyleSetJustifyContent(IntPtr node, Justify justifyContent);

	[PreserveSig]
	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x3A280D0", Offset = "0x3A280D0", VA = "0x3A280D0")]
	public static extern void YGNodeStyleSetAlignContent(IntPtr node, Align alignContent);

	[PreserveSig]
	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x3A28150", Offset = "0x3A28150", VA = "0x3A28150")]
	public static extern void YGNodeStyleSetAlignItems(IntPtr node, Align alignItems);

	[PreserveSig]
	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x3A281D0", Offset = "0x3A281D0", VA = "0x3A281D0")]
	public static extern void YGNodeStyleSetAlignSelf(IntPtr node, Align alignSelf);

	[PreserveSig]
	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x3A28250", Offset = "0x3A28250", VA = "0x3A28250")]
	public static extern void YGNodeStyleSetPositionType(IntPtr node, PositionType positionType);

	[PreserveSig]
	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x3A282D0", Offset = "0x3A282D0", VA = "0x3A282D0")]
	public static extern void YGNodeStyleSetFlexWrap(IntPtr node, Wrap flexWrap);

	[PreserveSig]
	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x3A28350", Offset = "0x3A28350", VA = "0x3A28350")]
	public static extern void YGNodeStyleSetFlexGrow(IntPtr node, float flexGrow);

	[PreserveSig]
	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x3A283E0", Offset = "0x3A283E0", VA = "0x3A283E0")]
	public static extern void YGNodeStyleSetFlexShrink(IntPtr node, float flexShrink);

	[PreserveSig]
	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x3A28470", Offset = "0x3A28470", VA = "0x3A28470")]
	public static extern void YGNodeStyleSetFlexBasis(IntPtr node, float flexBasis);

	[PreserveSig]
	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x3A28500", Offset = "0x3A28500", VA = "0x3A28500")]
	public static extern void YGNodeStyleSetFlexBasisPercent(IntPtr node, float flexBasis);

	[PreserveSig]
	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x3A28590", Offset = "0x3A28590", VA = "0x3A28590")]
	public static extern void YGNodeStyleSetFlexBasisAuto(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x3A28610", Offset = "0x3A28610", VA = "0x3A28610")]
	public static extern void YGNodeStyleSetPosition(IntPtr node, Edge edge, float position);

	[PreserveSig]
	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x3A286A0", Offset = "0x3A286A0", VA = "0x3A286A0")]
	public static extern void YGNodeStyleSetPositionPercent(IntPtr node, Edge edge, float position);

	[PreserveSig]
	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x3A28730", Offset = "0x3A28730", VA = "0x3A28730")]
	public static extern void YGNodeStyleSetMargin(IntPtr node, Edge edge, float margin);

	[PreserveSig]
	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x3A287C0", Offset = "0x3A287C0", VA = "0x3A287C0")]
	public static extern void YGNodeStyleSetMarginPercent(IntPtr node, Edge edge, float margin);

	[PreserveSig]
	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x3A28850", Offset = "0x3A28850", VA = "0x3A28850")]
	public static extern void YGNodeStyleSetMarginAuto(IntPtr node, Edge edge);

	[PreserveSig]
	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x3A288D0", Offset = "0x3A288D0", VA = "0x3A288D0")]
	public static extern void YGNodeStyleSetPadding(IntPtr node, Edge edge, float padding);

	[PreserveSig]
	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x3A28960", Offset = "0x3A28960", VA = "0x3A28960")]
	public static extern void YGNodeStyleSetPaddingPercent(IntPtr node, Edge edge, float padding);

	[PreserveSig]
	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x3A289F0", Offset = "0x3A289F0", VA = "0x3A289F0")]
	public static extern void YGNodeStyleSetGap(IntPtr node, Gutter gutter, float gapLength);

	[PreserveSig]
	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x3A28A80", Offset = "0x3A28A80", VA = "0x3A28A80")]
	public static extern void YGNodeStyleSetWidth(IntPtr node, float width);

	[PreserveSig]
	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x3A28B10", Offset = "0x3A28B10", VA = "0x3A28B10")]
	public static extern void YGNodeStyleSetWidthPercent(IntPtr node, float width);

	[PreserveSig]
	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x3A28BA0", Offset = "0x3A28BA0", VA = "0x3A28BA0")]
	public static extern void YGNodeStyleSetWidthAuto(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x3A28C20", Offset = "0x3A28C20", VA = "0x3A28C20")]
	public static extern void YGNodeStyleSetHeight(IntPtr node, float height);

	[PreserveSig]
	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x3A28CB0", Offset = "0x3A28CB0", VA = "0x3A28CB0")]
	public static extern void YGNodeStyleSetHeightPercent(IntPtr node, float height);

	[PreserveSig]
	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x3A28D40", Offset = "0x3A28D40", VA = "0x3A28D40")]
	public static extern void YGNodeStyleSetHeightAuto(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x3A28DC0", Offset = "0x3A28DC0", VA = "0x3A28DC0")]
	public static extern void YGNodeStyleSetMinWidth(IntPtr node, float minWidth);

	[PreserveSig]
	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x3A28E50", Offset = "0x3A28E50", VA = "0x3A28E50")]
	public static extern void YGNodeStyleSetMinWidthPercent(IntPtr node, float minWidth);

	[PreserveSig]
	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x3A28EE0", Offset = "0x3A28EE0", VA = "0x3A28EE0")]
	public static extern void YGNodeStyleSetMinHeight(IntPtr node, float minHeight);

	[PreserveSig]
	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x3A28F70", Offset = "0x3A28F70", VA = "0x3A28F70")]
	public static extern void YGNodeStyleSetMinHeightPercent(IntPtr node, float minHeight);

	[PreserveSig]
	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x3A29000", Offset = "0x3A29000", VA = "0x3A29000")]
	public static extern void YGNodeStyleSetMaxWidth(IntPtr node, float maxWidth);

	[PreserveSig]
	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x3A29090", Offset = "0x3A29090", VA = "0x3A29090")]
	public static extern void YGNodeStyleSetMaxWidthPercent(IntPtr node, float maxWidth);

	[PreserveSig]
	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x3A29120", Offset = "0x3A29120", VA = "0x3A29120")]
	public static extern void YGNodeStyleSetMaxHeight(IntPtr node, float maxHeight);

	[PreserveSig]
	[Token(Token = "0x6000100")]
	[Address(RVA = "0x3A291B0", Offset = "0x3A291B0", VA = "0x3A291B0")]
	public static extern void YGNodeStyleSetMaxHeightPercent(IntPtr node, float maxHeight);

	[PreserveSig]
	[Token(Token = "0x6000101")]
	[Address(RVA = "0x3A29240", Offset = "0x3A29240", VA = "0x3A29240")]
	public static extern void YGNodeStyleSetAspectRatio(IntPtr node, float aspectRatio);

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x3A29390", Offset = "0x3A29390", VA = "0x3A29390")]
	public Yoga()
	{
	}
}
