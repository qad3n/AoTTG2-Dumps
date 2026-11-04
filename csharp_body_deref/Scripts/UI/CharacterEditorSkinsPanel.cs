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

[Token(Token = "0x2000716")]
internal class CharacterEditorSkinsPanel : HeadedPanel
{
	[Token(Token = "0x2000717")]
	[CompilerGenerated]
	private sealed class _003CApplySkinPreviewAfterGlobalSetChange_003Ed__27 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002380")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002381")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002382")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CharacterEditorSkinsPanel _003C_003E4__this;

		[Token(Token = "0x4002383")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private DummyHuman _003CdummyHuman_003E5__2;

		[Token(Token = "0x4002384")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private bool _003CoriginalGlobalEnabled_003E5__3;

		[Token(Token = "0x4002385")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x31")]
		private bool _003CoriginalSetEnabled_003E5__4;

		[Token(Token = "0x17000C85")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60045AC")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C86")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60045AE")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60045A9")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CApplySkinPreviewAfterGlobalSetChange_003Ed__27(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60045AA")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60045AB")]
		[Address(RVA = "0x21E5910", Offset = "0x21E3F10", VA = "0x1821E5910", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60045AD")]
		[Address(RVA = "0x21E5D80", Offset = "0x21E4380", VA = "0x1821E5D80", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000718")]
	[CompilerGenerated]
	private sealed class _003CApplySkinPreviewAfterInitialSetup_003Ed__30 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002386")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002387")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002388")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CharacterEditorSkinsPanel _003C_003E4__this;

		[Token(Token = "0x4002389")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private bool _003CoriginalGlobalEnabled_003E5__2;

		[Token(Token = "0x400238A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
		private bool _003CoriginalSetEnabled_003E5__3;

		[Token(Token = "0x17000C87")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60045B2")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C88")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60045B4")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60045AF")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CApplySkinPreviewAfterInitialSetup_003Ed__30(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60045B0")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60045B1")]
		[Address(RVA = "0x21E5DC0", Offset = "0x21E43C0", VA = "0x1821E5DC0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60045B3")]
		[Address(RVA = "0x21E6160", Offset = "0x21E4760", VA = "0x1821E6160", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000719")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinAfterReset_003Ed__29 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400238B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400238C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400238D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DummyHuman dummyHuman;

		[Token(Token = "0x400238E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CharacterEditorSkinsPanel _003C_003E4__this;

		[Token(Token = "0x400238F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool originalGlobalEnabled;

		[Token(Token = "0x4002390")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x31")]
		public bool originalSetEnabled;

		[Token(Token = "0x17000C89")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60045B8")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C8A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60045BA")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60045B5")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CLoadSkinAfterReset_003Ed__29(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60045B6")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60045B7")]
		[Address(RVA = "0x21E77B0", Offset = "0x21E5DB0", VA = "0x1821E77B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60045B9")]
		[Address(RVA = "0x21E79E0", Offset = "0x21E5FE0", VA = "0x1821E79E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200071A")]
	[CompilerGenerated]
	private sealed class _003CRestoreOriginalSkinSettings_003Ed__31 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002391")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002392")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002393")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool originalGlobalEnabled;

		[Token(Token = "0x4002394")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
		public bool originalSetEnabled;

		[Token(Token = "0x17000C8B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60045BE")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C8C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60045C0")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60045BB")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CRestoreOriginalSkinSettings_003Ed__31(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60045BC")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60045BD")]
		[Address(RVA = "0x21E7C20", Offset = "0x21E6220", VA = "0x1821E7C20", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60045BF")]
		[Address(RVA = "0x21E7D10", Offset = "0x21E6310", VA = "0x1821E7D10", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002378")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private CharacterEditorMenu _menu;

	[Token(Token = "0x4002379")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private BoolSetting _globalSkinPreview;

	[Token(Token = "0x400237A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private BoolSetting _customSkinPreview;

	[Token(Token = "0x400237B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static bool _persistentGlobalSkinPreview;

	[Token(Token = "0x400237C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
	private static bool _persistentCustomSkinPreview;

	[Token(Token = "0x400237D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2")]
	private static bool _hasInitializedPersistentStates;

	[Token(Token = "0x400237E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private bool _isRebuildingPanel;

	[Token(Token = "0x400237F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private IntSetting _globalSetDropdownSetting;

	[Token(Token = "0x17000C7F")]
	protected override string Title
	{
		[Token(Token = "0x6004590")]
		[Address(RVA = "0x21DC6D0", Offset = "0x21DACD0", VA = "0x1821DC6D0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C80")]
	protected override float Width
	{
		[Token(Token = "0x6004591")]
		[Address(RVA = "0x21D2010", Offset = "0x21D0610", VA = "0x1821D2010", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C81")]
	protected override float Height
	{
		[Token(Token = "0x6004592")]
		[Address(RVA = "0x21DC6C0", Offset = "0x21DACC0", VA = "0x1821DC6C0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C82")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004593")]
		[Address(RVA = "0x2168BC0", Offset = "0x21671C0", VA = "0x182168BC0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C83")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004594")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C84")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004595")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004596")]
	[Address(RVA = "0x21DAC10", Offset = "0x21D9210", VA = "0x1821DAC10")]
	public static bool GetPersistentGlobalPreview()
	{
		return default(bool);
	}

	[Token(Token = "0x6004597")]
	[Address(RVA = "0x21DABD0", Offset = "0x21D91D0", VA = "0x1821DABD0")]
	public static bool GetPersistentCustomPreview()
	{
		return default(bool);
	}

	[Token(Token = "0x6004598")]
	[Address(RVA = "0x21D1B70", Offset = "0x21D0170", VA = "0x1821D1B70")]
	public static void ResetSkinPreviewToggles()
	{
	}

	[Token(Token = "0x6004599")]
	[Address(RVA = "0x21DB910", Offset = "0x21D9F10", VA = "0x1821DB910", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600459A")]
	[Address(RVA = "0x21DAA70", Offset = "0x21D9070", VA = "0x1821DAA70")]
	private string[] GetFilteredGlobalSetNames()
	{
		return null;
	}

	[Token(Token = "0x600459B")]
	[Address(RVA = "0x21DA8D0", Offset = "0x21D8ED0", VA = "0x1821DA8D0")]
	private int GetFilteredGlobalSetIndex()
	{
		return default(int);
	}

	[Token(Token = "0x600459C")]
	[Address(RVA = "0x21DAFB0", Offset = "0x21D95B0", VA = "0x1821DAFB0")]
	private void OnGlobalSkinSetSelected(int filteredIndex)
	{
	}

	[Token(Token = "0x600459D")]
	[Address(RVA = "0x21DA7F0", Offset = "0x21D8DF0", VA = "0x1821DA7F0")]
	[IteratorStateMachine(typeof(_003CApplySkinPreviewAfterGlobalSetChange_003Ed__27))]
	private IEnumerator ApplySkinPreviewAfterGlobalSetChange()
	{
		return null;
	}

	[Token(Token = "0x600459E")]
	[Address(RVA = "0x21DB380", Offset = "0x21D9980", VA = "0x1821DB380")]
	private void OnSkinPreviewToggle()
	{
	}

	[Token(Token = "0x600459F")]
	[Address(RVA = "0x21DAC50", Offset = "0x21D9250", VA = "0x1821DAC50")]
	[IteratorStateMachine(typeof(_003CLoadSkinAfterReset_003Ed__29))]
	private IEnumerator LoadSkinAfterReset(DummyHuman dummyHuman, bool originalGlobalEnabled, bool originalSetEnabled)
	{
		return null;
	}

	[Token(Token = "0x60045A0")]
	[Address(RVA = "0x21DA860", Offset = "0x21D8E60", VA = "0x1821DA860")]
	[IteratorStateMachine(typeof(_003CApplySkinPreviewAfterInitialSetup_003Ed__30))]
	private IEnumerator ApplySkinPreviewAfterInitialSetup()
	{
		return null;
	}

	[Token(Token = "0x60045A1")]
	[Address(RVA = "0x21DB8A0", Offset = "0x21D9EA0", VA = "0x1821DB8A0")]
	[IteratorStateMachine(typeof(_003CRestoreOriginalSkinSettings_003Ed__31))]
	private IEnumerator RestoreOriginalSkinSettings(bool originalGlobalEnabled, bool originalSetEnabled)
	{
		return null;
	}

	[Token(Token = "0x60045A2")]
	[Address(RVA = "0x21DACE0", Offset = "0x21D92E0", VA = "0x1821DACE0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60045A3")]
	[Address(RVA = "0x21D6E20", Offset = "0x21D5420", VA = "0x1821D6E20")]
	public CharacterEditorSkinsPanel()
	{
	}
}
