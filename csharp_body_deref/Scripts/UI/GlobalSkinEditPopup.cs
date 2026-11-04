// ==================== AoTTG2 cross-reference ====================
// Type: UI.GlobalSkinEditPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/GlobalSkinEditPopup.c
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

[Token(Token = "0x2000726")]
internal class GlobalSkinEditPopup : BasePopup
{
	[Token(Token = "0x2000727")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinAndRestoreSettings_003Ed__27 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40023B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40023B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40023B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DummyHuman character;

		[Token(Token = "0x40023BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool originalGlobal;

		[Token(Token = "0x40023BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
		public bool originalCustom;

		[Token(Token = "0x17000CAD")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600463A")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000CAE")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600463C")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004637")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CLoadSkinAndRestoreSettings_003Ed__27(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004638")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004639")]
		[Address(RVA = "0x21E7A20", Offset = "0x21E6020", VA = "0x1821E7A20", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600463B")]
		[Address(RVA = "0x21E7BE0", Offset = "0x21E61E0", VA = "0x1821E7BE0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40023B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private HumanCustomSkinSet _currentGlobalSet;

	[Token(Token = "0x40023B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Dictionary<string, string> _backupValues;

	[Token(Token = "0x40023B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Dictionary<string, float> _backupFloatValues;

	[Token(Token = "0x40023B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private bool _hasBackup;

	[Token(Token = "0x17000CA5")]
	protected override string Title
	{
		[Token(Token = "0x6004620")]
		[Address(RVA = "0x21E4690", Offset = "0x21E2C90", VA = "0x1821E4690", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CA6")]
	protected override float Width
	{
		[Token(Token = "0x6004621")]
		[Address(RVA = "0x21E47C0", Offset = "0x21E2DC0", VA = "0x1821E47C0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CA7")]
	protected override float Height
	{
		[Token(Token = "0x6004622")]
		[Address(RVA = "0x21E4680", Offset = "0x21E2C80", VA = "0x1821E4680", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CA8")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004623")]
		[Address(RVA = "0x2182AB0", Offset = "0x21810B0", VA = "0x182182AB0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CA9")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004624")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CAA")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004625")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CAB")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004626")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CAC")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004627")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004628")]
	[Address(RVA = "0x21E2B60", Offset = "0x21E1160", VA = "0x1821E2B60", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004629")]
	[Address(RVA = "0x21E1F90", Offset = "0x21E0590", VA = "0x1821E1F90")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600462A")]
	[Address(RVA = "0x21E1B60", Offset = "0x21E0160", VA = "0x1821E1B60")]
	private void CreateBackup()
	{
	}

	[Token(Token = "0x600462B")]
	[Address(RVA = "0x21E27B0", Offset = "0x21E0DB0", VA = "0x1821E27B0")]
	private void RestoreBackup()
	{
	}

	[Token(Token = "0x600462C")]
	[Address(RVA = "0x21E2070", Offset = "0x21E0670", VA = "0x1821E2070")]
	public void OnCancelClick()
	{
	}

	[Token(Token = "0x600462D")]
	[Address(RVA = "0x21E20B0", Offset = "0x21E06B0", VA = "0x1821E20B0")]
	private void OnClearClick()
	{
	}

	[Token(Token = "0x600462E")]
	[Address(RVA = "0x21E2340", Offset = "0x21E0940", VA = "0x1821E2340")]
	private void OnSaveClick()
	{
	}

	[Token(Token = "0x600462F")]
	[Address(RVA = "0x21E1F10", Offset = "0x21E0510", VA = "0x1821E1F10")]
	[IteratorStateMachine(typeof(_003CLoadSkinAndRestoreSettings_003Ed__27))]
	private IEnumerator LoadSkinAndRestoreSettings(DummyHuman character, bool originalGlobal, bool originalCustom)
	{
		return null;
	}

	[Token(Token = "0x6004630")]
	[Address(RVA = "0x21E3C90", Offset = "0x21E2290", VA = "0x1821E3C90", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6004631")]
	[Address(RVA = "0x21E2310", Offset = "0x21E0910", VA = "0x1821E2310", Slot = "59")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6004632")]
	[Address(RVA = "0x21E1EE0", Offset = "0x21E04E0", VA = "0x1821E1EE0", Slot = "58")]
	public override void HideImmediate()
	{
	}

	[Token(Token = "0x6004633")]
	[Address(RVA = "0x21E45B0", Offset = "0x21E2BB0", VA = "0x1821E45B0")]
	public GlobalSkinEditPopup()
	{
	}
}
