// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DebugManager
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Rendering.UI;

namespace UnityEngine.Rendering;

[Token(Token = "0x200008B")]
public sealed class DebugManager
{
	[Token(Token = "0x200008C")]
	public enum UIMode
	{
		[Token(Token = "0x40001F1")]
		EditorMode,
		[Token(Token = "0x40001F2")]
		RuntimeMode
	}

	[Token(Token = "0x200008D")]
	private class UIState
	{
		[Token(Token = "0x40001F3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public UIMode mode;

		[Token(Token = "0x40001F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		[SerializeField]
		private bool m_Open;

		[Token(Token = "0x17000066")]
		public bool open
		{
			[Token(Token = "0x6000665")]
			[Address(RVA = "0x1537420", Offset = "0x1535A20", VA = "0x181537420")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6000666")]
			[Address(RVA = "0x2AE9BF0", Offset = "0x2AE81F0", VA = "0x182AE9BF0")]
			set
			{
			}
		}

		[Token(Token = "0x6000667")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public UIState()
		{
		}
	}

	[Token(Token = "0x40001D3")]
	private const string kEnableDebugBtn1 = "Enable Debug Button 1";

	[Token(Token = "0x40001D4")]
	private const string kEnableDebugBtn2 = "Enable Debug Button 2";

	[Token(Token = "0x40001D5")]
	private const string kDebugPreviousBtn = "Debug Previous";

	[Token(Token = "0x40001D6")]
	private const string kDebugNextBtn = "Debug Next";

	[Token(Token = "0x40001D7")]
	private const string kValidateBtn = "Debug Validate";

	[Token(Token = "0x40001D8")]
	private const string kPersistentBtn = "Debug Persistent";

	[Token(Token = "0x40001D9")]
	private const string kDPadVertical = "Debug Vertical";

	[Token(Token = "0x40001DA")]
	private const string kDPadHorizontal = "Debug Horizontal";

	[Token(Token = "0x40001DB")]
	private const string kMultiplierBtn = "Debug Multiplier";

	[Token(Token = "0x40001DC")]
	private const string kResetBtn = "Debug Reset";

	[Token(Token = "0x40001DD")]
	private const string kEnableDebug = "Enable Debug";

	[Token(Token = "0x40001DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private DebugActionDesc[] m_DebugActions;

	[Token(Token = "0x40001DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private DebugActionState[] m_DebugActionStates;

	[Token(Token = "0x40001E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	private static Action<UIMode, bool> m_windowStateChanged;

	[Token(Token = "0x40001E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private UIState editorUIState;

	[Token(Token = "0x40001E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private bool m_EnableRuntimeUI;

	[Token(Token = "0x40001E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private UIState runtimeUIState;

	[Token(Token = "0x40001E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Lazy<DebugManager> s_Instance;

	[Token(Token = "0x40001E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private ReadOnlyCollection<DebugUI.Panel> m_ReadOnlyPanels;

	[Token(Token = "0x40001E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly List<DebugUI.Panel> m_Panels;

	[Token(Token = "0x40001E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	[CompilerGenerated]
	private Action<bool> m_onDisplayRuntimeUIChanged;

	[Token(Token = "0x40001E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	[CompilerGenerated]
	private Action m_onSetDirty;

	[Token(Token = "0x40001E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	[CompilerGenerated]
	private Action m_resetData;

	[Token(Token = "0x40001EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public bool refreshEditorRequested;

	[Token(Token = "0x40001EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	private int? m_RequestedPanelIndex;

	[Token(Token = "0x40001EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private GameObject m_Root;

	[Token(Token = "0x40001ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private DebugUIHandlerCanvas m_RootUICanvas;

	[Token(Token = "0x40001EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private GameObject m_PersistentRoot;

	[Token(Token = "0x40001EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private DebugUIHandlerPersistentCanvas m_RootUIPersistentCanvas;

	[Token(Token = "0x1700005F")]
	public bool displayEditorUI
	{
		[Token(Token = "0x6000637")]
		[Address(RVA = "0x2ADD0D0", Offset = "0x2ADB6D0", VA = "0x182ADD0D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000638")]
		[Address(RVA = "0x2ADC370", Offset = "0x2ADA970", VA = "0x182ADC370")]
		set
		{
		}
	}

	[Token(Token = "0x17000060")]
	public bool enableRuntimeUI
	{
		[Token(Token = "0x6000639")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600063A")]
		[Address(RVA = "0x2ADD980", Offset = "0x2ADBF80", VA = "0x182ADD980")]
		set
		{
		}
	}

	[Token(Token = "0x17000061")]
	public bool displayRuntimeUI
	{
		[Token(Token = "0x600063B")]
		[Address(RVA = "0x2ADD180", Offset = "0x2ADB780", VA = "0x182ADD180")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600063C")]
		[Address(RVA = "0x2ADD700", Offset = "0x2ADBD00", VA = "0x182ADD700")]
		set
		{
		}
	}

	[Token(Token = "0x17000062")]
	public bool displayPersistentRuntimeUI
	{
		[Token(Token = "0x600063D")]
		[Address(RVA = "0x2ADD0F0", Offset = "0x2ADB6F0", VA = "0x182ADD0F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600063E")]
		[Address(RVA = "0x2ADD650", Offset = "0x2ADBC50", VA = "0x182ADD650")]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public static DebugManager instance
	{
		[Token(Token = "0x600063F")]
		[Address(RVA = "0x2ADD200", Offset = "0x2ADB800", VA = "0x182ADD200")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000064")]
	public ReadOnlyCollection<DebugUI.Panel> panels
	{
		[Token(Token = "0x6000641")]
		[Address(RVA = "0x2ADD320", Offset = "0x2ADB920", VA = "0x182ADD320")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000065")]
	public bool isAnyDebugUIActive
	{
		[Token(Token = "0x6000648")]
		[Address(RVA = "0x2ADD280", Offset = "0x2ADB880", VA = "0x182ADD280")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000005")]
	public static event Action<UIMode, bool> windowStateChanged
	{
		[Token(Token = "0x6000635")]
		[Address(RVA = "0x2ADCFC0", Offset = "0x2ADB5C0", VA = "0x182ADCFC0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000636")]
		[Address(RVA = "0x2ADD540", Offset = "0x2ADBB40", VA = "0x182ADD540")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000006")]
	public event Action<bool> onDisplayRuntimeUIChanged
	{
		[Token(Token = "0x6000642")]
		[Address(RVA = "0x2ADCDD0", Offset = "0x2ADB3D0", VA = "0x182ADCDD0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000643")]
		[Address(RVA = "0x2ADD350", Offset = "0x2ADB950", VA = "0x182ADD350")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000007")]
	public event Action onSetDirty
	{
		[Token(Token = "0x6000644")]
		[Address(RVA = "0x2ADCE80", Offset = "0x2ADB480", VA = "0x182ADCE80")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000645")]
		[Address(RVA = "0x2ADD400", Offset = "0x2ADBA00", VA = "0x182ADD400")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000008")]
	private event Action resetData
	{
		[Token(Token = "0x6000646")]
		[Address(RVA = "0x2ADCF20", Offset = "0x2ADB520", VA = "0x182ADCF20")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000647")]
		[Address(RVA = "0x2ADD4A0", Offset = "0x2ADBAA0", VA = "0x182ADD4A0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x2ADB1B0", Offset = "0x2AD97B0", VA = "0x182ADB1B0")]
	private void RegisterActions()
	{
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal void EnableInputActions()
	{
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x2AD9AF0", Offset = "0x2AD80F0", VA = "0x182AD9AF0")]
	private void AddAction(DebugAction action, DebugActionDesc desc)
	{
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x2ADBFF0", Offset = "0x2ADA5F0", VA = "0x182ADBFF0")]
	private void SampleAction(int actionIndex)
	{
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x2ADC8A0", Offset = "0x2ADAEA0", VA = "0x182ADC8A0")]
	private void UpdateAction(int actionIndex)
	{
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x2ADC900", Offset = "0x2ADAF00", VA = "0x182ADC900")]
	internal void UpdateActions()
	{
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x2ADA170", Offset = "0x2AD8770", VA = "0x182ADA170")]
	internal float GetAction(DebugAction action)
	{
		return default(float);
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x2ADA000", Offset = "0x2AD8600", VA = "0x182ADA000")]
	internal bool GetActionToggleDebugMenuWithTouch()
	{
		return default(bool);
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x2AD9F60", Offset = "0x2AD8560", VA = "0x182AD9F60")]
	internal bool GetActionReleaseScrollTarget()
	{
		return default(bool);
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void RegisterInputs()
	{
	}

	[Token(Token = "0x6000640")]
	[Address(RVA = "0x2ADC9A0", Offset = "0x2ADAFA0", VA = "0x182ADC9A0")]
	private void UpdateReadOnlyCollection()
	{
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x2ADCB30", Offset = "0x2ADB130", VA = "0x182ADCB30")]
	private DebugManager()
	{
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x2ADB1A0", Offset = "0x2AD97A0", VA = "0x182ADB1A0")]
	public void RefreshEditor()
	{
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x2ADBFA0", Offset = "0x2ADA5A0", VA = "0x182ADBFA0")]
	public void Reset()
	{
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x2ADB170", Offset = "0x2AD9770", VA = "0x182ADB170")]
	public void ReDrawOnScreenDebug()
	{
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x2ADBB90", Offset = "0x2ADA190", VA = "0x182ADBB90")]
	public void RegisterData(IDebugData data)
	{
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x2ADC7B0", Offset = "0x2ADADB0", VA = "0x182ADC7B0")]
	public void UnregisterData(IDebugData data)
	{
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x2ADAE10", Offset = "0x2AD9410", VA = "0x182ADAE10")]
	public int GetState()
	{
		return default(int);
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x2ADBC80", Offset = "0x2ADA280", VA = "0x182ADBC80")]
	internal void RegisterRootCanvas(DebugUIHandlerCanvas root)
	{
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x2AD9C30", Offset = "0x2AD8230", VA = "0x182AD9C30")]
	internal void ChangeSelection(DebugUIHandlerWidget widget, bool fromNext)
	{
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x2ADC2E0", Offset = "0x2ADA8E0", VA = "0x182ADC2E0")]
	internal void SetScrollTarget(DebugUIHandlerWidget widget)
	{
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x2AD9C50", Offset = "0x2AD8250", VA = "0x182AD9C50")]
	private void EnsurePersistentCanvas()
	{
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x2ADC390", Offset = "0x2ADA990", VA = "0x182ADC390")]
	internal void TogglePersistent(DebugUI.Widget widget, [Optional] int? forceTupleIndex)
	{
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x16EFA60", Offset = "0x16EE060", VA = "0x1816EFA60")]
	private void OnPanelDirty(DebugUI.Panel panel)
	{
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x2ADB090", Offset = "0x2AD9690", VA = "0x182ADB090")]
	public int PanelIndex([DisallowNull] string displayName)
	{
		return default(int);
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x2ADAF50", Offset = "0x2AD9550", VA = "0x182ADAF50")]
	[Obsolete("Method is obsolete. Use PanelDisplayName instead. #from(6000.4) (UnityUpgradable) -> PanelDisplayName", true)]
	public string PanelDiplayName(int panelIndex)
	{
		return null;
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x2ADAFF0", Offset = "0x2AD95F0", VA = "0x182ADAFF0")]
	public string PanelDisplayName(int panelIndex)
	{
		return null;
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x2ADBF40", Offset = "0x2ADA540", VA = "0x182ADBF40")]
	public void RequestEditorWindowPanelIndex(int index)
	{
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x2ADAE00", Offset = "0x2AD9400", VA = "0x182ADAE00")]
	internal int? GetRequestedEditorWindowPanelIndex()
	{
		return null;
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x2ADAAB0", Offset = "0x2AD90B0", VA = "0x182ADAAB0")]
	public DebugUI.Panel GetPanel(string displayName, bool createIfNull = false, int groupIndex = 0, bool overrideIfExist = false)
	{
		return null;
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x2AD9E80", Offset = "0x2AD8480", VA = "0x182AD9E80")]
	public int FindPanelIndex(string displayName)
	{
		return default(int);
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x2ADBCD0", Offset = "0x2ADA2D0", VA = "0x182ADBCD0")]
	public void RemovePanel(string displayName)
	{
	}

	[Token(Token = "0x600065E")]
	[Address(RVA = "0x2ADBED0", Offset = "0x2ADA4D0", VA = "0x182ADBED0")]
	public void RemovePanel(DebugUI.Panel panel)
	{
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x2ADA850", Offset = "0x2AD8E50", VA = "0x182ADA850")]
	public DebugUI.Widget[] GetItems(DebugUI.Flags flags)
	{
		return null;
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x2ADA4E0", Offset = "0x2AD8AE0", VA = "0x182ADA4E0")]
	internal DebugUI.Widget[] GetItemsFromContainer(DebugUI.Flags flags, DebugUI.IContainer container)
	{
		return null;
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x2ADA3A0", Offset = "0x2AD89A0", VA = "0x182ADA3A0")]
	public DebugUI.Widget GetItem(string queryPath)
	{
		return null;
	}

	[Token(Token = "0x6000662")]
	[Address(RVA = "0x2ADA1B0", Offset = "0x2AD87B0", VA = "0x182ADA1B0")]
	private DebugUI.Widget GetItem(string queryPath, DebugUI.IContainer container)
	{
		return null;
	}

	[Token(Token = "0x6000663")]
	[Address(RVA = "0x2ADC370", Offset = "0x2ADA970", VA = "0x182ADC370")]
	[Obsolete("Use DebugManager.instance.displayEditorUI property instead. #from(2023.1)")]
	public void ToggleEditorUI(bool open)
	{
	}
}
