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
	[Address(RVA = "0x1880BA0", Offset = "0x187F1A0", VA = "0x181880BA0")]
	public static extern IntPtr YGConfigNew();

	[PreserveSig]
	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x1880B20", Offset = "0x187F120", VA = "0x181880B20")]
	public static extern void YGConfigFree(IntPtr config);

	[PreserveSig]
	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x187DF70", Offset = "0x187C570", VA = "0x18187DF70")]
	public static extern IntPtr YGConfigGetDefault();

	[PreserveSig]
	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x1880D40", Offset = "0x187F340", VA = "0x181880D40")]
	public static extern void YGConfigSetPointScaleFactor(IntPtr config, float enabled);

	[PreserveSig]
	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x1880C10", Offset = "0x187F210", VA = "0x181880C10")]
	public static extern void YGConfigSetErrata(IntPtr config, Errata errata);

	[PreserveSig]
	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x1880CA0", Offset = "0x187F2A0", VA = "0x181880CA0")]
	public static extern void YGConfigSetExperimentalFeatureEnabled(IntPtr config, ExperimentalFeature feature, bool enabled);

	[PreserveSig]
	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x1881330", Offset = "0x187F930", VA = "0x181881330")]
	public static extern IntPtr YGNodeNew();

	[PreserveSig]
	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x1880E80", Offset = "0x187F480", VA = "0x181880E80")]
	public static extern void YGNodeFree(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x1880DD0", Offset = "0x187F3D0", VA = "0x181880DD0")]
	public static extern void YGNodeCalculateLayout(IntPtr node, float availableWidth, float availableHeight, Direction ownerDirection);

	[PreserveSig]
	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x1881080", Offset = "0x187F680", VA = "0x181881080")]
	public static extern string YGNodeInsertChild(IntPtr node, IntPtr child, int index);

	[PreserveSig]
	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x1881420", Offset = "0x187FA20", VA = "0x181881420")]
	public static extern void YGNodeRemoveChild(IntPtr node, IntPtr child);

	[PreserveSig]
	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x18813A0", Offset = "0x187F9A0", VA = "0x1818813A0")]
	public static extern void YGNodeRemoveAllChildren(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x1880F00", Offset = "0x187F500", VA = "0x181880F00")]
	public static extern int YGNodeGetChildCount(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x18814B0", Offset = "0x187FAB0", VA = "0x1818814B0")]
	public static extern string YGNodeSetConfig(IntPtr node, IntPtr config);

	[PreserveSig]
	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x1881550", Offset = "0x187FB50", VA = "0x181881550")]
	public static extern void YGNodeSetContext(IntPtr node, IntPtr context);

	[PreserveSig]
	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x1880F80", Offset = "0x187F580", VA = "0x181880F80")]
	public static extern IntPtr YGNodeGetContext(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x18816E0", Offset = "0x187FCE0", VA = "0x1818816E0")]
	public static extern void YGNodeSetMeasureFunc(IntPtr node, IntPtr measureFunc);

	[PreserveSig]
	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x1881000", Offset = "0x187F600", VA = "0x181881000")]
	public static extern bool YGNodeHasMeasureFunc(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x18815E0", Offset = "0x187FBE0", VA = "0x1818815E0")]
	public static extern void YGNodeSetDirty(IntPtr node);

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x1881660", Offset = "0x187FC60", VA = "0x181881660")]
	public static void YGNodeSetMeasureFunc(IntPtr node, YGMeasureFunc measureFunc)
	{
	}

	[PreserveSig]
	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x18811B0", Offset = "0x187F7B0", VA = "0x1818811B0")]
	public static extern float YGNodeLayoutGetLeft(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x1881230", Offset = "0x187F830", VA = "0x181881230")]
	public static extern float YGNodeLayoutGetTop(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x18812B0", Offset = "0x187F8B0", VA = "0x1818812B0")]
	public static extern float YGNodeLayoutGetWidth(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x1881130", Offset = "0x187F730", VA = "0x181881130")]
	public static extern float YGNodeLayoutGetHeight(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x18819B0", Offset = "0x187FFB0", VA = "0x1818819B0")]
	public static extern void YGNodeStyleSetDirection(IntPtr node, Direction direction);

	[PreserveSig]
	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x1881BE0", Offset = "0x18801E0", VA = "0x181881BE0")]
	public static extern void YGNodeStyleSetFlexDirection(IntPtr node, FlexDirection flexDirection);

	[PreserveSig]
	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x1882060", Offset = "0x1880660", VA = "0x181882060")]
	public static extern void YGNodeStyleSetJustifyContent(IntPtr node, Justify justifyContent);

	[PreserveSig]
	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x1881770", Offset = "0x187FD70", VA = "0x181881770")]
	public static extern void YGNodeStyleSetAlignContent(IntPtr node, Align alignContent);

	[PreserveSig]
	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x1881800", Offset = "0x187FE00", VA = "0x181881800")]
	public static extern void YGNodeStyleSetAlignItems(IntPtr node, Align alignItems);

	[PreserveSig]
	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x1881890", Offset = "0x187FE90", VA = "0x181881890")]
	public static extern void YGNodeStyleSetAlignSelf(IntPtr node, Align alignSelf);

	[PreserveSig]
	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x1882920", Offset = "0x1880F20", VA = "0x181882920")]
	public static extern void YGNodeStyleSetPositionType(IntPtr node, PositionType positionType);

	[PreserveSig]
	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x1881D90", Offset = "0x1880390", VA = "0x181881D90")]
	public static extern void YGNodeStyleSetFlexWrap(IntPtr node, Wrap flexWrap);

	[PreserveSig]
	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x1881C70", Offset = "0x1880270", VA = "0x181881C70")]
	public static extern void YGNodeStyleSetFlexGrow(IntPtr node, float flexGrow);

	[PreserveSig]
	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x1881D00", Offset = "0x1880300", VA = "0x181881D00")]
	public static extern void YGNodeStyleSetFlexShrink(IntPtr node, float flexShrink);

	[PreserveSig]
	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x1881B50", Offset = "0x1880150", VA = "0x181881B50")]
	public static extern void YGNodeStyleSetFlexBasis(IntPtr node, float flexBasis);

	[PreserveSig]
	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x1881AC0", Offset = "0x18800C0", VA = "0x181881AC0")]
	public static extern void YGNodeStyleSetFlexBasisPercent(IntPtr node, float flexBasis);

	[PreserveSig]
	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x1881A40", Offset = "0x1880040", VA = "0x181881A40")]
	public static extern void YGNodeStyleSetFlexBasisAuto(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x18829B0", Offset = "0x1880FB0", VA = "0x1818829B0")]
	public static extern void YGNodeStyleSetPosition(IntPtr node, Edge edge, float position);

	[PreserveSig]
	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x1882880", Offset = "0x1880E80", VA = "0x181882880")]
	public static extern void YGNodeStyleSetPositionPercent(IntPtr node, Edge edge, float position);

	[PreserveSig]
	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x1882220", Offset = "0x1880820", VA = "0x181882220")]
	public static extern void YGNodeStyleSetMargin(IntPtr node, Edge edge, float margin);

	[PreserveSig]
	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x1882180", Offset = "0x1880780", VA = "0x181882180")]
	public static extern void YGNodeStyleSetMarginPercent(IntPtr node, Edge edge, float margin);

	[PreserveSig]
	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x18820F0", Offset = "0x18806F0", VA = "0x1818820F0")]
	public static extern void YGNodeStyleSetMarginAuto(IntPtr node, Edge edge);

	[PreserveSig]
	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x18827E0", Offset = "0x1880DE0", VA = "0x1818827E0")]
	public static extern void YGNodeStyleSetPadding(IntPtr node, Edge edge, float padding);

	[PreserveSig]
	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x1882740", Offset = "0x1880D40", VA = "0x181882740")]
	public static extern void YGNodeStyleSetPaddingPercent(IntPtr node, Edge edge, float padding);

	[PreserveSig]
	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x1881E20", Offset = "0x1880420", VA = "0x181881E20")]
	public static extern void YGNodeStyleSetGap(IntPtr node, Gutter gutter, float gapLength);

	[PreserveSig]
	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x1882B60", Offset = "0x1881160", VA = "0x181882B60")]
	public static extern void YGNodeStyleSetWidth(IntPtr node, float width);

	[PreserveSig]
	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x1882AD0", Offset = "0x18810D0", VA = "0x181882AD0")]
	public static extern void YGNodeStyleSetWidthPercent(IntPtr node, float width);

	[PreserveSig]
	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x1882A50", Offset = "0x1881050", VA = "0x181882A50")]
	public static extern void YGNodeStyleSetWidthAuto(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x1881FD0", Offset = "0x18805D0", VA = "0x181881FD0")]
	public static extern void YGNodeStyleSetHeight(IntPtr node, float height);

	[PreserveSig]
	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x1881F40", Offset = "0x1880540", VA = "0x181881F40")]
	public static extern void YGNodeStyleSetHeightPercent(IntPtr node, float height);

	[PreserveSig]
	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x1881EC0", Offset = "0x18804C0", VA = "0x181881EC0")]
	public static extern void YGNodeStyleSetHeightAuto(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x18826B0", Offset = "0x1880CB0", VA = "0x1818826B0")]
	public static extern void YGNodeStyleSetMinWidth(IntPtr node, float minWidth);

	[PreserveSig]
	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x1882620", Offset = "0x1880C20", VA = "0x181882620")]
	public static extern void YGNodeStyleSetMinWidthPercent(IntPtr node, float minWidth);

	[PreserveSig]
	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x1882590", Offset = "0x1880B90", VA = "0x181882590")]
	public static extern void YGNodeStyleSetMinHeight(IntPtr node, float minHeight);

	[PreserveSig]
	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x1882500", Offset = "0x1880B00", VA = "0x181882500")]
	public static extern void YGNodeStyleSetMinHeightPercent(IntPtr node, float minHeight);

	[PreserveSig]
	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x1882470", Offset = "0x1880A70", VA = "0x181882470")]
	public static extern void YGNodeStyleSetMaxWidth(IntPtr node, float maxWidth);

	[PreserveSig]
	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x18823E0", Offset = "0x18809E0", VA = "0x1818823E0")]
	public static extern void YGNodeStyleSetMaxWidthPercent(IntPtr node, float maxWidth);

	[PreserveSig]
	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x1882350", Offset = "0x1880950", VA = "0x181882350")]
	public static extern void YGNodeStyleSetMaxHeight(IntPtr node, float maxHeight);

	[PreserveSig]
	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x18822C0", Offset = "0x18808C0", VA = "0x1818822C0")]
	public static extern void YGNodeStyleSetMaxHeightPercent(IntPtr node, float maxHeight);

	[PreserveSig]
	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x1881920", Offset = "0x187FF20", VA = "0x181881920")]
	public static extern void YGNodeStyleSetAspectRatio(IntPtr node, float aspectRatio);

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public Yoga()
	{
	}
}
