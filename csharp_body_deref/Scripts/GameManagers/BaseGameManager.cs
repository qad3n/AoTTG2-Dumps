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

[Token(Token = "0x2000312")]
internal class BaseGameManager : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x2000313")]
	[CompilerGenerated]
	private sealed class _003CWaitAndLoad_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000FA9")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000FAA")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000FAB")]
		[FieldOffset(Offset = "0x20")]
		public BaseGameManager _003C_003E4__this;

		[Token(Token = "0x17000210")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001303")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000211")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001305")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001300")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndLoad_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001301")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001302")]
		[Address(RVA = "0x1E41D90", Offset = "0x1E40390", VA = "0x181E41D90", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001304")]
		[Address(RVA = "0x1E41EA0", Offset = "0x1E404A0", VA = "0x181E41EA0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x60012FA")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "54")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x60012FB")]
	[Address(RVA = "0x1E32220", Offset = "0x1E30820", VA = "0x181E32220", Slot = "55")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x60012FC")]
	[Address(RVA = "0x1E322A0", Offset = "0x1E308A0", VA = "0x181E322A0")]
	[IteratorStateMachine(typeof(_003CWaitAndLoad_003Ed__2))]
	protected IEnumerator WaitAndLoad()
	{
		return null;
	}

	[Token(Token = "0x60012FD")]
	[Address(RVA = "0x1E32170", Offset = "0x1E30770", VA = "0x181E32170", Slot = "56")]
	public virtual bool IsFinishedLoading()
	{
		return default(bool);
	}

	[Token(Token = "0x60012FE")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "57")]
	protected virtual void OnFinishLoading()
	{
	}

	[Token(Token = "0x60012FF")]
	[Address(RVA = "0x190EDA0", Offset = "0x190D3A0", VA = "0x18190EDA0")]
	public BaseGameManager()
	{
	}
}
