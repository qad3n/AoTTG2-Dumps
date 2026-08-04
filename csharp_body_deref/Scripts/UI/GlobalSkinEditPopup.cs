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

[Token(Token = "0x20005B2")]
internal class GlobalSkinEditPopup : BasePopup
{
	[Token(Token = "0x20005B3")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinAndRestoreSettings_003Ed__27 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001BF3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001BF4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001BF5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DummyHuman character;

		[Token(Token = "0x4001BF6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool originalGlobal;

		[Token(Token = "0x4001BF7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
		public bool originalCustom;

		[Token(Token = "0x17000B4F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003AF9")]
			[Address(RVA = "0x426D2F0", Offset = "0x426D2F0", VA = "0x426D2F0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B50")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003AFB")]
			[Address(RVA = "0x426D340", Offset = "0x426D340", VA = "0x426D340", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003AF6")]
		[Address(RVA = "0x426C390", Offset = "0x426C390", VA = "0x426C390")]
		[DebuggerHidden]
		public _003CLoadSkinAndRestoreSettings_003Ed__27(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003AF7")]
		[Address(RVA = "0x426D160", Offset = "0x426D160", VA = "0x426D160", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003AF8")]
		[Address(RVA = "0x426D170", Offset = "0x426D170", VA = "0x426D170", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003AFA")]
		[Address(RVA = "0x426D300", Offset = "0x426D300", VA = "0x426D300", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001BEF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private HumanCustomSkinSet _currentGlobalSet;

	[Token(Token = "0x4001BF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Dictionary<string, string> _backupValues;

	[Token(Token = "0x4001BF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Dictionary<string, float> _backupFloatValues;

	[Token(Token = "0x4001BF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private bool _hasBackup;

	[Token(Token = "0x17000B47")]
	protected override string Title
	{
		[Token(Token = "0x6003ADF")]
		[Address(RVA = "0x426A0E0", Offset = "0x426A0E0", VA = "0x426A0E0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B48")]
	protected override float Width
	{
		[Token(Token = "0x6003AE0")]
		[Address(RVA = "0x426A220", Offset = "0x426A220", VA = "0x426A220", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B49")]
	protected override float Height
	{
		[Token(Token = "0x6003AE1")]
		[Address(RVA = "0x426A230", Offset = "0x426A230", VA = "0x426A230", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B4A")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003AE2")]
		[Address(RVA = "0x426A240", Offset = "0x426A240", VA = "0x426A240", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B4B")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003AE3")]
		[Address(RVA = "0x426A250", Offset = "0x426A250", VA = "0x426A250", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B4C")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003AE4")]
		[Address(RVA = "0x426A260", Offset = "0x426A260", VA = "0x426A260", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B4D")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6003AE5")]
		[Address(RVA = "0x426A270", Offset = "0x426A270", VA = "0x426A270", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B4E")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003AE6")]
		[Address(RVA = "0x426A280", Offset = "0x426A280", VA = "0x426A280", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003AE7")]
	[Address(RVA = "0x426A290", Offset = "0x426A290", VA = "0x426A290", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003AE8")]
	[Address(RVA = "0x426B1A0", Offset = "0x426B1A0", VA = "0x426B1A0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003AE9")]
	[Address(RVA = "0x426B9A0", Offset = "0x426B9A0", VA = "0x426B9A0")]
	private void CreateBackup()
	{
	}

	[Token(Token = "0x6003AEA")]
	[Address(RVA = "0x426BE10", Offset = "0x426BE10", VA = "0x426BE10")]
	private void RestoreBackup()
	{
	}

	[Token(Token = "0x6003AEB")]
	[Address(RVA = "0x4263560", Offset = "0x4263560", VA = "0x4263560")]
	public void OnCancelClick()
	{
	}

	[Token(Token = "0x6003AEC")]
	[Address(RVA = "0x426B6B0", Offset = "0x426B6B0", VA = "0x426B6B0")]
	private void OnClearClick()
	{
	}

	[Token(Token = "0x6003AED")]
	[Address(RVA = "0x426B280", Offset = "0x426B280", VA = "0x426B280")]
	private void OnSaveClick()
	{
	}

	[Token(Token = "0x6003AEE")]
	[Address(RVA = "0x426C300", Offset = "0x426C300", VA = "0x426C300")]
	[IteratorStateMachine(typeof(_003CLoadSkinAndRestoreSettings_003Ed__27))]
	private IEnumerator LoadSkinAndRestoreSettings(DummyHuman character, bool originalGlobal, bool originalCustom)
	{
		return null;
	}

	[Token(Token = "0x6003AEF")]
	[Address(RVA = "0x426C3B0", Offset = "0x426C3B0", VA = "0x426C3B0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6003AF0")]
	[Address(RVA = "0x426CF90", Offset = "0x426CF90", VA = "0x426CF90", Slot = "56")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6003AF1")]
	[Address(RVA = "0x426CFB0", Offset = "0x426CFB0", VA = "0x426CFB0", Slot = "55")]
	public override void HideImmediate()
	{
	}

	[Token(Token = "0x6003AF2")]
	[Address(RVA = "0x426CFD0", Offset = "0x426CFD0", VA = "0x426CFD0")]
	public GlobalSkinEditPopup()
	{
	}
}
