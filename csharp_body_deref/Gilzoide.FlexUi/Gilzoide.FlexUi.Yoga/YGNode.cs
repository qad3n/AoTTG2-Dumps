// ==================== AoTTG2 cross-reference ====================
// Type: Gilzoide.FlexUi.Yoga.YGNode
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Gilzoide.FlexUi.Yoga;

[Token(Token = "0x200001C")]
public struct YGNode : IDisposable, IEquatable<YGNode>
{
	[Token(Token = "0x400008F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal IntPtr _nodePtr;

	[Token(Token = "0x1700002D")]
	public bool IsNull
	{
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x3A224A0", Offset = "0x3A224A0", VA = "0x3A224A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x3A26420", Offset = "0x3A26420", VA = "0x3A26420")]
	internal YGNode(IntPtr nodePtr)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x3A224B0", Offset = "0x3A224B0", VA = "0x3A224B0")]
	public void Instantiate()
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x3A239C0", Offset = "0x3A239C0", VA = "0x3A239C0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x3A24310", Offset = "0x3A24310", VA = "0x3A24310")]
	public void ApplyTo(RectTransform rectTransform)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x3A26800", Offset = "0x3A26800", VA = "0x3A26800", Slot = "5")]
	public bool Equals(YGNode other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x3A1EA90", Offset = "0x3A1EA90", VA = "0x3A1EA90")]
	public void StyleSetPosition(Edge edge, YGValue value)
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x3A20350", Offset = "0x3A20350", VA = "0x3A20350")]
	public void StyleSetWidth(YGValue value)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x3A20650", Offset = "0x3A20650", VA = "0x3A20650")]
	public void StyleSetHeight(YGValue value)
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x3A20950", Offset = "0x3A20950", VA = "0x3A20950")]
	public void StyleSetMinWidth(YGValue value)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x3A20F10", Offset = "0x3A20F10", VA = "0x3A20F10")]
	public void StyleSetMaxWidth(YGValue value)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x3A20C30", Offset = "0x3A20C30", VA = "0x3A20C30")]
	public void StyleSetMinHeight(YGValue value)
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x3A211F0", Offset = "0x3A211F0", VA = "0x3A211F0")]
	public void StyleSetMaxHeight(YGValue value)
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x3A1F590", Offset = "0x3A1F590", VA = "0x3A1F590")]
	public void StyleSetFlexBasis(YGValue value)
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x3A216C0", Offset = "0x3A216C0", VA = "0x3A216C0")]
	public void StyleSetMargin(Edge edge, YGValue value)
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x3A21C90", Offset = "0x3A21C90", VA = "0x3A21C90")]
	public void StyleSetPadding(Edge edge, YGValue value)
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x3A264B0", Offset = "0x3A264B0", VA = "0x3A264B0")]
	public void Free()
	{
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x3A24270", Offset = "0x3A24270", VA = "0x3A24270")]
	public void CalculateLayout(float availableWidth, float availableHeight, Direction ownerDirection)
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x3A24A30", Offset = "0x3A24A30", VA = "0x3A24A30")]
	public bool InsertChild(YGNode child, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x3A24BA0", Offset = "0x3A24BA0", VA = "0x3A24BA0")]
	public void RemoveChild(YGNode child)
	{
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x3A24DA0", Offset = "0x3A24DA0", VA = "0x3A24DA0")]
	public void RemoveAllChildren()
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x3A24520", Offset = "0x3A24520", VA = "0x3A24520")]
	public int GetChildCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x3A1E5C0", Offset = "0x3A1E5C0", VA = "0x3A1E5C0")]
	public void SetConfig(YGConfig config)
	{
	}

	[Token(Token = "0x6000092")]
	public void SetContext<T>(T value)
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x3A24620", Offset = "0x3A24620", VA = "0x3A24620")]
	public void SetContext(GCHandle value)
	{
	}

	[Token(Token = "0x6000094")]
	public T GetContext<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x3A27550", Offset = "0x3A27550", VA = "0x3A27550")]
	public GCHandle GetContext()
	{
		return default(GCHandle);
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x3A27AE0", Offset = "0x3A27AE0", VA = "0x3A27AE0")]
	public void SetMeasureFunc(Yoga.YGMeasureFunc measureFunc)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x3A245A0", Offset = "0x3A245A0", VA = "0x3A245A0")]
	public void SetMeasureFunc(IntPtr measureFunc)
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x3A23CF0", Offset = "0x3A23CF0", VA = "0x3A23CF0")]
	public bool HasMeasureFunc()
	{
		return default(bool);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x3A23D70", Offset = "0x3A23D70", VA = "0x3A23D70")]
	public void SetDirty()
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x3A26700", Offset = "0x3A26700", VA = "0x3A26700")]
	public float LayoutGetLeft()
	{
		return default(float);
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x3A26600", Offset = "0x3A26600", VA = "0x3A26600")]
	public float LayoutGetTop()
	{
		return default(float);
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x3A26780", Offset = "0x3A26780", VA = "0x3A26780")]
	public float LayoutGetWidth()
	{
		return default(float);
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x3A26680", Offset = "0x3A26680", VA = "0x3A26680")]
	public float LayoutGetHeight()
	{
		return default(float);
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x3A1F0A0", Offset = "0x3A1F0A0", VA = "0x3A1F0A0")]
	public void StyleSetDirection(Direction direction)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x3A1F260", Offset = "0x3A1F260", VA = "0x3A1F260")]
	public void StyleSetFlexDirection(FlexDirection flexDirection)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x3A1FCA0", Offset = "0x3A1FCA0", VA = "0x3A1FCA0")]
	public void StyleSetJustifyContent(Justify justifyContent)
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x3A201E0", Offset = "0x3A201E0", VA = "0x3A201E0")]
	public void StyleSetAlignContent(Align alignContent)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x3A1FE60", Offset = "0x3A1FE60", VA = "0x3A1FE60")]
	public void StyleSetAlignItems(Align alignItems)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x3A20020", Offset = "0x3A20020", VA = "0x3A20020")]
	public void StyleSetAlignSelf(Align alignSelf)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x3A1E920", Offset = "0x3A1E920", VA = "0x3A1E920")]
	public void StyleSetPositionType(PositionType positionType)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x3A1F420", Offset = "0x3A1F420", VA = "0x3A1F420")]
	public void StyleSetFlexWrap(Wrap flexWrap)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x3A1F8F0", Offset = "0x3A1F8F0", VA = "0x3A1F8F0")]
	public void StyleSetFlexGrow(float flexGrow)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x3A1FAD0", Offset = "0x3A1FAD0", VA = "0x3A1FAD0")]
	public void StyleSetFlexShrink(float flexShrink)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x3A270F0", Offset = "0x3A270F0", VA = "0x3A270F0")]
	public void StyleSetFlexBasis(float flexBasis)
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x3A27180", Offset = "0x3A27180", VA = "0x3A27180")]
	public void StyleSetFlexBasisPercent(float flexBasis)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x3A27210", Offset = "0x3A27210", VA = "0x3A27210")]
	public void StyleSetFlexBasisAuto()
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x3A26810", Offset = "0x3A26810", VA = "0x3A26810")]
	public void StyleSetPosition(Edge edge, float position)
	{
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x3A268A0", Offset = "0x3A268A0", VA = "0x3A268A0")]
	public void StyleSetPositionPercent(Edge edge, float position)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x3A27290", Offset = "0x3A27290", VA = "0x3A27290")]
	public void StyleSetMargin(Edge edge, float margin)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x3A27320", Offset = "0x3A27320", VA = "0x3A27320")]
	public void StyleSetMarginPercent(Edge edge, float margin)
	{
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x3A273B0", Offset = "0x3A273B0", VA = "0x3A273B0")]
	public void StyleSetMarginAuto(Edge edge)
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x3A27430", Offset = "0x3A27430", VA = "0x3A27430")]
	public void StyleSetPadding(Edge edge, float padding)
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x3A274C0", Offset = "0x3A274C0", VA = "0x3A274C0")]
	public void StyleSetPaddingPercent(Edge edge, float padding)
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x3A222B0", Offset = "0x3A222B0", VA = "0x3A222B0")]
	public void StyleSetGap(Gutter gutter, float value)
	{
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x3A26930", Offset = "0x3A26930", VA = "0x3A26930")]
	public void StyleSetWidth(float width)
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x3A269C0", Offset = "0x3A269C0", VA = "0x3A269C0")]
	public void StyleSetWidthPercent(float width)
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x3A26A50", Offset = "0x3A26A50", VA = "0x3A26A50")]
	public void StyleSetWidthAuto()
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x3A26AD0", Offset = "0x3A26AD0", VA = "0x3A26AD0")]
	public void StyleSetHeight(float height)
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x3A26B60", Offset = "0x3A26B60", VA = "0x3A26B60")]
	public void StyleSetHeightPercent(float height)
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x3A26BF0", Offset = "0x3A26BF0", VA = "0x3A26BF0")]
	public void StyleSetHeightAuto()
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x3A26C70", Offset = "0x3A26C70", VA = "0x3A26C70")]
	public void StyleSetMinWidth(float minWidth)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x3A26D00", Offset = "0x3A26D00", VA = "0x3A26D00")]
	public void StyleSetMinWidthPercent(float minWidth)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x3A26EB0", Offset = "0x3A26EB0", VA = "0x3A26EB0")]
	public void StyleSetMinHeight(float minHeight)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x3A26F40", Offset = "0x3A26F40", VA = "0x3A26F40")]
	public void StyleSetMinHeightPercent(float minHeight)
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x3A26D90", Offset = "0x3A26D90", VA = "0x3A26D90")]
	public void StyleSetMaxWidth(float maxWidth)
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x3A26E20", Offset = "0x3A26E20", VA = "0x3A26E20")]
	public void StyleSetMaxWidthPercent(float maxWidth)
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x3A26FD0", Offset = "0x3A26FD0", VA = "0x3A26FD0")]
	public void StyleSetMaxHeight(float maxHeight)
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x3A27060", Offset = "0x3A27060", VA = "0x3A27060")]
	public void StyleSetMaxHeightPercent(float maxHeight)
	{
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x3A21540", Offset = "0x3A21540", VA = "0x3A21540")]
	public void StyleSetAspectRatio(float aspectRatio)
	{
	}
}
