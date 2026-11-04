// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.LayoutGroup
// Update status: CHANGED in this game update
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000303")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CDelayedSetDirty_003Ed__57(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000304")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000305")]
		[Address(RVA = "0x32D8C50", Offset = "0x32D7250", VA = "0x1832D8C50", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000307")]
		[Address(RVA = "0x32D8CE0", Offset = "0x32D72E0", VA = "0x1832D8CE0", Slot = "8")]
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
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002DE")]
		[Address(RVA = "0x32D34D0", Offset = "0x32D1AD0", VA = "0x1832D34D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C8")]
	public TextAnchor childAlignment
	{
		[Token(Token = "0x60002DF")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		get
		{
			return default(TextAnchor);
		}
		[Token(Token = "0x60002E0")]
		[Address(RVA = "0x32D3480", Offset = "0x32D1A80", VA = "0x1832D3480")]
		set
		{
		}
	}

	[Token(Token = "0x170000C9")]
	protected RectTransform rectTransform
	{
		[Token(Token = "0x60002E1")]
		[Address(RVA = "0x32D33F0", Offset = "0x32D19F0", VA = "0x1832D33F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CA")]
	protected List<RectTransform> rectChildren
	{
		[Token(Token = "0x60002E2")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CB")]
	public virtual float minWidth
	{
		[Token(Token = "0x60002E5")]
		[Address(RVA = "0x2FC6590", Offset = "0x2FC4B90", VA = "0x182FC6590", Slot = "30")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CC")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x60002E6")]
		[Address(RVA = "0x2FFD2C0", Offset = "0x2FFB8C0", VA = "0x182FFD2C0", Slot = "31")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CD")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x60002E7")]
		[Address(RVA = "0x2FFD2F0", Offset = "0x2FFB8F0", VA = "0x182FFD2F0", Slot = "32")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CE")]
	public virtual float minHeight
	{
		[Token(Token = "0x60002E8")]
		[Address(RVA = "0x2FC65A0", Offset = "0x2FC4BA0", VA = "0x182FC65A0", Slot = "33")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CF")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x60002E9")]
		[Address(RVA = "0x2FFD2D0", Offset = "0x2FFB8D0", VA = "0x182FFD2D0", Slot = "34")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000D0")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x60002EA")]
		[Address(RVA = "0x2FFD300", Offset = "0x2FFB900", VA = "0x182FFD300", Slot = "35")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000D1")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x60002EB")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "36")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D2")]
	private bool isRootLayoutGroup
	{
		[Token(Token = "0x60002FC")]
		[Address(RVA = "0x32D32D0", Offset = "0x32D18D0", VA = "0x1832D32D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x32D2080", Offset = "0x32D0680", VA = "0x1832D2080", Slot = "28")]
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
	[Address(RVA = "0x32D3130", Offset = "0x32D1730", VA = "0x1832D3130")]
	protected LayoutGroup()
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x32D27A0", Offset = "0x32D0DA0", VA = "0x1832D27A0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x32D2700", Offset = "0x32D0D00", VA = "0x1832D2700", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x32D26F0", Offset = "0x32D0CF0", VA = "0x1832D26F0", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x32D2670", Offset = "0x32D0C70", VA = "0x1832D2670")]
	protected float GetTotalMinSize(int axis)
	{
		return default(float);
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x32D2680", Offset = "0x32D0C80", VA = "0x1832D2680")]
	protected float GetTotalPreferredSize(int axis)
	{
		return default(float);
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x32D2660", Offset = "0x32D0C60", VA = "0x1832D2660")]
	protected float GetTotalFlexibleSize(int axis)
	{
		return default(float);
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x32D2490", Offset = "0x32D0A90", VA = "0x1832D2490")]
	protected float GetStartOffset(int axis, float requiredSpaceWithoutPadding)
	{
		return default(float);
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x32D2440", Offset = "0x32D0A40", VA = "0x1832D2440")]
	protected float GetAlignmentOnAxis(int axis)
	{
		return default(float);
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x32D30A0", Offset = "0x32D16A0", VA = "0x1832D30A0")]
	protected void SetLayoutInputForAxis(float totalMin, float totalPreferred, float totalFlexible, int axis)
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x32D2E30", Offset = "0x32D1430", VA = "0x1832D2E30")]
	protected void SetChildAlongAxis(RectTransform rect, int axis, float pos)
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x32D2BE0", Offset = "0x32D11E0", VA = "0x1832D2BE0")]
	protected void SetChildAlongAxisWithScale(RectTransform rect, int axis, float pos, float scaleFactor)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x32D2ED0", Offset = "0x32D14D0", VA = "0x1832D2ED0")]
	protected void SetChildAlongAxis(RectTransform rect, int axis, float pos, float size)
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x32D2920", Offset = "0x32D0F20", VA = "0x1832D2920")]
	protected void SetChildAlongAxisWithScale(RectTransform rect, int axis, float pos, float size, float scaleFactor)
	{
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x32D27F0", Offset = "0x32D0DF0", VA = "0x1832D27F0", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x32D26F0", Offset = "0x32D0CF0", VA = "0x1832D26F0", Slot = "39")]
	protected virtual void OnTransformChildrenChanged()
	{
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x32D2690", Offset = "0x32D0C90", VA = "0x1832D2690", Slot = "40")]
	protected virtual void OnChildRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000300")]
	protected void SetProperty<T>(ref T currentValue, T newValue)
	{
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x32D2F80", Offset = "0x32D1580", VA = "0x1832D2F80")]
	protected void SetDirty()
	{
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x32D23D0", Offset = "0x32D09D0", VA = "0x1832D23D0")]
	[IteratorStateMachine(typeof(_003CDelayedSetDirty_003Ed__57))]
	private IEnumerator DelayedSetDirty(RectTransform rectTransform)
	{
		return null;
	}
}
