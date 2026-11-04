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

[Token(Token = "0x20000D6")]
internal class KeybindSetting : BaseSetting
{
	[Token(Token = "0x20000D7")]
	[CompilerGenerated]
	private sealed class _003CDefaultInputKeys_003Ed__5 : IEnumerable<InputKey>, IEnumerable, IEnumerator<InputKey>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000519")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400051A")]
		[FieldOffset(Offset = "0x18")]
		private InputKey _003C_003E2__current;

		[Token(Token = "0x400051B")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400051C")]
		[FieldOffset(Offset = "0x28")]
		public KeybindSetting _003C_003E4__this;

		[Token(Token = "0x400051D")]
		[FieldOffset(Offset = "0x30")]
		private string[] _003C_003E7__wrap1;

		[Token(Token = "0x400051E")]
		[FieldOffset(Offset = "0x38")]
		private int _003C_003E7__wrap2;

		[Token(Token = "0x170000A6")]
		private InputKey System_002ECollections_002EGeneric_002EIEnumerator_003CSettings_002EInputKey_003E_002ECurrent
		{
			[Token(Token = "0x6000448")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000A7")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600044A")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000445")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CDefaultInputKeys_003Ed__5(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000446")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000447")]
		[Address(RVA = "0x1F29EB0", Offset = "0x1F284B0", VA = "0x181F29EB0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000449")]
		[Address(RVA = "0x1F2A070", Offset = "0x1F28670", VA = "0x181F2A070", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600044B")]
		[Address(RVA = "0x1F29FD0", Offset = "0x1F285D0", VA = "0x181F29FD0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<InputKey> System_002ECollections_002EGeneric_002EIEnumerable_003CSettings_002EInputKey_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600044C")]
		[Address(RVA = "0x1F29FD0", Offset = "0x1F285D0", VA = "0x181F29FD0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000517")]
	[FieldOffset(Offset = "0x18")]
	public List<InputKey> InputKeys;

	[Token(Token = "0x4000518")]
	[FieldOffset(Offset = "0x20")]
	protected string[] _defaultKeyStrings;

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x1F1FBF0", Offset = "0x1F1E1F0", VA = "0x181F1FBF0")]
	public KeybindSetting(string[] defaultKeyStrings)
	{
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x1F1EA90", Offset = "0x1F1D090", VA = "0x181F1EA90")]
	public bool ContainsEnter()
	{
		return default(bool);
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x1F1F9D0", Offset = "0x1F1DFD0", VA = "0x181F1F9D0", Slot = "4")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x1F1ED70", Offset = "0x1F1D370", VA = "0x181F1ED70")]
	[IteratorStateMachine(typeof(_003CDefaultInputKeys_003Ed__5))]
	public IEnumerable<InputKey> DefaultInputKeys()
	{
		return null;
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x1F1F6C0", Offset = "0x1F1DCC0", VA = "0x181F1F6C0")]
	protected void LoadFromStringArray(string[] keyStrings)
	{
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x1F1F9E0", Offset = "0x1F1DFE0", VA = "0x181F1F9E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x1F1EAD0", Offset = "0x1F1D0D0", VA = "0x181F1EAD0")]
	public bool Contains(InputKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x1F1EC20", Offset = "0x1F1D220", VA = "0x181F1EC20")]
	public bool Contains(KeyCode key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x1F1F0A0", Offset = "0x1F1D6A0", VA = "0x181F1F0A0")]
	public bool GetKeyDown(bool cl = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x1F1F480", Offset = "0x1F1DA80", VA = "0x181F1F480")]
	public bool GetKey(bool cl = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x1F1F290", Offset = "0x1F1D890", VA = "0x181F1F290")]
	public bool GetKeyUp(bool cl = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x1F1F820", Offset = "0x1F1DE20", VA = "0x181F1F820", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x1F1EDF0", Offset = "0x1F1D3F0", VA = "0x181F1EDF0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}
}
