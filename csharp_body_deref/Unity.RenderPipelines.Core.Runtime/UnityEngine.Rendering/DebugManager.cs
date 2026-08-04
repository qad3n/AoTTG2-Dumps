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
		[Address(RVA = "0x4B94E90", Offset = "0x4B94E90", VA = "0x4B94E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000083")]
	public ReadOnlyCollection<DebugUI.Panel> panels
	{
		[Token(Token = "0x6000702")]
		[Address(RVA = "0x4BA2E60", Offset = "0x4BA2E60", VA = "0x4BA2E60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000084")]
	public bool displayEditorUI
	{
		[Token(Token = "0x6000709")]
		[Address(RVA = "0x4BA3220", Offset = "0x4BA3220", VA = "0x4BA3220")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000085")]
	public bool enableRuntimeUI
	{
		[Token(Token = "0x600070B")]
		[Address(RVA = "0x4BA3240", Offset = "0x4BA3240", VA = "0x4BA3240")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600070C")]
		[Address(RVA = "0x4BA3250", Offset = "0x4BA3250", VA = "0x4BA3250")]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public bool displayRuntimeUI
	{
		[Token(Token = "0x600070D")]
		[Address(RVA = "0x4B95BA0", Offset = "0x4B95BA0", VA = "0x4B95BA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600070E")]
		[Address(RVA = "0x4BA3270", Offset = "0x4BA3270", VA = "0x4BA3270")]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	public bool displayPersistentRuntimeUI
	{
		[Token(Token = "0x600070F")]
		[Address(RVA = "0x4BA34B0", Offset = "0x4BA34B0", VA = "0x4BA34B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000710")]
		[Address(RVA = "0x4BA3530", Offset = "0x4BA3530", VA = "0x4BA3530")]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	public bool isAnyDebugUIActive
	{
		[Token(Token = "0x6000711")]
		[Address(RVA = "0x4BA37F0", Offset = "0x4BA37F0", VA = "0x4BA37F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000007")]
	public event Action<bool> onDisplayRuntimeUIChanged
	{
		[Token(Token = "0x6000703")]
		[Address(RVA = "0x4BA2E80", Offset = "0x4BA2E80", VA = "0x4BA2E80")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000704")]
		[Address(RVA = "0x4BA2F30", Offset = "0x4BA2F30", VA = "0x4BA2F30")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000008")]
	public event Action onSetDirty
	{
		[Token(Token = "0x6000705")]
		[Address(RVA = "0x4BA2FE0", Offset = "0x4BA2FE0", VA = "0x4BA2FE0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000706")]
		[Address(RVA = "0x4BA3070", Offset = "0x4BA3070", VA = "0x4BA3070")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000009")]
	private event Action resetData
	{
		[Token(Token = "0x6000707")]
		[Address(RVA = "0x4BA3100", Offset = "0x4BA3100", VA = "0x4BA3100")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000708")]
		[Address(RVA = "0x4BA3190", Offset = "0x4BA3190", VA = "0x4BA3190")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x4BA1BE0", Offset = "0x4BA1BE0", VA = "0x4BA1BE0")]
	private void RegisterActions()
	{
	}

	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x4BA26C0", Offset = "0x4BA26C0", VA = "0x4BA26C0")]
	internal void EnableInputActions()
	{
	}

	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x4BA25C0", Offset = "0x4BA25C0", VA = "0x4BA25C0")]
	private void AddAction(DebugAction action, DebugActionDesc desc)
	{
	}

	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x4BA26D0", Offset = "0x4BA26D0", VA = "0x4BA26D0")]
	private void SampleAction(int actionIndex)
	{
	}

	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x4BA2AE0", Offset = "0x4BA2AE0", VA = "0x4BA2AE0")]
	private void UpdateAction(int actionIndex)
	{
	}

	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x4BA2B30", Offset = "0x4BA2B30", VA = "0x4BA2B30")]
	internal void UpdateActions()
	{
	}

	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x4BA2B90", Offset = "0x4BA2B90", VA = "0x4BA2B90")]
	internal float GetAction(DebugAction action)
	{
		return default(float);
	}

	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x4BA2BC0", Offset = "0x4BA2BC0", VA = "0x4BA2BC0")]
	internal bool GetActionToggleDebugMenuWithTouch()
	{
		return default(bool);
	}

	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x4BA2D50", Offset = "0x4BA2D50", VA = "0x4BA2D50")]
	internal bool GetActionReleaseScrollTarget()
	{
		return default(bool);
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x4BA2DD0", Offset = "0x4BA2DD0", VA = "0x4BA2DD0")]
	private void RegisterInputs()
	{
	}

	[Token(Token = "0x6000701")]
	[Address(RVA = "0x4BA2DE0", Offset = "0x4BA2DE0", VA = "0x4BA2DE0")]
	private void UpdateReadOnlyCollection()
	{
	}

	[Token(Token = "0x600070A")]
	[Address(RVA = "0x4BA3230", Offset = "0x4BA3230", VA = "0x4BA3230")]
	public void ToggleEditorUI(bool open)
	{
	}

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x4BA38D0", Offset = "0x4BA38D0", VA = "0x4BA38D0")]
	private DebugManager()
	{
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x4B9A760", Offset = "0x4B9A760", VA = "0x4B9A760")]
	public void RefreshEditor()
	{
	}

	[Token(Token = "0x6000714")]
	[Address(RVA = "0x4BA3AF0", Offset = "0x4BA3AF0", VA = "0x4BA3AF0")]
	public void Reset()
	{
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x4B9F690", Offset = "0x4B9F690", VA = "0x4B9F690")]
	public void ReDrawOnScreenDebug()
	{
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x4B9A780", Offset = "0x4B9A780", VA = "0x4B9A780")]
	public void RegisterData(IDebugData data)
	{
	}

	[Token(Token = "0x6000717")]
	[Address(RVA = "0x4B9A8A0", Offset = "0x4B9A8A0", VA = "0x4B9A8A0")]
	public void UnregisterData(IDebugData data)
	{
	}

	[Token(Token = "0x6000718")]
	[Address(RVA = "0x4BA3B20", Offset = "0x4BA3B20", VA = "0x4BA3B20")]
	public int GetState()
	{
		return default(int);
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x4BA3CA0", Offset = "0x4BA3CA0", VA = "0x4BA3CA0")]
	internal void RegisterRootCanvas(DebugUIHandlerCanvas root)
	{
	}

	[Token(Token = "0x600071A")]
	[Address(RVA = "0x4BA3CF0", Offset = "0x4BA3CF0", VA = "0x4BA3CF0")]
	internal void ChangeSelection(DebugUIHandlerWidget widget, bool fromNext)
	{
	}

	[Token(Token = "0x600071B")]
	[Address(RVA = "0x4BA3D10", Offset = "0x4BA3D10", VA = "0x4BA3D10")]
	internal void SetScrollTarget(DebugUIHandlerWidget widget)
	{
	}

	[Token(Token = "0x600071C")]
	[Address(RVA = "0x4BA35D0", Offset = "0x4BA35D0", VA = "0x4BA35D0")]
	private void EnsurePersistentCanvas()
	{
	}

	[Token(Token = "0x600071D")]
	[Address(RVA = "0x4BA3D90", Offset = "0x4BA3D90", VA = "0x4BA3D90")]
	internal void TogglePersistent(DebugUI.Widget widget, [Optional] int? forceTupleIndex)
	{
	}

	[Token(Token = "0x600071E")]
	[Address(RVA = "0x4BA4360", Offset = "0x4BA4360", VA = "0x4BA4360")]
	private void OnPanelDirty(DebugUI.Panel panel)
	{
	}

	[Token(Token = "0x600071F")]
	[Address(RVA = "0x4BA4380", Offset = "0x4BA4380", VA = "0x4BA4380")]
	public int PanelIndex([DisallowNull] string displayName)
	{
		return default(int);
	}

	[Token(Token = "0x6000720")]
	[Address(RVA = "0x4BA4490", Offset = "0x4BA4490", VA = "0x4BA4490")]
	public void RequestEditorWindowPanelIndex(int index)
	{
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x4BA44E0", Offset = "0x4BA44E0", VA = "0x4BA44E0")]
	internal int? GetRequestedEditorWindowPanelIndex()
	{
		return null;
	}

	[Token(Token = "0x6000722")]
	[Address(RVA = "0x4B94F20", Offset = "0x4B94F20", VA = "0x4B94F20")]
	public DebugUI.Panel GetPanel(string displayName, bool createIfNull = false, int groupIndex = 0, bool overrideIfExist = false)
	{
		return null;
	}

	[Token(Token = "0x6000723")]
	[Address(RVA = "0x4BA4560", Offset = "0x4BA4560", VA = "0x4BA4560")]
	public int FindPanelIndex(string displayName)
	{
		return default(int);
	}

	[Token(Token = "0x6000724")]
	[Address(RVA = "0x4BA4630", Offset = "0x4BA4630", VA = "0x4BA4630")]
	public void RemovePanel(string displayName)
	{
	}

	[Token(Token = "0x6000725")]
	[Address(RVA = "0x4BA44F0", Offset = "0x4BA44F0", VA = "0x4BA44F0")]
	public void RemovePanel(DebugUI.Panel panel)
	{
	}

	[Token(Token = "0x6000726")]
	[Address(RVA = "0x4BA4870", Offset = "0x4BA4870", VA = "0x4BA4870")]
	public DebugUI.Widget[] GetItems(DebugUI.Flags flags)
	{
		return null;
	}

	[Token(Token = "0x6000727")]
	[Address(RVA = "0x4BA4BB0", Offset = "0x4BA4BB0", VA = "0x4BA4BB0")]
	internal DebugUI.Widget[] GetItemsFromContainer(DebugUI.Flags flags, DebugUI.IContainer container)
	{
		return null;
	}

	[Token(Token = "0x6000728")]
	[Address(RVA = "0x4BA5160", Offset = "0x4BA5160", VA = "0x4BA5160")]
	public DebugUI.Widget GetItem(string queryPath)
	{
		return null;
	}

	[Token(Token = "0x6000729")]
	[Address(RVA = "0x4BA52E0", Offset = "0x4BA52E0", VA = "0x4BA52E0")]
	private DebugUI.Widget GetItem(string queryPath, DebugUI.IContainer container)
	{
		return null;
	}
}
