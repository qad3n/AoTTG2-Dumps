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
		[Address(RVA = "0x39B9250", Offset = "0x39B9250", VA = "0x39B9250")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x39BD1D0", Offset = "0x39BD1D0", VA = "0x39BD1D0")]
	internal YGNode(IntPtr nodePtr)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x39B9260", Offset = "0x39B9260", VA = "0x39B9260")]
	public void Instantiate()
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x39BA770", Offset = "0x39BA770", VA = "0x39BA770", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x39BB0C0", Offset = "0x39BB0C0", VA = "0x39BB0C0")]
	public void ApplyTo(RectTransform rectTransform)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x39BD5B0", Offset = "0x39BD5B0", VA = "0x39BD5B0", Slot = "5")]
	public bool Equals(YGNode other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x39B5840", Offset = "0x39B5840", VA = "0x39B5840")]
	public void StyleSetPosition(Edge edge, YGValue value)
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x39B7100", Offset = "0x39B7100", VA = "0x39B7100")]
	public void StyleSetWidth(YGValue value)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x39B7400", Offset = "0x39B7400", VA = "0x39B7400")]
	public void StyleSetHeight(YGValue value)
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x39B7700", Offset = "0x39B7700", VA = "0x39B7700")]
	public void StyleSetMinWidth(YGValue value)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x39B7CC0", Offset = "0x39B7CC0", VA = "0x39B7CC0")]
	public void StyleSetMaxWidth(YGValue value)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x39B79E0", Offset = "0x39B79E0", VA = "0x39B79E0")]
	public void StyleSetMinHeight(YGValue value)
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x39B7FA0", Offset = "0x39B7FA0", VA = "0x39B7FA0")]
	public void StyleSetMaxHeight(YGValue value)
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x39B6340", Offset = "0x39B6340", VA = "0x39B6340")]
	public void StyleSetFlexBasis(YGValue value)
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x39B8470", Offset = "0x39B8470", VA = "0x39B8470")]
	public void StyleSetMargin(Edge edge, YGValue value)
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x39B8A40", Offset = "0x39B8A40", VA = "0x39B8A40")]
	public void StyleSetPadding(Edge edge, YGValue value)
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x39BD260", Offset = "0x39BD260", VA = "0x39BD260")]
	public void Free()
	{
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x39BB020", Offset = "0x39BB020", VA = "0x39BB020")]
	public void CalculateLayout(float availableWidth, float availableHeight, Direction ownerDirection)
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x39BB7E0", Offset = "0x39BB7E0", VA = "0x39BB7E0")]
	public bool InsertChild(YGNode child, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x39BB950", Offset = "0x39BB950", VA = "0x39BB950")]
	public void RemoveChild(YGNode child)
	{
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x39BBB50", Offset = "0x39BBB50", VA = "0x39BBB50")]
	public void RemoveAllChildren()
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x39BB2D0", Offset = "0x39BB2D0", VA = "0x39BB2D0")]
	public int GetChildCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x39B5370", Offset = "0x39B5370", VA = "0x39B5370")]
	public void SetConfig(YGConfig config)
	{
	}

	[Token(Token = "0x6000092")]
	public void SetContext<T>(T value)
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x39BB3D0", Offset = "0x39BB3D0", VA = "0x39BB3D0")]
	public void SetContext(GCHandle value)
	{
	}

	[Token(Token = "0x6000094")]
	public T GetContext<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x39BE300", Offset = "0x39BE300", VA = "0x39BE300")]
	public GCHandle GetContext()
	{
		return default(GCHandle);
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x39BE890", Offset = "0x39BE890", VA = "0x39BE890")]
	public void SetMeasureFunc(Yoga.YGMeasureFunc measureFunc)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x39BB350", Offset = "0x39BB350", VA = "0x39BB350")]
	public void SetMeasureFunc(IntPtr measureFunc)
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x39BAAA0", Offset = "0x39BAAA0", VA = "0x39BAAA0")]
	public bool HasMeasureFunc()
	{
		return default(bool);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x39BAB20", Offset = "0x39BAB20", VA = "0x39BAB20")]
	public void SetDirty()
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x39BD4B0", Offset = "0x39BD4B0", VA = "0x39BD4B0")]
	public float LayoutGetLeft()
	{
		return default(float);
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x39BD3B0", Offset = "0x39BD3B0", VA = "0x39BD3B0")]
	public float LayoutGetTop()
	{
		return default(float);
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x39BD530", Offset = "0x39BD530", VA = "0x39BD530")]
	public float LayoutGetWidth()
	{
		return default(float);
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x39BD430", Offset = "0x39BD430", VA = "0x39BD430")]
	public float LayoutGetHeight()
	{
		return default(float);
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x39B5E50", Offset = "0x39B5E50", VA = "0x39B5E50")]
	public void StyleSetDirection(Direction direction)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x39B6010", Offset = "0x39B6010", VA = "0x39B6010")]
	public void StyleSetFlexDirection(FlexDirection flexDirection)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x39B6A50", Offset = "0x39B6A50", VA = "0x39B6A50")]
	public void StyleSetJustifyContent(Justify justifyContent)
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x39B6F90", Offset = "0x39B6F90", VA = "0x39B6F90")]
	public void StyleSetAlignContent(Align alignContent)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x39B6C10", Offset = "0x39B6C10", VA = "0x39B6C10")]
	public void StyleSetAlignItems(Align alignItems)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x39B6DD0", Offset = "0x39B6DD0", VA = "0x39B6DD0")]
	public void StyleSetAlignSelf(Align alignSelf)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x39B56D0", Offset = "0x39B56D0", VA = "0x39B56D0")]
	public void StyleSetPositionType(PositionType positionType)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x39B61D0", Offset = "0x39B61D0", VA = "0x39B61D0")]
	public void StyleSetFlexWrap(Wrap flexWrap)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x39B66A0", Offset = "0x39B66A0", VA = "0x39B66A0")]
	public void StyleSetFlexGrow(float flexGrow)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x39B6880", Offset = "0x39B6880", VA = "0x39B6880")]
	public void StyleSetFlexShrink(float flexShrink)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x39BDEA0", Offset = "0x39BDEA0", VA = "0x39BDEA0")]
	public void StyleSetFlexBasis(float flexBasis)
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x39BDF30", Offset = "0x39BDF30", VA = "0x39BDF30")]
	public void StyleSetFlexBasisPercent(float flexBasis)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x39BDFC0", Offset = "0x39BDFC0", VA = "0x39BDFC0")]
	public void StyleSetFlexBasisAuto()
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x39BD5C0", Offset = "0x39BD5C0", VA = "0x39BD5C0")]
	public void StyleSetPosition(Edge edge, float position)
	{
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x39BD650", Offset = "0x39BD650", VA = "0x39BD650")]
	public void StyleSetPositionPercent(Edge edge, float position)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x39BE040", Offset = "0x39BE040", VA = "0x39BE040")]
	public void StyleSetMargin(Edge edge, float margin)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x39BE0D0", Offset = "0x39BE0D0", VA = "0x39BE0D0")]
	public void StyleSetMarginPercent(Edge edge, float margin)
	{
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x39BE160", Offset = "0x39BE160", VA = "0x39BE160")]
	public void StyleSetMarginAuto(Edge edge)
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x39BE1E0", Offset = "0x39BE1E0", VA = "0x39BE1E0")]
	public void StyleSetPadding(Edge edge, float padding)
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x39BE270", Offset = "0x39BE270", VA = "0x39BE270")]
	public void StyleSetPaddingPercent(Edge edge, float padding)
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x39B9060", Offset = "0x39B9060", VA = "0x39B9060")]
	public void StyleSetGap(Gutter gutter, float value)
	{
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x39BD6E0", Offset = "0x39BD6E0", VA = "0x39BD6E0")]
	public void StyleSetWidth(float width)
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x39BD770", Offset = "0x39BD770", VA = "0x39BD770")]
	public void StyleSetWidthPercent(float width)
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x39BD800", Offset = "0x39BD800", VA = "0x39BD800")]
	public void StyleSetWidthAuto()
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x39BD880", Offset = "0x39BD880", VA = "0x39BD880")]
	public void StyleSetHeight(float height)
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x39BD910", Offset = "0x39BD910", VA = "0x39BD910")]
	public void StyleSetHeightPercent(float height)
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x39BD9A0", Offset = "0x39BD9A0", VA = "0x39BD9A0")]
	public void StyleSetHeightAuto()
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x39BDA20", Offset = "0x39BDA20", VA = "0x39BDA20")]
	public void StyleSetMinWidth(float minWidth)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x39BDAB0", Offset = "0x39BDAB0", VA = "0x39BDAB0")]
	public void StyleSetMinWidthPercent(float minWidth)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x39BDC60", Offset = "0x39BDC60", VA = "0x39BDC60")]
	public void StyleSetMinHeight(float minHeight)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x39BDCF0", Offset = "0x39BDCF0", VA = "0x39BDCF0")]
	public void StyleSetMinHeightPercent(float minHeight)
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x39BDB40", Offset = "0x39BDB40", VA = "0x39BDB40")]
	public void StyleSetMaxWidth(float maxWidth)
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x39BDBD0", Offset = "0x39BDBD0", VA = "0x39BDBD0")]
	public void StyleSetMaxWidthPercent(float maxWidth)
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x39BDD80", Offset = "0x39BDD80", VA = "0x39BDD80")]
	public void StyleSetMaxHeight(float maxHeight)
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x39BDE10", Offset = "0x39BDE10", VA = "0x39BDE10")]
	public void StyleSetMaxHeightPercent(float maxHeight)
	{
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x39B82F0", Offset = "0x39B82F0", VA = "0x39B82F0")]
	public void StyleSetAspectRatio(float aspectRatio)
	{
	}
}
