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

[Token(Token = "0x200056D")]
internal class GlobalSkinEditPopup : BasePopup
{
	[Token(Token = "0x200056E")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinAndRestoreSettings_003Ed__27 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001AE0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001AE1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001AE2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DummyHuman character;

		[Token(Token = "0x4001AE3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool originalGlobal;

		[Token(Token = "0x4001AE4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
		public bool originalCustom;

		[Token(Token = "0x17000AE5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60038EA")]
			[Address(RVA = "0x3F5F470", Offset = "0x3F5F470", VA = "0x3F5F470", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000AE6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60038EC")]
			[Address(RVA = "0x3F5F4C0", Offset = "0x3F5F4C0", VA = "0x3F5F4C0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60038E7")]
		[Address(RVA = "0x3F5E510", Offset = "0x3F5E510", VA = "0x3F5E510")]
		[DebuggerHidden]
		public _003CLoadSkinAndRestoreSettings_003Ed__27(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60038E8")]
		[Address(RVA = "0x3F5F2E0", Offset = "0x3F5F2E0", VA = "0x3F5F2E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60038E9")]
		[Address(RVA = "0x3F5F2F0", Offset = "0x3F5F2F0", VA = "0x3F5F2F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60038EB")]
		[Address(RVA = "0x3F5F480", Offset = "0x3F5F480", VA = "0x3F5F480", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001ADC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private HumanCustomSkinSet _currentGlobalSet;

	[Token(Token = "0x4001ADD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Dictionary<string, string> _backupValues;

	[Token(Token = "0x4001ADE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Dictionary<string, float> _backupFloatValues;

	[Token(Token = "0x4001ADF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private bool _hasBackup;

	[Token(Token = "0x17000ADD")]
	protected override string Title
	{
		[Token(Token = "0x60038D0")]
		[Address(RVA = "0x3F5C260", Offset = "0x3F5C260", VA = "0x3F5C260", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000ADE")]
	protected override float Width
	{
		[Token(Token = "0x60038D1")]
		[Address(RVA = "0x3F5C3A0", Offset = "0x3F5C3A0", VA = "0x3F5C3A0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000ADF")]
	protected override float Height
	{
		[Token(Token = "0x60038D2")]
		[Address(RVA = "0x3F5C3B0", Offset = "0x3F5C3B0", VA = "0x3F5C3B0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AE0")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60038D3")]
		[Address(RVA = "0x3F5C3C0", Offset = "0x3F5C3C0", VA = "0x3F5C3C0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AE1")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60038D4")]
		[Address(RVA = "0x3F5C3D0", Offset = "0x3F5C3D0", VA = "0x3F5C3D0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AE2")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60038D5")]
		[Address(RVA = "0x3F5C3E0", Offset = "0x3F5C3E0", VA = "0x3F5C3E0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AE3")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x60038D6")]
		[Address(RVA = "0x3F5C3F0", Offset = "0x3F5C3F0", VA = "0x3F5C3F0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000AE4")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60038D7")]
		[Address(RVA = "0x3F5C400", Offset = "0x3F5C400", VA = "0x3F5C400", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60038D8")]
	[Address(RVA = "0x3F5C410", Offset = "0x3F5C410", VA = "0x3F5C410", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60038D9")]
	[Address(RVA = "0x3F5D320", Offset = "0x3F5D320", VA = "0x3F5D320")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60038DA")]
	[Address(RVA = "0x3F5DB20", Offset = "0x3F5DB20", VA = "0x3F5DB20")]
	private void CreateBackup()
	{
	}

	[Token(Token = "0x60038DB")]
	[Address(RVA = "0x3F5DF90", Offset = "0x3F5DF90", VA = "0x3F5DF90")]
	private void RestoreBackup()
	{
	}

	[Token(Token = "0x60038DC")]
	[Address(RVA = "0x3F556E0", Offset = "0x3F556E0", VA = "0x3F556E0")]
	public void OnCancelClick()
	{
	}

	[Token(Token = "0x60038DD")]
	[Address(RVA = "0x3F5D830", Offset = "0x3F5D830", VA = "0x3F5D830")]
	private void OnClearClick()
	{
	}

	[Token(Token = "0x60038DE")]
	[Address(RVA = "0x3F5D400", Offset = "0x3F5D400", VA = "0x3F5D400")]
	private void OnSaveClick()
	{
	}

	[Token(Token = "0x60038DF")]
	[Address(RVA = "0x3F5E480", Offset = "0x3F5E480", VA = "0x3F5E480")]
	[IteratorStateMachine(typeof(_003CLoadSkinAndRestoreSettings_003Ed__27))]
	private IEnumerator LoadSkinAndRestoreSettings(DummyHuman character, bool originalGlobal, bool originalCustom)
	{
		return null;
	}

	[Token(Token = "0x60038E0")]
	[Address(RVA = "0x3F5E530", Offset = "0x3F5E530", VA = "0x3F5E530", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x60038E1")]
	[Address(RVA = "0x3F5F110", Offset = "0x3F5F110", VA = "0x3F5F110", Slot = "56")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60038E2")]
	[Address(RVA = "0x3F5F130", Offset = "0x3F5F130", VA = "0x3F5F130", Slot = "55")]
	public override void HideImmediate()
	{
	}

	[Token(Token = "0x60038E3")]
	[Address(RVA = "0x3F5F150", Offset = "0x3F5F150", VA = "0x3F5F150")]
	public GlobalSkinEditPopup()
	{
	}
}
