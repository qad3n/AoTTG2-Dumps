// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorSkinsPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorSkinsPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Characters;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x20005A3")]
internal class CharacterEditorSkinsPanel : HeadedPanel
{
	[Token(Token = "0x20005A4")]
	[CompilerGenerated]
	private sealed class _003CApplySkinPreviewAfterGlobalSetChange_003Ed__27 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001BC3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001BC4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001BC5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CharacterEditorSkinsPanel _003C_003E4__this;

		[Token(Token = "0x4001BC6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private DummyHuman _003CdummyHuman_003E5__2;

		[Token(Token = "0x4001BC7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private bool _003CoriginalGlobalEnabled_003E5__3;

		[Token(Token = "0x4001BC8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x31")]
		private bool _003CoriginalSetEnabled_003E5__4;

		[Token(Token = "0x17000B2D")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003A7B")]
			[Address(RVA = "0x4264710", Offset = "0x4264710", VA = "0x4264710", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B2E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003A7D")]
			[Address(RVA = "0x4264760", Offset = "0x4264760", VA = "0x4264760", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003A78")]
		[Address(RVA = "0x4263600", Offset = "0x4263600", VA = "0x4263600")]
		[DebuggerHidden]
		public _003CApplySkinPreviewAfterGlobalSetChange_003Ed__27(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003A79")]
		[Address(RVA = "0x42642E0", Offset = "0x42642E0", VA = "0x42642E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003A7A")]
		[Address(RVA = "0x42642F0", Offset = "0x42642F0", VA = "0x42642F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003A7C")]
		[Address(RVA = "0x4264720", Offset = "0x4264720", VA = "0x4264720", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20005A5")]
	[CompilerGenerated]
	private sealed class _003CApplySkinPreviewAfterInitialSetup_003Ed__30 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001BC9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001BCA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001BCB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CharacterEditorSkinsPanel _003C_003E4__this;

		[Token(Token = "0x4001BCC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private bool _003CoriginalGlobalEnabled_003E5__2;

		[Token(Token = "0x4001BCD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
		private bool _003CoriginalSetEnabled_003E5__3;

		[Token(Token = "0x17000B2F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003A81")]
			[Address(RVA = "0x4264AA0", Offset = "0x4264AA0", VA = "0x4264AA0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B30")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003A83")]
			[Address(RVA = "0x4264AF0", Offset = "0x4264AF0", VA = "0x4264AF0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003A7E")]
		[Address(RVA = "0x4263EA0", Offset = "0x4263EA0", VA = "0x4263EA0")]
		[DebuggerHidden]
		public _003CApplySkinPreviewAfterInitialSetup_003Ed__30(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003A7F")]
		[Address(RVA = "0x4264770", Offset = "0x4264770", VA = "0x4264770", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003A80")]
		[Address(RVA = "0x4264780", Offset = "0x4264780", VA = "0x4264780", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003A82")]
		[Address(RVA = "0x4264AB0", Offset = "0x4264AB0", VA = "0x4264AB0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20005A6")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinAfterReset_003Ed__29 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001BCE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001BCF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001BD0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DummyHuman dummyHuman;

		[Token(Token = "0x4001BD1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CharacterEditorSkinsPanel _003C_003E4__this;

		[Token(Token = "0x4001BD2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool originalGlobalEnabled;

		[Token(Token = "0x4001BD3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x31")]
		public bool originalSetEnabled;

		[Token(Token = "0x17000B31")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003A87")]
			[Address(RVA = "0x4264D60", Offset = "0x4264D60", VA = "0x4264D60", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B32")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003A89")]
			[Address(RVA = "0x4264DB0", Offset = "0x4264DB0", VA = "0x4264DB0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003A84")]
		[Address(RVA = "0x4263E80", Offset = "0x4263E80", VA = "0x4263E80")]
		[DebuggerHidden]
		public _003CLoadSkinAfterReset_003Ed__29(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003A85")]
		[Address(RVA = "0x4264B00", Offset = "0x4264B00", VA = "0x4264B00", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003A86")]
		[Address(RVA = "0x4264B10", Offset = "0x4264B10", VA = "0x4264B10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003A88")]
		[Address(RVA = "0x4264D70", Offset = "0x4264D70", VA = "0x4264D70", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20005A7")]
	[CompilerGenerated]
	private sealed class _003CRestoreOriginalSkinSettings_003Ed__31 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001BD4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001BD5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001BD6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool originalGlobalEnabled;

		[Token(Token = "0x4001BD7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
		public bool originalSetEnabled;

		[Token(Token = "0x17000B33")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003A8D")]
			[Address(RVA = "0x4264EC0", Offset = "0x4264EC0", VA = "0x4264EC0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B34")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003A8F")]
			[Address(RVA = "0x4264F10", Offset = "0x4264F10", VA = "0x4264F10", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003A8A")]
		[Address(RVA = "0x4263EC0", Offset = "0x4263EC0", VA = "0x4263EC0")]
		[DebuggerHidden]
		public _003CRestoreOriginalSkinSettings_003Ed__31(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003A8B")]
		[Address(RVA = "0x4264DC0", Offset = "0x4264DC0", VA = "0x4264DC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003A8C")]
		[Address(RVA = "0x4264DD0", Offset = "0x4264DD0", VA = "0x4264DD0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003A8E")]
		[Address(RVA = "0x4264ED0", Offset = "0x4264ED0", VA = "0x4264ED0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001BBB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private CharacterEditorMenu _menu;

	[Token(Token = "0x4001BBC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private BoolSetting _globalSkinPreview;

	[Token(Token = "0x4001BBD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private BoolSetting _customSkinPreview;

	[Token(Token = "0x4001BBE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static bool _persistentGlobalSkinPreview;

	[Token(Token = "0x4001BBF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
	private static bool _persistentCustomSkinPreview;

	[Token(Token = "0x4001BC0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2")]
	private static bool _hasInitializedPersistentStates;

	[Token(Token = "0x4001BC1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private bool _isRebuildingPanel;

	[Token(Token = "0x4001BC2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private IntSetting _globalSetDropdownSetting;

	[Token(Token = "0x17000B27")]
	protected override string Title
	{
		[Token(Token = "0x6003A5F")]
		[Address(RVA = "0x42620B0", Offset = "0x42620B0", VA = "0x42620B0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B28")]
	protected override float Width
	{
		[Token(Token = "0x6003A60")]
		[Address(RVA = "0x4262150", Offset = "0x4262150", VA = "0x4262150", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B29")]
	protected override float Height
	{
		[Token(Token = "0x6003A61")]
		[Address(RVA = "0x4262160", Offset = "0x4262160", VA = "0x4262160", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B2A")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003A62")]
		[Address(RVA = "0x4262170", Offset = "0x4262170", VA = "0x4262170", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B2B")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003A63")]
		[Address(RVA = "0x4262180", Offset = "0x4262180", VA = "0x4262180", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B2C")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003A64")]
		[Address(RVA = "0x4262190", Offset = "0x4262190", VA = "0x4262190", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003A65")]
	[Address(RVA = "0x42621A0", Offset = "0x42621A0", VA = "0x42621A0")]
	public static bool GetPersistentGlobalPreview()
	{
		return default(bool);
	}

	[Token(Token = "0x6003A66")]
	[Address(RVA = "0x42621E0", Offset = "0x42621E0", VA = "0x42621E0")]
	public static bool GetPersistentCustomPreview()
	{
		return default(bool);
	}

	[Token(Token = "0x6003A67")]
	[Address(RVA = "0x425D5B0", Offset = "0x425D5B0", VA = "0x425D5B0")]
	public static void ResetSkinPreviewToggles()
	{
	}

	[Token(Token = "0x6003A68")]
	[Address(RVA = "0x4262220", Offset = "0x4262220", VA = "0x4262220", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003A69")]
	[Address(RVA = "0x4262BF0", Offset = "0x4262BF0", VA = "0x4262BF0")]
	private string[] GetFilteredGlobalSetNames()
	{
		return null;
	}

	[Token(Token = "0x6003A6A")]
	[Address(RVA = "0x4262E10", Offset = "0x4262E10", VA = "0x4262E10")]
	private int GetFilteredGlobalSetIndex()
	{
		return default(int);
	}

	[Token(Token = "0x6003A6B")]
	[Address(RVA = "0x42630C0", Offset = "0x42630C0", VA = "0x42630C0")]
	private void OnGlobalSkinSetSelected(int filteredIndex)
	{
	}

	[Token(Token = "0x6003A6C")]
	[Address(RVA = "0x4263590", Offset = "0x4263590", VA = "0x4263590")]
	[IteratorStateMachine(typeof(_003CApplySkinPreviewAfterGlobalSetChange_003Ed__27))]
	private IEnumerator ApplySkinPreviewAfterGlobalSetChange()
	{
		return null;
	}

	[Token(Token = "0x6003A6D")]
	[Address(RVA = "0x4263620", Offset = "0x4263620", VA = "0x4263620")]
	private void OnSkinPreviewToggle()
	{
	}

	[Token(Token = "0x6003A6E")]
	[Address(RVA = "0x4263D70", Offset = "0x4263D70", VA = "0x4263D70")]
	[IteratorStateMachine(typeof(_003CLoadSkinAfterReset_003Ed__29))]
	private IEnumerator LoadSkinAfterReset(DummyHuman dummyHuman, bool originalGlobalEnabled, bool originalSetEnabled)
	{
		return null;
	}

	[Token(Token = "0x6003A6F")]
	[Address(RVA = "0x4263050", Offset = "0x4263050", VA = "0x4263050")]
	[IteratorStateMachine(typeof(_003CApplySkinPreviewAfterInitialSetup_003Ed__30))]
	private IEnumerator ApplySkinPreviewAfterInitialSetup()
	{
		return null;
	}

	[Token(Token = "0x6003A70")]
	[Address(RVA = "0x4263E10", Offset = "0x4263E10", VA = "0x4263E10")]
	[IteratorStateMachine(typeof(_003CRestoreOriginalSkinSettings_003Ed__31))]
	private IEnumerator RestoreOriginalSkinSettings(bool originalGlobalEnabled, bool originalSetEnabled)
	{
		return null;
	}

	[Token(Token = "0x6003A71")]
	[Address(RVA = "0x4263EE0", Offset = "0x4263EE0", VA = "0x4263EE0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003A72")]
	[Address(RVA = "0x42641F0", Offset = "0x42641F0", VA = "0x42641F0")]
	public CharacterEditorSkinsPanel()
	{
	}
}
