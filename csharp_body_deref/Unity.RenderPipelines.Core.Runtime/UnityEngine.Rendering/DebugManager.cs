using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Rendering.UI;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000BD")]
public sealed class DebugManager
{
	[Token(Token = "0x40002A2")]
	private const string kEnableDebugBtn1 = "Enable Debug Button 1";

	[Token(Token = "0x40002A3")]
	private const string kEnableDebugBtn2 = "Enable Debug Button 2";

	[Token(Token = "0x40002A4")]
	private const string kDebugPreviousBtn = "Debug Previous";

	[Token(Token = "0x40002A5")]
	private const string kDebugNextBtn = "Debug Next";

	[Token(Token = "0x40002A6")]
	private const string kValidateBtn = "Debug Validate";

	[Token(Token = "0x40002A7")]
	private const string kPersistentBtn = "Debug Persistent";

	[Token(Token = "0x40002A8")]
	private const string kDPadVertical = "Debug Vertical";

	[Token(Token = "0x40002A9")]
	private const string kDPadHorizontal = "Debug Horizontal";

	[Token(Token = "0x40002AA")]
	private const string kMultiplierBtn = "Debug Multiplier";

	[Token(Token = "0x40002AB")]
	private const string kResetBtn = "Debug Reset";

	[Token(Token = "0x40002AC")]
	private const string kEnableDebug = "Enable Debug";

