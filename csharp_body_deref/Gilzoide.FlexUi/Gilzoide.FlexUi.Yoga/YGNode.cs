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
		[Address(RVA = "0x187E270", Offset = "0x187C870", VA = "0x18187E270")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
	internal YGNode(IntPtr nodePtr)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x187E8E0", Offset = "0x187CEE0", VA = "0x18187E8E0")]
	public void Instantiate()
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x187E550", Offset = "0x187CB50", VA = "0x18187E550", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x187E410", Offset = "0x187CA10", VA = "0x18187E410")]
	public void ApplyTo(RectTransform rectTransform)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x187DED0", Offset = "0x187C4D0", VA = "0x18187DED0", Slot = "5")]
	public bool Equals(YGNode other)
	{
		return default(bool);
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x1880760", Offset = "0x187ED60", VA = "0x181880760")]
	public void StyleSetPosition(Edge edge, YGValue value)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x18809D0", Offset = "0x187EFD0", VA = "0x1818809D0")]
	public void StyleSetWidth(YGValue value)
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x187F880", Offset = "0x187DE80", VA = "0x18187F880")]
	public void StyleSetHeight(YGValue value)
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x18802B0", Offset = "0x187E8B0", VA = "0x1818802B0")]
	public void StyleSetMinWidth(YGValue value)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x187FED0", Offset = "0x187E4D0", VA = "0x18187FED0")]
	public void StyleSetMaxWidth(YGValue value)
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x18800C0", Offset = "0x187E6C0", VA = "0x1818800C0")]
	public void StyleSetMinHeight(YGValue value)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x187FC50", Offset = "0x187E250", VA = "0x18187FC50")]
	public void StyleSetMaxHeight(YGValue value)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x187F300", Offset = "0x187D900", VA = "0x18187F300")]
	public void StyleSetFlexBasis(YGValue value)
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x187FAB0", Offset = "0x187E0B0", VA = "0x18187FAB0")]
	public void StyleSetMargin(Edge edge, YGValue value)
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x1880420", Offset = "0x187EA20", VA = "0x181880420")]
	public void StyleSetPadding(Edge edge, YGValue value)
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x187E580", Offset = "0x187CB80", VA = "0x18187E580")]
	public void Free()
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x187E4A0", Offset = "0x187CAA0", VA = "0x18187E4A0")]
	public void CalculateLayout(float availableWidth, float availableHeight, Direction ownerDirection)
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x187E7C0", Offset = "0x187CDC0", VA = "0x18187E7C0")]
	public bool InsertChild(YGNode child, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x187EBD0", Offset = "0x187D1D0", VA = "0x18187EBD0")]
	public void RemoveChild(YGNode child)
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x187EB50", Offset = "0x187D150", VA = "0x18187EB50")]
	public void RemoveAllChildren()
	{
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x187E630", Offset = "0x187CC30", VA = "0x18187E630")]
	public int GetChildCount()
	{
		return default(int);
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x187EC60", Offset = "0x187D260", VA = "0x18187EC60")]
	public void SetConfig(YGConfig config)
	{
	}

	[Token(Token = "0x6000090")]
	public void SetContext<T>(T value)
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x187ED40", Offset = "0x187D340", VA = "0x18187ED40")]
	public void SetContext(GCHandle value)
	{
	}

	[Token(Token = "0x6000092")]
	public T GetContext<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x187E6B0", Offset = "0x187CCB0", VA = "0x18187E6B0")]
	public GCHandle GetContext()
	{
		return default(GCHandle);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x187EEA0", Offset = "0x187D4A0", VA = "0x18187EEA0")]
	public void SetMeasureFunc(Yoga.YGMeasureFunc measureFunc)
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x187EE90", Offset = "0x187D490", VA = "0x18187EE90")]
	public void SetMeasureFunc(IntPtr measureFunc)
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x187E740", Offset = "0x187CD40", VA = "0x18187E740")]
	public bool HasMeasureFunc()
	{
		return default(bool);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x187EE00", Offset = "0x187D400", VA = "0x18187EE00")]
	public void SetDirty()
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x187E9D0", Offset = "0x187CFD0", VA = "0x18187E9D0")]
	public float LayoutGetLeft()
	{
		return default(float);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x187EA50", Offset = "0x187D050", VA = "0x18187EA50")]
	public float LayoutGetTop()
	{
		return default(float);
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x187EAD0", Offset = "0x187D0D0", VA = "0x18187EAD0")]
	public float LayoutGetWidth()
	{
		return default(float);
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x187E950", Offset = "0x187CF50", VA = "0x18187E950")]
	public float LayoutGetHeight()
	{
		return default(float);
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x187F160", Offset = "0x187D760", VA = "0x18187F160")]
	public void StyleSetDirection(Direction direction)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x187F400", Offset = "0x187DA00", VA = "0x18187F400")]
	public void StyleSetFlexDirection(FlexDirection flexDirection)
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x187F8F0", Offset = "0x187DEF0", VA = "0x18187F8F0")]
	public void StyleSetJustifyContent(Justify justifyContent)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x187EF20", Offset = "0x187D520", VA = "0x18187EF20")]
	public void StyleSetAlignContent(Align alignContent)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x187EFB0", Offset = "0x187D5B0", VA = "0x18187EFB0")]
	public void StyleSetAlignItems(Align alignItems)
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x187F040", Offset = "0x187D640", VA = "0x18187F040")]
	public void StyleSetAlignSelf(Align alignSelf)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x1880630", Offset = "0x187EC30", VA = "0x181880630")]
	public void StyleSetPositionType(PositionType positionType)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x187F5B0", Offset = "0x187DBB0", VA = "0x18187F5B0")]
	public void StyleSetFlexWrap(Wrap flexWrap)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x187F490", Offset = "0x187DA90", VA = "0x18187F490")]
	public void StyleSetFlexGrow(float flexGrow)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x187F520", Offset = "0x187DB20", VA = "0x18187F520")]
	public void StyleSetFlexShrink(float flexShrink)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x187F370", Offset = "0x187D970", VA = "0x18187F370")]
	public void StyleSetFlexBasis(float flexBasis)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x187F270", Offset = "0x187D870", VA = "0x18187F270")]
	public void StyleSetFlexBasisPercent(float flexBasis)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x187F1F0", Offset = "0x187D7F0", VA = "0x18187F1F0")]
	public void StyleSetFlexBasisAuto()
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x18806C0", Offset = "0x187ECC0", VA = "0x1818806C0")]
	public void StyleSetPosition(Edge edge, float position)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x1880590", Offset = "0x187EB90", VA = "0x181880590")]
	public void StyleSetPositionPercent(Edge edge, float position)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x187FB20", Offset = "0x187E120", VA = "0x18187FB20")]
	public void StyleSetMargin(Edge edge, float margin)
	{
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x187FA10", Offset = "0x187E010", VA = "0x18187FA10")]
	public void StyleSetMarginPercent(Edge edge, float margin)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x187F980", Offset = "0x187DF80", VA = "0x18187F980")]
	public void StyleSetMarginAuto(Edge edge)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x18804F0", Offset = "0x187EAF0", VA = "0x1818804F0")]
	public void StyleSetPadding(Edge edge, float padding)
	{
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x1880380", Offset = "0x187E980", VA = "0x181880380")]
	public void StyleSetPaddingPercent(Edge edge, float padding)
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x187F640", Offset = "0x187DC40", VA = "0x18187F640")]
	public void StyleSetGap(Gutter gutter, float value)
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x1880940", Offset = "0x187EF40", VA = "0x181880940")]
	public void StyleSetWidth(float width)
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x18808B0", Offset = "0x187EEB0", VA = "0x1818808B0")]
	public void StyleSetWidthPercent(float width)
	{
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x1880830", Offset = "0x187EE30", VA = "0x181880830")]
	public void StyleSetWidthAuto()
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x187F7F0", Offset = "0x187DDF0", VA = "0x18187F7F0")]
	public void StyleSetHeight(float height)
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x187F760", Offset = "0x187DD60", VA = "0x18187F760")]
	public void StyleSetHeightPercent(float height)
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x187F6E0", Offset = "0x187DCE0", VA = "0x18187F6E0")]
	public void StyleSetHeightAuto()
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x1880220", Offset = "0x187E820", VA = "0x181880220")]
	public void StyleSetMinWidth(float minWidth)
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x1880190", Offset = "0x187E790", VA = "0x181880190")]
	public void StyleSetMinWidthPercent(float minWidth)
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x1880030", Offset = "0x187E630", VA = "0x181880030")]
	public void StyleSetMinHeight(float minHeight)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x187FFA0", Offset = "0x187E5A0", VA = "0x18187FFA0")]
	public void StyleSetMinHeightPercent(float minHeight)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x187FE40", Offset = "0x187E440", VA = "0x18187FE40")]
	public void StyleSetMaxWidth(float maxWidth)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x187FDB0", Offset = "0x187E3B0", VA = "0x18187FDB0")]
	public void StyleSetMaxWidthPercent(float maxWidth)
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x187FD20", Offset = "0x187E320", VA = "0x18187FD20")]
	public void StyleSetMaxHeight(float maxHeight)
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x187FBC0", Offset = "0x187E1C0", VA = "0x18187FBC0")]
	public void StyleSetMaxHeightPercent(float maxHeight)
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x187F0D0", Offset = "0x187D6D0", VA = "0x18187F0D0")]
	public void StyleSetAspectRatio(float aspectRatio)
	{
	}
}
