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
	[Address(RVA = "0x65A3DF0", Offset = "0x65A2DF0", VA = "0x65A3DF0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60013F2")]
	[Address(RVA = "0x65A3FB0", Offset = "0x65A2FB0", VA = "0x65A3FB0")]
	private void Update()
	{
	}

	[Token(Token = "0x60013F3")]
	[Address(RVA = "0x65A4980", Offset = "0x65A3980", VA = "0x65A4980")]
	internal void RequestHierarchyReset()
	{
	}

	[Token(Token = "0x60013F4")]
	[Address(RVA = "0x65A40E0", Offset = "0x65A30E0", VA = "0x65A40E0")]
	private void ResetAllHierarchy()
	{
	}

	[Token(Token = "0x60013F5")]
	[Address(RVA = "0x65A4990", Offset = "0x65A3990", VA = "0x65A4990")]
	private void Rebuild()
	{
	}

	[Token(Token = "0x60013F6")]
	[Address(RVA = "0x65A5310", Offset = "0x65A4310", VA = "0x65A5310")]
	private void Traverse(DebugUI.IContainer container, Transform parentTransform, DebugUIHandlerWidget parentUIHandler, ref DebugUIHandlerWidget selectedHandler)
	{
	}

	[Token(Token = "0x60013F7")]
	[Address(RVA = "0x65A5C80", Offset = "0x65A4C80", VA = "0x65A5C80")]
	private DebugUIHandlerWidget GetWidgetFromPath(string queryPath)
	{
		return null;
	}

	[Token(Token = "0x60013F8")]
	[Address(RVA = "0x65A5A20", Offset = "0x65A4A20", VA = "0x65A5A20")]
	private void ActivatePanel(int index, [Optional] DebugUIHandlerWidget selectedWidget)
	{
	}

	[Token(Token = "0x60013F9")]
	[Address(RVA = "0x65A5E10", Offset = "0x65A4E10", VA = "0x65A5E10")]
	internal void ChangeSelection(DebugUIHandlerWidget widget, bool fromNext)
	{
	}

	[Token(Token = "0x60013FA")]
	[Address(RVA = "0x65A6150", Offset = "0x65A5150", VA = "0x65A6150")]
	internal void SelectPreviousItem()
	{
	}

	[Token(Token = "0x60013FB")]
	[Address(RVA = "0x65A6210", Offset = "0x65A5210", VA = "0x65A6210")]
	internal void SelectNextPanel()
	{
	}

	[Token(Token = "0x60013FC")]
	[Address(RVA = "0x65A6270", Offset = "0x65A5270", VA = "0x65A6270")]
	internal void SelectPreviousPanel()
	{
	}

	[Token(Token = "0x60013FD")]
	[Address(RVA = "0x65A6090", Offset = "0x65A5090", VA = "0x65A6090")]
	internal void SelectNextItem()
	{
	}

	[Token(Token = "0x60013FE")]
	[Address(RVA = "0x65A62D0", Offset = "0x65A52D0", VA = "0x65A62D0")]
	private void ChangeSelectionValue(float multiplier)
	{
	}

	[Token(Token = "0x60013FF")]
	[Address(RVA = "0x65A63D0", Offset = "0x65A53D0", VA = "0x65A63D0")]
	private void ActivateSelection()
	{
	}

	[Token(Token = "0x6001400")]
	[Address(RVA = "0x65A4400", Offset = "0x65A3400", VA = "0x65A4400")]
	private void HandleInput()
	{
	}

	[Token(Token = "0x6001401")]
	[Address(RVA = "0x65A5FB0", Offset = "0x65A4FB0", VA = "0x65A5FB0")]
	internal void SetScrollTarget(DebugUIHandlerWidget widget)
	{
	}

	[Token(Token = "0x6001402")]
	[Address(RVA = "0x65A6450", Offset = "0x65A5450", VA = "0x65A6450")]
	public DebugUIHandlerCanvas()
	{
	}
}
