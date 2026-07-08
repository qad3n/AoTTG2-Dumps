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
	[Address(RVA = "0x48E9EF0", Offset = "0x48E9EF0", VA = "0x48E9EF0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000E5A")]
	[Address(RVA = "0x48EA0B0", Offset = "0x48EA0B0", VA = "0x48EA0B0")]
	private void Update()
	{
	}

	[Token(Token = "0x6000E5B")]
	[Address(RVA = "0x48EA940", Offset = "0x48EA940", VA = "0x48EA940")]
	internal void RequestHierarchyReset()
	{
	}

	[Token(Token = "0x6000E5C")]
	[Address(RVA = "0x48EA1F0", Offset = "0x48EA1F0", VA = "0x48EA1F0")]
	private void ResetAllHierarchy()
	{
	}

	[Token(Token = "0x6000E5D")]
	[Address(RVA = "0x48EA950", Offset = "0x48EA950", VA = "0x48EA950")]
	private void Rebuild()
	{
	}

	[Token(Token = "0x6000E5E")]
	[Address(RVA = "0x48EB470", Offset = "0x48EB470", VA = "0x48EB470")]
	private void Traverse(DebugUI.IContainer container, Transform parentTransform, DebugUIHandlerWidget parentUIHandler, ref DebugUIHandlerWidget selectedHandler)
	{
	}

	[Token(Token = "0x6000E5F")]
	[Address(RVA = "0x48EBBF0", Offset = "0x48EBBF0", VA = "0x48EBBF0")]
	private DebugUIHandlerWidget GetWidgetFromPath(string queryPath)
	{
		return null;
	}

	[Token(Token = "0x6000E60")]
	[Address(RVA = "0x48EB9C0", Offset = "0x48EB9C0", VA = "0x48EB9C0")]
	private void ActivatePanel(int index, [Optional] DebugUIHandlerWidget selectedWidget)
	{
	}

	[Token(Token = "0x6000E61")]
	[Address(RVA = "0x48EBD30", Offset = "0x48EBD30", VA = "0x48EBD30")]
	internal void ChangeSelection(DebugUIHandlerWidget widget, bool fromNext)
	{
	}

	[Token(Token = "0x6000E62")]
	[Address(RVA = "0x48EC070", Offset = "0x48EC070", VA = "0x48EC070")]
	internal void SelectPreviousItem()
	{
	}

	[Token(Token = "0x6000E63")]
	[Address(RVA = "0x48EC130", Offset = "0x48EC130", VA = "0x48EC130")]
	internal void SelectNextPanel()
	{
	}

	[Token(Token = "0x6000E64")]
	[Address(RVA = "0x48EC190", Offset = "0x48EC190", VA = "0x48EC190")]
	internal void SelectPreviousPanel()
	{
	}

	[Token(Token = "0x6000E65")]
	[Address(RVA = "0x48EBFB0", Offset = "0x48EBFB0", VA = "0x48EBFB0")]
	internal void SelectNextItem()
	{
	}

	[Token(Token = "0x6000E66")]
	[Address(RVA = "0x48EC1F0", Offset = "0x48EC1F0", VA = "0x48EC1F0")]
	private void ChangeSelectionValue(float multiplier)
	{
	}

	[Token(Token = "0x6000E67")]
	[Address(RVA = "0x48EC2F0", Offset = "0x48EC2F0", VA = "0x48EC2F0")]
	private void ActivateSelection()
	{
	}

	[Token(Token = "0x6000E68")]
	[Address(RVA = "0x48EA570", Offset = "0x48EA570", VA = "0x48EA570")]
	private void HandleInput()
	{
	}

	[Token(Token = "0x6000E69")]
	[Address(RVA = "0x48EBED0", Offset = "0x48EBED0", VA = "0x48EBED0")]
	internal void SetScrollTarget(DebugUIHandlerWidget widget)
	{
	}

	[Token(Token = "0x6000E6A")]
	[Address(RVA = "0x48EC370", Offset = "0x48EC370", VA = "0x48EC370")]
	public DebugUIHandlerCanvas()
	{
	}
}
