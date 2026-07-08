using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000521")]
internal class BasePanel : MonoBehaviour
{
	[Token(Token = "0x2000522")]
	[CompilerGenerated]
	private sealed class _003CWaitAndEnableCategoryPanel_003Ed__51 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40019A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40019A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40019A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public BasePanel _003C_003E4__this;

		[Token(Token = "0x17000A14")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600363A")]
			[Address(RVA = "0x3F1AFF0", Offset = "0x3F1AFF0", VA = "0x3F1AFF0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A15")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600363C")]
			[Address(RVA = "0x3F1B040", Offset = "0x3F1B040", VA = "0x3F1B040", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003637")]
		[Address(RVA = "0x3F1AE80", Offset = "0x3F1AE80", VA = "0x3F1AE80")]
		[DebuggerHidden]
		public _003CWaitAndEnableCategoryPanel_003Ed__51(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003638")]
		[Address(RVA = "0x3F1AEA0", Offset = "0x3F1AEA0", VA = "0x3F1AEA0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003639")]
		[Address(RVA = "0x3F1AEB0", Offset = "0x3F1AEB0", VA = "0x3F1AEB0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600363B")]
		[Address(RVA = "0x3F1B000", Offset = "0x3F1B000", VA = "0x3F1B000", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000523")]
	[CompilerGenerated]
	private sealed class _003CWaitAndRebuildCategoryPanel_003Ed__54 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40019AA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40019AB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40019AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public float time;

		[Token(Token = "0x40019AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BasePanel _003C_003E4__this;

		[Token(Token = "0x17000A16")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003640")]
			[Address(RVA = "0x3F1B130", Offset = "0x3F1B130", VA = "0x3F1B130", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A17")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003642")]
			[Address(RVA = "0x3F1B180", Offset = "0x3F1B180", VA = "0x3F1B180", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600363D")]
		[Address(RVA = "0x3F1B050", Offset = "0x3F1B050", VA = "0x3F1B050")]
		[DebuggerHidden]
		public _003CWaitAndRebuildCategoryPanel_003Ed__54(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600363E")]
		[Address(RVA = "0x3F1B070", Offset = "0x3F1B070", VA = "0x3F1B070", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600363F")]
		[Address(RVA = "0x3F1B080", Offset = "0x3F1B080", VA = "0x3F1B080", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003641")]
		[Address(RVA = "0x3F1B140", Offset = "0x3F1B140", VA = "0x3F1B140", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400199E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected Transform SinglePanel;

	[Token(Token = "0x400199F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	protected Transform DoublePanelLeft;

	[Token(Token = "0x40019A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	protected Transform DoublePanelRight;

	[Token(Token = "0x40019A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected List<BasePopup> _popups;

	[Token(Token = "0x40019A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected GameObject _currentCategoryPanel;

	[Token(Token = "0x40019A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected StringSetting _currentCategoryPanelName;

	[Token(Token = "0x40019A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected Dictionary<string, Type> _categoryPanelTypes;

	[Token(Token = "0x40019A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected RawImage MaskBackground;

	[Token(Token = "0x40019A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public BasePanel Parent;

	[Token(Token = "0x17000A04")]
	protected virtual string ThemePanel
	{
		[Token(Token = "0x6003608")]
		[Address(RVA = "0x3F189C0", Offset = "0x3F189C0", VA = "0x3F189C0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A05")]
	protected virtual float Width
	{
		[Token(Token = "0x6003609")]
		[Address(RVA = "0x3F189F0", Offset = "0x3F189F0", VA = "0x3F189F0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A06")]
	protected virtual float Height
	{
		[Token(Token = "0x600360A")]
		[Address(RVA = "0x3F18A00", Offset = "0x3F18A00", VA = "0x3F18A00", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A07")]
	protected virtual float BorderVerticalPadding
	{
		[Token(Token = "0x600360B")]
		[Address(RVA = "0x3F18A10", Offset = "0x3F18A10", VA = "0x3F18A10", Slot = "7")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A08")]
	protected virtual float BorderHorizontalPadding
	{
		[Token(Token = "0x600360C")]
		[Address(RVA = "0x3F18A20", Offset = "0x3F18A20", VA = "0x3F18A20", Slot = "8")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A09")]
	protected virtual int VerticalPadding
	{
		[Token(Token = "0x600360D")]
		[Address(RVA = "0x3F18A30", Offset = "0x3F18A30", VA = "0x3F18A30", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A0A")]
	protected virtual int HorizontalPadding
	{
		[Token(Token = "0x600360E")]
		[Address(RVA = "0x3F18A40", Offset = "0x3F18A40", VA = "0x3F18A40", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A0B")]
	protected virtual float VerticalSpacing
	{
		[Token(Token = "0x600360F")]
		[Address(RVA = "0x3F18A50", Offset = "0x3F18A50", VA = "0x3F18A50", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A0C")]
	protected virtual TextAnchor PanelAlignment
	{
		[Token(Token = "0x6003610")]
		[Address(RVA = "0x3F18A60", Offset = "0x3F18A60", VA = "0x3F18A60", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000A0D")]
	protected virtual bool DoublePanel
	{
		[Token(Token = "0x6003611")]
		[Address(RVA = "0x3F18A70", Offset = "0x3F18A70", VA = "0x3F18A70", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A0E")]
	protected virtual bool DoublePanelDivider
	{
		[Token(Token = "0x6003612")]
		[Address(RVA = "0x3F18A80", Offset = "0x3F18A80", VA = "0x3F18A80", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A0F")]
	protected virtual bool ScrollBar
	{
		[Token(Token = "0x6003613")]
		[Address(RVA = "0x3F18A90", Offset = "0x3F18A90", VA = "0x3F18A90", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A10")]
	protected virtual bool CategoryPanel
	{
		[Token(Token = "0x6003614")]
		[Address(RVA = "0x3F18AA0", Offset = "0x3F18AA0", VA = "0x3F18AA0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A11")]
	protected virtual bool UseLastCategory
	{
		[Token(Token = "0x6003615")]
		[Address(RVA = "0x3F18AB0", Offset = "0x3F18AB0", VA = "0x3F18AB0", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A12")]
	protected virtual bool HasPremadeContent
	{
		[Token(Token = "0x6003616")]
		[Address(RVA = "0x3F18AC0", Offset = "0x3F18AC0", VA = "0x3F18AC0", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A13")]
	protected virtual string DefaultCategoryPanel
	{
		[Token(Token = "0x6003617")]
		[Address(RVA = "0x3F18AD0", Offset = "0x3F18AD0", VA = "0x3F18AD0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003618")]
	[Address(RVA = "0x3F18AF0", Offset = "0x3F18AF0", VA = "0x3F18AF0")]
	protected void OnEnable()
	{
	}

	[Token(Token = "0x6003619")]
	[Address(RVA = "0x3F18C30", Offset = "0x3F18C30", VA = "0x3F18C30", Slot = "20")]
	public virtual void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600361A")]
	[Address(RVA = "0x3F198A0", Offset = "0x3F198A0", VA = "0x3F198A0", Slot = "21")]
	public virtual void Show()
	{
	}

	[Token(Token = "0x600361B")]
	[Address(RVA = "0x3F198D0", Offset = "0x3F198D0", VA = "0x3F198D0", Slot = "22")]
	public virtual void Hide()
	{
	}

	[Token(Token = "0x600361C")]
	[Address(RVA = "0x3F19910", Offset = "0x3F19910", VA = "0x3F19910", Slot = "23")]
	public virtual void SyncSettingElements()
	{
	}

	[Token(Token = "0x600361D")]
	[Address(RVA = "0x3F199A0", Offset = "0x3F199A0", VA = "0x3F199A0", Slot = "24")]
	protected virtual void SetupPremadePanel()
	{
	}

	[Token(Token = "0x600361E")]
	[Address(RVA = "0x3F19E20", Offset = "0x3F19E20", VA = "0x3F19E20", Slot = "25")]
	protected virtual void SetupPopups()
	{
	}

	[Token(Token = "0x600361F")]
	[Address(RVA = "0x3F19E30", Offset = "0x3F19E30", VA = "0x3F19E30", Slot = "26")]
	protected virtual void HideAllPopups()
	{
	}

	[Token(Token = "0x6003620")]
	[Address(RVA = "0x3F19F80", Offset = "0x3F19F80", VA = "0x3F19F80", Slot = "27")]
	protected virtual void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6003621")]
	[Address(RVA = "0x3F19F90", Offset = "0x3F19F90", VA = "0x3F19F90", Slot = "28")]
	public virtual void SetCategoryPanel(string name)
	{
	}

	[Token(Token = "0x6003622")]
	[Address(RVA = "0x3F1A2D0", Offset = "0x3F1A2D0", VA = "0x3F1A2D0")]
	[IteratorStateMachine(typeof(_003CWaitAndEnableCategoryPanel_003Ed__51))]
	private IEnumerator WaitAndEnableCategoryPanel()
	{
		return null;
	}

	[Token(Token = "0x6003623")]
	[Address(RVA = "0x3F1A340", Offset = "0x3F1A340", VA = "0x3F1A340")]
	public string GetCurrentCategoryName()
	{
		return null;
	}

	[Token(Token = "0x6003624")]
	[Address(RVA = "0x3F1A380", Offset = "0x3F1A380", VA = "0x3F1A380")]
	public void RebuildCategoryPanel()
	{
	}

	[Token(Token = "0x6003625")]
	[Address(RVA = "0x3F1A440", Offset = "0x3F1A440", VA = "0x3F1A440")]
	[IteratorStateMachine(typeof(_003CWaitAndRebuildCategoryPanel_003Ed__54))]
	public IEnumerator WaitAndRebuildCategoryPanel(float time)
	{
		return null;
	}

	[Token(Token = "0x6003626")]
	[Address(RVA = "0x3F1A3E0", Offset = "0x3F1A3E0", VA = "0x3F1A3E0")]
	public void SetCategoryPanel(StringSetting setting)
	{
	}

	[Token(Token = "0x6003627")]
	[Address(RVA = "0x3F1A4C0", Offset = "0x3F1A4C0", VA = "0x3F1A4C0")]
	protected GameObject CreateHorizontalDivider(Transform parent, float height = 1f)
	{
		return null;
	}

	[Token(Token = "0x6003628")]
	[Address(RVA = "0x3F19850", Offset = "0x3F19850", VA = "0x3F19850")]
	protected Transform GetSinglePanelTransform(GameObject singlePanel)
	{
		return null;
	}

	[Token(Token = "0x6003629")]
	[Address(RVA = "0x3F195E0", Offset = "0x3F195E0", VA = "0x3F195E0")]
	protected Transform GetDoublePanelLeftTransform(GameObject doublePanel)
	{
		return null;
	}

	[Token(Token = "0x600362A")]
	[Address(RVA = "0x3F19630", Offset = "0x3F19630", VA = "0x3F19630")]
	protected Transform GetDoublePanelRightTransform(GameObject doublePanel)
	{
		return null;
	}

	[Token(Token = "0x600362B")]
	[Address(RVA = "0x3F19680", Offset = "0x3F19680", VA = "0x3F19680")]
	protected GameObject CreateSinglePanel(bool scrollBar)
	{
		return null;
	}

	[Token(Token = "0x600362C")]
	[Address(RVA = "0x3F191A0", Offset = "0x3F191A0", VA = "0x3F191A0")]
	protected GameObject CreateDoublePanel(bool scrollBar, bool divider)
	{
		return null;
	}

	[Token(Token = "0x600362D")]
	[Address(RVA = "0x3F1A5D0", Offset = "0x3F1A5D0", VA = "0x3F1A5D0", Slot = "29")]
	protected virtual void BindPanel(GameObject panel, bool scrollBar)
	{
	}

	[Token(Token = "0x600362E")]
	[Address(RVA = "0x3F19CA0", Offset = "0x3F19CA0", VA = "0x3F19CA0")]
	protected void SetPanelPadding(GameObject panel)
	{
	}

	[Token(Token = "0x600362F")]
	[Address(RVA = "0x3F1AB40", Offset = "0x3F1AB40", VA = "0x3F1AB40", Slot = "30")]
	public virtual float GetPanelWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6003630")]
	[Address(RVA = "0x3F1AB60", Offset = "0x3F1AB60", VA = "0x3F1AB60", Slot = "31")]
	public virtual float GetPanelHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6003631")]
	[Address(RVA = "0x3F1AB80", Offset = "0x3F1AB80", VA = "0x3F1AB80", Slot = "32")]
	public virtual float GetPanelVerticalOffset()
	{
		return default(float);
	}

	[Token(Token = "0x6003632")]
	[Address(RVA = "0x3F1AB90", Offset = "0x3F1AB90", VA = "0x3F1AB90", Slot = "33")]
	protected virtual float GetWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6003633")]
	[Address(RVA = "0x3F1ABB0", Offset = "0x3F1ABB0", VA = "0x3F1ABB0", Slot = "34")]
	protected virtual float GetHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6003634")]
	[Address(RVA = "0x3F1ABD0", Offset = "0x3F1ABD0", VA = "0x3F1ABD0")]
	public float GetPhysicalWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6003635")]
	[Address(RVA = "0x3F1AC90", Offset = "0x3F1AC90", VA = "0x3F1AC90")]
	public float GetPhysicalHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6003636")]
	[Address(RVA = "0x3F1AD60", Offset = "0x3F1AD60", VA = "0x3F1AD60")]
	public BasePanel()
	{
	}
}
