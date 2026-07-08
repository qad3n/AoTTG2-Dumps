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

[Token(Token = "0x2000152")]
internal sealed class AottgBadgeIconRowRuntime : MonoBehaviour
{
	[Token(Token = "0x2000153")]
	[CompilerGenerated]
	private sealed class _003CBadgeIds_003Ed__21 : IEnumerable<string>, IEnumerable, IEnumerator<string>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40007B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40007B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private string _003C_003E2__current;

		[Token(Token = "0x40007B3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40007B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private JSONNode badges;

		[Token(Token = "0x40007B5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public JSONNode _003C_003E3__badges;

		[Token(Token = "0x40007B6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private IEnumerator<JSONNode> _003C_003E7__wrap1;

		[Token(Token = "0x170000E4")]
		private string System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EString_003E_002ECurrent
		{
			[Token(Token = "0x600073D")]
			[Address(RVA = "0x40CB250", Offset = "0x40CB250", VA = "0x40CB250", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000E5")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600073F")]
			[Address(RVA = "0x40CB2A0", Offset = "0x40CB2A0", VA = "0x40CB2A0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000739")]
		[Address(RVA = "0x40CABB0", Offset = "0x40CABB0", VA = "0x40CABB0")]
		[DebuggerHidden]
		public _003CBadgeIds_003Ed__21(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600073A")]
		[Address(RVA = "0x40CAC00", Offset = "0x40CAC00", VA = "0x40CAC00", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600073B")]
		[Address(RVA = "0x40CACB0", Offset = "0x40CACB0", VA = "0x40CACB0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600073C")]
		[Address(RVA = "0x40CB1B0", Offset = "0x40CB1B0", VA = "0x40CB1B0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x600073E")]
		[Address(RVA = "0x40CB260", Offset = "0x40CB260", VA = "0x40CB260", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000740")]
		[Address(RVA = "0x40CB2B0", Offset = "0x40CB2B0", VA = "0x40CB2B0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<string> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EString_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000741")]
		[Address(RVA = "0x40CB350", Offset = "0x40CB350", VA = "0x40CB350", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40007AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private float _size;

	[Token(Token = "0x40007AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GisketchUIState _state;

	[Token(Token = "0x40007AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _stateKey;

	[Token(Token = "0x40007AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string[] _last;

	[Token(Token = "0x40007AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private bool _controlsActive;

	[Token(Token = "0x170000E3")]
	public bool HasBadges
	{
		[Token(Token = "0x6000729")]
		[Address(RVA = "0x40C9FE0", Offset = "0x40C9FE0", VA = "0x40C9FE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600072A")]
		[Address(RVA = "0x40C9FF0", Offset = "0x40C9FF0", VA = "0x40C9FF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600072B")]
	[Address(RVA = "0x40C9D10", Offset = "0x40C9D10", VA = "0x40C9D10")]
	public void Setup(float size, float gap, [Optional] GisketchUIState state, [Optional] string stateKey, bool controlsActive = true)
	{
	}

	[Token(Token = "0x600072C")]
	[Address(RVA = "0x40CA070", Offset = "0x40CA070", VA = "0x40CA070")]
	public void SetBadges(IEnumerable<string> ids)
	{
	}

	[Token(Token = "0x600072D")]
	[Address(RVA = "0x40CA2B0", Offset = "0x40CA2B0", VA = "0x40CA2B0")]
	public void SetFromCharacterInfo(JSONNode info)
	{
	}

	[Token(Token = "0x600072E")]
	[Address(RVA = "0x40CA440", Offset = "0x40CA440", VA = "0x40CA440")]
	public void SetFromCharacterInfoJson(string json, IEnumerable<string> roles)
	{
	}

	[Token(Token = "0x600072F")]
	[Address(RVA = "0x40CA000", Offset = "0x40CA000", VA = "0x40CA000")]
	public void Refresh()
	{
	}

	[Token(Token = "0x6000730")]
	[Address(RVA = "0x40CA610", Offset = "0x40CA610", VA = "0x40CA610")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000731")]
	[Address(RVA = "0x40CA690", Offset = "0x40CA690", VA = "0x40CA690")]
	private void OnStateChanged(string key)
	{
	}

	[Token(Token = "0x6000732")]
	[Address(RVA = "0x40CA150", Offset = "0x40CA150", VA = "0x40CA150")]
	private void Rebuild(string[] ids)
	{
	}

	[Token(Token = "0x6000733")]
	[Address(RVA = "0x40CA120", Offset = "0x40CA120", VA = "0x40CA120")]
	private void SetActive(bool active)
	{
	}

	[Token(Token = "0x6000734")]
	[Address(RVA = "0x40CA810", Offset = "0x40CA810", VA = "0x40CA810")]
	private void AddIcon(string id, Sprite sprite)
	{
	}

	[Token(Token = "0x6000735")]
	[Address(RVA = "0x40CA6E0", Offset = "0x40CA6E0", VA = "0x40CA6E0")]
	private void Clear()
	{
	}

	[Token(Token = "0x6000736")]
	[Address(RVA = "0x40CA570", Offset = "0x40CA570", VA = "0x40CA570")]
	private static JSONNode Parse(string json)
	{
		return null;
	}

	[Token(Token = "0x6000737")]
	[Address(RVA = "0x40CA3C0", Offset = "0x40CA3C0", VA = "0x40CA3C0")]
	[IteratorStateMachine(typeof(_003CBadgeIds_003Ed__21))]
	private static IEnumerable<string> BadgeIds(JSONNode badges)
	{
		return null;
	}

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x40CABE0", Offset = "0x40CABE0", VA = "0x40CABE0")]
	public AottgBadgeIconRowRuntime()
	{
	}
}
