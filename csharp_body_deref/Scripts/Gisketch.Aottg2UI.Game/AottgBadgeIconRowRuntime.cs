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

[Token(Token = "0x200028A")]
internal sealed class AottgBadgeIconRowRuntime : MonoBehaviour
{
	[Token(Token = "0x200028B")]
	[CompilerGenerated]
	private sealed class _003CBadgeIds_003Ed__27 : IEnumerable<string>, IEnumerable, IEnumerator<string>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000D13")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000D14")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private string _003C_003E2__current;

		[Token(Token = "0x4000D15")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000D16")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private JSONNode badges;

		[Token(Token = "0x4000D17")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public JSONNode _003C_003E3__badges;

		[Token(Token = "0x4000D18")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private IEnumerator<JSONNode> _003C_003E7__wrap1;

		[Token(Token = "0x170001BE")]
		private string System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EString_003E_002ECurrent
		{
			[Token(Token = "0x6000F64")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001BF")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000F66")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000F60")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CBadgeIds_003Ed__27(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000F61")]
		[Address(RVA = "0x1E0C010", Offset = "0x1E0A610", VA = "0x181E0C010", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000F62")]
		[Address(RVA = "0x1E0BCA0", Offset = "0x1E0A2A0", VA = "0x181E0BCA0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000F63")]
		[Address(RVA = "0x1E0C0A0", Offset = "0x1E0A6A0", VA = "0x181E0C0A0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000F65")]
		[Address(RVA = "0x1E0BFD0", Offset = "0x1E0A5D0", VA = "0x181E0BFD0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000F67")]
		[Address(RVA = "0x1E0BF30", Offset = "0x1E0A530", VA = "0x181E0BF30", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<string> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EString_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000F68")]
		[Address(RVA = "0x1E0BF30", Offset = "0x1E0A530", VA = "0x181E0BF30", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000D0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private float _size;

	[Token(Token = "0x4000D0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GisketchUIState _state;

	[Token(Token = "0x4000D0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _stateKey;

	[Token(Token = "0x4000D0E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string[] _last;

	[Token(Token = "0x4000D0F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private bool _controlsActive;

	[Token(Token = "0x4000D10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x41")]
	private bool _setupComplete;

	[Token(Token = "0x4000D11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x42")]
	private bool _subscribed;

	[Token(Token = "0x170001BD")]
	public bool HasBadges
	{
		[Token(Token = "0x6000F4C")]
		[Address(RVA = "0x1AD8260", Offset = "0x1AD6860", VA = "0x181AD8260")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F4D")]
		[Address(RVA = "0x1D26380", Offset = "0x1D24980", VA = "0x181D26380")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000F4E")]
	[Address(RVA = "0x1DF0D10", Offset = "0x1DEF310", VA = "0x181DF0D10")]
	public void Setup(float size, float gap, [Optional] GisketchUIState state, [Optional] string stateKey, bool controlsActive = true)
	{
	}

	[Token(Token = "0x6000F4F")]
	[Address(RVA = "0x1DF0AB0", Offset = "0x1DEF0B0", VA = "0x181DF0AB0")]
	public void SetBadges(IEnumerable<string> ids)
	{
	}

	[Token(Token = "0x6000F50")]
	[Address(RVA = "0x1DF0C60", Offset = "0x1DEF260", VA = "0x181DF0C60")]
	public void SetFromCharacterInfo(JSONNode info)
	{
	}

	[Token(Token = "0x6000F51")]
	[Address(RVA = "0x1DF0B80", Offset = "0x1DEF180", VA = "0x181DF0B80")]
	public void SetFromCharacterInfoJson(string json, IEnumerable<string> roles)
	{
	}

	[Token(Token = "0x6000F52")]
	[Address(RVA = "0x1DF0960", Offset = "0x1DEEF60", VA = "0x181DF0960")]
	public void Refresh()
	{
	}

	[Token(Token = "0x6000F53")]
	[Address(RVA = "0x1DF0590", Offset = "0x1DEEB90", VA = "0x181DF0590")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000F54")]
	[Address(RVA = "0x1DF0580", Offset = "0x1DEEB80", VA = "0x181DF0580")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000F55")]
	[Address(RVA = "0x1DF0580", Offset = "0x1DEEB80", VA = "0x181DF0580")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000F56")]
	[Address(RVA = "0x1DF05B0", Offset = "0x1DEEBB0", VA = "0x181DF05B0")]
	private void OnStateChanged(string key)
	{
	}

	[Token(Token = "0x6000F57")]
	[Address(RVA = "0x1DF0680", Offset = "0x1DEEC80", VA = "0x181DF0680")]
	private void Rebuild(string[] ids)
	{
	}

	[Token(Token = "0x6000F58")]
	[Address(RVA = "0x1DF0A20", Offset = "0x1DEF020", VA = "0x181DF0A20")]
	private void SetActive(bool active)
	{
	}

	[Token(Token = "0x6000F59")]
	[Address(RVA = "0x1DEFFB0", Offset = "0x1DEE5B0", VA = "0x181DEFFB0")]
	private void AddIcon(string id, Sprite sprite)
	{
	}

	[Token(Token = "0x6000F5A")]
	[Address(RVA = "0x1DF0430", Offset = "0x1DEEA30", VA = "0x181DF0430")]
	private void Clear()
	{
	}

	[Token(Token = "0x6000F5B")]
	[Address(RVA = "0x1DF0F80", Offset = "0x1DEF580", VA = "0x181DF0F80")]
	private void Subscribe()
	{
	}

	[Token(Token = "0x6000F5C")]
	[Address(RVA = "0x1DF1040", Offset = "0x1DEF640", VA = "0x181DF1040")]
	private void Unsubscribe()
	{
	}

	[Token(Token = "0x6000F5D")]
	[Address(RVA = "0x1DF0650", Offset = "0x1DEEC50", VA = "0x181DF0650")]
	private static JSONNode Parse(string json)
	{
		return null;
	}

	[Token(Token = "0x6000F5E")]
	[Address(RVA = "0x1DF03B0", Offset = "0x1DEE9B0", VA = "0x181DF03B0")]
	[IteratorStateMachine(typeof(_003CBadgeIds_003Ed__27))]
	private static IEnumerable<string> BadgeIds(JSONNode badges)
	{
		return null;
	}

	[Token(Token = "0x6000F5F")]
	[Address(RVA = "0x1DF10E0", Offset = "0x1DEF6E0", VA = "0x181DF10E0")]
	public AottgBadgeIconRowRuntime()
	{
	}
}
