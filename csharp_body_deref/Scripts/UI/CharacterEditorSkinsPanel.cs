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

[Token(Token = "0x200055E")]
internal class CharacterEditorSkinsPanel : HeadedPanel
{
	[Token(Token = "0x200055F")]
	[CompilerGenerated]
	private sealed class _003CApplySkinPreviewAfterGlobalSetChange_003Ed__27 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001AB0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001AB1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001AB2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CharacterEditorSkinsPanel _003C_003E4__this;

		[Token(Token = "0x4001AB3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private DummyHuman _003CdummyHuman_003E5__2;

		[Token(Token = "0x4001AB4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private bool _003CoriginalGlobalEnabled_003E5__3;

		[Token(Token = "0x4001AB5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x31")]
		private bool _003CoriginalSetEnabled_003E5__4;

		[Token(Token = "0x17000AC3")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600386C")]
			[Address(RVA = "0x3F56890", Offset = "0x3F56890", VA = "0x3F56890", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000AC4")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600386E")]
			[Address(RVA = "0x3F568E0", Offset = "0x3F568E0", VA = "0x3F568E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003869")]
		[Address(RVA = "0x3F55780", Offset = "0x3F55780", VA = "0x3F55780")]
		[DebuggerHidden]
		public _003CApplySkinPreviewAfterGlobalSetChange_003Ed__27(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600386A")]
		[Address(RVA = "0x3F56460", Offset = "0x3F56460", VA = "0x3F56460", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600386B")]
		[Address(RVA = "0x3F56470", Offset = "0x3F56470", VA = "0x3F56470", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600386D")]
		[Address(RVA = "0x3F568A0", Offset = "0x3F568A0", VA = "0x3F568A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000560")]
	[CompilerGenerated]
	private sealed class _003CApplySkinPreviewAfterInitialSetup_003Ed__30 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001AB6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001AB7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001AB8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CharacterEditorSkinsPanel _003C_003E4__this;

		[Token(Token = "0x4001AB9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private bool _003CoriginalGlobalEnabled_003E5__2;

		[Token(Token = "0x4001ABA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
		private bool _003CoriginalSetEnabled_003E5__3;

		[Token(Token = "0x17000AC5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003872")]
			[Address(RVA = "0x3F56C20", Offset = "0x3F56C20", VA = "0x3F56C20", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000AC6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003874")]
			[Address(RVA = "0x3F56C70", Offset = "0x3F56C70", VA = "0x3F56C70", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600386F")]
		[Address(RVA = "0x3F56020", Offset = "0x3F56020", VA = "0x3F56020")]
		[DebuggerHidden]
		public _003CApplySkinPreviewAfterInitialSetup_003Ed__30(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003870")]
		[Address(RVA = "0x3F568F0", Offset = "0x3F568F0", VA = "0x3F568F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003871")]
		[Address(RVA = "0x3F56900", Offset = "0x3F56900", VA = "0x3F56900", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003873")]
		[Address(RVA = "0x3F56C30", Offset = "0x3F56C30", VA = "0x3F56C30", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000561")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinAfterReset_003Ed__29 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001ABB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001ABC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001ABD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DummyHuman dummyHuman;

		[Token(Token = "0x4001ABE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CharacterEditorSkinsPanel _003C_003E4__this;

		[Token(Token = "0x4001ABF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool originalGlobalEnabled;

		[Token(Token = "0x4001AC0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x31")]
		public bool originalSetEnabled;

		[Token(Token = "0x17000AC7")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003878")]
			[Address(RVA = "0x3F56EE0", Offset = "0x3F56EE0", VA = "0x3F56EE0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000AC8")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600387A")]
			[Address(RVA = "0x3F56F30", Offset = "0x3F56F30", VA = "0x3F56F30", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003875")]
		[Address(RVA = "0x3F56000", Offset = "0x3F56000", VA = "0x3F56000")]
		[DebuggerHidden]
		public _003CLoadSkinAfterReset_003Ed__29(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003876")]
		[Address(RVA = "0x3F56C80", Offset = "0x3F56C80", VA = "0x3F56C80", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003877")]
		[Address(RVA = "0x3F56C90", Offset = "0x3F56C90", VA = "0x3F56C90", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003879")]
		[Address(RVA = "0x3F56EF0", Offset = "0x3F56EF0", VA = "0x3F56EF0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000562")]
	[CompilerGenerated]
	private sealed class _003CRestoreOriginalSkinSettings_003Ed__31 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001AC1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001AC2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001AC3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool originalGlobalEnabled;

		[Token(Token = "0x4001AC4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
		public bool originalSetEnabled;

		[Token(Token = "0x17000AC9")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600387E")]
			[Address(RVA = "0x3F57040", Offset = "0x3F57040", VA = "0x3F57040", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000ACA")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003880")]
			[Address(RVA = "0x3F57090", Offset = "0x3F57090", VA = "0x3F57090", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600387B")]
		[Address(RVA = "0x3F56040", Offset = "0x3F56040", VA = "0x3F56040")]
		[DebuggerHidden]
		public _003CRestoreOriginalSkinSettings_003Ed__31(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600387C")]
		[Address(RVA = "0x3F56F40", Offset = "0x3F56F40", VA = "0x3F56F40", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600387D")]
		[Address(RVA = "0x3F56F50", Offset = "0x3F56F50", VA = "0x3F56F50", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600387F")]
		[Address(RVA = "0x3F57050", Offset = "0x3F57050", VA = "0x3F57050", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001AA8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private CharacterEditorMenu _menu;

	[Token(Token = "0x4001AA9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private BoolSetting _globalSkinPreview;

	[Token(Token = "0x4001AAA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private BoolSetting _customSkinPreview;

	[Token(Token = "0x4001AAB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static bool _persistentGlobalSkinPreview;

	[Token(Token = "0x4001AAC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
	private static bool _persistentCustomSkinPreview;

	[Token(Token = "0x4001AAD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2")]
	private static bool _hasInitializedPersistentStates;

	[Token(Token = "0x4001AAE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private bool _isRebuildingPanel;

	[Token(Token = "0x4001AAF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private IntSetting _globalSetDropdownSetting;

	[Token(Token = "0x17000ABD")]
	protected override string Title
	{
		[Token(Token = "0x6003850")]
		[Address(RVA = "0x3F54230", Offset = "0x3F54230", VA = "0x3F54230", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000ABE")]
	protected override float Width
	{
		[Token(Token = "0x6003851")]
		[Address(RVA = "0x3F542D0", Offset = "0x3F542D0", VA = "0x3F542D0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000ABF")]
	protected override float Height
	{
		[Token(Token = "0x6003852")]
		[Address(RVA = "0x3F542E0", Offset = "0x3F542E0", VA = "0x3F542E0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AC0")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003853")]
		[Address(RVA = "0x3F542F0", Offset = "0x3F542F0", VA = "0x3F542F0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AC1")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003854")]
		[Address(RVA = "0x3F54300", Offset = "0x3F54300", VA = "0x3F54300", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AC2")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003855")]
		[Address(RVA = "0x3F54310", Offset = "0x3F54310", VA = "0x3F54310", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003856")]
	[Address(RVA = "0x3F54320", Offset = "0x3F54320", VA = "0x3F54320")]
	public static bool GetPersistentGlobalPreview()
	{
		return default(bool);
	}

	[Token(Token = "0x6003857")]
	[Address(RVA = "0x3F54360", Offset = "0x3F54360", VA = "0x3F54360")]
	public static bool GetPersistentCustomPreview()
	{
		return default(bool);
	}

	[Token(Token = "0x6003858")]
	[Address(RVA = "0x3F4F730", Offset = "0x3F4F730", VA = "0x3F4F730")]
	public static void ResetSkinPreviewToggles()
	{
	}

	[Token(Token = "0x6003859")]
	[Address(RVA = "0x3F543A0", Offset = "0x3F543A0", VA = "0x3F543A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600385A")]
	[Address(RVA = "0x3F54D70", Offset = "0x3F54D70", VA = "0x3F54D70")]
	private string[] GetFilteredGlobalSetNames()
	{
		return null;
	}

	[Token(Token = "0x600385B")]
	[Address(RVA = "0x3F54F90", Offset = "0x3F54F90", VA = "0x3F54F90")]
	private int GetFilteredGlobalSetIndex()
	{
		return default(int);
	}

	[Token(Token = "0x600385C")]
	[Address(RVA = "0x3F55240", Offset = "0x3F55240", VA = "0x3F55240")]
	private void OnGlobalSkinSetSelected(int filteredIndex)
	{
	}

	[Token(Token = "0x600385D")]
	[Address(RVA = "0x3F55710", Offset = "0x3F55710", VA = "0x3F55710")]
	[IteratorStateMachine(typeof(_003CApplySkinPreviewAfterGlobalSetChange_003Ed__27))]
	private IEnumerator ApplySkinPreviewAfterGlobalSetChange()
	{
		return null;
	}

	[Token(Token = "0x600385E")]
	[Address(RVA = "0x3F557A0", Offset = "0x3F557A0", VA = "0x3F557A0")]
	private void OnSkinPreviewToggle()
	{
	}

	[Token(Token = "0x600385F")]
	[Address(RVA = "0x3F55EF0", Offset = "0x3F55EF0", VA = "0x3F55EF0")]
	[IteratorStateMachine(typeof(_003CLoadSkinAfterReset_003Ed__29))]
	private IEnumerator LoadSkinAfterReset(DummyHuman dummyHuman, bool originalGlobalEnabled, bool originalSetEnabled)
	{
		return null;
	}

	[Token(Token = "0x6003860")]
	[Address(RVA = "0x3F551D0", Offset = "0x3F551D0", VA = "0x3F551D0")]
	[IteratorStateMachine(typeof(_003CApplySkinPreviewAfterInitialSetup_003Ed__30))]
	private IEnumerator ApplySkinPreviewAfterInitialSetup()
	{
		return null;
	}

	[Token(Token = "0x6003861")]
	[Address(RVA = "0x3F55F90", Offset = "0x3F55F90", VA = "0x3F55F90")]
	[IteratorStateMachine(typeof(_003CRestoreOriginalSkinSettings_003Ed__31))]
	private IEnumerator RestoreOriginalSkinSettings(bool originalGlobalEnabled, bool originalSetEnabled)
	{
		return null;
	}

	[Token(Token = "0x6003862")]
	[Address(RVA = "0x3F56060", Offset = "0x3F56060", VA = "0x3F56060")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003863")]
	[Address(RVA = "0x3F56370", Offset = "0x3F56370", VA = "0x3F56370")]
	public CharacterEditorSkinsPanel()
	{
	}
}
