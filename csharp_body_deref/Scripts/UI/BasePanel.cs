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

[Token(Token = "0x2000566")]
internal class BasePanel : MonoBehaviour
{
	[Token(Token = "0x2000567")]
	[CompilerGenerated]
	private sealed class _003CWaitAndEnableCategoryPanel_003Ed__51 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001ABA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001ABB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001ABC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public BasePanel _003C_003E4__this;

		[Token(Token = "0x17000A7E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003848")]
			[Address(RVA = "0x42446C0", Offset = "0x42446C0", VA = "0x42446C0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A7F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600384A")]
			[Address(RVA = "0x4244710", Offset = "0x4244710", VA = "0x4244710", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003845")]
		[Address(RVA = "0x4244550", Offset = "0x4244550", VA = "0x4244550")]
		[DebuggerHidden]
		public _003CWaitAndEnableCategoryPanel_003Ed__51(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003846")]
		[Address(RVA = "0x4244570", Offset = "0x4244570", VA = "0x4244570", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003847")]
		[Address(RVA = "0x4244580", Offset = "0x4244580", VA = "0x4244580", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003849")]
		[Address(RVA = "0x42446D0", Offset = "0x42446D0", VA = "0x42446D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000568")]
	[CompilerGenerated]
	private sealed class _003CWaitAndRebuildCategoryPanel_003Ed__54 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001ABD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001ABE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001ABF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public float time;

		[Token(Token = "0x4001AC0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BasePanel _003C_003E4__this;

		[Token(Token = "0x17000A80")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600384E")]
			[Address(RVA = "0x4244800", Offset = "0x4244800", VA = "0x4244800", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A81")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003850")]
			[Address(RVA = "0x4244850", Offset = "0x4244850", VA = "0x4244850", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600384B")]
		[Address(RVA = "0x4244720", Offset = "0x4244720", VA = "0x4244720")]
		[DebuggerHidden]
		public _003CWaitAndRebuildCategoryPanel_003Ed__54(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600384C")]
		[Address(RVA = "0x4244740", Offset = "0x4244740", VA = "0x4244740", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600384D")]
		[Address(RVA = "0x4244750", Offset = "0x4244750", VA = "0x4244750", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600384F")]
		[Address(RVA = "0x4244810", Offset = "0x4244810", VA = "0x4244810", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001AB1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected Transform SinglePanel;

	[Token(Token = "0x4001AB2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	protected Transform DoublePanelLeft;

	[Token(Token = "0x4001AB3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	protected Transform DoublePanelRight;

	[Token(Token = "0x4001AB4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected List<BasePopup> _popups;

	[Token(Token = "0x4001AB5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected GameObject _currentCategoryPanel;

	[Token(Token = "0x4001AB6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected StringSetting _currentCategoryPanelName;

	[Token(Token = "0x4001AB7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected Dictionary<string, Type> _categoryPanelTypes;

	[Token(Token = "0x4001AB8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected RawImage MaskBackground;

	[Token(Token = "0x4001AB9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public BasePanel Parent;

	[Token(Token = "0x17000A6E")]
	protected virtual string ThemePanel
	{
		[Token(Token = "0x6003816")]
		[Address(RVA = "0x42253C0", Offset = "0x42253C0", VA = "0x42253C0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A6F")]
	protected virtual float Width
	{
		[Token(Token = "0x6003817")]
		[Address(RVA = "0x42253F0", Offset = "0x42253F0", VA = "0x42253F0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A70")]
	protected virtual float Height
	{
		[Token(Token = "0x6003818")]
		[Address(RVA = "0x4225400", Offset = "0x4225400", VA = "0x4225400", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A71")]
	protected virtual float BorderVerticalPadding
	{
		[Token(Token = "0x6003819")]
		[Address(RVA = "0x4225410", Offset = "0x4225410", VA = "0x4225410", Slot = "7")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A72")]
	protected virtual float BorderHorizontalPadding
	{
		[Token(Token = "0x600381A")]
		[Address(RVA = "0x4225420", Offset = "0x4225420", VA = "0x4225420", Slot = "8")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A73")]
	protected virtual int VerticalPadding
	{
		[Token(Token = "0x600381B")]
		[Address(RVA = "0x4225430", Offset = "0x4225430", VA = "0x4225430", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A74")]
	protected virtual int HorizontalPadding
	{
		[Token(Token = "0x600381C")]
		[Address(RVA = "0x4225440", Offset = "0x4225440", VA = "0x4225440", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A75")]
	protected virtual float VerticalSpacing
	{
		[Token(Token = "0x600381D")]
		[Address(RVA = "0x4225450", Offset = "0x4225450", VA = "0x4225450", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A76")]
	protected virtual TextAnchor PanelAlignment
	{
		[Token(Token = "0x600381E")]
		[Address(RVA = "0x4225460", Offset = "0x4225460", VA = "0x4225460", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000A77")]
	protected virtual bool DoublePanel
	{
		[Token(Token = "0x600381F")]
		[Address(RVA = "0x4225470", Offset = "0x4225470", VA = "0x4225470", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A78")]
	protected virtual bool DoublePanelDivider
	{
		[Token(Token = "0x6003820")]
		[Address(RVA = "0x4225480", Offset = "0x4225480", VA = "0x4225480", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A79")]
	protected virtual bool ScrollBar
	{
		[Token(Token = "0x6003821")]
		[Address(RVA = "0x4225490", Offset = "0x4225490", VA = "0x4225490", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A7A")]
	protected virtual bool CategoryPanel
	{
		[Token(Token = "0x6003822")]
		[Address(RVA = "0x42254A0", Offset = "0x42254A0", VA = "0x42254A0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A7B")]
	protected virtual bool UseLastCategory
	{
		[Token(Token = "0x6003823")]
		[Address(RVA = "0x42254B0", Offset = "0x42254B0", VA = "0x42254B0", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A7C")]
	protected virtual bool HasPremadeContent
	{
		[Token(Token = "0x6003824")]
		[Address(RVA = "0x42254C0", Offset = "0x42254C0", VA = "0x42254C0", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A7D")]
	protected virtual string DefaultCategoryPanel
	{
		[Token(Token = "0x6003825")]
		[Address(RVA = "0x42254D0", Offset = "0x42254D0", VA = "0x42254D0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003826")]
	[Address(RVA = "0x42254F0", Offset = "0x42254F0", VA = "0x42254F0")]
	protected void OnEnable()
	{
	}

	[Token(Token = "0x6003827")]
	[Address(RVA = "0x4225630", Offset = "0x4225630", VA = "0x4225630", Slot = "20")]
	public virtual void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003828")]
	[Address(RVA = "0x42262A0", Offset = "0x42262A0", VA = "0x42262A0", Slot = "21")]
	public virtual void Show()
	{
	}

	[Token(Token = "0x6003829")]
	[Address(RVA = "0x42262D0", Offset = "0x42262D0", VA = "0x42262D0", Slot = "22")]
	public virtual void Hide()
	{
	}

	[Token(Token = "0x600382A")]
	[Address(RVA = "0x4226310", Offset = "0x4226310", VA = "0x4226310", Slot = "23")]
	public virtual void SyncSettingElements()
	{
	}

	[Token(Token = "0x600382B")]
	[Address(RVA = "0x42263A0", Offset = "0x42263A0", VA = "0x42263A0", Slot = "24")]
	protected virtual void SetupPremadePanel()
	{
	}

	[Token(Token = "0x600382C")]
	[Address(RVA = "0x4226820", Offset = "0x4226820", VA = "0x4226820", Slot = "25")]
	protected virtual void SetupPopups()
	{
	}

	[Token(Token = "0x600382D")]
	[Address(RVA = "0x4226830", Offset = "0x4226830", VA = "0x4226830", Slot = "26")]
	protected virtual void HideAllPopups()
	{
	}

	[Token(Token = "0x600382E")]
	[Address(RVA = "0x4226980", Offset = "0x4226980", VA = "0x4226980", Slot = "27")]
	protected virtual void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x600382F")]
	[Address(RVA = "0x4226990", Offset = "0x4226990", VA = "0x4226990", Slot = "28")]
	public virtual void SetCategoryPanel(string name)
	{
	}

	[Token(Token = "0x6003830")]
	[Address(RVA = "0x4226CD0", Offset = "0x4226CD0", VA = "0x4226CD0")]
	[IteratorStateMachine(typeof(_003CWaitAndEnableCategoryPanel_003Ed__51))]
	private IEnumerator WaitAndEnableCategoryPanel()
	{
		return null;
	}

	[Token(Token = "0x6003831")]
	[Address(RVA = "0x4226D40", Offset = "0x4226D40", VA = "0x4226D40")]
	public string GetCurrentCategoryName()
	{
		return null;
	}

	[Token(Token = "0x6003832")]
	[Address(RVA = "0x4226D80", Offset = "0x4226D80", VA = "0x4226D80")]
	public void RebuildCategoryPanel()
	{
	}

	[Token(Token = "0x6003833")]
	[Address(RVA = "0x4226E40", Offset = "0x4226E40", VA = "0x4226E40")]
	[IteratorStateMachine(typeof(_003CWaitAndRebuildCategoryPanel_003Ed__54))]
	public IEnumerator WaitAndRebuildCategoryPanel(float time)
	{
		return null;
	}

	[Token(Token = "0x6003834")]
	[Address(RVA = "0x4226DE0", Offset = "0x4226DE0", VA = "0x4226DE0")]
	public void SetCategoryPanel(StringSetting setting)
	{
	}

	[Token(Token = "0x6003835")]
	[Address(RVA = "0x4226EC0", Offset = "0x4226EC0", VA = "0x4226EC0")]
	protected GameObject CreateHorizontalDivider(Transform parent, float height = 1f)
	{
		return null;
	}

	[Token(Token = "0x6003836")]
	[Address(RVA = "0x4226250", Offset = "0x4226250", VA = "0x4226250")]
	protected Transform GetSinglePanelTransform(GameObject singlePanel)
	{
		return null;
	}

	[Token(Token = "0x6003837")]
	[Address(RVA = "0x4225FE0", Offset = "0x4225FE0", VA = "0x4225FE0")]
	protected Transform GetDoublePanelLeftTransform(GameObject doublePanel)
	{
		return null;
	}

	[Token(Token = "0x6003838")]
	[Address(RVA = "0x4226030", Offset = "0x4226030", VA = "0x4226030")]
	protected Transform GetDoublePanelRightTransform(GameObject doublePanel)
	{
		return null;
	}

	[Token(Token = "0x6003839")]
	[Address(RVA = "0x4226080", Offset = "0x4226080", VA = "0x4226080")]
	protected GameObject CreateSinglePanel(bool scrollBar)
	{
		return null;
	}

	[Token(Token = "0x600383A")]
	[Address(RVA = "0x4225BA0", Offset = "0x4225BA0", VA = "0x4225BA0")]
	protected GameObject CreateDoublePanel(bool scrollBar, bool divider)
	{
		return null;
	}

	[Token(Token = "0x600383B")]
	[Address(RVA = "0x4226FD0", Offset = "0x4226FD0", VA = "0x4226FD0", Slot = "29")]
	protected virtual void BindPanel(GameObject panel, bool scrollBar)
	{
	}

	[Token(Token = "0x600383C")]
	[Address(RVA = "0x42266A0", Offset = "0x42266A0", VA = "0x42266A0")]
	protected void SetPanelPadding(GameObject panel)
	{
	}

	[Token(Token = "0x600383D")]
	[Address(RVA = "0x4227540", Offset = "0x4227540", VA = "0x4227540", Slot = "30")]
	public virtual float GetPanelWidth()
	{
		return default(float);
	}

	[Token(Token = "0x600383E")]
	[Address(RVA = "0x4227560", Offset = "0x4227560", VA = "0x4227560", Slot = "31")]
	public virtual float GetPanelHeight()
	{
		return default(float);
	}

	[Token(Token = "0x600383F")]
	[Address(RVA = "0x4227580", Offset = "0x4227580", VA = "0x4227580", Slot = "32")]
	public virtual float GetPanelVerticalOffset()
	{
		return default(float);
	}

	[Token(Token = "0x6003840")]
	[Address(RVA = "0x4227590", Offset = "0x4227590", VA = "0x4227590", Slot = "33")]
	protected virtual float GetWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6003841")]
	[Address(RVA = "0x42275B0", Offset = "0x42275B0", VA = "0x42275B0", Slot = "34")]
	protected virtual float GetHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6003842")]
	[Address(RVA = "0x42275D0", Offset = "0x42275D0", VA = "0x42275D0")]
	public float GetPhysicalWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6003843")]
	[Address(RVA = "0x4227690", Offset = "0x4227690", VA = "0x4227690")]
	public float GetPhysicalHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6003844")]
	[Address(RVA = "0x4227760", Offset = "0x4227760", VA = "0x4227760")]
	public BasePanel()
	{
	}
}
