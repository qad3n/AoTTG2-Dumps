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

[Token(Token = "0x2000214")]
public class DebugUIHandlerCanvas : MonoBehaviour
{
	[Token(Token = "0x4000858")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int m_DebugTreeState;

	[Token(Token = "0x4000859")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Dictionary<Type, Transform> m_PrefabsMap;

	[Token(Token = "0x400085A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public Transform panelPrefab;

	[Token(Token = "0x400085B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public List<DebugUIPrefabBundle> prefabs;

	[Token(Token = "0x400085C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private List<DebugUIHandlerPanel> m_UIPanels;

	[Token(Token = "0x400085D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int m_SelectedPanel;

	[Token(Token = "0x400085E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private DebugUIHandlerWidget m_SelectedWidget;

	[Token(Token = "0x400085F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string m_CurrentQueryPath;

	[Token(Token = "0x6000E59")]
	[Address(RVA = "0x4C0EF60", Offset = "0x4C0EF60", VA = "0x4C0EF60")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000E5A")]
	[Address(RVA = "0x4C0F120", Offset = "0x4C0F120", VA = "0x4C0F120")]
	private void Update()
	{
	}

	[Token(Token = "0x6000E5B")]
	[Address(RVA = "0x4C0F9B0", Offset = "0x4C0F9B0", VA = "0x4C0F9B0")]
	internal void RequestHierarchyReset()
	{
	}

	[Token(Token = "0x6000E5C")]
	[Address(RVA = "0x4C0F260", Offset = "0x4C0F260", VA = "0x4C0F260")]
	private void ResetAllHierarchy()
	{
	}

	[Token(Token = "0x6000E5D")]
	[Address(RVA = "0x4C0F9C0", Offset = "0x4C0F9C0", VA = "0x4C0F9C0")]
	private void Rebuild()
	{
	}

	[Token(Token = "0x6000E5E")]
	[Address(RVA = "0x4C104E0", Offset = "0x4C104E0", VA = "0x4C104E0")]
	private void Traverse(DebugUI.IContainer container, Transform parentTransform, DebugUIHandlerWidget parentUIHandler, ref DebugUIHandlerWidget selectedHandler)
	{
	}

	[Token(Token = "0x6000E5F")]
	[Address(RVA = "0x4C10C60", Offset = "0x4C10C60", VA = "0x4C10C60")]
	private DebugUIHandlerWidget GetWidgetFromPath(string queryPath)
	{
		return null;
	}

	[Token(Token = "0x6000E60")]
	[Address(RVA = "0x4C10A30", Offset = "0x4C10A30", VA = "0x4C10A30")]
	private void ActivatePanel(int index, [Optional] DebugUIHandlerWidget selectedWidget)
	{
	}

	[Token(Token = "0x6000E61")]
	[Address(RVA = "0x4C10DA0", Offset = "0x4C10DA0", VA = "0x4C10DA0")]
	internal void ChangeSelection(DebugUIHandlerWidget widget, bool fromNext)
	{
	}

	[Token(Token = "0x6000E62")]
	[Address(RVA = "0x4C110E0", Offset = "0x4C110E0", VA = "0x4C110E0")]
	internal void SelectPreviousItem()
	{
	}

	[Token(Token = "0x6000E63")]
	[Address(RVA = "0x4C111A0", Offset = "0x4C111A0", VA = "0x4C111A0")]
	internal void SelectNextPanel()
	{
	}

	[Token(Token = "0x6000E64")]
	[Address(RVA = "0x4C11200", Offset = "0x4C11200", VA = "0x4C11200")]
	internal void SelectPreviousPanel()
	{
	}

	[Token(Token = "0x6000E65")]
	[Address(RVA = "0x4C11020", Offset = "0x4C11020", VA = "0x4C11020")]
	internal void SelectNextItem()
	{
	}

	[Token(Token = "0x6000E66")]
	[Address(RVA = "0x4C11260", Offset = "0x4C11260", VA = "0x4C11260")]
	private void ChangeSelectionValue(float multiplier)
	{
	}

	[Token(Token = "0x6000E67")]
	[Address(RVA = "0x4C11360", Offset = "0x4C11360", VA = "0x4C11360")]
	private void ActivateSelection()
	{
	}

	[Token(Token = "0x6000E68")]
	[Address(RVA = "0x4C0F5E0", Offset = "0x4C0F5E0", VA = "0x4C0F5E0")]
	private void HandleInput()
	{
	}

	[Token(Token = "0x6000E69")]
	[Address(RVA = "0x4C10F40", Offset = "0x4C10F40", VA = "0x4C10F40")]
	internal void SetScrollTarget(DebugUIHandlerWidget widget)
	{
	}

	[Token(Token = "0x6000E6A")]
	[Address(RVA = "0x4C113E0", Offset = "0x4C113E0", VA = "0x4C113E0")]
	public DebugUIHandlerCanvas()
	{
	}
}
