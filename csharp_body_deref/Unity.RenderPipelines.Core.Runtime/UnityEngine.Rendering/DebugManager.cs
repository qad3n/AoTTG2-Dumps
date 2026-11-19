// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DebugManager
// Update status: unchanged since the previous dump
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
			[Address(RVA = "0x64D08D0", Offset = "0x64CF8D0", VA = "0x64D08D0")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6000666")]
			[Address(RVA = "0x64CD6F0", Offset = "0x64CC6F0", VA = "0x64CD6F0")]
			set
			{
			}
		}

		[Token(Token = "0x6000667")]
		[Address(RVA = "0x64CE720", Offset = "0x64CD720", VA = "0x64CE720")]
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
		[Address(RVA = "0x64CD630", Offset = "0x64CC630", VA = "0x64CD630")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000638")]
		[Address(RVA = "0x64CD650", Offset = "0x64CC650", VA = "0x64CD650")]
		set
		{
		}
	}

	[Token(Token = "0x17000060")]
	public bool enableRuntimeUI
	{
		[Token(Token = "0x6000639")]
		[Address(RVA = "0x64CD790", Offset = "0x64CC790", VA = "0x64CD790")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600063A")]
		[Address(RVA = "0x64CD7A0", Offset = "0x64CC7A0", VA = "0x64CD7A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000061")]
	public bool displayRuntimeUI
	{
		[Token(Token = "0x600063B")]
		[Address(RVA = "0x64CD7D0", Offset = "0x64CC7D0", VA = "0x64CD7D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600063C")]
		[Address(RVA = "0x64CD850", Offset = "0x64CC850", VA = "0x64CD850")]
		set
		{
		}
	}

	[Token(Token = "0x17000062")]
	public bool displayPersistentRuntimeUI
	{
		[Token(Token = "0x600063D")]
		[Address(RVA = "0x64CDC10", Offset = "0x64CCC10", VA = "0x64CDC10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600063E")]
		[Address(RVA = "0x64CDC90", Offset = "0x64CCC90", VA = "0x64CDC90")]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public static DebugManager instance
	{
		[Token(Token = "0x600063F")]
		[Address(RVA = "0x64C1FE0", Offset = "0x64C0FE0", VA = "0x64C1FE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000064")]
	public ReadOnlyCollection<DebugUI.Panel> panels
	{
		[Token(Token = "0x6000641")]
		[Address(RVA = "0x64CDFF0", Offset = "0x64CCFF0", VA = "0x64CDFF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000065")]
	public bool isAnyDebugUIActive
	{
		[Token(Token = "0x6000648")]
		[Address(RVA = "0x64CE390", Offset = "0x64CD390", VA = "0x64CE390")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000005")]
	public static event Action<UIMode, bool> windowStateChanged
	{
		[Token(Token = "0x6000635")]
		[Address(RVA = "0x64CD450", Offset = "0x64CC450", VA = "0x64CD450")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000636")]
		[Address(RVA = "0x64CD540", Offset = "0x64CC540", VA = "0x64CD540")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000006")]
	public event Action<bool> onDisplayRuntimeUIChanged
	{
		[Token(Token = "0x6000642")]
		[Address(RVA = "0x64CE010", Offset = "0x64CD010", VA = "0x64CE010")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000643")]
		[Address(RVA = "0x64CE0B0", Offset = "0x64CD0B0", VA = "0x64CE0B0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000007")]
	public event Action onSetDirty
	{
		[Token(Token = "0x6000644")]
		[Address(RVA = "0x64CE150", Offset = "0x64CD150", VA = "0x64CE150")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000645")]
		[Address(RVA = "0x64CE1E0", Offset = "0x64CD1E0", VA = "0x64CE1E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000008")]
	private event Action resetData
	{
		[Token(Token = "0x6000646")]
		[Address(RVA = "0x64CE270", Offset = "0x64CD270", VA = "0x64CE270")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000647")]
		[Address(RVA = "0x64CE300", Offset = "0x64CD300", VA = "0x64CE300")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x64CBAA0", Offset = "0x64CAAA0", VA = "0x64CBAA0")]
	private void RegisterActions()
	{
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x64CC690", Offset = "0x64CB690", VA = "0x64CC690")]
	internal void EnableInputActions()
	{
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x64CC560", Offset = "0x64CB560", VA = "0x64CC560")]
	private void AddAction(DebugAction action, DebugActionDesc desc)
	{
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x64CC6F0", Offset = "0x64CB6F0", VA = "0x64CC6F0")]
	private void SampleAction(int actionIndex)
	{
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x64CCE20", Offset = "0x64CBE20", VA = "0x64CCE20")]
	private void UpdateAction(int actionIndex)
	{
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x64CD1C0", Offset = "0x64CC1C0", VA = "0x64CD1C0")]
	internal void UpdateActions()
	{
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x64CD210", Offset = "0x64CC210", VA = "0x64CD210")]
	internal float GetAction(DebugAction action)
	{
		return default(float);
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x64CD240", Offset = "0x64CC240", VA = "0x64CD240")]
	internal bool GetActionToggleDebugMenuWithTouch()
	{
		return default(bool);
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x64CD3C0", Offset = "0x64CC3C0", VA = "0x64CD3C0")]
	internal bool GetActionReleaseScrollTarget()
	{
		return default(bool);
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x64CD440", Offset = "0x64CC440", VA = "0x64CD440")]
	private void RegisterInputs()
	{
	}

	[Token(Token = "0x6000640")]
	[Address(RVA = "0x64CDF70", Offset = "0x64CCF70", VA = "0x64CDF70")]
	private void UpdateReadOnlyCollection()
	{
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x64CE480", Offset = "0x64CD480", VA = "0x64CE480")]
	private DebugManager()
	{
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x64C2070", Offset = "0x64C1070", VA = "0x64C2070")]
	public void RefreshEditor()
	{
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x64CE730", Offset = "0x64CD730", VA = "0x64CE730")]
	public void Reset()
	{
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x64C84B0", Offset = "0x64C74B0", VA = "0x64C84B0")]
	public void ReDrawOnScreenDebug()
	{
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x64C2090", Offset = "0x64C1090", VA = "0x64C2090")]
	public void RegisterData(IDebugData data)
	{
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x64C2500", Offset = "0x64C1500", VA = "0x64C2500")]
	public void UnregisterData(IDebugData data)
	{
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x64CE760", Offset = "0x64CD760", VA = "0x64CE760")]
	public int GetState()
	{
		return default(int);
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x64CE8C0", Offset = "0x64CD8C0", VA = "0x64CE8C0")]
	internal void RegisterRootCanvas(DebugUIHandlerCanvas root)
	{
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x64CE910", Offset = "0x64CD910", VA = "0x64CE910")]
	internal void ChangeSelection(DebugUIHandlerWidget widget, bool fromNext)
	{
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x64CE930", Offset = "0x64CD930", VA = "0x64CE930")]
	internal void SetScrollTarget(DebugUIHandlerWidget widget)
	{
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x64CDD40", Offset = "0x64CCD40", VA = "0x64CDD40")]
	private void EnsurePersistentCanvas()
	{
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x64CE9B0", Offset = "0x64CD9B0", VA = "0x64CE9B0")]
	internal void TogglePersistent(DebugUI.Widget widget, [Optional] int? forceTupleIndex)
	{
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x64CEF50", Offset = "0x64CDF50", VA = "0x64CEF50")]
	private void OnPanelDirty(DebugUI.Panel panel)
	{
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x64CEF70", Offset = "0x64CDF70", VA = "0x64CEF70")]
	public int PanelIndex([DisallowNull] string displayName)
	{
		return default(int);
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x64CF070", Offset = "0x64CE070", VA = "0x64CF070")]
	[Obsolete("Method is obsolete. Use PanelDisplayName instead. #from(6000.4) (UnityUpgradable) -> PanelDisplayName", true)]
	public string PanelDiplayName(int panelIndex)
	{
		return null;
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x64CF100", Offset = "0x64CE100", VA = "0x64CF100")]
	public string PanelDisplayName(int panelIndex)
	{
		return null;
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x64CF190", Offset = "0x64CE190", VA = "0x64CF190")]
	public void RequestEditorWindowPanelIndex(int index)
	{
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x64CF1E0", Offset = "0x64CE1E0", VA = "0x64CF1E0")]
	internal int? GetRequestedEditorWindowPanelIndex()
	{
		return null;
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x64C21B0", Offset = "0x64C11B0", VA = "0x64C21B0")]
	public DebugUI.Panel GetPanel(string displayName, bool createIfNull = false, int groupIndex = 0, bool overrideIfExist = false)
	{
		return null;
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x64CF690", Offset = "0x64CE690", VA = "0x64CF690")]
	public int FindPanelIndex(string displayName)
	{
		return default(int);
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x64CF770", Offset = "0x64CE770", VA = "0x64CF770")]
	public void RemovePanel(string displayName)
	{
	}

	[Token(Token = "0x600065E")]
	[Address(RVA = "0x64CF290", Offset = "0x64CE290", VA = "0x64CF290")]
	public void RemovePanel(DebugUI.Panel panel)
	{
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x64CFA40", Offset = "0x64CEA40", VA = "0x64CFA40")]
	public DebugUI.Widget[] GetItems(DebugUI.Flags flags)
	{
		return null;
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x64CFD00", Offset = "0x64CED00", VA = "0x64CFD00")]
	internal DebugUI.Widget[] GetItemsFromContainer(DebugUI.Flags flags, DebugUI.IContainer container)
	{
		return null;
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x64D0250", Offset = "0x64CF250", VA = "0x64D0250")]
	public DebugUI.Widget GetItem(string queryPath)
	{
		return null;
	}

	[Token(Token = "0x6000662")]
	[Address(RVA = "0x64D03C0", Offset = "0x64CF3C0", VA = "0x64D03C0")]
	private DebugUI.Widget GetItem(string queryPath, DebugUI.IContainer container)
	{
		return null;
	}

	[Token(Token = "0x6000663")]
	[Address(RVA = "0x64D0730", Offset = "0x64CF730", VA = "0x64D0730")]
	[Obsolete("Use DebugManager.instance.displayEditorUI property instead. #from(2023.1)")]
	public void ToggleEditorUI(bool open)
	{
	}
}
