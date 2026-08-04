// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Search;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000A7")]
public sealed class AottgSearchPaletteControl : MonoBehaviour
{
	[Token(Token = "0x400034E")]
	private const int VisibleRows = 8;

	[Token(Token = "0x400034F")]
	private const float PointerUnlockDistance = 2f;

	[Token(Token = "0x4000350")]
	private const float PointerUnlockDistanceSqr = 4f;

	[Token(Token = "0x4000351")]
	[FieldOffset(Offset = "0x20")]
	private TMP_InputField _input;

	[Token(Token = "0x4000352")]
	[FieldOffset(Offset = "0x28")]
	private Button _submit;

	[Token(Token = "0x4000353")]
	[FieldOffset(Offset = "0x30")]
	private List<GisketchSearchEntry> _results;

	[Token(Token = "0x4000354")]
	[FieldOffset(Offset = "0x38")]
	private List<GisketchDropdownItemFeedback> _feedback;

	[Token(Token = "0x4000355")]
	[FieldOffset(Offset = "0x40")]
	private GameObject _popoverContent;

	[Token(Token = "0x4000356")]
	[FieldOffset(Offset = "0x48")]
	private bool _hasAnimatedResults;

	[Token(Token = "0x4000357")]
	[FieldOffset(Offset = "0x49")]
	private bool _pointerSelectionLocked;

	[Token(Token = "0x4000358")]
	[FieldOffset(Offset = "0x4C")]
	private Vector2 _pointerLockPosition;

	[Token(Token = "0x4000359")]
	[FieldOffset(Offset = "0x54")]
	private int _selectedIndex;

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x3A8DBD0", Offset = "0x3A8DBD0", VA = "0x3A8DBD0")]
	public void Setup(TMP_InputField input, Button submit)
	{
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x3A8DDF0", Offset = "0x3A8DDF0", VA = "0x3A8DDF0")]
	private void Start()
	{
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x3A8DE00", Offset = "0x3A8DE00", VA = "0x3A8DE00")]
	private void FocusInput()
	{
	}

	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x3A8DFC0", Offset = "0x3A8DFC0", VA = "0x3A8DFC0")]
	private void Update()
	{
	}

	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x3A8E220", Offset = "0x3A8E220", VA = "0x3A8E220")]
	internal void OnInputChanged()
	{
	}

	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x3A8E250", Offset = "0x3A8E250", VA = "0x3A8E250")]
	private void Refresh()
	{
	}

	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x3A8F2A0", Offset = "0x3A8F2A0", VA = "0x3A8F2A0")]
	private void ActivateSelected()
	{
	}

	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x3A8E6D0", Offset = "0x3A8E6D0", VA = "0x3A8E6D0")]
	private GisketchNodeDefinition ResultsNode(string activeScreenId)
	{
		return null;
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x3A8F410", Offset = "0x3A8F410", VA = "0x3A8F410")]
	private GisketchNodeDefinition ResultNode(int index, string activeScreenId)
	{
		return null;
	}

	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x3A8E940", Offset = "0x3A8E940", VA = "0x3A8E940")]
	private void WireResults(GameObject content, GisketchUIRoot root)
	{
	}

	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x3A8E1B0", Offset = "0x3A8E1B0", VA = "0x3A8E1B0")]
	internal void SelectFromNavigation(int index)
	{
	}

	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x3A8FEA0", Offset = "0x3A8FEA0", VA = "0x3A8FEA0")]
	internal void SelectFromPointer(int index)
	{
	}

	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x3A8FF50", Offset = "0x3A8FF50", VA = "0x3A8FF50")]
	internal void SelectFromPointer(int index, Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x3A8FFF0", Offset = "0x3A8FFF0", VA = "0x3A8FFF0")]
	internal bool CanUsePointerSelection(Vector2 pointerPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x3A8E240", Offset = "0x3A8E240", VA = "0x3A8E240")]
	internal void LockPointerSelection(Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x3A8F730", Offset = "0x3A8F730", VA = "0x3A8F730")]
	private static Color ThemeColor(GisketchUIRoot root, string token, Color fallback)
	{
		return default(Color);
	}

	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x3A8F7D0", Offset = "0x3A8F7D0", VA = "0x3A8F7D0")]
	private static Color WithAlpha(Color color, float alpha)
	{
		return default(Color);
	}

	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x3A8E690", Offset = "0x3A8E690", VA = "0x3A8E690")]
	private int VisibleResultCount()
	{
		return default(int);
	}

	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x3A8FCE0", Offset = "0x3A8FCE0", VA = "0x3A8FCE0")]
	private void RefreshSelection()
	{
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x3A8FDD0", Offset = "0x3A8FDD0", VA = "0x3A8FDD0")]
	private void RevealSelectedResult()
	{
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x3A8F360", Offset = "0x3A8F360", VA = "0x3A8F360")]
	private void Activate(GisketchSearchEntry result, GisketchUIRoot root)
	{
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x3A8E4D0", Offset = "0x3A8E4D0", VA = "0x3A8E4D0")]
	private void CloseResults(GisketchUIRoot root, bool restoreFocus = true)
	{
	}

	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x3A8E5A0", Offset = "0x3A8E5A0", VA = "0x3A8E5A0")]
	private static List<GisketchSearchEntry> Entries(GisketchUIRoot root)
	{
		return null;
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x3A90250", Offset = "0x3A90250", VA = "0x3A90250")]
	public AottgSearchPaletteControl()
	{
	}
}
