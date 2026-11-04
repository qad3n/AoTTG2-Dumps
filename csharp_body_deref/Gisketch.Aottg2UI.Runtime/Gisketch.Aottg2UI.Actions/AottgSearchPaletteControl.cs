// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Search;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000C7")]
public sealed class AottgSearchPaletteControl : MonoBehaviour
{
	[Token(Token = "0x20000CA")]
	[CompilerGenerated]
	private sealed class _003CScopedScreens_003Ed__39 : IEnumerable<string>, IEnumerable, IEnumerator<string>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000411")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000412")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private string _003C_003E2__current;

		[Token(Token = "0x4000413")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000414")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AottgSearchPaletteControl _003C_003E4__this;

		[Token(Token = "0x4000415")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private IEnumerator<string> _003C_003E7__wrap1;

		[Token(Token = "0x170000A5")]
		private string System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EString_003E_002ECurrent
		{
			[Token(Token = "0x600062F")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000A6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000631")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600062B")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CScopedScreens_003Ed__39(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600062C")]
		[Address(RVA = "0x190A740", Offset = "0x1908D40", VA = "0x18190A740", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600062D")]
		[Address(RVA = "0x190A310", Offset = "0x1908910", VA = "0x18190A310", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600062E")]
		[Address(RVA = "0x190A7D0", Offset = "0x1908DD0", VA = "0x18190A7D0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000630")]
		[Address(RVA = "0x190A700", Offset = "0x1908D00", VA = "0x18190A700", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000632")]
		[Address(RVA = "0x190A660", Offset = "0x1908C60", VA = "0x18190A660", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<string> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EString_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000633")]
		[Address(RVA = "0x190A660", Offset = "0x1908C60", VA = "0x18190A660", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40003FD")]
	private const int VisibleRows = 8;

	[Token(Token = "0x40003FE")]
	private const float PointerUnlockDistance = 2f;

	[Token(Token = "0x40003FF")]
	private const float PointerUnlockDistanceSqr = 4f;

	[Token(Token = "0x4000400")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private TMP_InputField _input;

	[Token(Token = "0x4000401")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Button _submit;

	[Token(Token = "0x4000402")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private List<GisketchSearchEntry> _results;

	[Token(Token = "0x4000403")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private List<GisketchDropdownItemFeedback> _feedback;

	[Token(Token = "0x4000404")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private GameObject _popoverContent;

	[Token(Token = "0x4000405")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string _scopeScreenId;

	[Token(Token = "0x4000406")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string[] _extraScopeScreenIds;

	[Token(Token = "0x4000407")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private bool _showFullPath;

	[Token(Token = "0x4000408")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x59")]
	private bool _hasAnimatedResults;

	[Token(Token = "0x4000409")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5A")]
	private bool _pointerSelectionLocked;

	[Token(Token = "0x400040A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private Vector2 _pointerLockPosition;

	[Token(Token = "0x400040B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	private int _selectedIndex;

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x18F8FE0", Offset = "0x18F75E0", VA = "0x1818F8FE0")]
	public void Setup(TMP_InputField input, Button submit, [Optional] string scopeScreenId, [Optional][DefaultParameterValue(false)] bool showFullPath, [Optional] string[] extraScopeScreenIds)
	{
	}

	[Token(Token = "0x600060C")]
	[Address(RVA = "0x18F9200", Offset = "0x18F7800", VA = "0x1818F9200")]
	private void Start()
	{
	}

	[Token(Token = "0x600060D")]
	[Address(RVA = "0x18F7F00", Offset = "0x18F6500", VA = "0x1818F7F00")]
	private void FocusInput()
	{
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x18F9310", Offset = "0x18F7910", VA = "0x1818F9310")]
	private void Update()
	{
	}

	[Token(Token = "0x600060F")]
	[Address(RVA = "0x18F8040", Offset = "0x18F6640", VA = "0x1818F8040")]
	internal void OnInputChanged()
	{
	}

	[Token(Token = "0x6000610")]
	[Address(RVA = "0x18F8190", Offset = "0x18F6790", VA = "0x1818F8190")]
	private void Refresh()
	{
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x18F79E0", Offset = "0x18F5FE0", VA = "0x1818F79E0")]
	private void ActivateSelected()
	{
	}

	[Token(Token = "0x6000612")]
	[Address(RVA = "0x18F88F0", Offset = "0x18F6EF0", VA = "0x1818F88F0")]
	private GisketchNodeDefinition ResultsNode(string activeScreenId)
	{
		return null;
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x18F85A0", Offset = "0x18F6BA0", VA = "0x1818F85A0")]
	private GisketchNodeDefinition ResultNode(int index, string activeScreenId)
	{
		return null;
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x18F94D0", Offset = "0x18F7AD0", VA = "0x1818F94D0")]
	private void WireResults(GameObject content, GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x18F8CE0", Offset = "0x18F72E0", VA = "0x1818F8CE0")]
	internal void SelectFromNavigation(int index)
	{
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x18F8F20", Offset = "0x18F7520", VA = "0x1818F8F20")]
	internal void SelectFromPointer(int index)
	{
	}

	[Token(Token = "0x6000617")]
	[Address(RVA = "0x18F8F90", Offset = "0x18F7590", VA = "0x1818F8F90")]
	internal void SelectFromPointer(int index, Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x18F7C00", Offset = "0x18F6200", VA = "0x1818F7C00")]
	internal bool CanUsePointerSelection(Vector2 pointerPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x18F8030", Offset = "0x18F6630", VA = "0x1818F8030")]
	internal void LockPointerSelection(Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x18F9210", Offset = "0x18F7810", VA = "0x1818F9210")]
	private static Color ThemeColor(GisketchUIRoot root, string token, Color fallback)
	{
		return default(Color);
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x18F9EE0", Offset = "0x18F84E0", VA = "0x1818F9EE0")]
	private static Color WithAlpha(Color color, float alpha)
	{
		return default(Color);
	}

	[Token(Token = "0x600061C")]
	[Address(RVA = "0x18F9480", Offset = "0x18F7A80", VA = "0x1818F9480")]
	private int VisibleResultCount()
	{
		return default(int);
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x18F8090", Offset = "0x18F6690", VA = "0x1818F8090")]
	private void RefreshSelection()
	{
	}

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x18F8B60", Offset = "0x18F7160", VA = "0x1818F8B60")]
	private void RevealSelectedResult()
	{
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x18F7B40", Offset = "0x18F6140", VA = "0x1818F7B40")]
	private void Activate(GisketchSearchEntry result, GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x18F7C50", Offset = "0x18F6250", VA = "0x1818F7C50")]
	private void CloseResults(GisketchUIRoot root, bool restoreFocus = true)
	{
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x18F92D0", Offset = "0x18F78D0", VA = "0x1818F92D0")]
	private string TitleFor(GisketchSearchEntry result, string activeScreenId)
	{
		return null;
	}

	[Token(Token = "0x6000622")]
	[Address(RVA = "0x18F7D20", Offset = "0x18F6320", VA = "0x1818F7D20")]
	private List<GisketchSearchEntry> Entries(GisketchUIRoot root)
	{
		return null;
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x18F8C60", Offset = "0x18F7260", VA = "0x1818F8C60")]
	[IteratorStateMachine(typeof(_003CScopedScreens_003Ed__39))]
	private IEnumerable<string> ScopedScreens()
	{
		return null;
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x18F9F20", Offset = "0x18F8520", VA = "0x1818F9F20")]
	public AottgSearchPaletteControl()
	{
	}
}
