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

[Token(Token = "0x2000570")]
internal class PresetSkinEditPopup : BasePopup
{
	[Token(Token = "0x2000571")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinAndRestoreSettingsCoroutine_003Ed__28 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001AEB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001AEC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001AED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DummyHuman character;

		[Token(Token = "0x4001AEE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool originalGlobal;

		[Token(Token = "0x4001AEF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
		public bool originalCustom;

		[Token(Token = "0x17000AEF")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600390C")]
			[Address(RVA = "0x3F61F70", Offset = "0x3F61F70", VA = "0x3F61F70", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000AF0")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600390E")]
			[Address(RVA = "0x3F61FC0", Offset = "0x3F61FC0", VA = "0x3F61FC0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003909")]
		[Address(RVA = "0x3F61AD0", Offset = "0x3F61AD0", VA = "0x3F61AD0")]
		[DebuggerHidden]
		public _003CLoadSkinAndRestoreSettingsCoroutine_003Ed__28(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600390A")]
		[Address(RVA = "0x3F61DE0", Offset = "0x3F61DE0", VA = "0x3F61DE0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600390B")]
		[Address(RVA = "0x3F61DF0", Offset = "0x3F61DF0", VA = "0x3F61DF0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600390D")]
		[Address(RVA = "0x3F61F80", Offset = "0x3F61F80", VA = "0x3F61F80", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001AE7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private HumanCustomSet _currentPreset;

	[Token(Token = "0x4001AE8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Dictionary<string, string> _backupValues;

	[Token(Token = "0x4001AE9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Dictionary<string, float> _backupFloatValues;

	[Token(Token = "0x4001AEA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private bool _hasBackup;

	[Token(Token = "0x17000AE7")]
	protected override string Title
	{
		[Token(Token = "0x60038F1")]
		[Address(RVA = "0x3F5F8E0", Offset = "0x3F5F8E0", VA = "0x3F5F8E0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AE8")]
	protected override float Width
	{
		[Token(Token = "0x60038F2")]
		[Address(RVA = "0x3F5FA20", Offset = "0x3F5FA20", VA = "0x3F5FA20", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AE9")]
	protected override float Height
	{
		[Token(Token = "0x60038F3")]
		[Address(RVA = "0x3F5FA30", Offset = "0x3F5FA30", VA = "0x3F5FA30", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AEA")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60038F4")]
		[Address(RVA = "0x3F5FA40", Offset = "0x3F5FA40", VA = "0x3F5FA40", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AEB")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60038F5")]
		[Address(RVA = "0x3F5FA50", Offset = "0x3F5FA50", VA = "0x3F5FA50", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AEC")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60038F6")]
		[Address(RVA = "0x3F5FA60", Offset = "0x3F5FA60", VA = "0x3F5FA60", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AED")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x60038F7")]
		[Address(RVA = "0x3F5FA70", Offset = "0x3F5FA70", VA = "0x3F5FA70", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000AEE")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60038F8")]
		[Address(RVA = "0x3F5FA80", Offset = "0x3F5FA80", VA = "0x3F5FA80", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60038F9")]
	[Address(RVA = "0x3F5FA90", Offset = "0x3F5FA90", VA = "0x3F5FA90", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60038FA")]
	[Address(RVA = "0x3F609F0", Offset = "0x3F609F0", VA = "0x3F609F0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60038FB")]
	[Address(RVA = "0x3F60B00", Offset = "0x3F60B00", VA = "0x3F60B00")]
	private void OnClearClick()
	{
	}

	[Token(Token = "0x60038FC")]
	[Address(RVA = "0x3F61180", Offset = "0x3F61180", VA = "0x3F61180")]
	private void CreateBackup()
	{
	}

	[Token(Token = "0x60038FD")]
	[Address(RVA = "0x3F61520", Offset = "0x3F61520", VA = "0x3F61520")]
	private void RestoreBackup()
	{
	}

	[Token(Token = "0x60038FE")]
	[Address(RVA = "0x3F60AD0", Offset = "0x3F60AD0", VA = "0x3F60AD0")]
	public void OnCancelClick()
	{
	}

	[Token(Token = "0x60038FF")]
	[Address(RVA = "0x3F60D40", Offset = "0x3F60D40", VA = "0x3F60D40")]
	private void OnSaveClick()
	{
	}

	[Token(Token = "0x6003900")]
	[Address(RVA = "0x3F61A40", Offset = "0x3F61A40", VA = "0x3F61A40")]
	private void LoadSkinAndRestoreSettings(DummyHuman character, bool originalGlobal, bool originalCustom)
	{
	}

	[Token(Token = "0x6003901")]
	[Address(RVA = "0x3F619B0", Offset = "0x3F619B0", VA = "0x3F619B0")]
	[IteratorStateMachine(typeof(_003CLoadSkinAndRestoreSettingsCoroutine_003Ed__28))]
	private IEnumerator LoadSkinAndRestoreSettingsCoroutine(DummyHuman character, bool originalGlobal, bool originalCustom)
	{
		return null;
	}

	[Token(Token = "0x6003902")]
	[Address(RVA = "0x3F61AF0", Offset = "0x3F61AF0", VA = "0x3F61AF0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6003903")]
	[Address(RVA = "0x3F61C10", Offset = "0x3F61C10", VA = "0x3F61C10", Slot = "56")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6003904")]
	[Address(RVA = "0x3F61C30", Offset = "0x3F61C30", VA = "0x3F61C30", Slot = "55")]
	public override void HideImmediate()
	{
	}

	[Token(Token = "0x6003905")]
	[Address(RVA = "0x3F61C50", Offset = "0x3F61C50", VA = "0x3F61C50")]
	public PresetSkinEditPopup()
	{
	}
}
