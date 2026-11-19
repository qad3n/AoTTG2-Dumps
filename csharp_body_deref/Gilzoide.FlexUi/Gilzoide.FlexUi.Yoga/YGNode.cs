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

[Token(Token = "0x200001A")]
public struct YGNode : IDisposable, IEquatable<YGNode>
{
	[Token(Token = "0x400008A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal IntPtr _nodePtr;

	[Token(Token = "0x1700002D")]
	public bool IsNull
	{
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x5212E30", Offset = "0x5211E30", VA = "0x5212E30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x5216DC0", Offset = "0x5215DC0", VA = "0x5216DC0")]
	internal YGNode(IntPtr nodePtr)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x5212E40", Offset = "0x5211E40", VA = "0x5212E40")]
	public void Instantiate()
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x5214390", Offset = "0x5213390", VA = "0x5214390", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x5214CD0", Offset = "0x5213CD0", VA = "0x5214CD0")]
	public void ApplyTo(RectTransform rectTransform)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x52171A0", Offset = "0x52161A0", VA = "0x52171A0", Slot = "5")]
	public bool Equals(YGNode other)
	{
		return default(bool);
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x520F620", Offset = "0x520E620", VA = "0x520F620")]
	public void StyleSetPosition(Edge edge, YGValue value)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x5210E00", Offset = "0x520FE00", VA = "0x5210E00")]
	public void StyleSetWidth(YGValue value)
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x52110F0", Offset = "0x52100F0", VA = "0x52110F0")]
	public void StyleSetHeight(YGValue value)
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x52113E0", Offset = "0x52103E0", VA = "0x52113E0")]
	public void StyleSetMinWidth(YGValue value)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x5211980", Offset = "0x5210980", VA = "0x5211980")]
	public void StyleSetMaxWidth(YGValue value)
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x52116B0", Offset = "0x52106B0", VA = "0x52116B0")]
	public void StyleSetMinHeight(YGValue value)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x5211C50", Offset = "0x5210C50", VA = "0x5211C50")]
	public void StyleSetMaxHeight(YGValue value)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x52100B0", Offset = "0x520F0B0", VA = "0x52100B0")]
	public void StyleSetFlexBasis(YGValue value)
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x52120F0", Offset = "0x52110F0", VA = "0x52120F0")]
	public void StyleSetMargin(Edge edge, YGValue value)
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x5212680", Offset = "0x5211680", VA = "0x5212680")]
	public void StyleSetPadding(Edge edge, YGValue value)
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x5216E50", Offset = "0x5215E50", VA = "0x5216E50")]
	public void Free()
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x5214C30", Offset = "0x5213C30", VA = "0x5214C30")]
	public void CalculateLayout(float availableWidth, float availableHeight, Direction ownerDirection)
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x52153F0", Offset = "0x52143F0", VA = "0x52153F0")]
	public bool InsertChild(YGNode child, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x5215560", Offset = "0x5214560", VA = "0x5215560")]
	public void RemoveChild(YGNode child)
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x5215750", Offset = "0x5214750", VA = "0x5215750")]
	public void RemoveAllChildren()
	{
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x5214EE0", Offset = "0x5213EE0", VA = "0x5214EE0")]
	public int GetChildCount()
	{
		return default(int);
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x520F180", Offset = "0x520E180", VA = "0x520F180")]
	public void SetConfig(YGConfig config)
	{
	}

	[Token(Token = "0x6000090")]
	public void SetContext<T>(T value)
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x5214FE0", Offset = "0x5213FE0", VA = "0x5214FE0")]
	public void SetContext(GCHandle value)
	{
	}

	[Token(Token = "0x6000092")]
	public T GetContext<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x5217EF0", Offset = "0x5216EF0", VA = "0x5217EF0")]
	public GCHandle GetContext()
	{
		return default(GCHandle);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x5218480", Offset = "0x5217480", VA = "0x5218480")]
	public void SetMeasureFunc(Yoga.YGMeasureFunc measureFunc)
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x5214F60", Offset = "0x5213F60", VA = "0x5214F60")]
	public void SetMeasureFunc(IntPtr measureFunc)
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x52146B0", Offset = "0x52136B0", VA = "0x52146B0")]
	public bool HasMeasureFunc()
	{
		return default(bool);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x5214730", Offset = "0x5213730", VA = "0x5214730")]
	public void SetDirty()
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x52170A0", Offset = "0x52160A0", VA = "0x52170A0")]
	public float LayoutGetLeft()
	{
		return default(float);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x5216FA0", Offset = "0x5215FA0", VA = "0x5216FA0")]
	public float LayoutGetTop()
	{
		return default(float);
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x5217120", Offset = "0x5216120", VA = "0x5217120")]
	public float LayoutGetWidth()
	{
		return default(float);
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x5217020", Offset = "0x5216020", VA = "0x5217020")]
	public float LayoutGetHeight()
	{
		return default(float);
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x520FBF0", Offset = "0x520EBF0", VA = "0x520FBF0")]
	public void StyleSetDirection(Direction direction)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x520FDA0", Offset = "0x520EDA0", VA = "0x520FDA0")]
	public void StyleSetFlexDirection(FlexDirection flexDirection)
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x5210790", Offset = "0x520F790", VA = "0x5210790")]
	public void StyleSetJustifyContent(Justify justifyContent)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x5210CA0", Offset = "0x520FCA0", VA = "0x5210CA0")]
	public void StyleSetAlignContent(Align alignContent)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x5210940", Offset = "0x520F940", VA = "0x5210940")]
	public void StyleSetAlignItems(Align alignItems)
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x5210AF0", Offset = "0x520FAF0", VA = "0x5210AF0")]
	public void StyleSetAlignSelf(Align alignSelf)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x520F4C0", Offset = "0x520E4C0", VA = "0x520F4C0")]
	public void StyleSetPositionType(PositionType positionType)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x520FF50", Offset = "0x520EF50", VA = "0x520FF50")]
	public void StyleSetFlexWrap(Wrap flexWrap)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x5210400", Offset = "0x520F400", VA = "0x5210400")]
	public void StyleSetFlexGrow(float flexGrow)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x52105D0", Offset = "0x520F5D0", VA = "0x52105D0")]
	public void StyleSetFlexShrink(float flexShrink)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x5217A90", Offset = "0x5216A90", VA = "0x5217A90")]
	public void StyleSetFlexBasis(float flexBasis)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x5217B20", Offset = "0x5216B20", VA = "0x5217B20")]
	public void StyleSetFlexBasisPercent(float flexBasis)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x5217BB0", Offset = "0x5216BB0", VA = "0x5217BB0")]
	public void StyleSetFlexBasisAuto()
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x52171B0", Offset = "0x52161B0", VA = "0x52171B0")]
	public void StyleSetPosition(Edge edge, float position)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x5217240", Offset = "0x5216240", VA = "0x5217240")]
	public void StyleSetPositionPercent(Edge edge, float position)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x5217C30", Offset = "0x5216C30", VA = "0x5217C30")]
	public void StyleSetMargin(Edge edge, float margin)
	{
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x5217CC0", Offset = "0x5216CC0", VA = "0x5217CC0")]
	public void StyleSetMarginPercent(Edge edge, float margin)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x5217D50", Offset = "0x5216D50", VA = "0x5217D50")]
	public void StyleSetMarginAuto(Edge edge)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x5217DD0", Offset = "0x5216DD0", VA = "0x5217DD0")]
	public void StyleSetPadding(Edge edge, float padding)
	{
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x5217E60", Offset = "0x5216E60", VA = "0x5217E60")]
	public void StyleSetPaddingPercent(Edge edge, float padding)
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x5212C60", Offset = "0x5211C60", VA = "0x5212C60")]
	public void StyleSetGap(Gutter gutter, float value)
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x52172D0", Offset = "0x52162D0", VA = "0x52172D0")]
	public void StyleSetWidth(float width)
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x5217360", Offset = "0x5216360", VA = "0x5217360")]
	public void StyleSetWidthPercent(float width)
	{
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x52173F0", Offset = "0x52163F0", VA = "0x52173F0")]
	public void StyleSetWidthAuto()
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x5217470", Offset = "0x5216470", VA = "0x5217470")]
	public void StyleSetHeight(float height)
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x5217500", Offset = "0x5216500", VA = "0x5217500")]
	public void StyleSetHeightPercent(float height)
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x5217590", Offset = "0x5216590", VA = "0x5217590")]
	public void StyleSetHeightAuto()
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x5217610", Offset = "0x5216610", VA = "0x5217610")]
	public void StyleSetMinWidth(float minWidth)
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x52176A0", Offset = "0x52166A0", VA = "0x52176A0")]
	public void StyleSetMinWidthPercent(float minWidth)
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x5217850", Offset = "0x5216850", VA = "0x5217850")]
	public void StyleSetMinHeight(float minHeight)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x52178E0", Offset = "0x52168E0", VA = "0x52178E0")]
	public void StyleSetMinHeightPercent(float minHeight)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x5217730", Offset = "0x5216730", VA = "0x5217730")]
	public void StyleSetMaxWidth(float maxWidth)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x52177C0", Offset = "0x52167C0", VA = "0x52177C0")]
	public void StyleSetMaxWidthPercent(float maxWidth)
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x5217970", Offset = "0x5216970", VA = "0x5217970")]
	public void StyleSetMaxHeight(float maxHeight)
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x5217A00", Offset = "0x5216A00", VA = "0x5217A00")]
	public void StyleSetMaxHeightPercent(float maxHeight)
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x5211F80", Offset = "0x5210F80", VA = "0x5211F80")]
	public void StyleSetAspectRatio(float aspectRatio)
	{
	}
}
