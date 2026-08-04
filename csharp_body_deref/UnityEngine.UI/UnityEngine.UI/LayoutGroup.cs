// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.LayoutGroup
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x50D25B0", Offset = "0x50D25B0", VA = "0x50D25B0", Slot = "4")]
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
			[Address(RVA = "0x50D2600", Offset = "0x50D2600", VA = "0x50D2600", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002F9")]
		[Address(RVA = "0x50D2500", Offset = "0x50D2500", VA = "0x50D2500")]
		[DebuggerHidden]
		public _003CDelayedSetDirty_003Ed__56(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60002FA")]
		[Address(RVA = "0x50D2520", Offset = "0x50D2520", VA = "0x50D2520", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60002FB")]
		[Address(RVA = "0x50D2530", Offset = "0x50D2530", VA = "0x50D2530", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002FD")]
		[Address(RVA = "0x50D25C0", Offset = "0x50D25C0", VA = "0x50D25C0", Slot = "8")]
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
		[Address(RVA = "0x50D1FB0", Offset = "0x50D1FB0", VA = "0x50D1FB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002D5")]
		[Address(RVA = "0x50D1FC0", Offset = "0x50D1FC0", VA = "0x50D1FC0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C7")]
	public TextAnchor childAlignment
	{
		[Token(Token = "0x60002D6")]
		[Address(RVA = "0x50D2010", Offset = "0x50D2010", VA = "0x50D2010")]
		get
		{
			return default(TextAnchor);
		}
		[Token(Token = "0x60002D7")]
		[Address(RVA = "0x50D2020", Offset = "0x50D2020", VA = "0x50D2020")]
		set
		{
		}
	}

	[Token(Token = "0x170000C8")]
	protected RectTransform rectTransform
	{
		[Token(Token = "0x60002D8")]
		[Address(RVA = "0x50CED70", Offset = "0x50CED70", VA = "0x50CED70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C9")]
	protected List<RectTransform> rectChildren
	{
		[Token(Token = "0x60002D9")]
		[Address(RVA = "0x50D2070", Offset = "0x50D2070", VA = "0x50D2070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CA")]
	public virtual float minWidth
	{
		[Token(Token = "0x60002DC")]
		[Address(RVA = "0x50D2080", Offset = "0x50D2080", VA = "0x50D2080", Slot = "30")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CB")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x60002DD")]
		[Address(RVA = "0x50D2090", Offset = "0x50D2090", VA = "0x50D2090", Slot = "31")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CC")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x60002DE")]
		[Address(RVA = "0x50D20A0", Offset = "0x50D20A0", VA = "0x50D20A0", Slot = "32")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CD")]
	public virtual float minHeight
	{
		[Token(Token = "0x60002DF")]
		[Address(RVA = "0x50D20B0", Offset = "0x50D20B0", VA = "0x50D20B0", Slot = "33")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CE")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x60002E0")]
		[Address(RVA = "0x50D20C0", Offset = "0x50D20C0", VA = "0x50D20C0", Slot = "34")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CF")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x60002E1")]
		[Address(RVA = "0x50D20D0", Offset = "0x50D20D0", VA = "0x50D20D0", Slot = "35")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000D0")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x60002E2")]
		[Address(RVA = "0x50D20E0", Offset = "0x50D20E0", VA = "0x50D20E0", Slot = "36")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D1")]
	private bool isRootLayoutGroup
	{
		[Token(Token = "0x60002F3")]
		[Address(RVA = "0x50D2340", Offset = "0x50D2340", VA = "0x50D2340")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x50CE610", Offset = "0x50CE610", VA = "0x50CE610", Slot = "28")]
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
	[Address(RVA = "0x50CE2D0", Offset = "0x50CE2D0", VA = "0x50CE2D0")]
	protected LayoutGroup()
	{
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x50D20F0", Offset = "0x50D20F0", VA = "0x50D20F0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x50D2230", Offset = "0x50D2230", VA = "0x50D2230", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x50D22A0", Offset = "0x50D22A0", VA = "0x50D22A0", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x50D1310", Offset = "0x50D1310", VA = "0x50D1310")]
	protected float GetTotalMinSize(int axis)
	{
		return default(float);
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x50D1230", Offset = "0x50D1230", VA = "0x50D1230")]
	protected float GetTotalPreferredSize(int axis)
	{
		return default(float);
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x50D12A0", Offset = "0x50D12A0", VA = "0x50D12A0")]
	protected float GetTotalFlexibleSize(int axis)
	{
		return default(float);
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x50CF7D0", Offset = "0x50CF7D0", VA = "0x50CF7D0")]
	protected float GetStartOffset(int axis, float requiredSpaceWithoutPadding)
	{
		return default(float);
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x50D0D20", Offset = "0x50D0D20", VA = "0x50D0D20")]
	protected float GetAlignmentOnAxis(int axis)
	{
		return default(float);
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x50CEA80", Offset = "0x50CEA80", VA = "0x50CEA80")]
	protected void SetLayoutInputForAxis(float totalMin, float totalPreferred, float totalFlexible, int axis)
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x50D22B0", Offset = "0x50D22B0", VA = "0x50D22B0")]
	protected void SetChildAlongAxis(RectTransform rect, int axis, float pos)
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x50D1000", Offset = "0x50D1000", VA = "0x50D1000")]
	protected void SetChildAlongAxisWithScale(RectTransform rect, int axis, float pos, float scaleFactor)
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x50CF930", Offset = "0x50CF930", VA = "0x50CF930")]
	protected void SetChildAlongAxis(RectTransform rect, int axis, float pos, float size)
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x50D0D80", Offset = "0x50D0D80", VA = "0x50D0D80")]
	protected void SetChildAlongAxisWithScale(RectTransform rect, int axis, float pos, float size, float scaleFactor)
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x50D2450", Offset = "0x50D2450", VA = "0x50D2450", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x50D2480", Offset = "0x50D2480", VA = "0x50D2480", Slot = "39")]
	protected virtual void OnTransformChildrenChanged()
	{
	}

	[Token(Token = "0x60002F6")]
	protected void SetProperty<T>(ref T currentValue, T newValue)
	{
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x50D2110", Offset = "0x50D2110", VA = "0x50D2110")]
	protected void SetDirty()
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x50D2490", Offset = "0x50D2490", VA = "0x50D2490")]
	[IteratorStateMachine(typeof(_003CDelayedSetDirty_003Ed__56))]
	private IEnumerator DelayedSetDirty(RectTransform rectTransform)
	{
		return null;
	}
}
