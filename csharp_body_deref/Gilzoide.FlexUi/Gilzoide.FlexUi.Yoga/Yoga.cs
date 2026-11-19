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

[Token(Token = "0x200001C")]
public class Yoga
{
	[Token(Token = "0x200001D")]
	public delegate Vector2 YGMeasureFunc(IntPtr nodePtr, float width, MeasureMode widthMode, float height, MeasureMode heightMode);

	[Token(Token = "0x4000090")]
	private const string YogaDll = "flex-ui";

	[PreserveSig]
	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x5216A10", Offset = "0x5215A10", VA = "0x5216A10")]
	public static extern IntPtr YGConfigNew();

	[PreserveSig]
	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x5216BA0", Offset = "0x5215BA0", VA = "0x5216BA0")]
	public static extern void YGConfigFree(IntPtr config);

	[PreserveSig]
	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x5216990", Offset = "0x5215990", VA = "0x5216990")]
	public static extern IntPtr YGConfigGetDefault();

	[PreserveSig]
	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x5216C20", Offset = "0x5215C20", VA = "0x5216C20")]
	public static extern void YGConfigSetPointScaleFactor(IntPtr config, float enabled);

	[PreserveSig]
	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x5216CB0", Offset = "0x5215CB0", VA = "0x5216CB0")]
	public static extern void YGConfigSetErrata(IntPtr config, Errata errata);

	[PreserveSig]
	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x5216D30", Offset = "0x5215D30", VA = "0x5216D30")]
	public static extern void YGConfigSetExperimentalFeatureEnabled(IntPtr config, ExperimentalFeature feature, bool enabled);

	[PreserveSig]
	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x5216DD0", Offset = "0x5215DD0", VA = "0x5216DD0")]
	public static extern IntPtr YGNodeNew();

