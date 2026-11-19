// ==================== AoTTG2 cross-reference ====================
// Type: Settings.KeybindSetting
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/KeybindSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/KeybindSetting.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace Settings;

[Token(Token = "0x2000111")]
internal class KeybindSetting : BaseSetting
{
	[Token(Token = "0x2000112")]
	[CompilerGenerated]
	private sealed class _003CDefaultInputKeys_003Ed__6 : IEnumerable<InputKey>, IEnumerable, IEnumerator<InputKey>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000658")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000659")]
		[FieldOffset(Offset = "0x18")]
		private InputKey _003C_003E2__current;

		[Token(Token = "0x400065A")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400065B")]
		[FieldOffset(Offset = "0x28")]
		public KeybindSetting _003C_003E4__this;

		[Token(Token = "0x400065C")]
		[FieldOffset(Offset = "0x30")]
		private string[] _003C_003E7__wrap1;

		[Token(Token = "0x400065D")]
		[FieldOffset(Offset = "0x38")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x170000C3")]
		private InputKey System_002ECollections_002EGeneric_002EIEnumerator_003CSettings_002EInputKey_003E_002ECurrent
		{
			[Token(Token = "0x60005C6")]
			[Address(RVA = "0x5B7B5B0", Offset = "0x5B7A5B0", VA = "0x5B7B5B0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000C4")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60005C8")]
			[Address(RVA = "0x5B7B600", Offset = "0x5B7A600", VA = "0x5B7B600", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60005C3")]
		[Address(RVA = "0x5B7B460", Offset = "0x5B7A460", VA = "0x5B7B460")]
		[DebuggerHidden]
		public _003CDefaultInputKeys_003Ed__6(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60005C4")]
		[Address(RVA = "0x5B7B490", Offset = "0x5B7A490", VA = "0x5B7B490", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60005C5")]
		[Address(RVA = "0x5B7B4A0", Offset = "0x5B7A4A0", VA = "0x5B7B4A0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60005C7")]
		[Address(RVA = "0x5B7B5C0", Offset = "0x5B7A5C0", VA = "0x5B7B5C0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60005C9")]
		[Address(RVA = "0x5B7B610", Offset = "0x5B7A610", VA = "0x5B7B610", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<InputKey> System_002ECollections_002EGeneric_002EIEnumerable_003CSettings_002EInputKey_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60005CA")]
		[Address(RVA = "0x5B7B6B0", Offset = "0x5B7A6B0", VA = "0x5B7B6B0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000655")]
	[FieldOffset(Offset = "0x18")]
	public List<InputKey> InputKeys;

	[Token(Token = "0x4000656")]
	[FieldOffset(Offset = "0x20")]
	public MobileInput MobileInput;

	[Token(Token = "0x4000657")]
	[FieldOffset(Offset = "0x28")]
	protected string[] _defaultKeyStrings;

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x5A4B800", Offset = "0x5A4A800", VA = "0x5A4B800")]
	public KeybindSetting(string[] defaultKeyStrings)
	{
	}

	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x5A57080", Offset = "0x5A56080", VA = "0x5A57080")]
	public bool ContainsEnter()
	{
		return default(bool);
	}

	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x5A57220", Offset = "0x5A56220", VA = "0x5A57220", Slot = "4")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x5A57380", Offset = "0x5A56380", VA = "0x5A57380")]
	[IteratorStateMachine(typeof(_003CDefaultInputKeys_003Ed__6))]
	public IEnumerable<InputKey> DefaultInputKeys()
	{
		return null;
	}

	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x5A57230", Offset = "0x5A56230", VA = "0x5A57230")]
	protected void LoadFromStringArray(string[] keyStrings)
	{
	}

	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x5A573F0", Offset = "0x5A563F0", VA = "0x5A573F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x5A576F0", Offset = "0x5A566F0", VA = "0x5A576F0")]
	public bool Contains(InputKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x5A570B0", Offset = "0x5A560B0", VA = "0x5A570B0")]
	public bool Contains(KeyCode key)
	{
		return default(bool);
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x5A57870", Offset = "0x5A56870", VA = "0x5A57870")]
	public bool GetKeyDown(bool cl = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x5A57A50", Offset = "0x5A56A50", VA = "0x5A57A50")]
	public bool GetKey(bool cl = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x5A57C80", Offset = "0x5A56C80", VA = "0x5A57C80")]
	public bool GetKeyUp(bool cl = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x5A57E60", Offset = "0x5A56E60", VA = "0x5A57E60", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x5A58090", Offset = "0x5A57090", VA = "0x5A58090", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}
}