	[Token(Token = "0x40002AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private DebugActionDesc[] m_DebugActions;

	[Token(Token = "0x40002AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private DebugActionState[] m_DebugActionStates;

	[Token(Token = "0x40002AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Lazy<DebugManager> s_Instance;

	[Token(Token = "0x40002B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private ReadOnlyCollection<DebugUI.Panel> m_ReadOnlyPanels;

	[Token(Token = "0x40002B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly List<DebugUI.Panel> m_Panels;

	[Token(Token = "0x40002B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public bool refreshEditorRequested;

	[Token(Token = "0x40002B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private int? m_RequestedPanelIndex;

	[Token(Token = "0x40002B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private GameObject m_Root;

	[Token(Token = "0x40002B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private DebugUIHandlerCanvas m_RootUICanvas;

	[Token(Token = "0x40002B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private GameObject m_PersistentRoot;

	[Token(Token = "0x40002BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private DebugUIHandlerPersistentCanvas m_RootUIPersistentCanvas;

	[Token(Token = "0x40002BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private bool m_EditorOpen;

	[Token(Token = "0x40002BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x79")]
	private bool m_EnableRuntimeUI;

	[Token(Token = "0x17000082")]
	public static DebugManager instance
	{
		[Token(Token = "0x6000700")]
		[Address(RVA = "0x486FDA0", Offset = "0x486FDA0", VA = "0x486FDA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000083")]
	public ReadOnlyCollection<DebugUI.Panel> panels
	{
		[Token(Token = "0x6000702")]
		[Address(RVA = "0x487DD70", Offset = "0x487DD70", VA = "0x487DD70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000084")]
	public bool displayEditorUI
	{
		[Token(Token = "0x6000709")]
		[Address(RVA = "0x487E130", Offset = "0x487E130", VA = "0x487E130")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000085")]
	public bool enableRuntimeUI
	{
		[Token(Token = "0x600070B")]
		[Address(RVA = "0x487E150", Offset = "0x487E150", VA = "0x487E150")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600070C")]
		[Address(RVA = "0x487E160", Offset = "0x487E160", VA = "0x487E160")]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public bool displayRuntimeUI
	{
		[Token(Token = "0x600070D")]
		[Address(RVA = "0x4870AB0", Offset = "0x4870AB0", VA = "0x4870AB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600070E")]
		[Address(RVA = "0x487E180", Offset = "0x487E180", VA = "0x487E180")]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	public bool displayPersistentRuntimeUI
	{
		[Token(Token = "0x600070F")]
		[Address(RVA = "0x487E3C0", Offset = "0x487E3C0", VA = "0x487E3C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000710")]
		[Address(RVA = "0x487E440", Offset = "0x487E440", VA = "0x487E440")]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	public bool isAnyDebugUIActive
	{
		[Token(Token = "0x6000711")]
		[Address(RVA = "0x487E700", Offset = "0x487E700", VA = "0x487E700")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000007")]
	public event Action<bool> onDisplayRuntimeUIChanged
	{
		[Token(Token = "0x6000703")]
		[Address(RVA = "0x487DD90", Offset = "0x487DD90", VA = "0x487DD90")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000704")]
		[Address(RVA = "0x487DE40", Offset = "0x487DE40", VA = "0x487DE40")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000008")]
	public event Action onSetDirty
	{
		[Token(Token = "0x6000705")]
		[Address(RVA = "0x487DEF0", Offset = "0x487DEF0", VA = "0x487DEF0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000706")]
		[Address(RVA = "0x487DF80", Offset = "0x487DF80", VA = "0x487DF80")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000009")]
	private event Action resetData
	{
		[Token(Token = "0x6000707")]
		[Address(RVA = "0x487E010", Offset = "0x487E010", VA = "0x487E010")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000708")]
		[Address(RVA = "0x487E0A0", Offset = "0x487E0A0", VA = "0x487E0A0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x487CAF0", Offset = "0x487CAF0", VA = "0x487CAF0")]
	private void RegisterActions()
	{
	}

	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x487D5D0", Offset = "0x487D5D0", VA = "0x487D5D0")]
	internal void EnableInputActions()
	{
	}

	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x487D4D0", Offset = "0x487D4D0", VA = "0x487D4D0")]
	private void AddAction(DebugAction action, DebugActionDesc desc)
	{
	}

	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x487D5E0", Offset = "0x487D5E0", VA = "0x487D5E0")]
	private void SampleAction(int actionIndex)
	{
	}

	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x487D9F0", Offset = "0x487D9F0", VA = "0x487D9F0")]
	private void UpdateAction(int actionIndex)
	{
	}

	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x487DA40", Offset = "0x487DA40", VA = "0x487DA40")]
	internal void UpdateActions()
	{
	}

	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x487DAA0", Offset = "0x487DAA0", VA = "0x487DAA0")]
	internal float GetAction(DebugAction action)
	{
		return default(float);
	}

	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x487DAD0", Offset = "0x487DAD0", VA = "0x487DAD0")]
	internal bool GetActionToggleDebugMenuWithTouch()
	{
		return default(bool);
	}

	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x487DC60", Offset = "0x487DC60", VA = "0x487DC60")]
	internal bool GetActionReleaseScrollTarget()
	{
		return default(bool);
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x487DCE0", Offset = "0x487DCE0", VA = "0x487DCE0")]
	private void RegisterInputs()
	{
	}

	[Token(Token = "0x6000701")]
	[Address(RVA = "0x487DCF0", Offset = "0x487DCF0", VA = "0x487DCF0")]
	private void UpdateReadOnlyCollection()
	{
	}

	[Token(Token = "0x600070A")]
	[Address(RVA = "0x487E140", Offset = "0x487E140", VA = "0x487E140")]
	public void ToggleEditorUI(bool open)
	{
	}

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x487E7E0", Offset = "0x487E7E0", VA = "0x487E7E0")]
	private DebugManager()
	{
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x4875670", Offset = "0x4875670", VA = "0x4875670")]
	public void RefreshEditor()
	{
	}

	[Token(Token = "0x6000714")]
	[Address(RVA = "0x487EA00", Offset = "0x487EA00", VA = "0x487EA00")]
	public void Reset()
	{
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x487A5A0", Offset = "0x487A5A0", VA = "0x487A5A0")]
	public void ReDrawOnScreenDebug()
	{
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x4875690", Offset = "0x4875690", VA = "0x4875690")]
	public void RegisterData(IDebugData data)
	{
	}

	[Token(Token = "0x6000717")]
	[Address(RVA = "0x48757B0", Offset = "0x48757B0", VA = "0x48757B0")]
	public void UnregisterData(IDebugData data)
	{
	}

	[Token(Token = "0x6000718")]
	[Address(RVA = "0x487EA30", Offset = "0x487EA30", VA = "0x487EA30")]
	public int GetState()
	{
		return default(int);
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x487EBB0", Offset = "0x487EBB0", VA = "0x487EBB0")]
	internal void RegisterRootCanvas(DebugUIHandlerCanvas root)
	{
	}

	[Token(Token = "0x600071A")]
	[Address(RVA = "0x487EC00", Offset = "0x487EC00", VA = "0x487EC00")]
	internal void ChangeSelection(DebugUIHandlerWidget widget, bool fromNext)
	{
	}

	[Token(Token = "0x600071B")]
	[Address(RVA = "0x487EC20", Offset = "0x487EC20", VA = "0x487EC20")]
	internal void SetScrollTarget(DebugUIHandlerWidget widget)
	{
	}

	[Token(Token = "0x600071C")]
	[Address(RVA = "0x487E4E0", Offset = "0x487E4E0", VA = "0x487E4E0")]
	private void EnsurePersistentCanvas()
	{
	}

	[Token(Token = "0x600071D")]
	[Address(RVA = "0x487ECA0", Offset = "0x487ECA0", VA = "0x487ECA0")]
	internal void TogglePersistent(DebugUI.Widget widget, [Optional] int? forceTupleIndex)
	{
	}

	[Token(Token = "0x600071E")]
	[Address(RVA = "0x487F270", Offset = "0x487F270", VA = "0x487F270")]
	private void OnPanelDirty(DebugUI.Panel panel)
	{
	}

	[Token(Token = "0x600071F")]
	[Address(RVA = "0x487F290", Offset = "0x487F290", VA = "0x487F290")]
	public int PanelIndex([DisallowNull] string displayName)
	{
		return default(int);
	}

	[Token(Token = "0x6000720")]
	[Address(RVA = "0x487F3A0", Offset = "0x487F3A0", VA = "0x487F3A0")]
	public void RequestEditorWindowPanelIndex(int index)
	{
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x487F3F0", Offset = "0x487F3F0", VA = "0x487F3F0")]
	internal int? GetRequestedEditorWindowPanelIndex()
	{
		return null;
	}

	[Token(Token = "0x6000722")]
	[Address(RVA = "0x486FE30", Offset = "0x486FE30", VA = "0x486FE30")]
	public DebugUI.Panel GetPanel(string displayName, bool createIfNull = false, int groupIndex = 0, bool overrideIfExist = false)
	{
		return null;
	}

	[Token(Token = "0x6000723")]
	[Address(RVA = "0x487F470", Offset = "0x487F470", VA = "0x487F470")]
	public int FindPanelIndex(string displayName)
	{
		return default(int);
	}

	[Token(Token = "0x6000724")]
	[Address(RVA = "0x487F540", Offset = "0x487F540", VA = "0x487F540")]
	public void RemovePanel(string displayName)
	{
	}

	[Token(Token = "0x6000725")]
	[Address(RVA = "0x487F400", Offset = "0x487F400", VA = "0x487F400")]
	public void RemovePanel(DebugUI.Panel panel)
	{
	}

	[Token(Token = "0x6000726")]
	[Address(RVA = "0x487F780", Offset = "0x487F780", VA = "0x487F780")]
	public DebugUI.Widget[] GetItems(DebugUI.Flags flags)
	{
		return null;
	}

	[Token(Token = "0x6000727")]
	[Address(RVA = "0x487FAC0", Offset = "0x487FAC0", VA = "0x487FAC0")]
	internal DebugUI.Widget[] GetItemsFromContainer(DebugUI.Flags flags, DebugUI.IContainer container)
	{
		return null;
	}

	[Token(Token = "0x6000728")]
	[Address(RVA = "0x4880070", Offset = "0x4880070", VA = "0x4880070")]
	public DebugUI.Widget GetItem(string queryPath)
	{
		return null;
	}

	[Token(Token = "0x6000729")]
	[Address(RVA = "0x48801F0", Offset = "0x48801F0", VA = "0x48801F0")]
	private DebugUI.Widget GetItem(string queryPath, DebugUI.IContainer container)
	{
		return null;
	}
}
