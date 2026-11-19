// ==================== AoTTG2 cross-reference ====================
// Type: UI.BasePanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/BasePanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/BasePanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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

[Token(Token = "0x2000780")]
internal class BasePanel : MonoBehaviour
{
	[Token(Token = "0x2000781")]
	[CompilerGenerated]
	private sealed class _003CWaitAndEnableCategoryPanel_003Ed__51 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40025E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40025E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40025E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public BasePanel _003C_003E4__this;

		[Token(Token = "0x17000C55")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600488F")]
			[Address(RVA = "0x5BB5C40", Offset = "0x5BB4C40", VA = "0x5BB5C40", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C56")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004891")]
			[Address(RVA = "0x5BB5C90", Offset = "0x5BB4C90", VA = "0x5BB5C90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600488C")]
		[Address(RVA = "0x5BB4FD0", Offset = "0x5BB3FD0", VA = "0x5BB4FD0")]
		[DebuggerHidden]
		public _003CWaitAndEnableCategoryPanel_003Ed__51(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600488D")]
		[Address(RVA = "0x5BB5AF0", Offset = "0x5BB4AF0", VA = "0x5BB5AF0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600488E")]
		[Address(RVA = "0x5BB5B00", Offset = "0x5BB4B00", VA = "0x5BB5B00", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004890")]
		[Address(RVA = "0x5BB5C50", Offset = "0x5BB4C50", VA = "0x5BB5C50", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000782")]
	[CompilerGenerated]
	private sealed class _003CWaitAndRebuildCategoryPanel_003Ed__54 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40025E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40025E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40025E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public float time;

		[Token(Token = "0x40025EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BasePanel _003C_003E4__this;

		[Token(Token = "0x17000C57")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004895")]
			[Address(RVA = "0x5BB5DA0", Offset = "0x5BB4DA0", VA = "0x5BB5DA0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C58")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004897")]
			[Address(RVA = "0x5BB5DF0", Offset = "0x5BB4DF0", VA = "0x5BB5DF0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004892")]
		[Address(RVA = "0x5BB5170", Offset = "0x5BB4170", VA = "0x5BB5170")]
		[DebuggerHidden]
		public _003CWaitAndRebuildCategoryPanel_003Ed__54(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004893")]
		[Address(RVA = "0x5BB5CA0", Offset = "0x5BB4CA0", VA = "0x5BB5CA0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004894")]
		[Address(RVA = "0x5BB5CB0", Offset = "0x5BB4CB0", VA = "0x5BB5CB0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004896")]
		[Address(RVA = "0x5BB5DB0", Offset = "0x5BB4DB0", VA = "0x5BB5DB0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40025DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected Transform SinglePanel;

	[Token(Token = "0x40025DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	protected Transform DoublePanelLeft;

	[Token(Token = "0x40025DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	protected Transform DoublePanelRight;

	[Token(Token = "0x40025DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected List<BasePopup> _popups;

	[Token(Token = "0x40025DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected GameObject _currentCategoryPanel;

	[Token(Token = "0x40025E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected StringSetting _currentCategoryPanelName;

	[Token(Token = "0x40025E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected Dictionary<string, Type> _categoryPanelTypes;

	[Token(Token = "0x40025E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected RawImage MaskBackground;

	[Token(Token = "0x40025E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public BasePanel Parent;

	[Token(Token = "0x17000C45")]
	protected virtual string ThemePanel
	{
		[Token(Token = "0x600485D")]
		[Address(RVA = "0x5BB3600", Offset = "0x5BB2600", VA = "0x5BB3600", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C46")]
	protected virtual float Width
	{
		[Token(Token = "0x600485E")]
		[Address(RVA = "0x5BB3630", Offset = "0x5BB2630", VA = "0x5BB3630", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C47")]
	protected virtual float Height
	{
		[Token(Token = "0x600485F")]
		[Address(RVA = "0x5BB3640", Offset = "0x5BB2640", VA = "0x5BB3640", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C48")]
	protected virtual float BorderVerticalPadding
	{
		[Token(Token = "0x6004860")]
		[Address(RVA = "0x5BB3650", Offset = "0x5BB2650", VA = "0x5BB3650", Slot = "7")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C49")]
	protected virtual float BorderHorizontalPadding
	{
		[Token(Token = "0x6004861")]
		[Address(RVA = "0x5BB3660", Offset = "0x5BB2660", VA = "0x5BB3660", Slot = "8")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C4A")]
	protected virtual int VerticalPadding
	{
		[Token(Token = "0x6004862")]
		[Address(RVA = "0x5BB3670", Offset = "0x5BB2670", VA = "0x5BB3670", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C4B")]
	protected virtual int HorizontalPadding
	{
		[Token(Token = "0x6004863")]
		[Address(RVA = "0x5BB3680", Offset = "0x5BB2680", VA = "0x5BB3680", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C4C")]
	protected virtual float VerticalSpacing
	{
		[Token(Token = "0x6004864")]
		[Address(RVA = "0x5BB3690", Offset = "0x5BB2690", VA = "0x5BB3690", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C4D")]
	protected virtual TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004865")]
		[Address(RVA = "0x5BB36A0", Offset = "0x5BB26A0", VA = "0x5BB36A0", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000C4E")]
	protected virtual bool DoublePanel
	{
		[Token(Token = "0x6004866")]
		[Address(RVA = "0x5BB36B0", Offset = "0x5BB26B0", VA = "0x5BB36B0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C4F")]
	protected virtual bool DoublePanelDivider
	{
		[Token(Token = "0x6004867")]
		[Address(RVA = "0x5BB36C0", Offset = "0x5BB26C0", VA = "0x5BB36C0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C50")]
	protected virtual bool ScrollBar
	{
		[Token(Token = "0x6004868")]
		[Address(RVA = "0x5BB36D0", Offset = "0x5BB26D0", VA = "0x5BB36D0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C51")]
	protected virtual bool CategoryPanel
	{
		[Token(Token = "0x6004869")]
		[Address(RVA = "0x5BB36E0", Offset = "0x5BB26E0", VA = "0x5BB36E0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C52")]
	protected virtual bool UseLastCategory
	{
		[Token(Token = "0x600486A")]
		[Address(RVA = "0x5BB36F0", Offset = "0x5BB26F0", VA = "0x5BB36F0", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C53")]
	protected virtual bool HasPremadeContent
	{
		[Token(Token = "0x600486B")]
		[Address(RVA = "0x5BB3700", Offset = "0x5BB2700", VA = "0x5BB3700", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C54")]
	protected virtual string DefaultCategoryPanel
	{
		[Token(Token = "0x600486C")]
		[Address(RVA = "0x5BB3710", Offset = "0x5BB2710", VA = "0x5BB3710", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600486D")]
	[Address(RVA = "0x5BB3730", Offset = "0x5BB2730", VA = "0x5BB3730")]
	protected void OnEnable()
	{
	}

	[Token(Token = "0x600486E")]
	[Address(RVA = "0x5BB3870", Offset = "0x5BB2870", VA = "0x5BB3870", Slot = "20")]
	public virtual void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600486F")]
	[Address(RVA = "0x5BB4540", Offset = "0x5BB3540", VA = "0x5BB4540", Slot = "21")]
	public virtual void Show()
	{
	}

	[Token(Token = "0x6004870")]
	[Address(RVA = "0x5BB4570", Offset = "0x5BB3570", VA = "0x5BB4570", Slot = "22")]
	public virtual void Hide()
	{
	}

	[Token(Token = "0x6004871")]
	[Address(RVA = "0x5BB45B0", Offset = "0x5BB35B0", VA = "0x5BB45B0", Slot = "23")]
	public virtual void SyncSettingElements()
	{
	}

	[Token(Token = "0x6004872")]
	[Address(RVA = "0x5BB4640", Offset = "0x5BB3640", VA = "0x5BB4640", Slot = "24")]
	protected virtual void SetupPremadePanel()
	{
	}

	[Token(Token = "0x6004873")]
	[Address(RVA = "0x5BB4AD0", Offset = "0x5BB3AD0", VA = "0x5BB4AD0", Slot = "25")]
	protected virtual void SetupPopups()
	{
	}

	[Token(Token = "0x6004874")]
	[Address(RVA = "0x5BB4AE0", Offset = "0x5BB3AE0", VA = "0x5BB4AE0", Slot = "26")]
	protected virtual void HideAllPopups()
	{
	}

	[Token(Token = "0x6004875")]
	[Address(RVA = "0x5BB4C20", Offset = "0x5BB3C20", VA = "0x5BB4C20", Slot = "27")]
	protected virtual void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6004876")]
	[Address(RVA = "0x5BB4C30", Offset = "0x5BB3C30", VA = "0x5BB4C30", Slot = "28")]
	public virtual void SetCategoryPanel(string name)
	{
	}

	[Token(Token = "0x6004877")]
	[Address(RVA = "0x5BB4F60", Offset = "0x5BB3F60", VA = "0x5BB4F60")]
	[IteratorStateMachine(typeof(_003CWaitAndEnableCategoryPanel_003Ed__51))]
	private IEnumerator WaitAndEnableCategoryPanel()
	{
		return null;
	}

	[Token(Token = "0x6004878")]
	[Address(RVA = "0x5BB4FF0", Offset = "0x5BB3FF0", VA = "0x5BB4FF0")]
	public string GetCurrentCategoryName()
	{
		return null;
	}

	[Token(Token = "0x6004879")]
	[Address(RVA = "0x5BB5030", Offset = "0x5BB4030", VA = "0x5BB5030")]
	public void RebuildCategoryPanel()
	{
	}

	[Token(Token = "0x600487A")]
	[Address(RVA = "0x5BB50F0", Offset = "0x5BB40F0", VA = "0x5BB50F0")]
	[IteratorStateMachine(typeof(_003CWaitAndRebuildCategoryPanel_003Ed__54))]
	public IEnumerator WaitAndRebuildCategoryPanel(float time)
	{
		return null;
	}

	[Token(Token = "0x600487B")]
	[Address(RVA = "0x5BB5090", Offset = "0x5BB4090", VA = "0x5BB5090")]
	public void SetCategoryPanel(StringSetting setting)
	{
	}

	[Token(Token = "0x600487C")]
	[Address(RVA = "0x5BB5190", Offset = "0x5BB4190", VA = "0x5BB5190")]
	protected GameObject CreateHorizontalDivider(Transform parent, float height = 1f)
	{
		return null;
	}

	[Token(Token = "0x600487D")]
	[Address(RVA = "0x5BB44F0", Offset = "0x5BB34F0", VA = "0x5BB44F0")]
	protected Transform GetSinglePanelTransform(GameObject singlePanel)
	{
		return null;
	}

	[Token(Token = "0x600487E")]
	[Address(RVA = "0x5BB4250", Offset = "0x5BB3250", VA = "0x5BB4250")]
	protected Transform GetDoublePanelLeftTransform(GameObject doublePanel)
	{
		return null;
	}

	[Token(Token = "0x600487F")]
	[Address(RVA = "0x5BB42A0", Offset = "0x5BB32A0", VA = "0x5BB42A0")]
	protected Transform GetDoublePanelRightTransform(GameObject doublePanel)
	{
		return null;
	}

	[Token(Token = "0x6004880")]
	[Address(RVA = "0x5BB42F0", Offset = "0x5BB32F0", VA = "0x5BB42F0")]
	protected GameObject CreateSinglePanel(bool scrollBar)
	{
		return null;
	}

	[Token(Token = "0x6004881")]
	[Address(RVA = "0x5BB3DB0", Offset = "0x5BB2DB0", VA = "0x5BB3DB0")]
	protected GameObject CreateDoublePanel(bool scrollBar, bool divider)
	{
		return null;
	}

	[Token(Token = "0x6004882")]
	[Address(RVA = "0x5BB52A0", Offset = "0x5BB42A0", VA = "0x5BB52A0", Slot = "29")]
	protected virtual void BindPanel(GameObject panel, bool scrollBar)
	{
	}

	[Token(Token = "0x6004883")]
	[Address(RVA = "0x5BB4950", Offset = "0x5BB3950", VA = "0x5BB4950")]
	protected void SetPanelPadding(GameObject panel)
	{
	}

	[Token(Token = "0x6004884")]
	[Address(RVA = "0x5BB57B0", Offset = "0x5BB47B0", VA = "0x5BB57B0", Slot = "30")]
	public virtual float GetPanelWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6004885")]
	[Address(RVA = "0x5BB57D0", Offset = "0x5BB47D0", VA = "0x5BB57D0", Slot = "31")]
	public virtual float GetPanelHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6004886")]
	[Address(RVA = "0x5BB57F0", Offset = "0x5BB47F0", VA = "0x5BB57F0", Slot = "32")]
	public virtual float GetPanelVerticalOffset()
	{
		return default(float);
	}

	[Token(Token = "0x6004887")]
	[Address(RVA = "0x5BB5800", Offset = "0x5BB4800", VA = "0x5BB5800", Slot = "33")]
	protected virtual float GetWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6004888")]
	[Address(RVA = "0x5BB5820", Offset = "0x5BB4820", VA = "0x5BB5820", Slot = "34")]
	protected virtual float GetHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6004889")]
	[Address(RVA = "0x5BB5840", Offset = "0x5BB4840", VA = "0x5BB5840")]
	public float GetPhysicalWidth()
	{
		return default(float);
	}

	[Token(Token = "0x600488A")]
	[Address(RVA = "0x5BB5900", Offset = "0x5BB4900", VA = "0x5BB5900")]
	public float GetPhysicalHeight()
	{
		return default(float);
	}

	[Token(Token = "0x600488B")]
	[Address(RVA = "0x5BB59D0", Offset = "0x5BB49D0", VA = "0x5BB59D0")]
	public BasePanel()
	{
	}
}
