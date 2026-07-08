using System.Collections.Generic;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Search;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000A4")]
public sealed class AottgSearchPaletteControl : MonoBehaviour
{
	[Token(Token = "0x4000332")]
	private const int VisibleRows = 8;

	[Token(Token = "0x4000333")]
	private const float PointerUnlockDistance = 2f;

	[Token(Token = "0x4000334")]
	private const float PointerUnlockDistanceSqr = 4f;

	[Token(Token = "0x4000335")]
	[FieldOffset(Offset = "0x20")]
	private TMP_InputField _input;

	[Token(Token = "0x4000336")]
	[FieldOffset(Offset = "0x28")]
	private Button _submit;

	[Token(Token = "0x4000337")]
	[FieldOffset(Offset = "0x30")]
	private List<GisketchSearchEntry> _results;

	[Token(Token = "0x4000338")]
	[FieldOffset(Offset = "0x38")]
	private List<GisketchDropdownItemFeedback> _feedback;

	[Token(Token = "0x4000339")]
	[FieldOffset(Offset = "0x40")]
	private GameObject _popoverContent;

	[Token(Token = "0x400033A")]
	[FieldOffset(Offset = "0x48")]
	private bool _hasAnimatedResults;

	[Token(Token = "0x400033B")]
	[FieldOffset(Offset = "0x49")]
	private bool _pointerSelectionLocked;

	[Token(Token = "0x400033C")]
	[FieldOffset(Offset = "0x4C")]
	private Vector2 _pointerLockPosition;

	[Token(Token = "0x400033D")]
	[FieldOffset(Offset = "0x54")]
	private int _selectedIndex;

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x3A21A70", Offset = "0x3A21A70", VA = "0x3A21A70")]
	public void Setup(TMP_InputField input, Button submit)
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x3A21C90", Offset = "0x3A21C90", VA = "0x3A21C90")]
	private void Start()
	{
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x3A21CA0", Offset = "0x3A21CA0", VA = "0x3A21CA0")]
	private void FocusInput()
	{
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x3A21E60", Offset = "0x3A21E60", VA = "0x3A21E60")]
	private void Update()
	{
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x3A220C0", Offset = "0x3A220C0", VA = "0x3A220C0")]
	internal void OnInputChanged()
	{
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x3A220F0", Offset = "0x3A220F0", VA = "0x3A220F0")]
	private void Refresh()
	{
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x3A23150", Offset = "0x3A23150", VA = "0x3A23150")]
	private void ActivateSelected()
	{
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x3A22580", Offset = "0x3A22580", VA = "0x3A22580")]
	private GisketchNodeDefinition ResultsNode(string activeScreenId)
	{
		return null;
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x3A232C0", Offset = "0x3A232C0", VA = "0x3A232C0")]
	private GisketchNodeDefinition ResultNode(int index, string activeScreenId)
	{
		return null;
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x3A227F0", Offset = "0x3A227F0", VA = "0x3A227F0")]
	private void WireResults(GameObject content, GisketchUIRoot root)
	{
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x3A22050", Offset = "0x3A22050", VA = "0x3A22050")]
	internal void SelectFromNavigation(int index)
	{
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x3A23D50", Offset = "0x3A23D50", VA = "0x3A23D50")]
	internal void SelectFromPointer(int index)
	{
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x3A23E00", Offset = "0x3A23E00", VA = "0x3A23E00")]
	internal void SelectFromPointer(int index, Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x3A23EA0", Offset = "0x3A23EA0", VA = "0x3A23EA0")]
	internal bool CanUsePointerSelection(Vector2 pointerPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x3A220E0", Offset = "0x3A220E0", VA = "0x3A220E0")]
	internal void LockPointerSelection(Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x3A235E0", Offset = "0x3A235E0", VA = "0x3A235E0")]
	private static Color ThemeColor(GisketchUIRoot root, string token, Color fallback)
	{
		return default(Color);
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x3A23680", Offset = "0x3A23680", VA = "0x3A23680")]
	private static Color WithAlpha(Color color, float alpha)
	{
		return default(Color);
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x3A22540", Offset = "0x3A22540", VA = "0x3A22540")]
	private int VisibleResultCount()
	{
		return default(int);
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x3A23B90", Offset = "0x3A23B90", VA = "0x3A23B90")]
	private void RefreshSelection()
	{
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x3A23C80", Offset = "0x3A23C80", VA = "0x3A23C80")]
	private void RevealSelectedResult()
	{
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x3A23210", Offset = "0x3A23210", VA = "0x3A23210")]
	private void Activate(GisketchSearchEntry result, GisketchUIRoot root)
	{
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x3A22370", Offset = "0x3A22370", VA = "0x3A22370")]
	private void CloseResults(GisketchUIRoot root, bool restoreFocus = true)
	{
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x3A22440", Offset = "0x3A22440", VA = "0x3A22440")]
	private static List<GisketchSearchEntry> Entries(GisketchUIRoot root)
	{
		return null;
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x3A24100", Offset = "0x3A24100", VA = "0x3A24100")]
	public AottgSearchPaletteControl()
	{
	}
}
