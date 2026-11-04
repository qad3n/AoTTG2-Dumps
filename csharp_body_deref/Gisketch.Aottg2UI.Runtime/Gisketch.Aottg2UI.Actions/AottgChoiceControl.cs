// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.AottgChoiceControl
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceControl.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Localization;
using Gisketch.Aottg2UI.Overlays;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000BE")]
public sealed class AottgChoiceControl : MonoBehaviour
{
	[Token(Token = "0x40003DF")]
	private const float PointerUnlockDistanceSqr = 4f;

	[Token(Token = "0x40003E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string _id;

	[Token(Token = "0x40003E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private AottgChoiceOptions _options;

	[Token(Token = "0x40003E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x40003E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private GameObject _opener;

	[Token(Token = "0x40003E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private GameObject _arrow;

	[Token(Token = "0x40003E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private GisketchNodeDefinition _node;

	[Token(Token = "0x40003E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private IGisketchActionHandler _actions;

	[Token(Token = "0x40003E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private int _index;

	[Token(Token = "0x40003E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private int _selectedIndex;

	[Token(Token = "0x40003E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private int _maxVisibleItems;

	[Token(Token = "0x40003EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	private int _openVersion;

	[Token(Token = "0x40003EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private readonly List<GisketchDropdownItemFeedback> _feedback;

	[Token(Token = "0x40003EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private bool _pointerSelectionLocked;

	[Token(Token = "0x40003ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	private Vector2 _pointerLockPosition;

	[Token(Token = "0x1700009F")]
	public GisketchOverlayManager OverlayManager
	{
		[Token(Token = "0x60005CF")]
		[Address(RVA = "0x58A5D0", Offset = "0x588BD0", VA = "0x18058A5D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60005D0")]
		[Address(RVA = "0x58A960", Offset = "0x588F60", VA = "0x18058A960")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A0")]
	private GisketchOverlayManager Overlays
	{
		[Token(Token = "0x60005D1")]
		[Address(RVA = "0x18F6E40", Offset = "0x18F5440", VA = "0x1818F6E40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A1")]
	public string Value
	{
		[Token(Token = "0x60005D5")]
		[Address(RVA = "0x18F6EA0", Offset = "0x18F54A0", VA = "0x1818F6EA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A2")]
	internal bool CanStep
	{
		[Token(Token = "0x60005D7")]
		[Address(RVA = "0x18F6DD0", Offset = "0x18F53D0", VA = "0x1818F6DD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60005D2")]
	[Address(RVA = "0x18F6680", Offset = "0x18F4C80", VA = "0x1818F6680")]
	public void Setup(GisketchNodeDefinition node, string value, string[] options, TextMeshProUGUI label, int maxVisibleItems, GameObject arrow, IGisketchActionHandler actions, [Optional] IGisketchLocalizer localizer)
	{
	}

	[Token(Token = "0x60005D3")]
	[Address(RVA = "0x18F5720", Offset = "0x18F3D20", VA = "0x1818F5720")]
	public void Previous(GisketchActionInputSource source = GisketchActionInputSource.Unknown)
	{
	}

	[Token(Token = "0x60005D4")]
	[Address(RVA = "0x18F4A60", Offset = "0x18F3060", VA = "0x1818F4A60")]
	public void Next(GisketchActionInputSource source = GisketchActionInputSource.Unknown)
	{
	}

	[Token(Token = "0x60005D6")]
	[Address(RVA = "0x18F6600", Offset = "0x18F4C00", VA = "0x1818F6600")]
	public void SetValueWithoutNotify(string value)
	{
	}

	[Token(Token = "0x60005D8")]
	[Address(RVA = "0x18F4BE0", Offset = "0x18F31E0", VA = "0x1818F4BE0")]
	public void Open()
	{
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x18F4410", Offset = "0x18F2A10", VA = "0x1818F4410")]
	public void Cancel()
	{
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x18F5450", Offset = "0x18F3A50", VA = "0x1818F5450")]
	private GisketchNodeDefinition PopoverNode()
	{
		return null;
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x18F4FF0", Offset = "0x18F35F0", VA = "0x1818F4FF0")]
	private GisketchNodeDefinition OptionNode(int index)
	{
		return null;
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x18F5B20", Offset = "0x18F4120", VA = "0x1818F5B20")]
	private GisketchNodeDefinition ScrollNode(GisketchNodeDefinition[] children)
	{
		return null;
	}

	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x18F67A0", Offset = "0x18F4DA0", VA = "0x1818F67A0")]
	private void WireOptions(GameObject content, GisketchOverlayManager overlays)
	{
	}

	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x18F5F60", Offset = "0x18F4560", VA = "0x1818F5F60")]
	internal void SelectFromNavigation(int index, GameObject option)
	{
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x18F5FE0", Offset = "0x18F45E0", VA = "0x1818F5FE0")]
	internal void SelectFromPointer(int index, Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x18F43C0", Offset = "0x18F29C0", VA = "0x1818F43C0")]
	internal bool CanUsePointerSelection(Vector2 pointerPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x18F4A50", Offset = "0x18F3050", VA = "0x1818F4A50")]
	private void LockPointerSelection(Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x18F6440", Offset = "0x18F4A40", VA = "0x1818F6440")]
	private void SetSelectedIndex(int index)
	{
	}

	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x18F5D90", Offset = "0x18F4390", VA = "0x1818F5D90")]
	internal void SelectFromClick(int index, GisketchOverlayManager overlays)
	{
	}

	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x18F4790", Offset = "0x18F2D90", VA = "0x1818F4790")]
	private void FocusSelectedOption(GameObject content)
	{
	}

	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x18F6050", Offset = "0x18F4650", VA = "0x1818F6050")]
	private void Select(int index, GisketchOverlayManager overlays)
	{
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x18F6380", Offset = "0x18F4980", VA = "0x1818F6380")]
	private bool SetIndex(int index, GisketchActionInputSource source = GisketchActionInputSource.Unknown)
	{
		return default(bool);
	}

	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x18F49C0", Offset = "0x18F2FC0", VA = "0x1818F49C0")]
	private int IndexOf(string value)
	{
		return default(int);
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x18F5770", Offset = "0x18F3D70", VA = "0x1818F5770")]
	private void RefreshLabel()
	{
	}

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x18F5870", Offset = "0x18F3E70", VA = "0x1818F5870")]
	internal void RenderOption(int index, GameObject root, TextMeshProUGUI label, bool closedValue)
	{
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x18F4AB0", Offset = "0x18F30B0", VA = "0x1818F4AB0")]
	private void NotifyChanged(GisketchActionInputSource source)
	{
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x18F61E0", Offset = "0x18F47E0", VA = "0x1818F61E0")]
	private void SetArrow(string icon)
	{
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x18F4F90", Offset = "0x18F3590", VA = "0x1818F4F90")]
	private string OptionId(int index)
	{
		return null;
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x18F4550", Offset = "0x18F2B50", VA = "0x1818F4550")]
	private static Transform FindDeep(Transform root, string name)
	{
		return null;
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x18F6D50", Offset = "0x18F5350", VA = "0x1818F6D50")]
	public AottgChoiceControl()
	{
	}
}
