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

[Token(Token = "0x20007C0")]
internal class CharacterEditorSkinsPanel : HeadedPanel
{
	[Token(Token = "0x20007C1")]
	[CompilerGenerated]
	private sealed class _003CApplySkinPreviewAfterGlobalSetChange_003Ed__27 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002700")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002701")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002702")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CharacterEditorSkinsPanel _003C_003E4__this;

		[Token(Token = "0x4002703")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private DummyHuman _003CdummyHuman_003E5__2;

		[Token(Token = "0x4002704")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private bool _003CoriginalGlobalEnabled_003E5__3;

		[Token(Token = "0x4002705")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x31")]
		private bool _003CoriginalSetEnabled_003E5__4;

		[Token(Token = "0x17000D0A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004AD8")]
			[Address(RVA = "0x5BD8170", Offset = "0x5BD7170", VA = "0x5BD8170", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D0B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004ADA")]
			[Address(RVA = "0x5BD81C0", Offset = "0x5BD71C0", VA = "0x5BD81C0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004AD5")]
		[Address(RVA = "0x5BD7210", Offset = "0x5BD6210", VA = "0x5BD7210")]
		[DebuggerHidden]
		public _003CApplySkinPreviewAfterGlobalSetChange_003Ed__27(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004AD6")]
		[Address(RVA = "0x5BD7D30", Offset = "0x5BD6D30", VA = "0x5BD7D30", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004AD7")]
		[Address(RVA = "0x5BD7D40", Offset = "0x5BD6D40", VA = "0x5BD7D40", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004AD9")]
		[Address(RVA = "0x5BD8180", Offset = "0x5BD7180", VA = "0x5BD8180", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20007C2")]
	[CompilerGenerated]
	private sealed class _003CApplySkinPreviewAfterInitialSetup_003Ed__30 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002706")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002707")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002708")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CharacterEditorSkinsPanel _003C_003E4__this;

		[Token(Token = "0x4002709")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private bool _003CoriginalGlobalEnabled_003E5__2;

		[Token(Token = "0x400270A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
		private bool _003CoriginalSetEnabled_003E5__3;

		[Token(Token = "0x17000D0C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004ADE")]
			[Address(RVA = "0x5BD8500", Offset = "0x5BD7500", VA = "0x5BD8500", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D0D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004AE0")]
			[Address(RVA = "0x5BD8550", Offset = "0x5BD7550", VA = "0x5BD8550", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004ADB")]
		[Address(RVA = "0x5BD78F0", Offset = "0x5BD68F0", VA = "0x5BD78F0")]
		[DebuggerHidden]
		public _003CApplySkinPreviewAfterInitialSetup_003Ed__30(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004ADC")]
		[Address(RVA = "0x5BD81D0", Offset = "0x5BD71D0", VA = "0x5BD81D0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004ADD")]
		[Address(RVA = "0x5BD81E0", Offset = "0x5BD71E0", VA = "0x5BD81E0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004ADF")]
		[Address(RVA = "0x5BD8510", Offset = "0x5BD7510", VA = "0x5BD8510", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20007C3")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinAfterReset_003Ed__29 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400270B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400270C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400270D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DummyHuman dummyHuman;

		[Token(Token = "0x400270E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CharacterEditorSkinsPanel _003C_003E4__this;

		[Token(Token = "0x400270F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool originalGlobalEnabled;

		[Token(Token = "0x4002710")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x31")]
		public bool originalSetEnabled;

		[Token(Token = "0x17000D0E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004AE4")]
			[Address(RVA = "0x5BD87C0", Offset = "0x5BD77C0", VA = "0x5BD87C0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D0F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004AE6")]
			[Address(RVA = "0x5BD8810", Offset = "0x5BD7810", VA = "0x5BD8810", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004AE1")]
		[Address(RVA = "0x5BD78D0", Offset = "0x5BD68D0", VA = "0x5BD78D0")]
		[DebuggerHidden]
		public _003CLoadSkinAfterReset_003Ed__29(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004AE2")]
		[Address(RVA = "0x5BD8560", Offset = "0x5BD7560", VA = "0x5BD8560", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004AE3")]
		[Address(RVA = "0x5BD8570", Offset = "0x5BD7570", VA = "0x5BD8570", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004AE5")]
		[Address(RVA = "0x5BD87D0", Offset = "0x5BD77D0", VA = "0x5BD87D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20007C4")]
	[CompilerGenerated]
	private sealed class _003CRestoreOriginalSkinSettings_003Ed__31 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002711")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002712")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002713")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool originalGlobalEnabled;

		[Token(Token = "0x4002714")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
		public bool originalSetEnabled;

		[Token(Token = "0x17000D10")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004AEA")]
			[Address(RVA = "0x5BD8930", Offset = "0x5BD7930", VA = "0x5BD8930", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D11")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004AEC")]
			[Address(RVA = "0x5BD8980", Offset = "0x5BD7980", VA = "0x5BD8980", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004AE7")]
		[Address(RVA = "0x5BD7910", Offset = "0x5BD6910", VA = "0x5BD7910")]
		[DebuggerHidden]
		public _003CRestoreOriginalSkinSettings_003Ed__31(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004AE8")]
		[Address(RVA = "0x5BD8820", Offset = "0x5BD7820", VA = "0x5BD8820", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004AE9")]
		[Address(RVA = "0x5BD8830", Offset = "0x5BD7830", VA = "0x5BD8830", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004AEB")]
		[Address(RVA = "0x5BD8940", Offset = "0x5BD7940", VA = "0x5BD8940", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40026F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private CharacterEditorMenu _menu;

	[Token(Token = "0x40026F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private BoolSetting _globalSkinPreview;

	[Token(Token = "0x40026FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private BoolSetting _customSkinPreview;

	[Token(Token = "0x40026FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static bool _persistentGlobalSkinPreview;

	[Token(Token = "0x40026FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
	private static bool _persistentCustomSkinPreview;

	[Token(Token = "0x40026FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2")]
	private static bool _hasInitializedPersistentStates;

	[Token(Token = "0x40026FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private bool _isRebuildingPanel;

	[Token(Token = "0x40026FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private IntSetting _globalSetDropdownSetting;

	[Token(Token = "0x17000D04")]
	protected override string Title
	{
		[Token(Token = "0x6004ABC")]
		[Address(RVA = "0x5BD5C20", Offset = "0x5BD4C20", VA = "0x5BD5C20", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D05")]
	protected override float Width
	{
		[Token(Token = "0x6004ABD")]
		[Address(RVA = "0x5BD5CC0", Offset = "0x5BD4CC0", VA = "0x5BD5CC0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D06")]
	protected override float Height
	{
		[Token(Token = "0x6004ABE")]
		[Address(RVA = "0x5BD5CD0", Offset = "0x5BD4CD0", VA = "0x5BD5CD0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D07")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004ABF")]
		[Address(RVA = "0x5BD5CE0", Offset = "0x5BD4CE0", VA = "0x5BD5CE0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D08")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004AC0")]
		[Address(RVA = "0x5BD5CF0", Offset = "0x5BD4CF0", VA = "0x5BD5CF0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D09")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004AC1")]
		[Address(RVA = "0x5BD5D00", Offset = "0x5BD4D00", VA = "0x5BD5D00", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004AC2")]
	[Address(RVA = "0x5BD5D10", Offset = "0x5BD4D10", VA = "0x5BD5D10")]
	public static bool GetPersistentGlobalPreview()
	{
		return default(bool);
	}

	[Token(Token = "0x6004AC3")]
	[Address(RVA = "0x5BD5D50", Offset = "0x5BD4D50", VA = "0x5BD5D50")]
	public static bool GetPersistentCustomPreview()
	{
		return default(bool);
	}

	[Token(Token = "0x6004AC4")]
	[Address(RVA = "0x5BCFBA0", Offset = "0x5BCEBA0", VA = "0x5BCFBA0")]
	public static void ResetSkinPreviewToggles()
	{
	}

	[Token(Token = "0x6004AC5")]
	[Address(RVA = "0x5BD5D90", Offset = "0x5BD4D90", VA = "0x5BD5D90", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004AC6")]
	[Address(RVA = "0x5BD6760", Offset = "0x5BD5760", VA = "0x5BD6760")]
	private string[] GetFilteredGlobalSetNames()
	{
		return null;
	}

	[Token(Token = "0x6004AC7")]
	[Address(RVA = "0x5BD6970", Offset = "0x5BD5970", VA = "0x5BD6970")]
	private int GetFilteredGlobalSetIndex()
	{
		return default(int);
	}

	[Token(Token = "0x6004AC8")]
	[Address(RVA = "0x5BD6CD0", Offset = "0x5BD5CD0", VA = "0x5BD6CD0")]
	private void OnGlobalSkinSetSelected(int filteredIndex)
	{
	}

	[Token(Token = "0x6004AC9")]
	[Address(RVA = "0x5BD71A0", Offset = "0x5BD61A0", VA = "0x5BD71A0")]
	[IteratorStateMachine(typeof(_003CApplySkinPreviewAfterGlobalSetChange_003Ed__27))]
	private IEnumerator ApplySkinPreviewAfterGlobalSetChange()
	{
		return null;
	}

	[Token(Token = "0x6004ACA")]
	[Address(RVA = "0x5BD7230", Offset = "0x5BD6230", VA = "0x5BD7230")]
	private void OnSkinPreviewToggle()
	{
	}

	[Token(Token = "0x6004ACB")]
	[Address(RVA = "0x5BD77E0", Offset = "0x5BD67E0", VA = "0x5BD77E0")]
	[IteratorStateMachine(typeof(_003CLoadSkinAfterReset_003Ed__29))]
	private IEnumerator LoadSkinAfterReset(DummyHuman dummyHuman, bool originalGlobalEnabled, bool originalSetEnabled)
	{
		return null;
	}

	[Token(Token = "0x6004ACC")]
	[Address(RVA = "0x5BD6C60", Offset = "0x5BD5C60", VA = "0x5BD6C60")]
	[IteratorStateMachine(typeof(_003CApplySkinPreviewAfterInitialSetup_003Ed__30))]
	private IEnumerator ApplySkinPreviewAfterInitialSetup()
	{
		return null;
	}

	[Token(Token = "0x6004ACD")]
	[Address(RVA = "0x5BD7870", Offset = "0x5BD6870", VA = "0x5BD7870")]
	[IteratorStateMachine(typeof(_003CRestoreOriginalSkinSettings_003Ed__31))]
	private IEnumerator RestoreOriginalSkinSettings(bool originalGlobalEnabled, bool originalSetEnabled)
	{
		return null;
	}

	[Token(Token = "0x6004ACE")]
	[Address(RVA = "0x5BD7930", Offset = "0x5BD6930", VA = "0x5BD7930")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004ACF")]
	[Address(RVA = "0x5BD7C40", Offset = "0x5BD6C40", VA = "0x5BD7C40")]
	public CharacterEditorSkinsPanel()
	{
	}
}
