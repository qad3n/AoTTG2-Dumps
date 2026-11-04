// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerCanvas
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x20002D3")]
public class DebugUIHandlerCanvas : MonoBehaviour
{
	[Token(Token = "0x4000D2A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int m_DebugTreeState;

	[Token(Token = "0x4000D2B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Dictionary<Type, Transform> m_PrefabsMap;

	[Token(Token = "0x4000D2C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public Transform panelPrefab;

	[Token(Token = "0x4000D2D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public List<DebugUIPrefabBundle> prefabs;

	[Token(Token = "0x4000D2E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private List<DebugUIHandlerPanel> m_UIPanels;

	[Token(Token = "0x4000D2F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int m_SelectedPanel;

	[Token(Token = "0x4000D30")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private DebugUIHandlerWidget m_SelectedWidget;

	[Token(Token = "0x4000D31")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string m_CurrentQueryPath;

	[Token(Token = "0x60013F1")]
	[Address(RVA = "0x2BA97B0", Offset = "0x2BA7DB0", VA = "0x182BA97B0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60013F2")]
	[Address(RVA = "0x2BAACA0", Offset = "0x2BA92A0", VA = "0x182BAACA0")]
	private void Update()
	{
	}

	[Token(Token = "0x60013F3")]
	[Address(RVA = "0x1532BE0", Offset = "0x15311E0", VA = "0x181532BE0")]
	internal void RequestHierarchyReset()
	{
	}

	[Token(Token = "0x60013F4")]
	[Address(RVA = "0x2BAA0F0", Offset = "0x2BA86F0", VA = "0x182BAA0F0")]
	private void ResetAllHierarchy()
	{
	}

	[Token(Token = "0x60013F5")]
	[Address(RVA = "0x2BA9900", Offset = "0x2BA7F00", VA = "0x182BA9900")]
	private void Rebuild()
	{
	}

	[Token(Token = "0x60013F6")]
	[Address(RVA = "0x2BAA690", Offset = "0x2BA8C90", VA = "0x182BAA690")]
	private void Traverse(DebugUI.IContainer container, Transform parentTransform, DebugUIHandlerWidget parentUIHandler, ref DebugUIHandlerWidget selectedHandler)
	{
	}

	[Token(Token = "0x60013F7")]
	[Address(RVA = "0x2BA92E0", Offset = "0x2BA78E0", VA = "0x182BA92E0")]
	private DebugUIHandlerWidget GetWidgetFromPath(string queryPath)
	{
		return null;
	}

	[Token(Token = "0x60013F8")]
	[Address(RVA = "0x2BA8CD0", Offset = "0x2BA72D0", VA = "0x182BA8CD0")]
	private void ActivatePanel(int index, [Optional] DebugUIHandlerWidget selectedWidget)
	{
	}

	[Token(Token = "0x60013F9")]
	[Address(RVA = "0x2BA90A0", Offset = "0x2BA76A0", VA = "0x182BA90A0")]
	internal void ChangeSelection(DebugUIHandlerWidget widget, bool fromNext)
	{
	}

	[Token(Token = "0x60013FA")]
	[Address(RVA = "0x2BAA470", Offset = "0x2BA8A70", VA = "0x182BAA470")]
	internal void SelectPreviousItem()
	{
	}

	[Token(Token = "0x60013FB")]
	[Address(RVA = "0x2BAA400", Offset = "0x2BA8A00", VA = "0x182BAA400")]
	internal void SelectNextPanel()
	{
	}

	[Token(Token = "0x60013FC")]
	[Address(RVA = "0x2BAA530", Offset = "0x2BA8B30", VA = "0x182BAA530")]
	internal void SelectPreviousPanel()
	{
	}

	[Token(Token = "0x60013FD")]
	[Address(RVA = "0x2BAA340", Offset = "0x2BA8940", VA = "0x182BAA340")]
	internal void SelectNextItem()
	{
	}

	[Token(Token = "0x60013FE")]
	[Address(RVA = "0x2BA8FA0", Offset = "0x2BA75A0", VA = "0x182BA8FA0")]
	private void ChangeSelectionValue(float multiplier)
	{
	}

	[Token(Token = "0x60013FF")]
	[Address(RVA = "0x2BA8F20", Offset = "0x2BA7520", VA = "0x182BA8F20")]
	private void ActivateSelection()
	{
	}

	[Token(Token = "0x6001400")]
	[Address(RVA = "0x2BA9420", Offset = "0x2BA7A20", VA = "0x182BA9420")]
	private void HandleInput()
	{
	}

	[Token(Token = "0x6001401")]
	[Address(RVA = "0x2BAA5B0", Offset = "0x2BA8BB0", VA = "0x182BAA5B0")]
	internal void SetScrollTarget(DebugUIHandlerWidget widget)
	{
	}

	[Token(Token = "0x6001402")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public DebugUIHandlerCanvas()
	{
	}
}
