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

[Token(Token = "0x20007CE")]
internal class GlobalSkinEditPopup : BasePopup
{
	[Token(Token = "0x20007CF")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinAndRestoreSettings_003Ed__27 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002733")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002734")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002735")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DummyHuman character;

		[Token(Token = "0x4002736")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool originalGlobal;

		[Token(Token = "0x4002737")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
		public bool originalCustom;

		[Token(Token = "0x17000D32")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004B63")]
			[Address(RVA = "0x5BE21E0", Offset = "0x5BE11E0", VA = "0x5BE21E0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D33")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004B65")]
			[Address(RVA = "0x5BE2230", Offset = "0x5BE1230", VA = "0x5BE2230", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004B60")]
		[Address(RVA = "0x5BE13F0", Offset = "0x5BE03F0", VA = "0x5BE13F0")]
		[DebuggerHidden]
		public _003CLoadSkinAndRestoreSettings_003Ed__27(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004B61")]
		[Address(RVA = "0x5BE2040", Offset = "0x5BE1040", VA = "0x5BE2040", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004B62")]
		[Address(RVA = "0x5BE2050", Offset = "0x5BE1050", VA = "0x5BE2050", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004B64")]
		[Address(RVA = "0x5BE21F0", Offset = "0x5BE11F0", VA = "0x5BE21F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400272F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private HumanCustomSkinSet _currentGlobalSet;

	[Token(Token = "0x4002730")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Dictionary<string, string> _backupValues;

	[Token(Token = "0x4002731")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Dictionary<string, float> _backupFloatValues;

	[Token(Token = "0x4002732")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private bool _hasBackup;

	[Token(Token = "0x17000D2A")]
	protected override string Title
	{
		[Token(Token = "0x6004B49")]
		[Address(RVA = "0x5BDF210", Offset = "0x5BDE210", VA = "0x5BDF210", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D2B")]
	protected override float Width
	{
		[Token(Token = "0x6004B4A")]
		[Address(RVA = "0x5BDF340", Offset = "0x5BDE340", VA = "0x5BDF340", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D2C")]
	protected override float Height
	{
		[Token(Token = "0x6004B4B")]
		[Address(RVA = "0x5BDF350", Offset = "0x5BDE350", VA = "0x5BDF350", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D2D")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004B4C")]
		[Address(RVA = "0x5BDF360", Offset = "0x5BDE360", VA = "0x5BDF360", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D2E")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004B4D")]
		[Address(RVA = "0x5BDF370", Offset = "0x5BDE370", VA = "0x5BDF370", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D2F")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004B4E")]
		[Address(RVA = "0x5BDF380", Offset = "0x5BDE380", VA = "0x5BDF380", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D30")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004B4F")]
		[Address(RVA = "0x5BDF390", Offset = "0x5BDE390", VA = "0x5BDF390", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D31")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004B50")]
		[Address(RVA = "0x5BDF3A0", Offset = "0x5BDE3A0", VA = "0x5BDF3A0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004B51")]
	[Address(RVA = "0x5BDF3B0", Offset = "0x5BDE3B0", VA = "0x5BDF3B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004B52")]
	[Address(RVA = "0x5BE03A0", Offset = "0x5BDF3A0", VA = "0x5BE03A0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004B53")]
	[Address(RVA = "0x5BE0B60", Offset = "0x5BDFB60", VA = "0x5BE0B60")]
	private void CreateBackup()
	{
	}

	[Token(Token = "0x6004B54")]
	[Address(RVA = "0x5BE0F50", Offset = "0x5BDFF50", VA = "0x5BE0F50")]
	private void RestoreBackup()
	{
	}

	[Token(Token = "0x6004B55")]
	[Address(RVA = "0x5BD7170", Offset = "0x5BD6170", VA = "0x5BD7170")]
	public void OnCancelClick()
	{
	}

	[Token(Token = "0x6004B56")]
	[Address(RVA = "0x5BE08A0", Offset = "0x5BDF8A0", VA = "0x5BE08A0")]
	private void OnClearClick()
	{
	}

	[Token(Token = "0x6004B57")]
	[Address(RVA = "0x5BE0480", Offset = "0x5BDF480", VA = "0x5BE0480")]
	private void OnSaveClick()
	{
	}

	[Token(Token = "0x6004B58")]
	[Address(RVA = "0x5BE1370", Offset = "0x5BE0370", VA = "0x5BE1370")]
	[IteratorStateMachine(typeof(_003CLoadSkinAndRestoreSettings_003Ed__27))]
	private IEnumerator LoadSkinAndRestoreSettings(DummyHuman character, bool originalGlobal, bool originalCustom)
	{
		return null;
	}

	[Token(Token = "0x6004B59")]
	[Address(RVA = "0x5BE1410", Offset = "0x5BE0410", VA = "0x5BE1410", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6004B5A")]
	[Address(RVA = "0x5BE1E70", Offset = "0x5BE0E70", VA = "0x5BE1E70", Slot = "59")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6004B5B")]
	[Address(RVA = "0x5BE1E90", Offset = "0x5BE0E90", VA = "0x5BE1E90", Slot = "58")]
	public override void HideImmediate()
	{
	}

	[Token(Token = "0x6004B5C")]
	[Address(RVA = "0x5BE1EB0", Offset = "0x5BE0EB0", VA = "0x5BE1EB0")]
	public GlobalSkinEditPopup()
	{
	}
}
