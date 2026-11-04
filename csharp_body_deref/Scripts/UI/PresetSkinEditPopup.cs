// ==================== AoTTG2 cross-reference ====================
// Type: UI.PresetSkinEditPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/PresetSkinEditPopup.c
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

[Token(Token = "0x2000729")]
internal class PresetSkinEditPopup : BasePopup
{
	[Token(Token = "0x200072A")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinAndRestoreSettingsCoroutine_003Ed__28 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40023C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40023C3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40023C4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DummyHuman character;

		[Token(Token = "0x40023C5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool originalGlobal;

		[Token(Token = "0x40023C6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
		public bool originalCustom;

		[Token(Token = "0x17000CB7")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600465C")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000CB8")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600465E")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004659")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CLoadSkinAndRestoreSettingsCoroutine_003Ed__28(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600465A")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600465B")]
		[Address(RVA = "0x221AC10", Offset = "0x2219210", VA = "0x18221AC10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600465D")]
		[Address(RVA = "0x221ADD0", Offset = "0x22193D0", VA = "0x18221ADD0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40023BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private HumanCustomSet _currentPreset;

	[Token(Token = "0x40023BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Dictionary<string, string> _backupValues;

	[Token(Token = "0x40023C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Dictionary<string, float> _backupFloatValues;

	[Token(Token = "0x40023C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private bool _hasBackup;

	[Token(Token = "0x17000CAF")]
	protected override string Title
	{
		[Token(Token = "0x6004641")]
		[Address(RVA = "0x22193B0", Offset = "0x22179B0", VA = "0x1822193B0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CB0")]
	protected override float Width
	{
		[Token(Token = "0x6004642")]
		[Address(RVA = "0x21E47C0", Offset = "0x21E2DC0", VA = "0x1821E47C0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CB1")]
	protected override float Height
	{
		[Token(Token = "0x6004643")]
		[Address(RVA = "0x21E4680", Offset = "0x21E2C80", VA = "0x1821E4680", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CB2")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004644")]
		[Address(RVA = "0x2182AB0", Offset = "0x21810B0", VA = "0x182182AB0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CB3")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004645")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CB4")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004646")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CB5")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004647")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CB6")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004648")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004649")]
	[Address(RVA = "0x2217F40", Offset = "0x2216540", VA = "0x182217F40", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600464A")]
	[Address(RVA = "0x2217440", Offset = "0x2215A40", VA = "0x182217440")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600464B")]
	[Address(RVA = "0x2217560", Offset = "0x2215B60", VA = "0x182217560")]
	private void OnClearClick()
	{
	}

	[Token(Token = "0x600464C")]
	[Address(RVA = "0x2217000", Offset = "0x2215600", VA = "0x182217000")]
	private void CreateBackup()
	{
	}

	[Token(Token = "0x600464D")]
	[Address(RVA = "0x2217B70", Offset = "0x2216170", VA = "0x182217B70")]
	private void RestoreBackup()
	{
	}

	[Token(Token = "0x600464E")]
	[Address(RVA = "0x2217520", Offset = "0x2215B20", VA = "0x182217520")]
	public void OnCancelClick()
	{
	}

	[Token(Token = "0x600464F")]
	[Address(RVA = "0x2217770", Offset = "0x2215D70", VA = "0x182217770")]
	private void OnSaveClick()
	{
	}

	[Token(Token = "0x6004650")]
	[Address(RVA = "0x22173B0", Offset = "0x22159B0", VA = "0x1822173B0")]
	private void LoadSkinAndRestoreSettings(DummyHuman character, bool originalGlobal, bool originalCustom)
	{
	}

	[Token(Token = "0x6004651")]
	[Address(RVA = "0x2217330", Offset = "0x2215930", VA = "0x182217330")]
	[IteratorStateMachine(typeof(_003CLoadSkinAndRestoreSettingsCoroutine_003Ed__28))]
	private IEnumerator LoadSkinAndRestoreSettingsCoroutine(DummyHuman character, bool originalGlobal, bool originalCustom)
	{
		return null;
	}

	[Token(Token = "0x6004652")]
	[Address(RVA = "0x22190F0", Offset = "0x22176F0", VA = "0x1822190F0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6004653")]
	[Address(RVA = "0x2217740", Offset = "0x2215D40", VA = "0x182217740", Slot = "59")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6004654")]
	[Address(RVA = "0x2217300", Offset = "0x2215900", VA = "0x182217300", Slot = "58")]
	public override void HideImmediate()
	{
	}

	[Token(Token = "0x6004655")]
	[Address(RVA = "0x22192E0", Offset = "0x22178E0", VA = "0x1822192E0")]
	public PresetSkinEditPopup()
	{
	}
}
