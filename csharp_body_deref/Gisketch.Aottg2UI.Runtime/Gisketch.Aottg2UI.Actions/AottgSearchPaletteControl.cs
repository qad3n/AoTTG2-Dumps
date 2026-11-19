// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20000CD")]
public sealed class AottgSearchPaletteControl : MonoBehaviour
{
	[Token(Token = "0x20000D0")]
	[CompilerGenerated]
	private sealed class _003CScopedScreens_003Ed__39 : IEnumerable<string>, IEnumerable, IEnumerator<string>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000438")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000439")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private string _003C_003E2__current;

		[Token(Token = "0x400043A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400043B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AottgSearchPaletteControl _003C_003E4__this;

		[Token(Token = "0x400043C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private IEnumerator<string> _003C_003E7__wrap1;

		[Token(Token = "0x170000A5")]
		private string System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EString_003E_002ECurrent
		{
			[Token(Token = "0x600067C")]
			[Address(RVA = "0x529B3D0", Offset = "0x529A3D0", VA = "0x529B3D0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000A6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600067E")]
			[Address(RVA = "0x529B420", Offset = "0x529A420", VA = "0x529B420", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000678")]
		[Address(RVA = "0x529AC50", Offset = "0x5299C50", VA = "0x529AC50")]
		[DebuggerHidden]
		public _003CScopedScreens_003Ed__39(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000679")]
		[Address(RVA = "0x529AE00", Offset = "0x5299E00", VA = "0x529AE00", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600067A")]
		[Address(RVA = "0x529AEB0", Offset = "0x5299EB0", VA = "0x529AEB0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600067B")]
		[Address(RVA = "0x529B330", Offset = "0x529A330", VA = "0x529B330")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x600067D")]
		[Address(RVA = "0x529B3E0", Offset = "0x529A3E0", VA = "0x529B3E0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600067F")]
		[Address(RVA = "0x529B430", Offset = "0x529A430", VA = "0x529B430", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<string> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EString_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000680")]
		[Address(RVA = "0x529B4D0", Offset = "0x529A4D0", VA = "0x529B4D0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000424")]
	private const int VisibleRows = 8;

	[Token(Token = "0x4000425")]
	private const float PointerUnlockDistance = 2f;

	[Token(Token = "0x4000426")]
	private const float PointerUnlockDistanceSqr = 4f;

	[Token(Token = "0x4000427")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private TMP_InputField _input;

	[Token(Token = "0x4000428")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Button _submit;

	[Token(Token = "0x4000429")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private List<GisketchSearchEntry> _results;

	[Token(Token = "0x400042A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private List<GisketchDropdownItemFeedback> _feedback;

	[Token(Token = "0x400042B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private GameObject _popoverContent;

	[Token(Token = "0x400042C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string _scopeScreenId;

	[Token(Token = "0x400042D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string[] _extraScopeScreenIds;

	[Token(Token = "0x400042E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private bool _showFullPath;

	[Token(Token = "0x400042F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x59")]
	private bool _hasAnimatedResults;

	[Token(Token = "0x4000430")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5A")]
	private bool _pointerSelectionLocked;

	[Token(Token = "0x4000431")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private Vector2 _pointerLockPosition;

	[Token(Token = "0x4000432")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	private int _selectedIndex;

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x5298660", Offset = "0x5297660", VA = "0x5298660")]
	public void Setup(TMP_InputField input, Button submit, [Optional] string scopeScreenId, [Optional][DefaultParameterValue(false)] bool showFullPath, [Optional] string[] extraScopeScreenIds)
	{
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x52988B0", Offset = "0x52978B0", VA = "0x52988B0")]
	private void Start()
	{
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x52988C0", Offset = "0x52978C0", VA = "0x52988C0")]
	private void FocusInput()
	{
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x5298A80", Offset = "0x5297A80", VA = "0x5298A80")]
	private void Update()
	{
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x5298CE0", Offset = "0x5297CE0", VA = "0x5298CE0")]
	internal void OnInputChanged()
	{
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x5298D20", Offset = "0x5297D20", VA = "0x5298D20")]
	private void Refresh()
	{
	}

	[Token(Token = "0x600065E")]
	[Address(RVA = "0x5299F00", Offset = "0x5298F00", VA = "0x5299F00")]
	private void ActivateSelected()
	{
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x5299250", Offset = "0x5298250", VA = "0x5299250")]
	private GisketchNodeDefinition ResultsNode(string activeScreenId)
	{
		return null;
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x529A070", Offset = "0x5299070", VA = "0x529A070")]
	private GisketchNodeDefinition ResultNode(int index, string activeScreenId)
	{
		return null;
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x52994D0", Offset = "0x52984D0", VA = "0x52994D0")]
	private void WireResults(GameObject content, GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000662")]
	[Address(RVA = "0x5298C70", Offset = "0x5297C70", VA = "0x5298C70")]
	internal void SelectFromNavigation(int index)
	{
	}

	[Token(Token = "0x6000663")]
	[Address(RVA = "0x529A760", Offset = "0x5299760", VA = "0x529A760")]
	internal void SelectFromPointer(int index)
	{
	}

	[Token(Token = "0x6000664")]
	[Address(RVA = "0x529A810", Offset = "0x5299810", VA = "0x529A810")]
	internal void SelectFromPointer(int index, Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x6000665")]
	[Address(RVA = "0x529A8B0", Offset = "0x52998B0", VA = "0x529A8B0")]
	internal bool CanUsePointerSelection(Vector2 pointerPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x6000666")]
	[Address(RVA = "0x5298D10", Offset = "0x5297D10", VA = "0x5298D10")]
	internal void LockPointerSelection(Vector2 pointerPosition)
	{
	}

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x529A410", Offset = "0x5299410", VA = "0x529A410")]
	private static Color ThemeColor(GisketchUIRoot root, string token, Color fallback)
	{
		return default(Color);
	}

	[Token(Token = "0x6000668")]
	[Address(RVA = "0x529A4B0", Offset = "0x52994B0", VA = "0x529A4B0")]
	private static Color WithAlpha(Color color, float alpha)
	{
		return default(Color);
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x5299210", Offset = "0x5298210", VA = "0x5299210")]
	private int VisibleResultCount()
	{
		return default(int);
	}

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x529A5B0", Offset = "0x52995B0", VA = "0x529A5B0")]
	private void RefreshSelection()
	{
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x529A690", Offset = "0x5299690", VA = "0x529A690")]
	private void RevealSelectedResult()
	{
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x5299FC0", Offset = "0x5298FC0", VA = "0x5299FC0")]
	private void Activate(GisketchSearchEntry result, GisketchUIRoot root)
	{
	}

	[Token(Token = "0x600066D")]
	[Address(RVA = "0x5298FA0", Offset = "0x5297FA0", VA = "0x5298FA0")]
	private void CloseResults(GisketchUIRoot root, bool restoreFocus = true)
	{
	}

	[Token(Token = "0x600066E")]
	[Address(RVA = "0x529A3C0", Offset = "0x52993C0", VA = "0x529A3C0")]
	private string TitleFor(GisketchSearchEntry result, string activeScreenId)
	{
		return null;
	}

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x5299070", Offset = "0x5298070", VA = "0x5299070")]
	private List<GisketchSearchEntry> Entries(GisketchUIRoot root)
	{
		return null;
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x529ABE0", Offset = "0x5299BE0", VA = "0x529ABE0")]
	[IteratorStateMachine(typeof(_003CScopedScreens_003Ed__39))]
	private IEnumerable<string> ScopedScreens()
	{
		return null;
	}

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x529AC80", Offset = "0x5299C80", VA = "0x529AC80")]
	public AottgSearchPaletteControl()
	{
	}
}
