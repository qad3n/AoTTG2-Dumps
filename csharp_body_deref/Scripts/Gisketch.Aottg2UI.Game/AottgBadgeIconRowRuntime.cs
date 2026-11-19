// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.State;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002E6")]
internal sealed class AottgBadgeIconRowRuntime : MonoBehaviour
{
	[Token(Token = "0x20002E7")]
	[CompilerGenerated]
	private sealed class _003CBadgeIds_003Ed__27 : IEnumerable<string>, IEnumerable, IEnumerator<string>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000EAF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000EB0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private string _003C_003E2__current;

		[Token(Token = "0x4000EB1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000EB2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private JSONNode badges;

		[Token(Token = "0x4000EB3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public JSONNode _003C_003E3__badges;

		[Token(Token = "0x4000EB4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private IEnumerator<JSONNode> _003C_003E7__wrap1;

		[Token(Token = "0x170001FB")]
		private string System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EString_003E_002ECurrent
		{
			[Token(Token = "0x60011B2")]
			[Address(RVA = "0x57D8A90", Offset = "0x57D7A90", VA = "0x57D8A90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001FC")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60011B4")]
			[Address(RVA = "0x57D8AE0", Offset = "0x57D7AE0", VA = "0x57D8AE0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60011AE")]
		[Address(RVA = "0x57D84C0", Offset = "0x57D74C0", VA = "0x57D84C0")]
		[DebuggerHidden]
		public _003CBadgeIds_003Ed__27(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60011AF")]
		[Address(RVA = "0x57D8510", Offset = "0x57D7510", VA = "0x57D8510", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60011B0")]
		[Address(RVA = "0x57D85C0", Offset = "0x57D75C0", VA = "0x57D85C0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60011B1")]
		[Address(RVA = "0x57D89F0", Offset = "0x57D79F0", VA = "0x57D89F0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60011B3")]
		[Address(RVA = "0x57D8AA0", Offset = "0x57D7AA0", VA = "0x57D8AA0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60011B5")]
		[Address(RVA = "0x57D8AF0", Offset = "0x57D7AF0", VA = "0x57D8AF0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<string> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EString_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60011B6")]
		[Address(RVA = "0x57D8B80", Offset = "0x57D7B80", VA = "0x57D8B80", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000EA7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private float _size;

	[Token(Token = "0x4000EA8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GisketchUIState _state;

	[Token(Token = "0x4000EA9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _stateKey;

	[Token(Token = "0x4000EAA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string[] _last;

	[Token(Token = "0x4000EAB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private bool _controlsActive;

	[Token(Token = "0x4000EAC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x41")]
	private bool _setupComplete;

	[Token(Token = "0x4000EAD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x42")]
	private bool _subscribed;

	[Token(Token = "0x170001FA")]
	public bool HasBadges
	{
		[Token(Token = "0x600119A")]
		[Address(RVA = "0x57D7560", Offset = "0x57D6560", VA = "0x57D7560")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600119B")]
		[Address(RVA = "0x57D7570", Offset = "0x57D6570", VA = "0x57D7570")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600119C")]
	[Address(RVA = "0x57D72F0", Offset = "0x57D62F0", VA = "0x57D72F0")]
	public void Setup(float size, float gap, [Optional] GisketchUIState state, [Optional] string stateKey, bool controlsActive = true)
	{
	}

	[Token(Token = "0x600119D")]
	[Address(RVA = "0x57D76E0", Offset = "0x57D66E0", VA = "0x57D76E0")]
	public void SetBadges(IEnumerable<string> ids)
	{
	}

	[Token(Token = "0x600119E")]
	[Address(RVA = "0x57D79B0", Offset = "0x57D69B0", VA = "0x57D79B0")]
	public void SetFromCharacterInfo(JSONNode info)
	{
	}

	[Token(Token = "0x600119F")]
	[Address(RVA = "0x57D7B20", Offset = "0x57D6B20", VA = "0x57D7B20")]
	public void SetFromCharacterInfoJson(string json, IEnumerable<string> roles)
	{
	}

	[Token(Token = "0x60011A0")]
	[Address(RVA = "0x57D7630", Offset = "0x57D6630", VA = "0x57D7630")]
	public void Refresh()
	{
	}

	[Token(Token = "0x60011A1")]
	[Address(RVA = "0x57D7CE0", Offset = "0x57D6CE0", VA = "0x57D7CE0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60011A2")]
	[Address(RVA = "0x57D7D00", Offset = "0x57D6D00", VA = "0x57D7D00")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60011A3")]
	[Address(RVA = "0x57D7E00", Offset = "0x57D6E00", VA = "0x57D7E00")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60011A4")]
	[Address(RVA = "0x57D7E80", Offset = "0x57D6E80", VA = "0x57D7E80")]
	private void OnStateChanged(string key)
	{
	}

	[Token(Token = "0x60011A5")]
	[Address(RVA = "0x57D7840", Offset = "0x57D6840", VA = "0x57D7840")]
	private void Rebuild(string[] ids)
	{
	}

	[Token(Token = "0x60011A6")]
	[Address(RVA = "0x57D77B0", Offset = "0x57D67B0", VA = "0x57D77B0")]
	private void SetActive(bool active)
	{
	}

	[Token(Token = "0x60011A7")]
	[Address(RVA = "0x57D80D0", Offset = "0x57D70D0", VA = "0x57D80D0")]
	private void AddIcon(string id, Sprite sprite)
	{
	}

	[Token(Token = "0x60011A8")]
	[Address(RVA = "0x57D7F70", Offset = "0x57D6F70", VA = "0x57D7F70")]
	private void Clear()
	{
	}

	[Token(Token = "0x60011A9")]
	[Address(RVA = "0x57D7580", Offset = "0x57D6580", VA = "0x57D7580")]
	private void Subscribe()
	{
	}

	[Token(Token = "0x60011AA")]
	[Address(RVA = "0x57D7D80", Offset = "0x57D6D80", VA = "0x57D7D80")]
	private void Unsubscribe()
	{
	}

	[Token(Token = "0x60011AB")]
	[Address(RVA = "0x57D7C40", Offset = "0x57D6C40", VA = "0x57D7C40")]
	private static JSONNode Parse(string json)
	{
		return null;
	}

	[Token(Token = "0x60011AC")]
	[Address(RVA = "0x57D7AB0", Offset = "0x57D6AB0", VA = "0x57D7AB0")]
	[IteratorStateMachine(typeof(_003CBadgeIds_003Ed__27))]
	private static IEnumerable<string> BadgeIds(JSONNode badges)
	{
		return null;
	}

	[Token(Token = "0x60011AD")]
	[Address(RVA = "0x57D84F0", Offset = "0x57D74F0", VA = "0x57D84F0")]
	public AottgBadgeIconRowRuntime()
	{
	}
}
