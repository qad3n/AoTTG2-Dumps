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

[Token(Token = "0x20007D1")]
internal class PresetSkinEditPopup : BasePopup
{
	[Token(Token = "0x20007D2")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinAndRestoreSettingsCoroutine_003Ed__28 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400273E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400273F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002740")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DummyHuman character;

		[Token(Token = "0x4002741")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool originalGlobal;

		[Token(Token = "0x4002742")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
		public bool originalCustom;

		[Token(Token = "0x17000D3C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004B85")]
			[Address(RVA = "0x5BE4AF0", Offset = "0x5BE3AF0", VA = "0x5BE4AF0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D3D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004B87")]
			[Address(RVA = "0x5BE4B40", Offset = "0x5BE3B40", VA = "0x5BE4B40", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004B82")]
		[Address(RVA = "0x5BE4640", Offset = "0x5BE3640", VA = "0x5BE4640")]
		[DebuggerHidden]
		public _003CLoadSkinAndRestoreSettingsCoroutine_003Ed__28(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004B83")]
		[Address(RVA = "0x5BE4950", Offset = "0x5BE3950", VA = "0x5BE4950", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004B84")]
		[Address(RVA = "0x5BE4960", Offset = "0x5BE3960", VA = "0x5BE4960", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004B86")]
		[Address(RVA = "0x5BE4B00", Offset = "0x5BE3B00", VA = "0x5BE4B00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400273A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private HumanCustomSet _currentPreset;

	[Token(Token = "0x400273B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Dictionary<string, string> _backupValues;

	[Token(Token = "0x400273C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Dictionary<string, float> _backupFloatValues;

	[Token(Token = "0x400273D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private bool _hasBackup;

	[Token(Token = "0x17000D34")]
	protected override string Title
	{
		[Token(Token = "0x6004B6A")]
		[Address(RVA = "0x5BE25F0", Offset = "0x5BE15F0", VA = "0x5BE25F0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D35")]
	protected override float Width
	{
		[Token(Token = "0x6004B6B")]
		[Address(RVA = "0x5BE2720", Offset = "0x5BE1720", VA = "0x5BE2720", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D36")]
	protected override float Height
	{
		[Token(Token = "0x6004B6C")]
		[Address(RVA = "0x5BE2730", Offset = "0x5BE1730", VA = "0x5BE2730", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D37")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004B6D")]
		[Address(RVA = "0x5BE2740", Offset = "0x5BE1740", VA = "0x5BE2740", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D38")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004B6E")]
		[Address(RVA = "0x5BE2750", Offset = "0x5BE1750", VA = "0x5BE2750", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D39")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004B6F")]
		[Address(RVA = "0x5BE2760", Offset = "0x5BE1760", VA = "0x5BE2760", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D3A")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004B70")]
		[Address(RVA = "0x5BE2770", Offset = "0x5BE1770", VA = "0x5BE2770", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D3B")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004B71")]
		[Address(RVA = "0x5BE2780", Offset = "0x5BE1780", VA = "0x5BE2780", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004B72")]
	[Address(RVA = "0x5BE2790", Offset = "0x5BE1790", VA = "0x5BE2790", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004B73")]
	[Address(RVA = "0x5BE36A0", Offset = "0x5BE26A0", VA = "0x5BE36A0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004B74")]
	[Address(RVA = "0x5BE37B0", Offset = "0x5BE27B0", VA = "0x5BE37B0")]
	private void OnClearClick()
	{
	}

	[Token(Token = "0x6004B75")]
	[Address(RVA = "0x5BE3DE0", Offset = "0x5BE2DE0", VA = "0x5BE3DE0")]
	private void CreateBackup()
	{
	}

	[Token(Token = "0x6004B76")]
	[Address(RVA = "0x5BE4130", Offset = "0x5BE3130", VA = "0x5BE4130")]
	private void RestoreBackup()
	{
	}

	[Token(Token = "0x6004B77")]
	[Address(RVA = "0x5BE3780", Offset = "0x5BE2780", VA = "0x5BE3780")]
	public void OnCancelClick()
	{
	}

	[Token(Token = "0x6004B78")]
	[Address(RVA = "0x5BE39B0", Offset = "0x5BE29B0", VA = "0x5BE39B0")]
	private void OnSaveClick()
	{
	}

	[Token(Token = "0x6004B79")]
	[Address(RVA = "0x5BE45C0", Offset = "0x5BE35C0", VA = "0x5BE45C0")]
	private void LoadSkinAndRestoreSettings(DummyHuman character, bool originalGlobal, bool originalCustom)
	{
	}

	[Token(Token = "0x6004B7A")]
	[Address(RVA = "0x5BE4540", Offset = "0x5BE3540", VA = "0x5BE4540")]
	[IteratorStateMachine(typeof(_003CLoadSkinAndRestoreSettingsCoroutine_003Ed__28))]
	private IEnumerator LoadSkinAndRestoreSettingsCoroutine(DummyHuman character, bool originalGlobal, bool originalCustom)
	{
		return null;
	}

	[Token(Token = "0x6004B7B")]
	[Address(RVA = "0x5BE4660", Offset = "0x5BE3660", VA = "0x5BE4660", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6004B7C")]
	[Address(RVA = "0x5BE4780", Offset = "0x5BE3780", VA = "0x5BE4780", Slot = "59")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6004B7D")]
	[Address(RVA = "0x5BE47A0", Offset = "0x5BE37A0", VA = "0x5BE47A0", Slot = "58")]
	public override void HideImmediate()
	{
	}

	[Token(Token = "0x6004B7E")]
	[Address(RVA = "0x5BE47C0", Offset = "0x5BE37C0", VA = "0x5BE47C0")]
	public PresetSkinEditPopup()
	{
	}
}