	[PreserveSig]
	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x5217F90", Offset = "0x5216F90", VA = "0x5217F90")]
	public static extern void YGNodeFree(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x5218010", Offset = "0x5217010", VA = "0x5218010")]
	public static extern void YGNodeCalculateLayout(IntPtr node, float availableWidth, float availableHeight, Direction ownerDirection);

	[PreserveSig]
	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x52180B0", Offset = "0x52170B0", VA = "0x52180B0")]
	public static extern string YGNodeInsertChild(IntPtr node, IntPtr child, int index);

	[PreserveSig]
	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x5218160", Offset = "0x5217160", VA = "0x5218160")]
	public static extern void YGNodeRemoveChild(IntPtr node, IntPtr child);

	[PreserveSig]
	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x52181E0", Offset = "0x52171E0", VA = "0x52181E0")]
	public static extern void YGNodeRemoveAllChildren(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x5218260", Offset = "0x5217260", VA = "0x5218260")]
	public static extern int YGNodeGetChildCount(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x52182E0", Offset = "0x52172E0", VA = "0x52182E0")]
	public static extern string YGNodeSetConfig(IntPtr node, IntPtr config);

	[PreserveSig]
	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x5218380", Offset = "0x5217380", VA = "0x5218380")]
	public static extern void YGNodeSetContext(IntPtr node, IntPtr context);

	[PreserveSig]
	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x5218400", Offset = "0x5217400", VA = "0x5218400")]
	public static extern IntPtr YGNodeGetContext(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x5218570", Offset = "0x5217570", VA = "0x5218570")]
	public static extern void YGNodeSetMeasureFunc(IntPtr node, IntPtr measureFunc);

	[PreserveSig]
	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x52185F0", Offset = "0x52175F0", VA = "0x52185F0")]
	public static extern bool YGNodeHasMeasureFunc(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x5218670", Offset = "0x5217670", VA = "0x5218670")]
	public static extern void YGNodeSetDirty(IntPtr node);

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x5218490", Offset = "0x5217490", VA = "0x5218490")]
	public static void YGNodeSetMeasureFunc(IntPtr node, YGMeasureFunc measureFunc)
	{
	}

	[PreserveSig]
	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x52186F0", Offset = "0x52176F0", VA = "0x52186F0")]
	public static extern float YGNodeLayoutGetLeft(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x5218770", Offset = "0x5217770", VA = "0x5218770")]
	public static extern float YGNodeLayoutGetTop(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x52187F0", Offset = "0x52177F0", VA = "0x52187F0")]
	public static extern float YGNodeLayoutGetWidth(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x5218870", Offset = "0x5217870", VA = "0x5218870")]
	public static extern float YGNodeLayoutGetHeight(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x52188F0", Offset = "0x52178F0", VA = "0x52188F0")]
	public static extern void YGNodeStyleSetDirection(IntPtr node, Direction direction);

	[PreserveSig]
	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x5218970", Offset = "0x5217970", VA = "0x5218970")]
	public static extern void YGNodeStyleSetFlexDirection(IntPtr node, FlexDirection flexDirection);

	[PreserveSig]
	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x52189F0", Offset = "0x52179F0", VA = "0x52189F0")]
	public static extern void YGNodeStyleSetJustifyContent(IntPtr node, Justify justifyContent);

	[PreserveSig]
	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x5218A70", Offset = "0x5217A70", VA = "0x5218A70")]
	public static extern void YGNodeStyleSetAlignContent(IntPtr node, Align alignContent);

	[PreserveSig]
	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x5218AF0", Offset = "0x5217AF0", VA = "0x5218AF0")]
	public static extern void YGNodeStyleSetAlignItems(IntPtr node, Align alignItems);

	[PreserveSig]
	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x5218B70", Offset = "0x5217B70", VA = "0x5218B70")]
	public static extern void YGNodeStyleSetAlignSelf(IntPtr node, Align alignSelf);

	[PreserveSig]
	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x5218BF0", Offset = "0x5217BF0", VA = "0x5218BF0")]
	public static extern void YGNodeStyleSetPositionType(IntPtr node, PositionType positionType);

	[PreserveSig]
	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x5218C70", Offset = "0x5217C70", VA = "0x5218C70")]
	public static extern void YGNodeStyleSetFlexWrap(IntPtr node, Wrap flexWrap);

	[PreserveSig]
	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x5218CF0", Offset = "0x5217CF0", VA = "0x5218CF0")]
	public static extern void YGNodeStyleSetFlexGrow(IntPtr node, float flexGrow);

	[PreserveSig]
	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x5218D80", Offset = "0x5217D80", VA = "0x5218D80")]
	public static extern void YGNodeStyleSetFlexShrink(IntPtr node, float flexShrink);

	[PreserveSig]
	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x5218E10", Offset = "0x5217E10", VA = "0x5218E10")]
	public static extern void YGNodeStyleSetFlexBasis(IntPtr node, float flexBasis);

	[PreserveSig]
	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x5218EA0", Offset = "0x5217EA0", VA = "0x5218EA0")]
	public static extern void YGNodeStyleSetFlexBasisPercent(IntPtr node, float flexBasis);

	[PreserveSig]
	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x5218F30", Offset = "0x5217F30", VA = "0x5218F30")]
	public static extern void YGNodeStyleSetFlexBasisAuto(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x5218FB0", Offset = "0x5217FB0", VA = "0x5218FB0")]
	public static extern void YGNodeStyleSetPosition(IntPtr node, Edge edge, float position);

	[PreserveSig]
	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x5219040", Offset = "0x5218040", VA = "0x5219040")]
	public static extern void YGNodeStyleSetPositionPercent(IntPtr node, Edge edge, float position);

	[PreserveSig]
	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x52190D0", Offset = "0x52180D0", VA = "0x52190D0")]
	public static extern void YGNodeStyleSetMargin(IntPtr node, Edge edge, float margin);

	[PreserveSig]
	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x5219160", Offset = "0x5218160", VA = "0x5219160")]
	public static extern void YGNodeStyleSetMarginPercent(IntPtr node, Edge edge, float margin);

	[PreserveSig]
	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x52191F0", Offset = "0x52181F0", VA = "0x52191F0")]
	public static extern void YGNodeStyleSetMarginAuto(IntPtr node, Edge edge);

	[PreserveSig]
	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x5219270", Offset = "0x5218270", VA = "0x5219270")]
	public static extern void YGNodeStyleSetPadding(IntPtr node, Edge edge, float padding);

	[PreserveSig]
	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x5219300", Offset = "0x5218300", VA = "0x5219300")]
	public static extern void YGNodeStyleSetPaddingPercent(IntPtr node, Edge edge, float padding);

	[PreserveSig]
	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x5219390", Offset = "0x5218390", VA = "0x5219390")]
	public static extern void YGNodeStyleSetGap(IntPtr node, Gutter gutter, float gapLength);

	[PreserveSig]
	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x5219420", Offset = "0x5218420", VA = "0x5219420")]
	public static extern void YGNodeStyleSetWidth(IntPtr node, float width);

	[PreserveSig]
	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x52194B0", Offset = "0x52184B0", VA = "0x52194B0")]
	public static extern void YGNodeStyleSetWidthPercent(IntPtr node, float width);

	[PreserveSig]
	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x5219540", Offset = "0x5218540", VA = "0x5219540")]
	public static extern void YGNodeStyleSetWidthAuto(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x52195C0", Offset = "0x52185C0", VA = "0x52195C0")]
	public static extern void YGNodeStyleSetHeight(IntPtr node, float height);

	[PreserveSig]
	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x5219650", Offset = "0x5218650", VA = "0x5219650")]
	public static extern void YGNodeStyleSetHeightPercent(IntPtr node, float height);

	[PreserveSig]
	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x52196E0", Offset = "0x52186E0", VA = "0x52196E0")]
	public static extern void YGNodeStyleSetHeightAuto(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x5219760", Offset = "0x5218760", VA = "0x5219760")]
	public static extern void YGNodeStyleSetMinWidth(IntPtr node, float minWidth);

	[PreserveSig]
	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x52197F0", Offset = "0x52187F0", VA = "0x52197F0")]
	public static extern void YGNodeStyleSetMinWidthPercent(IntPtr node, float minWidth);

	[PreserveSig]
	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x5219880", Offset = "0x5218880", VA = "0x5219880")]
	public static extern void YGNodeStyleSetMinHeight(IntPtr node, float minHeight);

	[PreserveSig]
	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x5219910", Offset = "0x5218910", VA = "0x5219910")]
	public static extern void YGNodeStyleSetMinHeightPercent(IntPtr node, float minHeight);

	[PreserveSig]
	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x52199A0", Offset = "0x52189A0", VA = "0x52199A0")]
	public static extern void YGNodeStyleSetMaxWidth(IntPtr node, float maxWidth);

	[PreserveSig]
	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x5219A30", Offset = "0x5218A30", VA = "0x5219A30")]
	public static extern void YGNodeStyleSetMaxWidthPercent(IntPtr node, float maxWidth);

	[PreserveSig]
	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x5219AC0", Offset = "0x5218AC0", VA = "0x5219AC0")]
	public static extern void YGNodeStyleSetMaxHeight(IntPtr node, float maxHeight);

	[PreserveSig]
	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x5219B50", Offset = "0x5218B50", VA = "0x5219B50")]
	public static extern void YGNodeStyleSetMaxHeightPercent(IntPtr node, float maxHeight);

	[PreserveSig]
	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x5219BE0", Offset = "0x5218BE0", VA = "0x5219BE0")]
	public static extern void YGNodeStyleSetAspectRatio(IntPtr node, float aspectRatio);

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x5219D30", Offset = "0x5218D30", VA = "0x5219D30")]
	public Yoga()
	{
	}
}
