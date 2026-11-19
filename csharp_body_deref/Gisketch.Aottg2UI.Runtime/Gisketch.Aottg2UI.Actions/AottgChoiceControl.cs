// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.AottgChoiceControl
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20000C4")]
public sealed class AottgChoiceControl : MonoBehaviour
{
	[Token(Token = "0x4000406")]
	private const float PointerUnlockDistanceSqr = 4f;

	[Token(Token = "0x4000407")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string _id;

	[Token(Token = "0x4000408")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private AottgChoiceOptions _options;

	[Token(Token = "0x4000409")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x400040A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private GameObject _opener;

	[Token(Token = "0x400040B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private GameObject _arrow;

	[Token(Token = "0x400040C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private GisketchNodeDefinition _node;

	[Token(Token = "0x400040D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private IGisketchActionHandler _actions;

	[Token(Token = "0x400040E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private int _index;

	[Token(Token = "0x400040F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private int _selectedIndex;

	[Token(Token = "0x4000410")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private int _maxVisibleItems;

	[Token(Token = "0x4000411")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	private int _openVersion;

	[Token(Token = "0x4000412")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private readonly List<GisketchDropdownItemFeedback> _feedback;

	[Token(Token = "0x4000413")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private bool _pointerSelectionLocked;

	[Token(Token = "0x4000414")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	private Vector2 _pointerLockPosition;

	[Token(Token = "0x1700009F")]
	public GisketchOverlayManager OverlayManager
	{
		[Token(Token = "0x600061C")]
		[Address(RVA = "0x5294A10", Offset = "0x5293A10", VA = "0x5294A10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600061D")]
		[Address(RVA = "0x5294A20", Offset = "0x5293A20", VA = "0x5294A20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A0")]
	private GisketchOverlayManager Overlays
	{
		[Token(Token = "0x600061E")]
		[Address(RVA = "0x5294A30", Offset = "0x5293A30", VA = "0x5294A30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A1")]
	public string Value
	{
		[Token(Token = "0x6000622")]
		[Address(RVA = "0x52951C0", Offset = "0x52941C0", VA = "0x52951C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A2")]
	internal bool CanStep
	{
		[Token(Token = "0x6000624")]
		[Address(RVA = "0x52949B0", Offset = "0x52939B0", VA = "0x52949B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x5294A90", Offset = "0x5293A90", VA = "0x5294A90")]
	public void Setup(GisketchNodeDefinition node, string value, string[] options, TextMeshProUGUI label, int maxVisibleItems, GameObject arrow, IGisketchActionHandler actions, [Optional] IGisketchLocalizer localizer)
	{
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x528FD90", Offset = "0x528ED90", VA = "0x528FD90")]
	public void Previous(GisketchActionInputSource source = GisketchActionInputSource.Unknown)
	{
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x528FE60", Offset = "0x528EE60", VA = "0x528FE60")]
	public void Next(GisketchActionInputSource source = GisketchActionInputSource.Unknown)
	{
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x52952C0", Offset = "0x52942C0", VA = "0x52952C0")]
	public void SetValueWithoutNotify(string value)
	{
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x528F570", Offset = "0x528E570", VA = "0x528F570")]
	public void Open()
	{
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x52961F0", Offset = "0x52951F0", VA = "0x52961F0")]
	public void Cancel()
	{
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x5295570", Offset = "0x5294570", VA = "0x5295570")]
	private GisketchNodeDefinition PopoverNode()
	{
		return null;
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x5296370", Offset = "0x5295370", VA = "0x5296370")]
	private GisketchNodeDefinition OptionNode(int index)
	{
		return null;
	}

	[Token(Token = "0x6000629")]
	[Address(RVA = "0x52967C0", Offset = "0x52957C0", VA = "0x52967C0")]
	private GisketchNodeDefinition ScrollNode(GisketchNodeDefinition[] children)
	{
		return null;
	}

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x5295870", Offset = "0x5294870", VA = "0x5295870")]
	private void WireOptions(GameObject content, GisketchOverlayManager overlays)
	{
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x5297350", Offset = "0x5296350", VA = "0x5297350")]
	internal void SelectFromNavigation(int index, GameObject option)
	{
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x5297980", Offset = "0x5296980", VA = "0x5297980")]
	internal void SelectFromPointer(int index, Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x5297A70", Offset = "0x5296A70", VA = "0x5297A70")]
	internal bool CanUsePointerSelection(Vector2 pointerPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x5295860", Offset = "0x5294860", VA = "0x5295860")]
	private void LockPointerSelection(Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x5297440", Offset = "0x5296440", VA = "0x5297440")]
	private void SetSelectedIndex(int index)
	{
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x5297AC0", Offset = "0x5296AC0", VA = "0x5297AC0")]
	internal void SelectFromClick(int index, GisketchOverlayManager overlays)
	{
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x5295F50", Offset = "0x5294F50", VA = "0x5295F50")]
	private void FocusSelectedOption(GameObject content)
	{
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x5297B20", Offset = "0x5296B20", VA = "0x5297B20")]
	private void Select(int index, GisketchOverlayManager overlays)
	{
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x5295130", Offset = "0x5294130", VA = "0x5295130")]
	private bool SetIndex(int index, GisketchActionInputSource source = GisketchActionInputSource.Unknown)
	{
		return default(bool);
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x5294E70", Offset = "0x5293E70", VA = "0x5294E70")]
	private int IndexOf(string value)
	{
		return default(int);
	}

	[Token(Token = "0x6000635")]
	[Address(RVA = "0x5294F40", Offset = "0x5293F40", VA = "0x5294F40")]
	private void RefreshLabel()
	{
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x5297030", Offset = "0x5296030", VA = "0x5297030")]
	internal void RenderOption(int index, GameObject root, TextMeshProUGUI label, bool closedValue)
	{
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x5297CA0", Offset = "0x5296CA0", VA = "0x5297CA0")]
	private void NotifyChanged(GisketchActionInputSource source)
	{
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x52953E0", Offset = "0x52943E0", VA = "0x52953E0")]
	private void SetArrow(string icon)
	{
	}

	[Token(Token = "0x6000639")]
	[Address(RVA = "0x5296A10", Offset = "0x5295A10", VA = "0x5296A10")]
	private string OptionId(int index)
	{
		return null;
	}

	[Token(Token = "0x600063A")]
	[Address(RVA = "0x5296C70", Offset = "0x5295C70", VA = "0x5296C70")]
	private static Transform FindDeep(Transform root, string name)
	{
		return null;
	}

	[Token(Token = "0x600063B")]
	[Address(RVA = "0x5297EC0", Offset = "0x5296EC0", VA = "0x5297EC0")]
	public AottgChoiceControl()
	{
	}
}
