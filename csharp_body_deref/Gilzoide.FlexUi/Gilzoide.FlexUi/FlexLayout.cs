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
		[Address(RVA = "0x5215BC0", Offset = "0x5214BC0", VA = "0x5215BC0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000060")]
		[Address(RVA = "0x5216040", Offset = "0x5215040", VA = "0x5216040", Slot = "5")]
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
		[Address(RVA = "0x520EAE0", Offset = "0x520DAE0", VA = "0x520EAE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000002")]
	public FlexLayout RootLayoutNode
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x520EB30", Offset = "0x520DB30", VA = "0x520EB30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public FlexLayout ParentLayoutNode
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x520EBB0", Offset = "0x520DBB0", VA = "0x520EBB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	public RectTransform RectTransform
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x520EBC0", Offset = "0x520DBC0", VA = "0x520EBC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000005")]
	public FlexLayoutConfig Configuration
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x520EC70", Offset = "0x520DC70", VA = "0x520EC70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x520EC80", Offset = "0x520DC80", VA = "0x520EC80")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public PositionType PositionType
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x520F390", Offset = "0x520E390", VA = "0x520F390")]
		get
		{
			return default(PositionType);
		}
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x520F3A0", Offset = "0x520E3A0", VA = "0x520F3A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public YGValue PositionLeft
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x520F540", Offset = "0x520E540", VA = "0x520F540")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x520F550", Offset = "0x520E550", VA = "0x520F550")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public YGValue PositionTop
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x520F820", Offset = "0x520E820", VA = "0x520F820")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x520F830", Offset = "0x520E830", VA = "0x520F830")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public YGValue PositionRight
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x520F900", Offset = "0x520E900", VA = "0x520F900")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x520F910", Offset = "0x520E910", VA = "0x520F910")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public YGValue PositionBottom
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x520F9E0", Offset = "0x520E9E0", VA = "0x520F9E0")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x520F9F0", Offset = "0x520E9F0", VA = "0x520F9F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public Direction Direction
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x520FAC0", Offset = "0x520EAC0", VA = "0x520FAC0")]
		get
		{
			return default(Direction);
		}
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x520FAD0", Offset = "0x520EAD0", VA = "0x520FAD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public FlexDirection FlexDirection
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x520FC70", Offset = "0x520EC70", VA = "0x520FC70")]
		get
		{
			return default(FlexDirection);
		}
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x520FC80", Offset = "0x520EC80", VA = "0x520FC80")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public Wrap FlexWrap
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x520FE20", Offset = "0x520EE20", VA = "0x520FE20")]
		get
		{
			return default(Wrap);
		}
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x520FE30", Offset = "0x520EE30", VA = "0x520FE30")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public YGValue FlexBasis
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x520FFD0", Offset = "0x520EFD0", VA = "0x520FFD0")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x520FFE0", Offset = "0x520EFE0", VA = "0x520FFE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public float FlexGrow
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x52102C0", Offset = "0x520F2C0", VA = "0x52102C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x52102D0", Offset = "0x520F2D0", VA = "0x52102D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public float FlexShrink
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x5210490", Offset = "0x520F490", VA = "0x5210490")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x52104A0", Offset = "0x520F4A0", VA = "0x52104A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public Justify JustifyContent
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x5210660", Offset = "0x520F660", VA = "0x5210660")]
		get
		{
			return default(Justify);
		}
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x5210670", Offset = "0x520F670", VA = "0x5210670")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public Align AlignItems
	{
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x5210810", Offset = "0x520F810", VA = "0x5210810")]
		get
		{
			return default(Align);
		}
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x5210820", Offset = "0x520F820", VA = "0x5210820")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public Align AlignSelf
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x52109C0", Offset = "0x520F9C0", VA = "0x52109C0")]
		get
		{
			return default(Align);
		}
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x52109D0", Offset = "0x520F9D0", VA = "0x52109D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public Align AlignContent
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x5210B70", Offset = "0x520FB70", VA = "0x5210B70")]
		get
		{
			return default(Align);
		}
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x5210B80", Offset = "0x520FB80", VA = "0x5210B80")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public YGValue Width
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x5210D20", Offset = "0x520FD20", VA = "0x5210D20")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x5210D30", Offset = "0x520FD30", VA = "0x5210D30")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public YGValue Height
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x5211010", Offset = "0x5210010", VA = "0x5211010")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x5211020", Offset = "0x5210020", VA = "0x5211020")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public YGValue MinWidth
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x5211300", Offset = "0x5210300", VA = "0x5211300")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x5211310", Offset = "0x5210310", VA = "0x5211310")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public YGValue MinHeight
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x52115D0", Offset = "0x52105D0", VA = "0x52115D0")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x52115E0", Offset = "0x52105E0", VA = "0x52115E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public YGValue MaxWidth
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x52118A0", Offset = "0x52108A0", VA = "0x52118A0")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x52118B0", Offset = "0x52108B0", VA = "0x52118B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public YGValue MaxHeight
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x5211B70", Offset = "0x5210B70", VA = "0x5211B70")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x5211B80", Offset = "0x5210B80", VA = "0x5211B80")]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public YGValue AspectRatio
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x5211E40", Offset = "0x5210E40", VA = "0x5211E40")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x5211E50", Offset = "0x5210E50", VA = "0x5211E50")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public YGValue MarginLeft
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x5212010", Offset = "0x5211010", VA = "0x5212010")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x5212020", Offset = "0x5211020", VA = "0x5212020")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public YGValue MarginTop
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x5212300", Offset = "0x5211300", VA = "0x5212300")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x5212310", Offset = "0x5211310", VA = "0x5212310")]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public YGValue MarginRight
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x52123E0", Offset = "0x52113E0", VA = "0x52123E0")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x52123F0", Offset = "0x52113F0", VA = "0x52123F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public YGValue MarginBottom
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x52124C0", Offset = "0x52114C0", VA = "0x52124C0")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x52124D0", Offset = "0x52114D0", VA = "0x52124D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public YGValue PaddingLeft
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x52125A0", Offset = "0x52115A0", VA = "0x52125A0")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x52125B0", Offset = "0x52115B0", VA = "0x52125B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public YGValue PaddingTop
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x5212880", Offset = "0x5211880", VA = "0x5212880")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x5212890", Offset = "0x5211890", VA = "0x5212890")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public YGValue PaddingRight
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x5212960", Offset = "0x5211960", VA = "0x5212960")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x5212970", Offset = "0x5211970", VA = "0x5212970")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public YGValue PaddingBottom
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x5212A40", Offset = "0x5211A40", VA = "0x5212A40")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x5212A50", Offset = "0x5211A50", VA = "0x5212A50")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public float GapColumn
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x5212B20", Offset = "0x5211B20", VA = "0x5212B20")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x5212B30", Offset = "0x5211B30", VA = "0x5212B30")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public float GapRow
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x5212CF0", Offset = "0x5211CF0", VA = "0x5212CF0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x5212D00", Offset = "0x5211D00", VA = "0x5212D00")]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	protected YGNode LayoutNode
	{
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x520EF30", Offset = "0x520DF30", VA = "0x520EF30")]
		get
		{
			return default(YGNode);
		}
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x5213A30", Offset = "0x5212A30", VA = "0x5213A30", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x5213FC0", Offset = "0x5212FC0", VA = "0x5213FC0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x5214360", Offset = "0x5213360", VA = "0x5214360", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x52143B0", Offset = "0x52133B0", VA = "0x52143B0", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x52143E0", Offset = "0x52133E0", VA = "0x52143E0", Slot = "18")]
	protected virtual void OnTransformChildrenChanged()
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x5214410", Offset = "0x5213410", VA = "0x5214410", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x520F2E0", Offset = "0x520E2E0", VA = "0x520F2E0")]
	[AsyncStateMachine(typeof(_003CRefreshRootLayout_003Ed__155))]
	public void RefreshRootLayout()
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x5214AD0", Offset = "0x5213AD0", VA = "0x5214AD0")]
	[ContextMenu("Refresh Layout")]
	public void RefreshRootLayoutImmediate()
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x5214B50", Offset = "0x5213B50", VA = "0x5214B50", Slot = "17")]
	public int Compare(FlexLayout x, FlexLayout y)
	{
		return default(int);
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x5214830", Offset = "0x5213830", VA = "0x5214830")]
	protected void RefreshLayout()
	{
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x52130E0", Offset = "0x52120E0", VA = "0x52130E0")]
	protected void UpdateNodeStyle()
	{
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x5212EC0", Offset = "0x5211EC0", VA = "0x5212EC0")]
	protected void UpdateNodeMeasure()
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x5213A50", Offset = "0x5212A50", VA = "0x5213A50")]
	protected void RefreshParent()
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x5214050", Offset = "0x5213050", VA = "0x5214050")]
	protected void ClearParent()
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x5213C50", Offset = "0x5212C50", VA = "0x5213C50")]
	protected void RefreshChildren()
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x5215130", Offset = "0x5214130", VA = "0x5215130")]
	protected void TrackChild(FlexLayout child, bool callChildrenChanged = true)
	{
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x5215230", Offset = "0x5214230", VA = "0x5215230")]
	protected void UntrackChild(FlexLayout child, bool callChildrenChanged = true)
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x52155E0", Offset = "0x52145E0", VA = "0x52155E0")]
	protected void RefreshDrivenRectTransformTracker()
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x5215340", Offset = "0x5214340", VA = "0x5215340")]
	protected void OnChildrenChanged()
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x52140D0", Offset = "0x52130D0", VA = "0x52140D0")]
	protected void ClearTrackedChildren()
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x520EA10", Offset = "0x520DA10", VA = "0x520EA10")]
	[MonoPInvokeCallback(typeof(Gilzoide.FlexUi.Yoga.Yoga.YGMeasureFunc))]
	private static Vector2 RectTransformMeasureFunc(IntPtr nodePtr, float width, MeasureMode widthMode, float height, MeasureMode heightMode)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x52157D0", Offset = "0x52147D0", VA = "0x52157D0")]
	public FlexLayout()
	{
	}
}
