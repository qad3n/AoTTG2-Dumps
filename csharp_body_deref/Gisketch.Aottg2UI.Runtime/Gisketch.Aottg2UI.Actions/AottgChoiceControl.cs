// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.AottgChoiceControl
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Localization;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x200009E")]
public sealed class AottgChoiceControl : MonoBehaviour
{
	[Token(Token = "0x4000331")]
	private const float PointerUnlockDistanceSqr = 4f;

	[Token(Token = "0x4000332")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string _id;

	[Token(Token = "0x4000333")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private AottgChoiceOptions _options;

	[Token(Token = "0x4000334")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x4000335")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private GameObject _opener;

	[Token(Token = "0x4000336")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private GameObject _arrow;

	[Token(Token = "0x4000337")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private GisketchNodeDefinition _node;

	[Token(Token = "0x4000338")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private IGisketchActionHandler _actions;

	[Token(Token = "0x4000339")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private int _index;

	[Token(Token = "0x400033A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private int _selectedIndex;

	[Token(Token = "0x400033B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private int _maxVisibleItems;

	[Token(Token = "0x400033C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	private int _openVersion;

	[Token(Token = "0x400033D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private readonly List<GisketchDropdownItemFeedback> _feedback;

	[Token(Token = "0x400033E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private bool _pointerSelectionLocked;

	[Token(Token = "0x400033F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	private Vector2 _pointerLockPosition;

	[Token(Token = "0x17000072")]
	internal bool CanStep
	{
		[Token(Token = "0x6000496")]
		[Address(RVA = "0x3A8A1C0", Offset = "0x3A8A1C0", VA = "0x3A8A1C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x3A8A220", Offset = "0x3A8A220", VA = "0x3A8A220")]
	public void Setup(GisketchNodeDefinition node, string value, string[] options, TextMeshProUGUI label, int maxVisibleItems, GameObject arrow, IGisketchActionHandler actions, [Optional] IGisketchLocalizer localizer)
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x3A86860", Offset = "0x3A86860", VA = "0x3A86860")]
	public void Previous(GisketchActionInputSource source = GisketchActionInputSource.Unknown)
	{
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x3A86930", Offset = "0x3A86930", VA = "0x3A86930")]
	public void Next(GisketchActionInputSource source = GisketchActionInputSource.Unknown)
	{
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x3A8A950", Offset = "0x3A8A950", VA = "0x3A8A950")]
	public void SetValueWithoutNotify(string value)
	{
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x3A86030", Offset = "0x3A86030", VA = "0x3A86030")]
	public void Open()
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x3A8B850", Offset = "0x3A8B850", VA = "0x3A8B850")]
	public void Cancel()
	{
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x3A8AC00", Offset = "0x3A8AC00", VA = "0x3A8AC00")]
	private GisketchNodeDefinition PopoverNode()
	{
		return null;
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x3A8B9C0", Offset = "0x3A8B9C0", VA = "0x3A8B9C0")]
	private GisketchNodeDefinition OptionNode(int index)
	{
		return null;
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x3A8BE10", Offset = "0x3A8BE10", VA = "0x3A8BE10")]
	private GisketchNodeDefinition ScrollNode(GisketchNodeDefinition[] children)
	{
		return null;
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x3A8AF00", Offset = "0x3A8AF00", VA = "0x3A8AF00")]
	private void WireOptions(GameObject content, GisketchUIRoot root)
	{
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x3A8CA40", Offset = "0x3A8CA40", VA = "0x3A8CA40")]
	internal void SelectFromNavigation(int index, GameObject option)
	{
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x3A8D0B0", Offset = "0x3A8D0B0", VA = "0x3A8D0B0")]
	internal void SelectFromPointer(int index, Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x3A8D1A0", Offset = "0x3A8D1A0", VA = "0x3A8D1A0")]
	internal bool CanUsePointerSelection(Vector2 pointerPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x3A8AEF0", Offset = "0x3A8AEF0", VA = "0x3A8AEF0")]
	private void LockPointerSelection(Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x3A8CB30", Offset = "0x3A8CB30", VA = "0x3A8CB30")]
	private void SetSelectedIndex(int index)
	{
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x3A8D1F0", Offset = "0x3A8D1F0", VA = "0x3A8D1F0")]
	internal void SelectFromClick(int index, GisketchUIRoot root)
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x3A8B5A0", Offset = "0x3A8B5A0", VA = "0x3A8B5A0")]
	private void FocusSelectedOption(GameObject content)
	{
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x3A8D250", Offset = "0x3A8D250", VA = "0x3A8D250")]
	private void Select(int index, GisketchUIRoot root)
	{
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x3A8A8C0", Offset = "0x3A8A8C0", VA = "0x3A8A8C0")]
	private void SetIndex(int index, GisketchActionInputSource source = GisketchActionInputSource.Unknown)
	{
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x3A8A5F0", Offset = "0x3A8A5F0", VA = "0x3A8A5F0")]
	private int IndexOf(string value)
	{
		return default(int);
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x3A8A6C0", Offset = "0x3A8A6C0", VA = "0x3A8A6C0")]
	private void RefreshLabel()
	{
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x3A8C720", Offset = "0x3A8C720", VA = "0x3A8C720")]
	internal void RenderOption(int index, GameObject root, TextMeshProUGUI label, bool closedValue)
	{
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x3A8D3F0", Offset = "0x3A8D3F0", VA = "0x3A8D3F0")]
	private void NotifyChanged(GisketchActionInputSource source)
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x3A8AA70", Offset = "0x3A8AA70", VA = "0x3A8AA70")]
	private void SetArrow(string icon)
	{
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x3A8C060", Offset = "0x3A8C060", VA = "0x3A8C060")]
	private string OptionId(int index)
	{
		return null;
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x3A8C2C0", Offset = "0x3A8C2C0", VA = "0x3A8C2C0")]
	private static Transform FindDeep(Transform root, string name)
	{
		return null;
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x3A8D690", Offset = "0x3A8D690", VA = "0x3A8D690")]
	public AottgChoiceControl()
	{
	}
}
