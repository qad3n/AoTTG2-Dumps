// ==================== AoTTG2 cross-reference ====================
// Type: Gilzoide.FlexUi.FlexLayout
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gilzoide/FlexUi/FlexLayout.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using AOT;
using Gilzoide.FlexUi.Yoga;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gilzoide.FlexUi;

[Token(Token = "0x2000002")]
[ExecuteAlways]
[RequireComponent(typeof(RectTransform))]
public class FlexLayout : UIBehaviour, IComparer<FlexLayout>
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000003")]
	[CompilerGenerated]
	private struct _003CRefreshRootLayout_003Ed__155 : IAsyncStateMachine
	{
		[Token(Token = "0x400002A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400002B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncVoidMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400002C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public FlexLayout _003C_003E4__this;

		[Token(Token = "0x400002D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private FlexLayout _003Croot_003E5__2;

		[Token(Token = "0x400002E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private YieldAwaitable.YieldAwaiter _003C_003Eu__1;

		[Token(Token = "0x600005F")]
		[Address(RVA = "0x187D9E0", Offset = "0x187BFE0", VA = "0x18187D9E0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000060")]
		[Address(RVA = "0x187DE20", Offset = "0x187C420", VA = "0x18187DE20", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000001")]
	public const DrivenTransformProperties DrivenRectTransformProperties = DrivenTransformProperties.Anchors | DrivenTransformProperties.AnchoredPosition | DrivenTransformProperties.SizeDelta;

	[Token(Token = "0x4000002")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[SerializeField]
	private FlexLayoutConfig _configuration;

	[Token(Token = "0x4000003")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[SerializeField]
	private PositionType _positionType;

	[Token(Token = "0x4000004")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	[SerializeField]
	private YGValue _positionLeft;

	[Token(Token = "0x4000005")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	[SerializeField]
	private YGValue _positionTop;

	[Token(Token = "0x4000006")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private YGValue _positionRight;

	[Token(Token = "0x4000007")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	[SerializeField]
	private YGValue _positionBottom;

	[Token(Token = "0x4000008")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	[SerializeField]
	private Direction _direction;

	[Token(Token = "0x4000009")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	[SerializeField]
	private FlexDirection _flexDirection;

	[Token(Token = "0x400000A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	[SerializeField]
	private Wrap _flexWrap;

	[Token(Token = "0x400000B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	[SerializeField]
	private YGValue _flexBasis;

	[Token(Token = "0x400000C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	[SerializeField]
	[Min(0f)]
	private float _flexGrow;

	[Token(Token = "0x400000D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	[SerializeField]
	[Min(0f)]
	private float _flexShrink;

	[Token(Token = "0x400000E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	[SerializeField]
	private Justify _justifyContent;

	[Token(Token = "0x400000F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	[SerializeField]
	private Align _alignItems;

	[Token(Token = "0x4000010")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	[SerializeField]
	private Align _alignSelf;

	[Token(Token = "0x4000011")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	[SerializeField]
	private Align _alignContent;

	[Token(Token = "0x4000012")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	[SerializeField]
	private YGValue _width;

	[Token(Token = "0x4000013")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	[SerializeField]
	private YGValue _height;

	[Token(Token = "0x4000014")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	[SerializeField]
	private YGValue _minWidth;

	[Token(Token = "0x4000015")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	[SerializeField]
	private YGValue _minHeight;

	[Token(Token = "0x4000016")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	[SerializeField]
	private YGValue _maxWidth;

	[Token(Token = "0x4000017")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	[SerializeField]
	private YGValue _maxHeight;

	[Token(Token = "0x4000018")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	[SerializeField]
	private YGValue _aspectRatio;

	[Token(Token = "0x4000019")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	[SerializeField]
	private YGValue _marginLeft;

	[Token(Token = "0x400001A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	[SerializeField]
	private YGValue _marginTop;

	[Token(Token = "0x400001B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	[SerializeField]
	private YGValue _marginRight;

	[Token(Token = "0x400001C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	[SerializeField]
	private YGValue _marginBottom;

	[Token(Token = "0x400001D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	[SerializeField]
	private YGValue _paddingLeft;

	[Token(Token = "0x400001E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	[SerializeField]
	private YGValue _paddingTop;

	[Token(Token = "0x400001F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	[SerializeField]
	private YGValue _paddingRight;

	[Token(Token = "0x4000020")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	[SerializeField]
	private YGValue _paddingBottom;

	[Token(Token = "0x4000021")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	[SerializeField]
	[Min(0f)]
	private float _gapColumn;

	[Token(Token = "0x4000022")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF4")]
	[SerializeField]
	[Min(0f)]
	private float _gapRow;

	[Token(Token = "0x4000023")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private YGNode _layoutNode;

	[Token(Token = "0x4000024")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private FlexLayout _parentNode;

	[Token(Token = "0x4000025")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	internal readonly List<FlexLayout> _childrenNodes;

	[Token(Token = "0x4000026")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private DrivenRectTransformTracker _drivenRectTransformTracker;

	[Token(Token = "0x4000027")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x111")]
	private bool _isRefreshScheduled;

	[Token(Token = "0x4000028")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private RectTransform _rectTransform;

	[Token(Token = "0x4000029")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly IntPtr RectTransformMeasureFuncPtr;

	[Token(Token = "0x17000001")]
	public bool IsRootLayoutNode
	{
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x187BA70", Offset = "0x187A070", VA = "0x18187BA70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000002")]
	public FlexLayout RootLayoutNode
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x187BDA0", Offset = "0x187A3A0", VA = "0x18187BDA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public FlexLayout ParentLayoutNode
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x187BC70", Offset = "0x187A270", VA = "0x18187BC70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	public RectTransform RectTransform
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x187BCC0", Offset = "0x187A2C0", VA = "0x18187BCC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000005")]
	public FlexLayoutConfig Configuration
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x187C0F0", Offset = "0x187A6F0", VA = "0x18187C0F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public PositionType PositionType
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		get
		{
			return default(PositionType);
		}
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x187D730", Offset = "0x187BD30", VA = "0x18187D730")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public YGValue PositionLeft
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x187BC90", Offset = "0x187A290", VA = "0x18187BC90")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x187D640", Offset = "0x187BC40", VA = "0x18187D640")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public YGValue PositionTop
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x187BCB0", Offset = "0x187A2B0", VA = "0x18187BCB0")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x187D6E0", Offset = "0x187BCE0", VA = "0x18187D6E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public YGValue PositionRight
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x187BCA0", Offset = "0x187A2A0", VA = "0x18187BCA0")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x187D690", Offset = "0x187BC90", VA = "0x18187D690")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public YGValue PositionBottom
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x187BC80", Offset = "0x187A280", VA = "0x18187BC80")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x187D5F0", Offset = "0x187BBF0", VA = "0x18187D5F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public Direction Direction
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x58A610", Offset = "0x588C10", VA = "0x18058A610")]
		get
		{
			return default(Direction);
		}
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x187C1B0", Offset = "0x187A7B0", VA = "0x18187C1B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public FlexDirection FlexDirection
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x58A540", Offset = "0x588B40", VA = "0x18058A540")]
		get
		{
			return default(FlexDirection);
		}
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x187C460", Offset = "0x187AA60", VA = "0x18187C460")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public Wrap FlexWrap
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0xB57820", Offset = "0xB55E20", VA = "0x180B57820")]
		get
		{
			return default(Wrap);
		}
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x187C670", Offset = "0x187AC70", VA = "0x18187C670")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public YGValue FlexBasis
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x187C260", Offset = "0x187A860", VA = "0x18187C260")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public float FlexGrow
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x58A700", Offset = "0x588D00", VA = "0x18058A700")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x187C510", Offset = "0x187AB10", VA = "0x18187C510")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public float FlexShrink
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0xCDE8A0", Offset = "0xCDCEA0", VA = "0x180CDE8A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x187C5C0", Offset = "0x187ABC0", VA = "0x18187C5C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public Justify JustifyContent
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0xA4D530", Offset = "0xA4BB30", VA = "0x180A4D530")]
		get
		{
			return default(Justify);
		}
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x187CA90", Offset = "0x187B090", VA = "0x18187CA90")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public Align AlignItems
	{
		[Token(Token = "0x600001F")]
		[Address(RVA = "0xACB500", Offset = "0xAC9B00", VA = "0x180ACB500")]
		get
		{
			return default(Align);
		}
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x187BEE0", Offset = "0x187A4E0", VA = "0x18187BEE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public Align AlignSelf
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x58A560", Offset = "0x588B60", VA = "0x18058A560")]
		get
		{
			return default(Align);
		}
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x187BF90", Offset = "0x187A590", VA = "0x18187BF90")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public Align AlignContent
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x187BA40", Offset = "0x187A040", VA = "0x18187BA40")]
		get
		{
			return default(Align);
		}
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x187BE30", Offset = "0x187A430", VA = "0x18187BE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public YGValue Width
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x187D7E0", Offset = "0x187BDE0", VA = "0x18187D7E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public YGValue Height
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x58A5D0", Offset = "0x588BD0", VA = "0x18058A5D0")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x187C890", Offset = "0x187AE90", VA = "0x18187C890")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public YGValue MinWidth
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x187D460", Offset = "0x187BA60", VA = "0x18187D460")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public YGValue MinHeight
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x187D410", Offset = "0x187BA10", VA = "0x18187D410")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public YGValue MaxWidth
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x187D3C0", Offset = "0x187B9C0", VA = "0x18187D3C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public YGValue MaxHeight
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x187BC20", Offset = "0x187A220", VA = "0x18187BC20")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x187D370", Offset = "0x187B970", VA = "0x18187D370")]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public YGValue AspectRatio
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x58A890", Offset = "0x588E90", VA = "0x18058A890")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x187C040", Offset = "0x187A640", VA = "0x18187C040")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public YGValue MarginLeft
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x1537220", Offset = "0x1535820", VA = "0x181537220")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x187CD50", Offset = "0x187B350", VA = "0x18187CD50")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public YGValue MarginTop
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x187BC10", Offset = "0x187A210", VA = "0x18187BC10")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x187D160", Offset = "0x187B760", VA = "0x18187D160")]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public YGValue MarginRight
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0xC8FF80", Offset = "0xC8E580", VA = "0x180C8FF80")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x187CF50", Offset = "0x187B550", VA = "0x18187CF50")]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public YGValue MarginBottom
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x187BC00", Offset = "0x187A200", VA = "0x18187BC00")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x187CB40", Offset = "0x187B140", VA = "0x18187CB40")]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public YGValue PaddingLeft
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x187BC40", Offset = "0x187A240", VA = "0x18187BC40")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x187D500", Offset = "0x187BB00", VA = "0x18187D500")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public YGValue PaddingTop
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x187BC60", Offset = "0x187A260", VA = "0x18187BC60")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x187D5A0", Offset = "0x187BBA0", VA = "0x18187D5A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public YGValue PaddingRight
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x187BC50", Offset = "0x187A250", VA = "0x18187BC50")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x187D550", Offset = "0x187BB50", VA = "0x18187D550")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public YGValue PaddingBottom
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x187BC30", Offset = "0x187A230", VA = "0x18187BC30")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x187D4B0", Offset = "0x187BAB0", VA = "0x18187D4B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public float GapColumn
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x187BA50", Offset = "0x187A050", VA = "0x18187BA50")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x187C720", Offset = "0x187AD20", VA = "0x18187C720")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public float GapRow
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x187BA60", Offset = "0x187A060", VA = "0x18187BA60")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x187C7D0", Offset = "0x187ADD0", VA = "0x18187C7D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	protected YGNode LayoutNode
	{
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x187BAD0", Offset = "0x187A0D0", VA = "0x18187BAD0")]
		get
		{
			return default(YGNode);
		}
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x1879260", Offset = "0x1877860", VA = "0x181879260", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x1879230", Offset = "0x1877830", VA = "0x181879230", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x18791F0", Offset = "0x18777F0", VA = "0x1818791F0", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x18794C0", Offset = "0x1877AC0", VA = "0x1818794C0", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x1879480", Offset = "0x1877A80", VA = "0x181879480", Slot = "18")]
	protected virtual void OnTransformChildrenChanged()
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x1879290", Offset = "0x1877890", VA = "0x181879290", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x187A0F0", Offset = "0x18786F0", VA = "0x18187A0F0")]
	[AsyncStateMachine(typeof(_003CRefreshRootLayout_003Ed__155))]
	public void RefreshRootLayout()
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x187A060", Offset = "0x1878660", VA = "0x18187A060")]
	[ContextMenu("Refresh Layout")]
	public void RefreshRootLayoutImmediate()
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x18790D0", Offset = "0x18776D0", VA = "0x1818790D0", Slot = "17")]
	public int Compare(FlexLayout x, FlexLayout y)
	{
		return default(int);
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x1879AC0", Offset = "0x18780C0", VA = "0x181879AC0")]
	protected void RefreshLayout()
	{
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x187A4E0", Offset = "0x1878AE0", VA = "0x18187A4E0")]
	protected void UpdateNodeStyle()
	{
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x187A3F0", Offset = "0x18789F0", VA = "0x18187A3F0")]
	protected void UpdateNodeMeasure()
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x1879EF0", Offset = "0x18784F0", VA = "0x181879EF0")]
	protected void RefreshParent()
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x1878CD0", Offset = "0x18772D0", VA = "0x181878CD0")]
	protected void ClearParent()
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x18795D0", Offset = "0x1877BD0", VA = "0x1818795D0")]
	protected void RefreshChildren()
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x187A1A0", Offset = "0x18787A0", VA = "0x18187A1A0")]
	protected void TrackChild(FlexLayout child, bool callChildrenChanged = true)
	{
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x187A2B0", Offset = "0x18788B0", VA = "0x18187A2B0")]
	protected void UntrackChild(FlexLayout child, bool callChildrenChanged = true)
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x1879980", Offset = "0x1877F80", VA = "0x181879980")]
	protected void RefreshDrivenRectTransformTracker()
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x18791D0", Offset = "0x18777D0", VA = "0x1818791D0")]
	protected void OnChildrenChanged()
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x1878E50", Offset = "0x1877450", VA = "0x181878E50")]
	protected void ClearTrackedChildren()
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x1879500", Offset = "0x1877B00", VA = "0x181879500")]
	[MonoPInvokeCallback(typeof(Gilzoide.FlexUi.Yoga.Yoga.YGMeasureFunc))]
	private static Vector2 RectTransformMeasureFunc(IntPtr nodePtr, float width, MeasureMode widthMode, float height, MeasureMode heightMode)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x187B7A0", Offset = "0x1879DA0", VA = "0x18187B7A0")]
	public FlexLayout()
	{
	}
}
