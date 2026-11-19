// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.BaseGameManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameManagers/BaseGameManager.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/BaseGameManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Photon.Pun;

namespace GameManagers;

[Token(Token = "0x2000373")]
internal class BaseGameManager : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x2000374")]
	[CompilerGenerated]
	private sealed class _003CWaitAndLoad_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001148")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001149")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400114A")]
		[FieldOffset(Offset = "0x20")]
		public BaseGameManager _003C_003E4__this;

		[Token(Token = "0x17000257")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001575")]
			[Address(RVA = "0x58253B0", Offset = "0x58243B0", VA = "0x58253B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000258")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001577")]
			[Address(RVA = "0x5825400", Offset = "0x5824400", VA = "0x5825400", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001572")]
		[Address(RVA = "0x58251D0", Offset = "0x58241D0", VA = "0x58251D0")]
		[DebuggerHidden]
		public _003CWaitAndLoad_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001573")]
		[Address(RVA = "0x58252A0", Offset = "0x58242A0", VA = "0x58252A0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001574")]
		[Address(RVA = "0x58252B0", Offset = "0x58242B0", VA = "0x58252B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001576")]
		[Address(RVA = "0x58253C0", Offset = "0x58243C0", VA = "0x58253C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x600156C")]
	[Address(RVA = "0x58250E0", Offset = "0x58240E0", VA = "0x58250E0", Slot = "54")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x600156D")]
	[Address(RVA = "0x58250F0", Offset = "0x58240F0", VA = "0x58250F0", Slot = "55")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x600156E")]
	[Address(RVA = "0x5825160", Offset = "0x5824160", VA = "0x5825160")]
	[IteratorStateMachine(typeof(_003CWaitAndLoad_003Ed__2))]
	protected IEnumerator WaitAndLoad()
	{
		return null;
	}

	[Token(Token = "0x600156F")]
	[Address(RVA = "0x58251F0", Offset = "0x58241F0", VA = "0x58251F0", Slot = "56")]
	public virtual bool IsFinishedLoading()
	{
		return default(bool);
	}

	[Token(Token = "0x6001570")]
	[Address(RVA = "0x5825280", Offset = "0x5824280", VA = "0x5825280", Slot = "57")]
	protected virtual void OnFinishLoading()
	{
	}

	[Token(Token = "0x6001571")]
	[Address(RVA = "0x5825290", Offset = "0x5824290", VA = "0x5825290")]
	public BaseGameManager()
	{
	}
}
