using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace UnityEngine.UI;

[Token(Token = "0x200004E")]
[DisallowMultipleComponent]
[ExecuteAlways]
[RequireComponent(typeof(RectTransform))]
public abstract class LayoutGroup : UIBehaviour, ILayoutElement, ILayoutGroup, ILayoutController
{
	[Token(Token = "0x200004F")]
	[CompilerGenerated]
	private sealed class _003CDelayedSetDirty_003Ed__56 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000181")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000182")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000183")]
		[FieldOffset(Offset = "0x20")]
		public RectTransform rectTransform;

		[Token(Token = "0x170000D2")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60002FC")]
			[Address(RVA = "0x4DAAC80", Offset = "0x4DAAC80", VA = "0x4DAAC80", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000D3")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60002FE")]
			[Address(RVA = "0x4DAACD0", Offset = "0x4DAACD0", VA = "0x4DAACD0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002F9")]
		[Address(RVA = "0x4DAABD0", Offset = "0x4DAABD0", VA = "0x4DAABD0")]
		[DebuggerHidden]
		public _003CDelayedSetDirty_003Ed__56(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60002FA")]
		[Address(RVA = "0x4DAABF0", Offset = "0x4DAABF0", VA = "0x4DAABF0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60002FB")]
		[Address(RVA = "0x4DAAC00", Offset = "0x4DAAC00", VA = "0x4DAAC00", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002FD")]
		[Address(RVA = "0x4DAAC90", Offset = "0x4DAAC90", VA = "0x4DAAC90", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000179")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	protected RectOffset m_Padding;

	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	protected TextAnchor m_ChildAlignment;

	[NonSerialized]
	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0x30")]
	private RectTransform m_Rect;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0x38")]
	protected DrivenRectTransformTracker m_Tracker;

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x3C")]
	private Vector2 m_TotalMinSize;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0x44")]
	private Vector2 m_TotalPreferredSize;

	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0x4C")]
	private Vector2 m_TotalFlexibleSize;

	[NonSerialized]
	[Token(Token = "0x4000180")]
	[FieldOffset(Offset = "0x58")]
	private List<RectTransform> m_RectChildren;

	[Token(Token = "0x170000C6")]
	public RectOffset padding
	{
		[Token(Token = "0x60002D4")]
		[Address(RVA = "0x4DAA680", Offset = "0x4DAA680", VA = "0x4DAA680")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002D5")]
		[Address(RVA = "0x4DAA690", Offset = "0x4DAA690", VA = "0x4DAA690")]
		set
		{
		}
	}

	[Token(Token = "0x170000C7")]
	public TextAnchor childAlignment
	{
		[Token(Token = "0x60002D6")]
		[Address(RVA = "0x4DAA6E0", Offset = "0x4DAA6E0", VA = "0x4DAA6E0")]
		get
		{
			return default(TextAnchor);
		}
		[Token(Token = "0x60002D7")]
		[Address(RVA = "0x4DAA6F0", Offset = "0x4DAA6F0", VA = "0x4DAA6F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C8")]
	protected RectTransform rectTransform
	{
		[Token(Token = "0x60002D8")]
		[Address(RVA = "0x4DA7440", Offset = "0x4DA7440", VA = "0x4DA7440")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C9")]
	protected List<RectTransform> rectChildren
	{
		[Token(Token = "0x60002D9")]
		[Address(RVA = "0x4DAA740", Offset = "0x4DAA740", VA = "0x4DAA740")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CA")]
	public virtual float minWidth
	{
		[Token(Token = "0x60002DC")]
		[Address(RVA = "0x4DAA750", Offset = "0x4DAA750", VA = "0x4DAA750", Slot = "30")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CB")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x60002DD")]
		[Address(RVA = "0x4DAA760", Offset = "0x4DAA760", VA = "0x4DAA760", Slot = "31")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CC")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x60002DE")]
		[Address(RVA = "0x4DAA770", Offset = "0x4DAA770", VA = "0x4DAA770", Slot = "32")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CD")]
	public virtual float minHeight
	{
		[Token(Token = "0x60002DF")]
		[Address(RVA = "0x4DAA780", Offset = "0x4DAA780", VA = "0x4DAA780", Slot = "33")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CE")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x60002E0")]
		[Address(RVA = "0x4DAA790", Offset = "0x4DAA790", VA = "0x4DAA790", Slot = "34")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CF")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x60002E1")]
		[Address(RVA = "0x4DAA7A0", Offset = "0x4DAA7A0", VA = "0x4DAA7A0", Slot = "35")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000D0")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x60002E2")]
		[Address(RVA = "0x4DAA7B0", Offset = "0x4DAA7B0", VA = "0x4DAA7B0", Slot = "36")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D1")]
	private bool isRootLayoutGroup
	{
		[Token(Token = "0x60002F3")]
		[Address(RVA = "0x4DAAA10", Offset = "0x4DAAA10", VA = "0x4DAAA10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x4DA6CE0", Offset = "0x4DA6CE0", VA = "0x4DA6CE0", Slot = "28")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x60002DB")]
	public abstract void CalculateLayoutInputVertical();

	[Token(Token = "0x60002E3")]
	public abstract void SetLayoutHorizontal();

	[Token(Token = "0x60002E4")]
	public abstract void SetLayoutVertical();

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x4DA69A0", Offset = "0x4DA69A0", VA = "0x4DA69A0")]
	protected LayoutGroup()
	{
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x4DAA7C0", Offset = "0x4DAA7C0", VA = "0x4DAA7C0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x4DAA900", Offset = "0x4DAA900", VA = "0x4DAA900", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x4DAA970", Offset = "0x4DAA970", VA = "0x4DAA970", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x4DA99E0", Offset = "0x4DA99E0", VA = "0x4DA99E0")]
	protected float GetTotalMinSize(int axis)
	{
		return default(float);
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x4DA9900", Offset = "0x4DA9900", VA = "0x4DA9900")]
	protected float GetTotalPreferredSize(int axis)
	{
		return default(float);
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x4DA9970", Offset = "0x4DA9970", VA = "0x4DA9970")]
	protected float GetTotalFlexibleSize(int axis)
	{
		return default(float);
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x4DA7EA0", Offset = "0x4DA7EA0", VA = "0x4DA7EA0")]
	protected float GetStartOffset(int axis, float requiredSpaceWithoutPadding)
	{
		return default(float);
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x4DA93F0", Offset = "0x4DA93F0", VA = "0x4DA93F0")]
	protected float GetAlignmentOnAxis(int axis)
	{
		return default(float);
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x4DA7150", Offset = "0x4DA7150", VA = "0x4DA7150")]
	protected void SetLayoutInputForAxis(float totalMin, float totalPreferred, float totalFlexible, int axis)
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x4DAA980", Offset = "0x4DAA980", VA = "0x4DAA980")]
	protected void SetChildAlongAxis(RectTransform rect, int axis, float pos)
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x4DA96D0", Offset = "0x4DA96D0", VA = "0x4DA96D0")]
	protected void SetChildAlongAxisWithScale(RectTransform rect, int axis, float pos, float scaleFactor)
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x4DA8000", Offset = "0x4DA8000", VA = "0x4DA8000")]
	protected void SetChildAlongAxis(RectTransform rect, int axis, float pos, float size)
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x4DA9450", Offset = "0x4DA9450", VA = "0x4DA9450")]
	protected void SetChildAlongAxisWithScale(RectTransform rect, int axis, float pos, float size, float scaleFactor)
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x4DAAB20", Offset = "0x4DAAB20", VA = "0x4DAAB20", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x4DAAB50", Offset = "0x4DAAB50", VA = "0x4DAAB50", Slot = "39")]
	protected virtual void OnTransformChildrenChanged()
	{
	}

	[Token(Token = "0x60002F6")]
	protected void SetProperty<T>(ref T currentValue, T newValue)
	{
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x4DAA7E0", Offset = "0x4DAA7E0", VA = "0x4DAA7E0")]
	protected void SetDirty()
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x4DAAB60", Offset = "0x4DAAB60", VA = "0x4DAAB60")]
	[IteratorStateMachine(typeof(_003CDelayedSetDirty_003Ed__56))]
	private IEnumerator DelayedSetDirty(RectTransform rectTransform)
	{
		return null;
	}
}
