using System;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x20004FC")]
[DefaultMember("Item")]
internal struct LayoutNode : IEquatable<LayoutNode>
{
	[Token(Token = "0x40010A4")]
	private const int k_DefaultChildCapacity = 4;

	[Token(Token = "0x40010A5")]
	[FieldOffset(Offset = "0x0")]
	private readonly LayoutDataAccess m_Access;

	[Token(Token = "0x40010A6")]
	[FieldOffset(Offset = "0x28")]
	private readonly LayoutHandle m_Handle;

	[Token(Token = "0x170007A7")]
	public float LayoutX
	{
		[Token(Token = "0x6001EB1")]
		[Address(RVA = "0x4C8EED0", Offset = "0x4C8EED0", VA = "0x4C8EED0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170007A8")]
	public float LayoutY
	{
		[Token(Token = "0x6001EB2")]
		[Address(RVA = "0x4C8EFA0", Offset = "0x4C8EFA0", VA = "0x4C8EFA0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170007A9")]
	public float LayoutRight
	{
		[Token(Token = "0x6001EB3")]
		[Address(RVA = "0x4C8F010", Offset = "0x4C8F010", VA = "0x4C8F010")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170007AA")]
	public float LayoutBottom
	{
		[Token(Token = "0x6001EB4")]
		[Address(RVA = "0x4C8F080", Offset = "0x4C8F080", VA = "0x4C8F080")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170007AB")]
	public float LayoutWidth
	{
		[Token(Token = "0x6001EB5")]
		[Address(RVA = "0x4C8F0F0", Offset = "0x4C8F0F0", VA = "0x4C8F0F0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170007AC")]
	public float LayoutHeight
	{
		[Token(Token = "0x6001EB6")]
		[Address(RVA = "0x4C8F160", Offset = "0x4C8F160", VA = "0x4C8F160")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170007AD")]
	public float LayoutMarginLeft
	{
		[Token(Token = "0x6001EB7")]
		[Address(RVA = "0x4C8F1D0", Offset = "0x4C8F1D0", VA = "0x4C8F1D0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170007AE")]
	public float LayoutMarginTop
	{
		[Token(Token = "0x6001EB8")]
		[Address(RVA = "0x4C8F270", Offset = "0x4C8F270", VA = "0x4C8F270")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170007AF")]
	public float LayoutMarginRight
	{
		[Token(Token = "0x6001EB9")]
		[Address(RVA = "0x4C8F2E0", Offset = "0x4C8F2E0", VA = "0x4C8F2E0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170007B0")]
	public float LayoutMarginBottom
	{
		[Token(Token = "0x6001EBA")]
		[Address(RVA = "0x4C8F380", Offset = "0x4C8F380", VA = "0x4C8F380")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170007B1")]
	public float LayoutPaddingLeft
	{
		[Token(Token = "0x6001EBB")]
		[Address(RVA = "0x4C8F3F0", Offset = "0x4C8F3F0", VA = "0x4C8F3F0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170007B2")]
	public float LayoutPaddingTop
	{
		[Token(Token = "0x6001EBC")]
		[Address(RVA = "0x4C8F490", Offset = "0x4C8F490", VA = "0x4C8F490")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170007B3")]
	public float LayoutPaddingRight
	{
		[Token(Token = "0x6001EBD")]
		[Address(RVA = "0x4C8F500", Offset = "0x4C8F500", VA = "0x4C8F500")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170007B4")]
	public float LayoutPaddingBottom
	{
		[Token(Token = "0x6001EBE")]
		[Address(RVA = "0x4C8F5A0", Offset = "0x4C8F5A0", VA = "0x4C8F5A0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170007B5")]
	public float LayoutBorderLeft
	{
		[Token(Token = "0x6001EBF")]
		[Address(RVA = "0x4C8F610", Offset = "0x4C8F610", VA = "0x4C8F610")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170007B6")]
	public float LayoutBorderTop
	{
		[Token(Token = "0x6001EC0")]
		[Address(RVA = "0x4C8F6B0", Offset = "0x4C8F6B0", VA = "0x4C8F6B0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170007B7")]
	public float LayoutBorderRight
	{
		[Token(Token = "0x6001EC1")]
		[Address(RVA = "0x4C8F720", Offset = "0x4C8F720", VA = "0x4C8F720")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170007B8")]
	public float LayoutBorderBottom
	{
		[Token(Token = "0x6001EC2")]
		[Address(RVA = "0x4C8F7C0", Offset = "0x4C8F7C0", VA = "0x4C8F7C0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170007B9")]
	public LayoutNode Parent
	{
		[Token(Token = "0x6001EC4")]
		[Address(RVA = "0x4C8F920", Offset = "0x4C8F920", VA = "0x4C8F920")]
		get
		{
			return default(LayoutNode);
		}
		[Token(Token = "0x6001EC5")]
		[Address(RVA = "0x4C8F9D0", Offset = "0x4C8F9D0", VA = "0x4C8F9D0")]
		set
		{
		}
	}

	[Token(Token = "0x170007BA")]
	private LayoutList<LayoutHandle> Children
	{
		[Token(Token = "0x6001EC6")]
		[Address(RVA = "0x4C8FA40", Offset = "0x4C8FA40", VA = "0x4C8FA40")]
		get
		{
			return default(LayoutList<LayoutHandle>);
		}
	}

	[Token(Token = "0x170007BB")]
	public int Count
	{
		[Token(Token = "0x6001EC7")]
		[Address(RVA = "0x4C8FAB0", Offset = "0x4C8FAB0", VA = "0x4C8FAB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170007BC")]
	public LayoutFlexDirection FlexDirection
	{
		[Token(Token = "0x6001ECB")]
		[Address(RVA = "0x4C902D0", Offset = "0x4C902D0", VA = "0x4C902D0")]
		set
		{
		}
	}

	[Token(Token = "0x170007BD")]
	public LayoutJustify JustifyContent
	{
		[Token(Token = "0x6001ECC")]
		[Address(RVA = "0x4C903D0", Offset = "0x4C903D0", VA = "0x4C903D0")]
		set
		{
		}
	}

	[Token(Token = "0x170007BE")]
	public LayoutDisplay Display
	{
		[Token(Token = "0x6001ECD")]
		[Address(RVA = "0x4C90470", Offset = "0x4C90470", VA = "0x4C90470")]
		set
		{
		}
	}

	[Token(Token = "0x170007BF")]
	public LayoutAlign AlignItems
	{
		[Token(Token = "0x6001ECE")]
		[Address(RVA = "0x4C90510", Offset = "0x4C90510", VA = "0x4C90510")]
		set
		{
		}
	}

	[Token(Token = "0x170007C0")]
	public LayoutAlign AlignSelf
	{
		[Token(Token = "0x6001ECF")]
		[Address(RVA = "0x4C905B0", Offset = "0x4C905B0", VA = "0x4C905B0")]
		set
		{
		}
	}

	[Token(Token = "0x170007C1")]
	public LayoutAlign AlignContent
	{
		[Token(Token = "0x6001ED0")]
		[Address(RVA = "0x4C90650", Offset = "0x4C90650", VA = "0x4C90650")]
		set
		{
		}
	}

	[Token(Token = "0x170007C2")]
	public LayoutPositionType PositionType
	{
		[Token(Token = "0x6001ED1")]
		[Address(RVA = "0x4C906F0", Offset = "0x4C906F0", VA = "0x4C906F0")]
		set
		{
		}
	}

	[Token(Token = "0x170007C3")]
	public LayoutWrap Wrap
	{
		[Token(Token = "0x6001ED2")]
		[Address(RVA = "0x4C90790", Offset = "0x4C90790", VA = "0x4C90790")]
		set
		{
		}
	}

	[Token(Token = "0x170007C4")]
	public float Flex
	{
		[Token(Token = "0x6001ED3")]
		[Address(RVA = "0x4C90830", Offset = "0x4C90830", VA = "0x4C90830")]
		set
		{
		}
	}

	[Token(Token = "0x170007C5")]
	public float FlexGrow
	{
		[Token(Token = "0x6001ED4")]
		[Address(RVA = "0x4C90910", Offset = "0x4C90910", VA = "0x4C90910")]
		set
		{
		}
	}

	[Token(Token = "0x170007C6")]
	public float FlexShrink
	{
		[Token(Token = "0x6001ED5")]
		[Address(RVA = "0x4C909B0", Offset = "0x4C909B0", VA = "0x4C909B0")]
		set
		{
		}
	}

	[Token(Token = "0x170007C7")]
	public LayoutValue FlexBasis
	{
		[Token(Token = "0x6001ED6")]
		[Address(RVA = "0x4C90A50", Offset = "0x4C90A50", VA = "0x4C90A50")]
		set
		{
		}
	}

	[Token(Token = "0x170007C8")]
	public LayoutValue Width
	{
		[Token(Token = "0x6001ED7")]
		[Address(RVA = "0x4C90BA0", Offset = "0x4C90BA0", VA = "0x4C90BA0")]
		set
		{
		}
	}

	[Token(Token = "0x170007C9")]
	public LayoutValue Height
	{
		[Token(Token = "0x6001ED8")]
		[Address(RVA = "0x4C90CB0", Offset = "0x4C90CB0", VA = "0x4C90CB0")]
		set
		{
		}
	}

	[Token(Token = "0x170007CA")]
	public LayoutValue MaxWidth
	{
		[Token(Token = "0x6001ED9")]
		[Address(RVA = "0x4C90D60", Offset = "0x4C90D60", VA = "0x4C90D60")]
		set
		{
		}
	}

	[Token(Token = "0x170007CB")]
	public LayoutValue MaxHeight
	{
		[Token(Token = "0x6001EDA")]
		[Address(RVA = "0x4C90F70", Offset = "0x4C90F70", VA = "0x4C90F70")]
		set
		{
		}
	}

	[Token(Token = "0x170007CC")]
	public LayoutValue MinWidth
	{
		[Token(Token = "0x6001EDB")]
		[Address(RVA = "0x4C910D0", Offset = "0x4C910D0", VA = "0x4C910D0")]
		set
		{
		}
	}

	[Token(Token = "0x170007CD")]
	public LayoutValue MinHeight
	{
		[Token(Token = "0x6001EDC")]
		[Address(RVA = "0x4C91230", Offset = "0x4C91230", VA = "0x4C91230")]
		set
		{
		}
	}

	[Token(Token = "0x170007CE")]
	public LayoutOverflow Overflow
	{
		[Token(Token = "0x6001EDD")]
		[Address(RVA = "0x4C91390", Offset = "0x4C91390", VA = "0x4C91390")]
		set
		{
		}
	}

	[Token(Token = "0x170007CF")]
	public LayoutValue Left
	{
		[Token(Token = "0x6001EDE")]
		[Address(RVA = "0x4C91430", Offset = "0x4C91430", VA = "0x4C91430")]
		set
		{
		}
	}

	[Token(Token = "0x170007D0")]
	public LayoutValue Top
	{
		[Token(Token = "0x6001EDF")]
		[Address(RVA = "0x4C915F0", Offset = "0x4C915F0", VA = "0x4C915F0")]
		set
		{
		}
	}

	[Token(Token = "0x170007D1")]
	public LayoutValue Right
	{
		[Token(Token = "0x6001EE0")]
		[Address(RVA = "0x4C91600", Offset = "0x4C91600", VA = "0x4C91600")]
		set
		{
		}
	}

	[Token(Token = "0x170007D2")]
	public LayoutValue Bottom
	{
		[Token(Token = "0x6001EE1")]
		[Address(RVA = "0x4C91610", Offset = "0x4C91610", VA = "0x4C91610")]
		set
		{
		}
	}

	[Token(Token = "0x170007D3")]
	public LayoutValue MarginLeft
	{
		[Token(Token = "0x6001EE2")]
		[Address(RVA = "0x4C91620", Offset = "0x4C91620", VA = "0x4C91620")]
		set
		{
		}
	}

	[Token(Token = "0x170007D4")]
	public LayoutValue MarginTop
	{
		[Token(Token = "0x6001EE3")]
		[Address(RVA = "0x4C91880", Offset = "0x4C91880", VA = "0x4C91880")]
		set
		{
		}
	}

	[Token(Token = "0x170007D5")]
	public LayoutValue MarginRight
	{
		[Token(Token = "0x6001EE4")]
		[Address(RVA = "0x4C91890", Offset = "0x4C91890", VA = "0x4C91890")]
		set
		{
		}
	}

	[Token(Token = "0x170007D6")]
	public LayoutValue MarginBottom
	{
		[Token(Token = "0x6001EE5")]
		[Address(RVA = "0x4C918A0", Offset = "0x4C918A0", VA = "0x4C918A0")]
		set
		{
		}
	}

	[Token(Token = "0x170007D7")]
	public LayoutValue PaddingLeft
	{
		[Token(Token = "0x6001EE6")]
		[Address(RVA = "0x4C918B0", Offset = "0x4C918B0", VA = "0x4C918B0")]
		set
		{
		}
	}

	[Token(Token = "0x170007D8")]
	public LayoutValue PaddingTop
	{
		[Token(Token = "0x6001EE7")]
		[Address(RVA = "0x4C91A70", Offset = "0x4C91A70", VA = "0x4C91A70")]
		set
		{
		}
	}

	[Token(Token = "0x170007D9")]
	public LayoutValue PaddingRight
	{
		[Token(Token = "0x6001EE8")]
		[Address(RVA = "0x4C91A80", Offset = "0x4C91A80", VA = "0x4C91A80")]
		set
		{
		}
	}

	[Token(Token = "0x170007DA")]
	public LayoutValue PaddingBottom
	{
		[Token(Token = "0x6001EE9")]
		[Address(RVA = "0x4C91A90", Offset = "0x4C91A90", VA = "0x4C91A90")]
		set
		{
		}
	}

	[Token(Token = "0x170007DB")]
	public float BorderLeftWidth
	{
		[Token(Token = "0x6001EEA")]
		[Address(RVA = "0x4C91AA0", Offset = "0x4C91AA0", VA = "0x4C91AA0")]
		set
		{
		}
	}

	[Token(Token = "0x170007DC")]
	public float BorderTopWidth
	{
		[Token(Token = "0x6001EEB")]
		[Address(RVA = "0x4C91CA0", Offset = "0x4C91CA0", VA = "0x4C91CA0")]
		set
		{
		}
	}

	[Token(Token = "0x170007DD")]
	public float BorderRightWidth
	{
		[Token(Token = "0x6001EEC")]
		[Address(RVA = "0x4C91DD0", Offset = "0x4C91DD0", VA = "0x4C91DD0")]
		set
		{
		}
	}

	[Token(Token = "0x170007DE")]
	public float BorderBottomWidth
	{
		[Token(Token = "0x6001EED")]
		[Address(RVA = "0x4C91F00", Offset = "0x4C91F00", VA = "0x4C91F00")]
		set
		{
		}
	}

	[Token(Token = "0x170007DF")]
	public static LayoutNode Undefined
	{
		[Token(Token = "0x6001EFA")]
		[Address(RVA = "0x4C8E890", Offset = "0x4C8E890", VA = "0x4C8E890")]
		get
		{
			return default(LayoutNode);
		}
	}

	[Token(Token = "0x170007E0")]
	public bool IsUndefined
	{
		[Token(Token = "0x6001EFC")]
		[Address(RVA = "0x4C8E850", Offset = "0x4C8E850", VA = "0x4C8E850")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007E1")]
	public LayoutHandle Handle
	{
		[Token(Token = "0x6001EFD")]
		[Address(RVA = "0x4C92260", Offset = "0x4C92260", VA = "0x4C92260")]
		get
		{
			return default(LayoutHandle);
		}
	}

	[Token(Token = "0x170007E2")]
	public unsafe ref LayoutComputedData Layout
	{
		[Token(Token = "0x6001EFE")]
		[Address(RVA = "0x4C8EF40", Offset = "0x4C8EF40", VA = "0x4C8EF40")]
		get
		{
			return ref *(LayoutComputedData*)null;
		}
	}

	[Token(Token = "0x170007E3")]
	public unsafe ref LayoutStyleData Style
	{
		[Token(Token = "0x6001EFF")]
		[Address(RVA = "0x4C90370", Offset = "0x4C90370", VA = "0x4C90370")]
		get
		{
			return ref *(LayoutStyleData*)null;
		}
	}

	[Token(Token = "0x170007E4")]
	public unsafe ref LayoutStyleBorderData StyleBorders
	{
		[Token(Token = "0x6001F00")]
		[Address(RVA = "0x4C91BD0", Offset = "0x4C91BD0", VA = "0x4C91BD0")]
		get
		{
			return ref *(LayoutStyleBorderData*)null;
		}
	}

	[Token(Token = "0x170007E5")]
	public unsafe ref LayoutStyleMarginData StyleMargins
	{
		[Token(Token = "0x6001F01")]
		[Address(RVA = "0x4C92190", Offset = "0x4C92190", VA = "0x4C92190")]
		get
		{
			return ref *(LayoutStyleMarginData*)null;
		}
	}

	[Token(Token = "0x170007E6")]
	public unsafe ref LayoutStyleDimensionData StyleDimensions
	{
		[Token(Token = "0x6001F02")]
		[Address(RVA = "0x4C90C50", Offset = "0x4C90C50", VA = "0x4C90C50")]
		get
		{
			return ref *(LayoutStyleDimensionData*)null;
		}
	}

	[Token(Token = "0x170007E7")]
	public unsafe ref bool IsDirty
	{
		[Token(Token = "0x6001F03")]
		[Address(RVA = "0x4C92270", Offset = "0x4C92270", VA = "0x4C92270")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x170007E8")]
	public unsafe ref bool HasNewLayout
	{
		[Token(Token = "0x6001F04")]
		[Address(RVA = "0x4C922E0", Offset = "0x4C922E0", VA = "0x4C922E0")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x170007E9")]
	public bool IsMeasureDefined
	{
		[Token(Token = "0x6001F05")]
		[Address(RVA = "0x4C92350", Offset = "0x4C92350", VA = "0x4C92350")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007EA")]
	public LayoutMeasureFunction Measure
	{
		[Token(Token = "0x6001F06")]
		[Address(RVA = "0x4C923C0", Offset = "0x4C923C0", VA = "0x4C923C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F07")]
		[Address(RVA = "0x4C92430", Offset = "0x4C92430", VA = "0x4C92430")]
		set
		{
		}
	}

	[Token(Token = "0x170007EB")]
	public LayoutBaselineFunction Baseline
	{
		[Token(Token = "0x6001F0A")]
		[Address(RVA = "0x4C92580", Offset = "0x4C92580", VA = "0x4C92580")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007EC")]
	public LayoutConfig Config
	{
		[Token(Token = "0x6001F0B")]
		[Address(RVA = "0x4C925F0", Offset = "0x4C925F0", VA = "0x4C925F0")]
		get
		{
			return default(LayoutConfig);
		}
		[Token(Token = "0x6001F0C")]
		[Address(RVA = "0x4C926A0", Offset = "0x4C926A0", VA = "0x4C926A0")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EC3")]
	[Address(RVA = "0x4C8F830", Offset = "0x4C8F830", VA = "0x4C8F830")]
	private unsafe float GetLayoutValue(float* buffer, LayoutEdge edge)
	{
		return default(float);
	}

	[Token(Token = "0x6001EC8")]
	[Address(RVA = "0x4C8FBE0", Offset = "0x4C8FBE0", VA = "0x4C8FBE0")]
	public void Insert(int index, LayoutNode child)
	{
	}

	[Token(Token = "0x6001EC9")]
	[Address(RVA = "0x4C8FF90", Offset = "0x4C8FF90", VA = "0x4C8FF90")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6001ECA")]
	[Address(RVA = "0x4C901D0", Offset = "0x4C901D0", VA = "0x4C901D0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001EEE")]
	[Address(RVA = "0x4C908D0", Offset = "0x4C908D0", VA = "0x4C908D0")]
	private void SetValue(ref float currentValue, float newValue)
	{
	}

	[Token(Token = "0x6001EEF")]
	[Address(RVA = "0x4C90EB0", Offset = "0x4C90EB0", VA = "0x4C90EB0")]
	private void SetStyleValue(ref LayoutValue currentValue, LayoutValue newValue)
	{
	}

	[Token(Token = "0x6001EF0")]
	[Address(RVA = "0x4C90AC0", Offset = "0x4C90AC0", VA = "0x4C90AC0")]
	private void SetStyleValueUnit(ref LayoutValue currentValue, LayoutValue newValue)
	{
	}

	[Token(Token = "0x6001EF1")]
	[Address(RVA = "0x4C92080", Offset = "0x4C92080", VA = "0x4C92080")]
	private void SetStyleValuePoint(ref LayoutValue currentValue, LayoutValue newValue)
	{
	}

	[Token(Token = "0x6001EF2")]
	[Address(RVA = "0x4C92030", Offset = "0x4C92030", VA = "0x4C92030")]
	private void SetStyleValuePercent(ref LayoutValue currentValue, LayoutValue newValue)
	{
	}

	[Token(Token = "0x6001EF3")]
	[Address(RVA = "0x4C920F0", Offset = "0x4C920F0", VA = "0x4C920F0")]
	private void SetStyleValueAuto(ref LayoutValue currentValue)
	{
	}

	[Token(Token = "0x6001EF4")]
	[Address(RVA = "0x4C91440", Offset = "0x4C91440", VA = "0x4C91440")]
	private void SetStyleEdgePosition(LayoutEdge edge, LayoutValue value)
	{
	}

	[Token(Token = "0x6001EF5")]
	[Address(RVA = "0x4C91630", Offset = "0x4C91630", VA = "0x4C91630")]
	private void SetStyleEdgeMargin(LayoutEdge edge, LayoutValue value)
	{
	}

	[Token(Token = "0x6001EF6")]
	[Address(RVA = "0x4C918C0", Offset = "0x4C918C0", VA = "0x4C918C0")]
	private void SetStyleEdgePadding(LayoutEdge edge, LayoutValue value)
	{
	}

	[Token(Token = "0x6001EF7")]
	[Address(RVA = "0x4C92150", Offset = "0x4C92150", VA = "0x4C92150")]
	private void StyleEdgeSetPercent(ref LayoutValue value, float newValue)
	{
	}

	[Token(Token = "0x6001EF8")]
	[Address(RVA = "0x4C92200", Offset = "0x4C92200", VA = "0x4C92200")]
	private void StyleEdgeSetAuto(ref LayoutValue value)
	{
	}

	[Token(Token = "0x6001EF9")]
	[Address(RVA = "0x4C91C40", Offset = "0x4C91C40", VA = "0x4C91C40")]
	private void StyleEdgeSetPoint(ref LayoutValue value, float newValue)
	{
	}

	[Token(Token = "0x6001EFB")]
	[Address(RVA = "0x4C8E390", Offset = "0x4C8E390", VA = "0x4C8E390")]
	internal LayoutNode(LayoutDataAccess access, LayoutHandle handle)
	{
	}

	[Token(Token = "0x6001F08")]
	[Address(RVA = "0x4C924A0", Offset = "0x4C924A0", VA = "0x4C924A0")]
	public void SetOwner(VisualElement func)
	{
	}

	[Token(Token = "0x6001F09")]
	[Address(RVA = "0x4C92510", Offset = "0x4C92510", VA = "0x4C92510")]
	public VisualElement GetOwner()
	{
		return null;
	}

	[Token(Token = "0x6001F0D")]
	[Address(RVA = "0x4C8FD70", Offset = "0x4C8FD70", VA = "0x4C8FD70")]
	public void MarkDirty()
	{
	}

	[Token(Token = "0x6001F0E")]
	[Address(RVA = "0x4C92710", Offset = "0x4C92710", VA = "0x4C92710")]
	public void MarkLayoutSeen()
	{
	}

	[Token(Token = "0x6001F0F")]
	[Address(RVA = "0x4C8E3B0", Offset = "0x4C8E3B0", VA = "0x4C8E3B0")]
	public void InitializeStyle()
	{
	}

	[Token(Token = "0x6001F10")]
	[Address(RVA = "0x4C92780", Offset = "0x4C92780", VA = "0x4C92780")]
	public void CopyFromComputedStyle(ComputedStyle style)
	{
	}

	[Token(Token = "0x6001F11")]
	[Address(RVA = "0x4C92BB0", Offset = "0x4C92BB0", VA = "0x4C92BB0")]
	public void SoftReset()
	{
	}

	[Token(Token = "0x6001F12")]
	[Address(RVA = "0x4C92C20", Offset = "0x4C92C20", VA = "0x4C92C20", Slot = "4")]
	public bool Equals(LayoutNode other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F13")]
	[Address(RVA = "0x4C92C40", Offset = "0x4C92C40", VA = "0x4C92C40", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F14")]
	[Address(RVA = "0x4C92CB0", Offset = "0x4C92CB0", VA = "0x4C92CB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001F15")]
	[Address(RVA = "0x4C92CC0", Offset = "0x4C92CC0", VA = "0x4C92CC0")]
	public void CalculateLayout(float width = float.NaN, float height = float.NaN)
	{
	}
}
