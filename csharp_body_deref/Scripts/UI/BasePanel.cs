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

[Token(Token = "0x20006D7")]
internal class BasePanel : MonoBehaviour
{
	[Token(Token = "0x20006D8")]
	[CompilerGenerated]
	private sealed class _003CWaitAndEnableCategoryPanel_003Ed__51 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400226A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400226B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400226C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public BasePanel _003C_003E4__this;

		[Token(Token = "0x17000BD1")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600436A")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BD2")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600436C")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004367")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndEnableCategoryPanel_003Ed__51(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004368")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004369")]
		[Address(RVA = "0x21D1220", Offset = "0x21CF820", VA = "0x1821D1220", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600436B")]
		[Address(RVA = "0x21D1370", Offset = "0x21CF970", VA = "0x1821D1370", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20006D9")]
	[CompilerGenerated]
	private sealed class _003CWaitAndRebuildCategoryPanel_003Ed__54 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400226D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400226E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400226F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public float time;

		[Token(Token = "0x4002270")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BasePanel _003C_003E4__this;

		[Token(Token = "0x17000BD3")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004370")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BD4")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004372")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600436D")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndRebuildCategoryPanel_003Ed__54(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600436E")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600436F")]
		[Address(RVA = "0x21D13B0", Offset = "0x21CF9B0", VA = "0x1821D13B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004371")]
		[Address(RVA = "0x21D14A0", Offset = "0x21CFAA0", VA = "0x1821D14A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002261")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected Transform SinglePanel;

	[Token(Token = "0x4002262")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	protected Transform DoublePanelLeft;

	[Token(Token = "0x4002263")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	protected Transform DoublePanelRight;

	[Token(Token = "0x4002264")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected List<BasePopup> _popups;

	[Token(Token = "0x4002265")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected GameObject _currentCategoryPanel;

	[Token(Token = "0x4002266")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected StringSetting _currentCategoryPanelName;

	[Token(Token = "0x4002267")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected Dictionary<string, Type> _categoryPanelTypes;

	[Token(Token = "0x4002268")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected RawImage MaskBackground;

	[Token(Token = "0x4002269")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public BasePanel Parent;

	[Token(Token = "0x17000BC1")]
	protected virtual string ThemePanel
	{
		[Token(Token = "0x6004338")]
		[Address(RVA = "0x21BB400", Offset = "0x21B9A00", VA = "0x1821BB400", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BC2")]
	protected virtual float Width
	{
		[Token(Token = "0x6004339")]
		[Address(RVA = "0x21BB440", Offset = "0x21B9A40", VA = "0x1821BB440", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BC3")]
	protected virtual float Height
	{
		[Token(Token = "0x600433A")]
		[Address(RVA = "0x21500A0", Offset = "0x214E6A0", VA = "0x1821500A0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BC4")]
	protected virtual float BorderVerticalPadding
	{
		[Token(Token = "0x600433B")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "7")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BC5")]
	protected virtual float BorderHorizontalPadding
	{
		[Token(Token = "0x600433C")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "8")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BC6")]
	protected virtual int VerticalPadding
	{
		[Token(Token = "0x600433D")]
		[Address(RVA = "0x21BB430", Offset = "0x21B9A30", VA = "0x1821BB430", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BC7")]
	protected virtual int HorizontalPadding
	{
		[Token(Token = "0x600433E")]
		[Address(RVA = "0x846F60", Offset = "0x845560", VA = "0x180846F60", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BC8")]
	protected virtual float VerticalSpacing
	{
		[Token(Token = "0x600433F")]
		[Address(RVA = "0x2175ED0", Offset = "0x21744D0", VA = "0x182175ED0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BC9")]
	protected virtual TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004340")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000BCA")]
	protected virtual bool DoublePanel
	{
		[Token(Token = "0x6004341")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BCB")]
	protected virtual bool DoublePanelDivider
	{
		[Token(Token = "0x6004342")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BCC")]
	protected virtual bool ScrollBar
	{
		[Token(Token = "0x6004343")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BCD")]
	protected virtual bool CategoryPanel
	{
		[Token(Token = "0x6004344")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BCE")]
	protected virtual bool UseLastCategory
	{
		[Token(Token = "0x6004345")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BCF")]
	protected virtual bool HasPremadeContent
	{
		[Token(Token = "0x6004346")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BD0")]
	protected virtual string DefaultCategoryPanel
	{
		[Token(Token = "0x6004347")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004348")]
	[Address(RVA = "0x21BA190", Offset = "0x21B8790", VA = "0x1821BA190")]
	protected void OnEnable()
	{
	}

	[Token(Token = "0x6004349")]
	[Address(RVA = "0x21BABE0", Offset = "0x21B91E0", VA = "0x1821BABE0", Slot = "20")]
	public virtual void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600434A")]
	[Address(RVA = "0x21BB130", Offset = "0x21B9730", VA = "0x1821BB130", Slot = "21")]
	public virtual void Show()
	{
	}

	[Token(Token = "0x600434B")]
	[Address(RVA = "0x21BA150", Offset = "0x21B8750", VA = "0x1821BA150", Slot = "22")]
	public virtual void Hide()
	{
	}

	[Token(Token = "0x600434C")]
	[Address(RVA = "0x21BB160", Offset = "0x21B9760", VA = "0x1821BB160", Slot = "23")]
	public virtual void SyncSettingElements()
	{
	}

	[Token(Token = "0x600434D")]
	[Address(RVA = "0x21BA8B0", Offset = "0x21B8EB0", VA = "0x1821BA8B0", Slot = "24")]
	protected virtual void SetupPremadePanel()
	{
	}

	[Token(Token = "0x600434E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "25")]
	protected virtual void SetupPopups()
	{
	}

	[Token(Token = "0x600434F")]
	[Address(RVA = "0x21BA030", Offset = "0x21B8630", VA = "0x1821BA030", Slot = "26")]
	protected virtual void HideAllPopups()
	{
	}

	[Token(Token = "0x6004350")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "27")]
	protected virtual void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6004351")]
	[Address(RVA = "0x21BA380", Offset = "0x21B8980", VA = "0x1821BA380", Slot = "28")]
	public virtual void SetCategoryPanel(string name)
	{
	}

	[Token(Token = "0x6004352")]
	[Address(RVA = "0x21BB1F0", Offset = "0x21B97F0", VA = "0x1821BB1F0")]
	[IteratorStateMachine(typeof(_003CWaitAndEnableCategoryPanel_003Ed__51))]
	private IEnumerator WaitAndEnableCategoryPanel()
	{
		return null;
	}

	[Token(Token = "0x6004353")]
	[Address(RVA = "0x21B9D00", Offset = "0x21B8300", VA = "0x1821B9D00")]
	public string GetCurrentCategoryName()
	{
		return null;
	}

	[Token(Token = "0x6004354")]
	[Address(RVA = "0x21BA2C0", Offset = "0x21B88C0", VA = "0x1821BA2C0")]
	public void RebuildCategoryPanel()
	{
	}

	[Token(Token = "0x6004355")]
	[Address(RVA = "0x21BB260", Offset = "0x21B9860", VA = "0x1821BB260")]
	[IteratorStateMachine(typeof(_003CWaitAndRebuildCategoryPanel_003Ed__54))]
	public IEnumerator WaitAndRebuildCategoryPanel(float time)
	{
		return null;
	}

	[Token(Token = "0x6004356")]
	[Address(RVA = "0x21BA320", Offset = "0x21B8920", VA = "0x1821BA320")]
	public void SetCategoryPanel(StringSetting setting)
	{
	}

	[Token(Token = "0x6004357")]
	[Address(RVA = "0x21B99D0", Offset = "0x21B7FD0", VA = "0x1821B99D0")]
	protected GameObject CreateHorizontalDivider(Transform parent, float height = 1f)
	{
		return null;
	}

	[Token(Token = "0x6004358")]
	[Address(RVA = "0x21B9FD0", Offset = "0x21B85D0", VA = "0x1821B9FD0")]
	protected Transform GetSinglePanelTransform(GameObject singlePanel)
	{
		return null;
	}

	[Token(Token = "0x6004359")]
	[Address(RVA = "0x21B9D40", Offset = "0x21B8340", VA = "0x1821B9D40")]
	protected Transform GetDoublePanelLeftTransform(GameObject doublePanel)
	{
		return null;
	}

	[Token(Token = "0x600435A")]
	[Address(RVA = "0x21B9DA0", Offset = "0x21B83A0", VA = "0x1821B9DA0")]
	protected Transform GetDoublePanelRightTransform(GameObject doublePanel)
	{
		return null;
	}

	[Token(Token = "0x600435B")]
	[Address(RVA = "0x21B9B10", Offset = "0x21B8110", VA = "0x1821B9B10")]
	protected GameObject CreateSinglePanel(bool scrollBar)
	{
		return null;
	}

	[Token(Token = "0x600435C")]
	[Address(RVA = "0x21B9540", Offset = "0x21B7B40", VA = "0x1821B9540")]
	protected GameObject CreateDoublePanel(bool scrollBar, bool divider)
	{
		return null;
	}

	[Token(Token = "0x600435D")]
	[Address(RVA = "0x21B8FC0", Offset = "0x21B75C0", VA = "0x1821B8FC0", Slot = "29")]
	protected virtual void BindPanel(GameObject panel, bool scrollBar)
	{
	}

	[Token(Token = "0x600435E")]
	[Address(RVA = "0x21BA700", Offset = "0x21B8D00", VA = "0x1821BA700")]
	protected void SetPanelPadding(GameObject panel)
	{
	}

	[Token(Token = "0x600435F")]
	[Address(RVA = "0x21B9E20", Offset = "0x21B8420", VA = "0x1821B9E20", Slot = "30")]
	public virtual float GetPanelWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6004360")]
	[Address(RVA = "0xA36E60", Offset = "0xA35460", VA = "0x180A36E60", Slot = "31")]
	public virtual float GetPanelHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6004361")]
	[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "32")]
	public virtual float GetPanelVerticalOffset()
	{
		return default(float);
	}

	[Token(Token = "0x6004362")]
	[Address(RVA = "0x21B8EA0", Offset = "0x21B74A0", VA = "0x1821B8EA0", Slot = "33")]
	protected virtual float GetWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6004363")]
	[Address(RVA = "0x21B9E00", Offset = "0x21B8400", VA = "0x1821B9E00", Slot = "34")]
	protected virtual float GetHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6004364")]
	[Address(RVA = "0x21B9F00", Offset = "0x21B8500", VA = "0x1821B9F00")]
	public float GetPhysicalWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6004365")]
	[Address(RVA = "0x21B9E40", Offset = "0x21B8440", VA = "0x1821B9E40")]
	public float GetPhysicalHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6004366")]
	[Address(RVA = "0x21BB2E0", Offset = "0x21B98E0", VA = "0x1821BB2E0")]
	public BasePanel()
	{
	}
}
