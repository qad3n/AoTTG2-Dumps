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

[Token(Token = "0x20005B5")]
internal class PresetSkinEditPopup : BasePopup
{
	[Token(Token = "0x20005B6")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinAndRestoreSettingsCoroutine_003Ed__28 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001BFE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001BFF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001C00")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DummyHuman character;

		[Token(Token = "0x4001C01")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool originalGlobal;

		[Token(Token = "0x4001C02")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
		public bool originalCustom;

		[Token(Token = "0x17000B59")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003B1B")]
			[Address(RVA = "0x426FDF0", Offset = "0x426FDF0", VA = "0x426FDF0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B5A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003B1D")]
			[Address(RVA = "0x426FE40", Offset = "0x426FE40", VA = "0x426FE40", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003B18")]
		[Address(RVA = "0x426F950", Offset = "0x426F950", VA = "0x426F950")]
		[DebuggerHidden]
		public _003CLoadSkinAndRestoreSettingsCoroutine_003Ed__28(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003B19")]
		[Address(RVA = "0x426FC60", Offset = "0x426FC60", VA = "0x426FC60", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003B1A")]
		[Address(RVA = "0x426FC70", Offset = "0x426FC70", VA = "0x426FC70", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003B1C")]
		[Address(RVA = "0x426FE00", Offset = "0x426FE00", VA = "0x426FE00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001BFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private HumanCustomSet _currentPreset;

	[Token(Token = "0x4001BFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Dictionary<string, string> _backupValues;

	[Token(Token = "0x4001BFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Dictionary<string, float> _backupFloatValues;

	[Token(Token = "0x4001BFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private bool _hasBackup;

	[Token(Token = "0x17000B51")]
	protected override string Title
	{
		[Token(Token = "0x6003B00")]
		[Address(RVA = "0x426D760", Offset = "0x426D760", VA = "0x426D760", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B52")]
	protected override float Width
	{
		[Token(Token = "0x6003B01")]
		[Address(RVA = "0x426D8A0", Offset = "0x426D8A0", VA = "0x426D8A0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B53")]
	protected override float Height
	{
		[Token(Token = "0x6003B02")]
		[Address(RVA = "0x426D8B0", Offset = "0x426D8B0", VA = "0x426D8B0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B54")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003B03")]
		[Address(RVA = "0x426D8C0", Offset = "0x426D8C0", VA = "0x426D8C0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B55")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003B04")]
		[Address(RVA = "0x426D8D0", Offset = "0x426D8D0", VA = "0x426D8D0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B56")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003B05")]
		[Address(RVA = "0x426D8E0", Offset = "0x426D8E0", VA = "0x426D8E0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B57")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6003B06")]
		[Address(RVA = "0x426D8F0", Offset = "0x426D8F0", VA = "0x426D8F0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B58")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003B07")]
		[Address(RVA = "0x426D900", Offset = "0x426D900", VA = "0x426D900", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003B08")]
	[Address(RVA = "0x426D910", Offset = "0x426D910", VA = "0x426D910", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003B09")]
	[Address(RVA = "0x426E870", Offset = "0x426E870", VA = "0x426E870")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003B0A")]
	[Address(RVA = "0x426E980", Offset = "0x426E980", VA = "0x426E980")]
	private void OnClearClick()
	{
	}

	[Token(Token = "0x6003B0B")]
	[Address(RVA = "0x426F000", Offset = "0x426F000", VA = "0x426F000")]
	private void CreateBackup()
	{
	}

	[Token(Token = "0x6003B0C")]
	[Address(RVA = "0x426F3A0", Offset = "0x426F3A0", VA = "0x426F3A0")]
	private void RestoreBackup()
	{
	}

	[Token(Token = "0x6003B0D")]
	[Address(RVA = "0x426E950", Offset = "0x426E950", VA = "0x426E950")]
	public void OnCancelClick()
	{
	}

	[Token(Token = "0x6003B0E")]
	[Address(RVA = "0x426EBC0", Offset = "0x426EBC0", VA = "0x426EBC0")]
	private void OnSaveClick()
	{
	}

	[Token(Token = "0x6003B0F")]
	[Address(RVA = "0x426F8C0", Offset = "0x426F8C0", VA = "0x426F8C0")]
	private void LoadSkinAndRestoreSettings(DummyHuman character, bool originalGlobal, bool originalCustom)
	{
	}

	[Token(Token = "0x6003B10")]
	[Address(RVA = "0x426F830", Offset = "0x426F830", VA = "0x426F830")]
	[IteratorStateMachine(typeof(_003CLoadSkinAndRestoreSettingsCoroutine_003Ed__28))]
	private IEnumerator LoadSkinAndRestoreSettingsCoroutine(DummyHuman character, bool originalGlobal, bool originalCustom)
	{
		return null;
	}

	[Token(Token = "0x6003B11")]
	[Address(RVA = "0x426F970", Offset = "0x426F970", VA = "0x426F970", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6003B12")]
	[Address(RVA = "0x426FA90", Offset = "0x426FA90", VA = "0x426FA90", Slot = "56")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6003B13")]
	[Address(RVA = "0x426FAB0", Offset = "0x426FAB0", VA = "0x426FAB0", Slot = "55")]
	public override void HideImmediate()
	{
	}

	[Token(Token = "0x6003B14")]
	[Address(RVA = "0x426FAD0", Offset = "0x426FAD0", VA = "0x426FAD0")]
	public PresetSkinEditPopup()
	{
	}
}
