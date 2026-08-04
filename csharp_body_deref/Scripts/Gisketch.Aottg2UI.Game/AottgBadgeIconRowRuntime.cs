// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000184")]
internal sealed class AottgBadgeIconRowRuntime : MonoBehaviour
{
	[Token(Token = "0x2000185")]
	[CompilerGenerated]
	private sealed class _003CBadgeIds_003Ed__27 : IEnumerable<string>, IEnumerable, IEnumerator<string>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000872")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000873")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private string _003C_003E2__current;

		[Token(Token = "0x4000874")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000875")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private JSONNode badges;

		[Token(Token = "0x4000876")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public JSONNode _003C_003E3__badges;

		[Token(Token = "0x4000877")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private IEnumerator<JSONNode> _003C_003E7__wrap1;

		[Token(Token = "0x1700013A")]
		private string System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EString_003E_002ECurrent
		{
			[Token(Token = "0x60008B0")]
			[Address(RVA = "0x43FC730", Offset = "0x43FC730", VA = "0x43FC730", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700013B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60008B2")]
			[Address(RVA = "0x43FC780", Offset = "0x43FC780", VA = "0x43FC780", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60008AC")]
		[Address(RVA = "0x43FC090", Offset = "0x43FC090", VA = "0x43FC090")]
		[DebuggerHidden]
		public _003CBadgeIds_003Ed__27(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60008AD")]
		[Address(RVA = "0x43FC0E0", Offset = "0x43FC0E0", VA = "0x43FC0E0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60008AE")]
		[Address(RVA = "0x43FC190", Offset = "0x43FC190", VA = "0x43FC190", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60008AF")]
		[Address(RVA = "0x43FC690", Offset = "0x43FC690", VA = "0x43FC690")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60008B1")]
		[Address(RVA = "0x43FC740", Offset = "0x43FC740", VA = "0x43FC740", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60008B3")]
		[Address(RVA = "0x43FC790", Offset = "0x43FC790", VA = "0x43FC790", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<string> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EString_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60008B4")]
		[Address(RVA = "0x43FC830", Offset = "0x43FC830", VA = "0x43FC830", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x400086A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private float _size;

	[Token(Token = "0x400086B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GisketchUIState _state;

	[Token(Token = "0x400086C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _stateKey;

	[Token(Token = "0x400086D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string[] _last;

	[Token(Token = "0x400086E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private bool _controlsActive;

	[Token(Token = "0x400086F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x41")]
	private bool _setupComplete;

	[Token(Token = "0x4000870")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x42")]
	private bool _subscribed;

	[Token(Token = "0x17000139")]
	public bool HasBadges
	{
		[Token(Token = "0x6000898")]
		[Address(RVA = "0x43FB0C0", Offset = "0x43FB0C0", VA = "0x43FB0C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000899")]
		[Address(RVA = "0x43FB0D0", Offset = "0x43FB0D0", VA = "0x43FB0D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600089A")]
	[Address(RVA = "0x43FADD0", Offset = "0x43FADD0", VA = "0x43FADD0")]
	public void Setup(float size, float gap, [Optional] GisketchUIState state, [Optional] string stateKey, bool controlsActive = true)
	{
	}

	[Token(Token = "0x600089B")]
	[Address(RVA = "0x43FB220", Offset = "0x43FB220", VA = "0x43FB220")]
	public void SetBadges(IEnumerable<string> ids)
	{
	}

	[Token(Token = "0x600089C")]
	[Address(RVA = "0x43FB4E0", Offset = "0x43FB4E0", VA = "0x43FB4E0")]
	public void SetFromCharacterInfo(JSONNode info)
	{
	}

	[Token(Token = "0x600089D")]
	[Address(RVA = "0x43FB670", Offset = "0x43FB670", VA = "0x43FB670")]
	public void SetFromCharacterInfoJson(string json, IEnumerable<string> roles)
	{
	}

	[Token(Token = "0x600089E")]
	[Address(RVA = "0x43FB170", Offset = "0x43FB170", VA = "0x43FB170")]
	public void Refresh()
	{
	}

	[Token(Token = "0x600089F")]
	[Address(RVA = "0x43FB840", Offset = "0x43FB840", VA = "0x43FB840")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60008A0")]
	[Address(RVA = "0x43FB8D0", Offset = "0x43FB8D0", VA = "0x43FB8D0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60008A1")]
	[Address(RVA = "0x43FB9D0", Offset = "0x43FB9D0", VA = "0x43FB9D0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x43FBA50", Offset = "0x43FBA50", VA = "0x43FBA50")]
	private void OnStateChanged(string key)
	{
	}

	[Token(Token = "0x60008A3")]
	[Address(RVA = "0x43FB370", Offset = "0x43FB370", VA = "0x43FB370")]
	private void Rebuild(string[] ids)
	{
	}

	[Token(Token = "0x60008A4")]
	[Address(RVA = "0x43FB2E0", Offset = "0x43FB2E0", VA = "0x43FB2E0")]
	private void SetActive(bool active)
	{
	}

	[Token(Token = "0x60008A5")]
	[Address(RVA = "0x43FBCB0", Offset = "0x43FBCB0", VA = "0x43FBCB0")]
	private void AddIcon(string id, Sprite sprite)
	{
	}

	[Token(Token = "0x60008A6")]
	[Address(RVA = "0x43FBB50", Offset = "0x43FBB50", VA = "0x43FBB50")]
	private void Clear()
	{
	}

	[Token(Token = "0x60008A7")]
	[Address(RVA = "0x43FB0E0", Offset = "0x43FB0E0", VA = "0x43FB0E0")]
	private void Subscribe()
	{
	}

	[Token(Token = "0x60008A8")]
	[Address(RVA = "0x43FB950", Offset = "0x43FB950", VA = "0x43FB950")]
	private void Unsubscribe()
	{
	}

	[Token(Token = "0x60008A9")]
	[Address(RVA = "0x43FB7A0", Offset = "0x43FB7A0", VA = "0x43FB7A0")]
	private static JSONNode Parse(string json)
	{
		return null;
	}

	[Token(Token = "0x60008AA")]
	[Address(RVA = "0x43FB5F0", Offset = "0x43FB5F0", VA = "0x43FB5F0")]
	[IteratorStateMachine(typeof(_003CBadgeIds_003Ed__27))]
	private static IEnumerable<string> BadgeIds(JSONNode badges)
	{
		return null;
	}

	[Token(Token = "0x60008AB")]
	[Address(RVA = "0x43FC0C0", Offset = "0x43FC0C0", VA = "0x43FC0C0")]
	public AottgBadgeIconRowRuntime()
	{
	}
}
