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

[Token(Token = "0x200004C")]
[DisallowMultipleComponent]
[ExecuteAlways]
[RequireComponent(typeof(RectTransform))]
public abstract class LayoutGroup : UIBehaviour, ILayoutElement, ILayoutGroup, ILayoutController
{
	[Token(Token = "0x200004D")]
	[CompilerGenerated]
	private sealed class _003CDelayedSetDirty_003Ed__57 : IEnumerator<object>, IEnumerator, IDisposable
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

		[Token(Token = "0x170000D3")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000306")]
			[Address(RVA = "0x6CE2780", Offset = "0x6CE1780", VA = "0x6CE2780", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000D4")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000308")]
			[Address(RVA = "0x6CE27D0", Offset = "0x6CE17D0", VA = "0x6CE27D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000303")]
		[Address(RVA = "0x6CE26C0", Offset = "0x6CE16C0", VA = "0x6CE26C0")]
		[DebuggerHidden]
		public _003CDelayedSetDirty_003Ed__57(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000304")]
		[Address(RVA = "0x6CE26E0", Offset = "0x6CE16E0", VA = "0x6CE26E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000305")]
		[Address(RVA = "0x6CE26F0", Offset = "0x6CE16F0", VA = "0x6CE26F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000307")]
		[Address(RVA = "0x6CE2790", Offset = "0x6CE1790", VA = "0x6CE2790", Slot = "8")]
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

	[Token(Token = "0x170000C7")]
	public RectOffset padding
	{
		[Token(Token = "0x60002DD")]
		[Address(RVA = "0x6CE20D0", Offset = "0x6CE10D0", VA = "0x6CE20D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002DE")]
		[Address(RVA = "0x6CE20E0", Offset = "0x6CE10E0", VA = "0x6CE20E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C8")]
	public TextAnchor childAlignment
	{
		[Token(Token = "0x60002DF")]
		[Address(RVA = "0x6CE2130", Offset = "0x6CE1130", VA = "0x6CE2130")]
		get
		{
			return default(TextAnchor);
		}
		[Token(Token = "0x60002E0")]
		[Address(RVA = "0x6CE2140", Offset = "0x6CE1140", VA = "0x6CE2140")]
		set
		{
		}
	}

	[Token(Token = "0x170000C9")]
	protected RectTransform rectTransform
	{
		[Token(Token = "0x60002E1")]
		[Address(RVA = "0x6CDEE80", Offset = "0x6CDDE80", VA = "0x6CDEE80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CA")]
	protected List<RectTransform> rectChildren
	{
		[Token(Token = "0x60002E2")]
		[Address(RVA = "0x6CE2190", Offset = "0x6CE1190", VA = "0x6CE2190")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CB")]
	public virtual float minWidth
	{
		[Token(Token = "0x60002E5")]
		[Address(RVA = "0x6CE21A0", Offset = "0x6CE11A0", VA = "0x6CE21A0", Slot = "30")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CC")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x60002E6")]
		[Address(RVA = "0x6CE21B0", Offset = "0x6CE11B0", VA = "0x6CE21B0", Slot = "31")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CD")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x60002E7")]
		[Address(RVA = "0x6CE21C0", Offset = "0x6CE11C0", VA = "0x6CE21C0", Slot = "32")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CE")]
	public virtual float minHeight
	{
		[Token(Token = "0x60002E8")]
		[Address(RVA = "0x6CE21D0", Offset = "0x6CE11D0", VA = "0x6CE21D0", Slot = "33")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CF")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x60002E9")]
		[Address(RVA = "0x6CE21E0", Offset = "0x6CE11E0", VA = "0x6CE21E0", Slot = "34")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000D0")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x60002EA")]
		[Address(RVA = "0x6CE21F0", Offset = "0x6CE11F0", VA = "0x6CE21F0", Slot = "35")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000D1")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x60002EB")]
		[Address(RVA = "0x6CE2200", Offset = "0x6CE1200", VA = "0x6CE2200", Slot = "36")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D2")]
	private bool isRootLayoutGroup
	{
		[Token(Token = "0x60002FC")]
		[Address(RVA = "0x6CE2490", Offset = "0x6CE1490", VA = "0x6CE2490")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x6CDE6D0", Offset = "0x6CDD6D0", VA = "0x6CDE6D0", Slot = "28")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x60002E4")]
	public abstract void CalculateLayoutInputVertical();

	[Token(Token = "0x60002EC")]
	public abstract void SetLayoutHorizontal();

	[Token(Token = "0x60002ED")]
	public abstract void SetLayoutVertical();

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x6CDE390", Offset = "0x6CDD390", VA = "0x6CDE390")]
	protected LayoutGroup()
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x6CE2210", Offset = "0x6CE1210", VA = "0x6CE2210", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x6CE2360", Offset = "0x6CE1360", VA = "0x6CE2360", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x6CE23F0", Offset = "0x6CE13F0", VA = "0x6CE23F0", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x6CE1430", Offset = "0x6CE0430", VA = "0x6CE1430")]
	protected float GetTotalMinSize(int axis)
	{
		return default(float);
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x6CE1350", Offset = "0x6CE0350", VA = "0x6CE1350")]
	protected float GetTotalPreferredSize(int axis)
	{
		return default(float);
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x6CE13C0", Offset = "0x6CE03C0", VA = "0x6CE13C0")]
	protected float GetTotalFlexibleSize(int axis)
	{
		return default(float);
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x6CDF890", Offset = "0x6CDE890", VA = "0x6CDF890")]
	protected float GetStartOffset(int axis, float requiredSpaceWithoutPadding)
	{
		return default(float);
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x6CE0EB0", Offset = "0x6CDFEB0", VA = "0x6CE0EB0")]
	protected float GetAlignmentOnAxis(int axis)
	{
		return default(float);
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x6CDEB40", Offset = "0x6CDDB40", VA = "0x6CDEB40")]
	protected void SetLayoutInputForAxis(float totalMin, float totalPreferred, float totalFlexible, int axis)
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x6CE2400", Offset = "0x6CE1400", VA = "0x6CE2400")]
	protected void SetChildAlongAxis(RectTransform rect, int axis, float pos)
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x6CE1140", Offset = "0x6CE0140", VA = "0x6CE1140")]
	protected void SetChildAlongAxisWithScale(RectTransform rect, int axis, float pos, float scaleFactor)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x6CDFA40", Offset = "0x6CDEA40", VA = "0x6CDFA40")]
	protected void SetChildAlongAxis(RectTransform rect, int axis, float pos, float size)
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x6CE0F10", Offset = "0x6CDFF10", VA = "0x6CE0F10")]
	protected void SetChildAlongAxisWithScale(RectTransform rect, int axis, float pos, float size, float scaleFactor)
	{
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x6CE25A0", Offset = "0x6CE15A0", VA = "0x6CE25A0", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x6CE25D0", Offset = "0x6CE15D0", VA = "0x6CE25D0", Slot = "39")]
	protected virtual void OnTransformChildrenChanged()
	{
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x6CE25E0", Offset = "0x6CE15E0", VA = "0x6CE25E0", Slot = "40")]
	protected virtual void OnChildRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000300")]
	protected void SetProperty<T>(ref T currentValue, T newValue)
	{
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x6CE2250", Offset = "0x6CE1250", VA = "0x6CE2250")]
	protected void SetDirty()
	{
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x6CE2650", Offset = "0x6CE1650", VA = "0x6CE2650")]
	[IteratorStateMachine(typeof(_003CDelayedSetDirty_003Ed__57))]
	private IEnumerator DelayedSetDirty(RectTransform rectTransform)
	{
		return null;
	}
}
