using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Localization;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x200009B")]
public sealed class AottgChoiceControl : MonoBehaviour
{
	[Token(Token = "0x4000315")]
	private const float PointerUnlockDistanceSqr = 4f;

	[Token(Token = "0x4000316")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string _id;

	[Token(Token = "0x4000317")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private AottgChoiceOptions _options;

	[Token(Token = "0x4000318")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x4000319")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private GameObject _opener;

	[Token(Token = "0x400031A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private GameObject _arrow;

	[Token(Token = "0x400031B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private GisketchNodeDefinition _node;

	[Token(Token = "0x400031C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private IGisketchActionHandler _actions;

	[Token(Token = "0x400031D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private int _index;

	[Token(Token = "0x400031E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private int _selectedIndex;

	[Token(Token = "0x400031F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private int _maxVisibleItems;

	[Token(Token = "0x4000320")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	private int _openVersion;

	[Token(Token = "0x4000321")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private readonly List<GisketchDropdownItemFeedback> _feedback;

	[Token(Token = "0x4000322")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private bool _pointerSelectionLocked;

	[Token(Token = "0x4000323")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	private Vector2 _pointerLockPosition;

	[Token(Token = "0x17000070")]
	internal bool CanStep
	{
		[Token(Token = "0x6000475")]
		[Address(RVA = "0x3A1DF70", Offset = "0x3A1DF70", VA = "0x3A1DF70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x3A1E060", Offset = "0x3A1E060", VA = "0x3A1E060")]
	public void Setup(GisketchNodeDefinition node, string value, string[] options, TextMeshProUGUI label, int maxVisibleItems, GameObject arrow, IGisketchActionHandler actions, [Optional] IGisketchLocalizer localizer)
	{
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x3A19D50", Offset = "0x3A19D50", VA = "0x3A19D50")]
	public void Previous(GisketchActionInputSource source = GisketchActionInputSource.Unknown)
	{
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x3A19E20", Offset = "0x3A19E20", VA = "0x3A19E20")]
	public void Next(GisketchActionInputSource source = GisketchActionInputSource.Unknown)
	{
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x3A1E790", Offset = "0x3A1E790", VA = "0x3A1E790")]
	public void SetValueWithoutNotify(string value)
	{
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x3A198F0", Offset = "0x3A198F0", VA = "0x3A198F0")]
	public void Open()
	{
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x3A1F690", Offset = "0x3A1F690", VA = "0x3A1F690")]
	public void Cancel()
	{
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x3A1EA40", Offset = "0x3A1EA40", VA = "0x3A1EA40")]
	private GisketchNodeDefinition PopoverNode()
	{
		return null;
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x3A1F800", Offset = "0x3A1F800", VA = "0x3A1F800")]
	private GisketchNodeDefinition OptionNode(int index)
	{
		return null;
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x3A1FC50", Offset = "0x3A1FC50", VA = "0x3A1FC50")]
	private GisketchNodeDefinition ScrollNode(GisketchNodeDefinition[] children)
	{
		return null;
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x3A1ED40", Offset = "0x3A1ED40", VA = "0x3A1ED40")]
	private void WireOptions(GameObject content, GisketchUIRoot root)
	{
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x3A20880", Offset = "0x3A20880", VA = "0x3A20880")]
	internal void SelectFromNavigation(int index, GameObject option)
	{
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x3A20EF0", Offset = "0x3A20EF0", VA = "0x3A20EF0")]
	internal void SelectFromPointer(int index, Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x3A20FE0", Offset = "0x3A20FE0", VA = "0x3A20FE0")]
	internal bool CanUsePointerSelection(Vector2 pointerPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x3A1ED30", Offset = "0x3A1ED30", VA = "0x3A1ED30")]
	private void LockPointerSelection(Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x3A20970", Offset = "0x3A20970", VA = "0x3A20970")]
	private void SetSelectedIndex(int index)
	{
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x3A21030", Offset = "0x3A21030", VA = "0x3A21030")]
	internal void SelectFromClick(int index, GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x3A1F3E0", Offset = "0x3A1F3E0", VA = "0x3A1F3E0")]
	private void FocusSelectedOption(GameObject content)
	{
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x3A21090", Offset = "0x3A21090", VA = "0x3A21090")]
	private void Select(int index, GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x3A1E700", Offset = "0x3A1E700", VA = "0x3A1E700")]
	private void SetIndex(int index, GisketchActionInputSource source = GisketchActionInputSource.Unknown)
	{
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x3A1E430", Offset = "0x3A1E430", VA = "0x3A1E430")]
	private int IndexOf(string value)
	{
		return default(int);
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x3A1E500", Offset = "0x3A1E500", VA = "0x3A1E500")]
	private void RefreshLabel()
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x3A20560", Offset = "0x3A20560", VA = "0x3A20560")]
	internal void RenderOption(int index, GameObject root, TextMeshProUGUI label, bool closedValue)
	{
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x3A21230", Offset = "0x3A21230", VA = "0x3A21230")]
	private void NotifyChanged(GisketchActionInputSource source)
	{
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x3A1E8B0", Offset = "0x3A1E8B0", VA = "0x3A1E8B0")]
	private void SetArrow(string icon)
	{
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x3A1FEA0", Offset = "0x3A1FEA0", VA = "0x3A1FEA0")]
	private string OptionId(int index)
	{
		return null;
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x3A20100", Offset = "0x3A20100", VA = "0x3A20100")]
	private static Transform FindDeep(Transform root, string name)
	{
		return null;
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x3A21530", Offset = "0x3A21530", VA = "0x3A21530")]
	public AottgChoiceControl()
	{
	}
}
