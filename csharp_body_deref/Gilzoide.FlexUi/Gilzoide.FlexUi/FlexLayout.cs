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

[Token(Token = "0x2000004")]
[ExecuteAlways]
[RequireComponent(typeof(RectTransform))]
public class FlexLayout : UIBehaviour, IComparer<FlexLayout>
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000005")]
	[CompilerGenerated]
	private struct _003CRefreshRootLayout_003Ed__155 : IAsyncStateMachine
	{
		[Token(Token = "0x400002F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000030")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncVoidMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000031")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public FlexLayout _003C_003E4__this;

		[Token(Token = "0x4000032")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private FlexLayout _003Croot_003E5__2;

		[Token(Token = "0x4000033")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private YieldAwaitable.YieldAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000061")]
		[Address(RVA = "0x39BBFC0", Offset = "0x39BBFC0", VA = "0x39BBFC0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000062")]
		[Address(RVA = "0x39BC420", Offset = "0x39BC420", VA = "0x39BC420", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000006")]
	public const DrivenTransformProperties DrivenRectTransformProperties = DrivenTransformProperties.Anchors | DrivenTransformProperties.AnchoredPosition | DrivenTransformProperties.SizeDelta;

	[Token(Token = "0x4000007")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[SerializeField]
	private FlexLayoutConfig _configuration;

	[Token(Token = "0x4000008")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[SerializeField]
	private PositionType _positionType;

	[Token(Token = "0x4000009")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	[SerializeField]
	private YGValue _positionLeft;

	[Token(Token = "0x400000A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	[SerializeField]
	private YGValue _positionTop;

	[Token(Token = "0x400000B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private YGValue _positionRight;

	[Token(Token = "0x400000C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	[SerializeField]
	private YGValue _positionBottom;

	[Token(Token = "0x400000D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	[SerializeField]
	private Direction _direction;

	[Token(Token = "0x400000E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	[SerializeField]
	private FlexDirection _flexDirection;

	[Token(Token = "0x400000F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	[SerializeField]
	private Wrap _flexWrap;

	[Token(Token = "0x4000010")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	[SerializeField]
	private YGValue _flexBasis;

	[Token(Token = "0x4000011")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	[SerializeField]
	[Min(0f)]
	private float _flexGrow;

	[Token(Token = "0x4000012")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	[SerializeField]
	[Min(0f)]
	private float _flexShrink;

	[Token(Token = "0x4000013")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	[SerializeField]
	private Justify _justifyContent;

	[Token(Token = "0x4000014")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	[SerializeField]
	private Align _alignItems;

	[Token(Token = "0x4000015")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	[SerializeField]
	private Align _alignSelf;

	[Token(Token = "0x4000016")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	[SerializeField]
	private Align _alignContent;

	[Token(Token = "0x4000017")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	[SerializeField]
	private YGValue _width;

	[Token(Token = "0x4000018")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	[SerializeField]
	private YGValue _height;

	[Token(Token = "0x4000019")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	[SerializeField]
	private YGValue _minWidth;

	[Token(Token = "0x400001A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	[SerializeField]
	private YGValue _minHeight;

	[Token(Token = "0x400001B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	[SerializeField]
	private YGValue _maxWidth;

	[Token(Token = "0x400001C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	[SerializeField]
	private YGValue _maxHeight;

	[Token(Token = "0x400001D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	[SerializeField]
	private YGValue _aspectRatio;

	[Token(Token = "0x400001E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	[SerializeField]
	private YGValue _marginLeft;

	[Token(Token = "0x400001F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	[SerializeField]
	private YGValue _marginTop;

	[Token(Token = "0x4000020")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	[SerializeField]
	private YGValue _marginRight;

	[Token(Token = "0x4000021")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	[SerializeField]
	private YGValue _marginBottom;

	[Token(Token = "0x4000022")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	[SerializeField]
	private YGValue _paddingLeft;

	[Token(Token = "0x4000023")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	[SerializeField]
	private YGValue _paddingTop;

	[Token(Token = "0x4000024")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	[SerializeField]
	private YGValue _paddingRight;

	[Token(Token = "0x4000025")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	[SerializeField]
	private YGValue _paddingBottom;

	[Token(Token = "0x4000026")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	[SerializeField]
	[Min(0f)]
	private float _gapColumn;

	[Token(Token = "0x4000027")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF4")]
	[SerializeField]
	[Min(0f)]
	private float _gapRow;

	[Token(Token = "0x4000028")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private YGNode _layoutNode;

	[Token(Token = "0x4000029")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private FlexLayout _parentNode;

	[Token(Token = "0x400002A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	internal readonly List<FlexLayout> _childrenNodes;

	[Token(Token = "0x400002B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private DrivenRectTransformTracker _drivenRectTransformTracker;

	[Token(Token = "0x400002C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x111")]
	private bool _isRefreshScheduled;

	[Token(Token = "0x400002D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private RectTransform _rectTransform;

	[Token(Token = "0x400002E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly IntPtr RectTransformMeasureFuncPtr;

	[Token(Token = "0x17000001")]
	public bool IsRootLayoutNode
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x39B4DB0", Offset = "0x39B4DB0", VA = "0x39B4DB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000002")]
	public FlexLayout RootLayoutNode
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x39B4E00", Offset = "0x39B4E00", VA = "0x39B4E00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public FlexLayout ParentLayoutNode
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x39B4E80", Offset = "0x39B4E80", VA = "0x39B4E80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	public RectTransform RectTransform
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x39B4E90", Offset = "0x39B4E90", VA = "0x39B4E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000005")]
	public FlexLayoutConfig Configuration
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x39B4F40", Offset = "0x39B4F40", VA = "0x39B4F40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x39B4F50", Offset = "0x39B4F50", VA = "0x39B4F50")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public PositionType PositionType
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x39B5590", Offset = "0x39B5590", VA = "0x39B5590")]
		get
		{
			return default(PositionType);
		}
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x39B55A0", Offset = "0x39B55A0", VA = "0x39B55A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public YGValue PositionLeft
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x39B5750", Offset = "0x39B5750", VA = "0x39B5750")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x39B5760", Offset = "0x39B5760", VA = "0x39B5760")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public YGValue PositionTop
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x39B5A40", Offset = "0x39B5A40", VA = "0x39B5A40")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x39B5A50", Offset = "0x39B5A50", VA = "0x39B5A50")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public YGValue PositionRight
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x39B5B30", Offset = "0x39B5B30", VA = "0x39B5B30")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x39B5B40", Offset = "0x39B5B40", VA = "0x39B5B40")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public YGValue PositionBottom
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x39B5C20", Offset = "0x39B5C20", VA = "0x39B5C20")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x39B5C30", Offset = "0x39B5C30", VA = "0x39B5C30")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public Direction Direction
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x39B5D10", Offset = "0x39B5D10", VA = "0x39B5D10")]
		get
		{
			return default(Direction);
		}
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x39B5D20", Offset = "0x39B5D20", VA = "0x39B5D20")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public FlexDirection FlexDirection
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x39B5ED0", Offset = "0x39B5ED0", VA = "0x39B5ED0")]
		get
		{
			return default(FlexDirection);
		}
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x39B5EE0", Offset = "0x39B5EE0", VA = "0x39B5EE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public Wrap FlexWrap
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x39B6090", Offset = "0x39B6090", VA = "0x39B6090")]
		get
		{
			return default(Wrap);
		}
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x39B60A0", Offset = "0x39B60A0", VA = "0x39B60A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public YGValue FlexBasis
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x39B6250", Offset = "0x39B6250", VA = "0x39B6250")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x39B6260", Offset = "0x39B6260", VA = "0x39B6260")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public float FlexGrow
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x39B6550", Offset = "0x39B6550", VA = "0x39B6550")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x39B6560", Offset = "0x39B6560", VA = "0x39B6560")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public float FlexShrink
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x39B6730", Offset = "0x39B6730", VA = "0x39B6730")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x39B6740", Offset = "0x39B6740", VA = "0x39B6740")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public Justify JustifyContent
	{
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x39B6910", Offset = "0x39B6910", VA = "0x39B6910")]
		get
		{
			return default(Justify);
		}
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x39B6920", Offset = "0x39B6920", VA = "0x39B6920")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public Align AlignItems
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x39B6AD0", Offset = "0x39B6AD0", VA = "0x39B6AD0")]
		get
		{
			return default(Align);
		}
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x39B6AE0", Offset = "0x39B6AE0", VA = "0x39B6AE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public Align AlignSelf
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x39B6C90", Offset = "0x39B6C90", VA = "0x39B6C90")]
		get
		{
			return default(Align);
		}
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x39B6CA0", Offset = "0x39B6CA0", VA = "0x39B6CA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public Align AlignContent
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x39B6E50", Offset = "0x39B6E50", VA = "0x39B6E50")]
		get
		{
			return default(Align);
		}
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x39B6E60", Offset = "0x39B6E60", VA = "0x39B6E60")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public YGValue Width
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x39B7010", Offset = "0x39B7010", VA = "0x39B7010")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x39B7020", Offset = "0x39B7020", VA = "0x39B7020")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public YGValue Height
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x39B7310", Offset = "0x39B7310", VA = "0x39B7310")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x39B7320", Offset = "0x39B7320", VA = "0x39B7320")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public YGValue MinWidth
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x39B7610", Offset = "0x39B7610", VA = "0x39B7610")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x39B7620", Offset = "0x39B7620", VA = "0x39B7620")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public YGValue MinHeight
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x39B78F0", Offset = "0x39B78F0", VA = "0x39B78F0")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x39B7900", Offset = "0x39B7900", VA = "0x39B7900")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public YGValue MaxWidth
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x39B7BD0", Offset = "0x39B7BD0", VA = "0x39B7BD0")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x39B7BE0", Offset = "0x39B7BE0", VA = "0x39B7BE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public YGValue MaxHeight
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x39B7EB0", Offset = "0x39B7EB0", VA = "0x39B7EB0")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x39B7EC0", Offset = "0x39B7EC0", VA = "0x39B7EC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public YGValue AspectRatio
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x39B8190", Offset = "0x39B8190", VA = "0x39B8190")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x39B81A0", Offset = "0x39B81A0", VA = "0x39B81A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public YGValue MarginLeft
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x39B8380", Offset = "0x39B8380", VA = "0x39B8380")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x39B8390", Offset = "0x39B8390", VA = "0x39B8390")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public YGValue MarginTop
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x39B8680", Offset = "0x39B8680", VA = "0x39B8680")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x39B8690", Offset = "0x39B8690", VA = "0x39B8690")]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public YGValue MarginRight
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x39B8770", Offset = "0x39B8770", VA = "0x39B8770")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x39B8780", Offset = "0x39B8780", VA = "0x39B8780")]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public YGValue MarginBottom
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x39B8860", Offset = "0x39B8860", VA = "0x39B8860")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x39B8870", Offset = "0x39B8870", VA = "0x39B8870")]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public YGValue PaddingLeft
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x39B8950", Offset = "0x39B8950", VA = "0x39B8950")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x39B8960", Offset = "0x39B8960", VA = "0x39B8960")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public YGValue PaddingTop
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x39B8C40", Offset = "0x39B8C40", VA = "0x39B8C40")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x39B8C50", Offset = "0x39B8C50", VA = "0x39B8C50")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public YGValue PaddingRight
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x39B8D30", Offset = "0x39B8D30", VA = "0x39B8D30")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x39B8D40", Offset = "0x39B8D40", VA = "0x39B8D40")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public YGValue PaddingBottom
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x39B8E20", Offset = "0x39B8E20", VA = "0x39B8E20")]
		get
		{
			return default(YGValue);
		}
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x39B8E30", Offset = "0x39B8E30", VA = "0x39B8E30")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public float GapColumn
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x39B8F10", Offset = "0x39B8F10", VA = "0x39B8F10")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x39B8F20", Offset = "0x39B8F20", VA = "0x39B8F20")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public float GapRow
	{
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x39B90F0", Offset = "0x39B90F0", VA = "0x39B90F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x39B9100", Offset = "0x39B9100", VA = "0x39B9100")]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	protected YGNode LayoutNode
	{
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x39B5110", Offset = "0x39B5110", VA = "0x39B5110")]
		get
		{
			return default(YGNode);
		}
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x39B9D70", Offset = "0x39B9D70", VA = "0x39B9D70", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x39BA360", Offset = "0x39BA360", VA = "0x39BA360", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x39BA740", Offset = "0x39BA740", VA = "0x39BA740", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x39BA790", Offset = "0x39BA790", VA = "0x39BA790", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x39BA7C0", Offset = "0x39BA7C0", VA = "0x39BA7C0", Slot = "18")]
	protected virtual void OnTransformChildrenChanged()
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x39BA7F0", Offset = "0x39BA7F0", VA = "0x39BA7F0", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x39B54D0", Offset = "0x39B54D0", VA = "0x39B54D0")]
	[AsyncStateMachine(typeof(_003CRefreshRootLayout_003Ed__155))]
	public void RefreshRootLayout()
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x39BAEC0", Offset = "0x39BAEC0", VA = "0x39BAEC0")]
	[ContextMenu("Refresh Layout")]
	public void RefreshRootLayoutImmediate()
	{
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x39BAF40", Offset = "0x39BAF40", VA = "0x39BAF40", Slot = "17")]
	public int Compare(FlexLayout x, FlexLayout y)
	{
		return default(int);
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x39BAC20", Offset = "0x39BAC20", VA = "0x39BAC20")]
	protected void RefreshLayout()
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x39B9500", Offset = "0x39B9500", VA = "0x39B9500")]
	protected void UpdateNodeStyle()
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x39B92E0", Offset = "0x39B92E0", VA = "0x39B92E0")]
	protected void UpdateNodeMeasure()
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x39B9D90", Offset = "0x39B9D90", VA = "0x39B9D90")]
	protected void RefreshParent()
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x39BA3F0", Offset = "0x39BA3F0", VA = "0x39BA3F0")]
	protected void ClearParent()
	{
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x39B9F90", Offset = "0x39B9F90", VA = "0x39B9F90")]
	protected void RefreshChildren()
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x39BB520", Offset = "0x39BB520", VA = "0x39BB520")]
	protected void TrackChild(FlexLayout child, bool callChildrenChanged = true)
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x39BB610", Offset = "0x39BB610", VA = "0x39BB610")]
	protected void UntrackChild(FlexLayout child, bool callChildrenChanged = true)
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x39BB9D0", Offset = "0x39BB9D0", VA = "0x39BB9D0")]
	protected void RefreshDrivenRectTransformTracker()
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x39BB720", Offset = "0x39BB720", VA = "0x39BB720")]
	protected void OnChildrenChanged()
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x39BA470", Offset = "0x39BA470", VA = "0x39BA470")]
	protected void ClearTrackedChildren()
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x39B4CE0", Offset = "0x39B4CE0", VA = "0x39B4CE0")]
	[MonoPInvokeCallback(typeof(Gilzoide.FlexUi.Yoga.Yoga.YGMeasureFunc))]
	private static Vector2 RectTransformMeasureFunc(IntPtr nodePtr, float width, MeasureMode widthMode, float height, MeasureMode heightMode)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x39BBBD0", Offset = "0x39BBBD0", VA = "0x39BBBD0")]
	public FlexLayout()
	{
	}
}
