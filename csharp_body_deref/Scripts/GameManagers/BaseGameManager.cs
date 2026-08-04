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

[Token(Token = "0x2000200")]
internal class BaseGameManager : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x2000201")]
	[CompilerGenerated]
	private sealed class _003CWaitAndLoad_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000AC6")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000AC7")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000AC8")]
		[FieldOffset(Offset = "0x20")]
		public BaseGameManager _003C_003E4__this;

		[Token(Token = "0x1700017C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000BF1")]
			[Address(RVA = "0x44429F0", Offset = "0x44429F0", VA = "0x44429F0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700017D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000BF3")]
			[Address(RVA = "0x4442A40", Offset = "0x4442A40", VA = "0x4442A40", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000BEE")]
		[Address(RVA = "0x44427B0", Offset = "0x44427B0", VA = "0x44427B0")]
		[DebuggerHidden]
		public _003CWaitAndLoad_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000BEF")]
		[Address(RVA = "0x44428E0", Offset = "0x44428E0", VA = "0x44428E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000BF0")]
		[Address(RVA = "0x44428F0", Offset = "0x44428F0", VA = "0x44428F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000BF2")]
		[Address(RVA = "0x4442A00", Offset = "0x4442A00", VA = "0x4442A00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x44426B0", Offset = "0x44426B0", VA = "0x44426B0", Slot = "54")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x44426C0", Offset = "0x44426C0", VA = "0x44426C0", Slot = "55")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x4442740", Offset = "0x4442740", VA = "0x4442740")]
	[IteratorStateMachine(typeof(_003CWaitAndLoad_003Ed__2))]
	protected IEnumerator WaitAndLoad()
	{
		return null;
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x44427D0", Offset = "0x44427D0", VA = "0x44427D0", Slot = "56")]
	public virtual bool IsFinishedLoading()
	{
		return default(bool);
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x44428C0", Offset = "0x44428C0", VA = "0x44428C0", Slot = "57")]
	protected virtual void OnFinishLoading()
	{
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x44428D0", Offset = "0x44428D0", VA = "0x44428D0")]
	public BaseGameManager()
	{
	}
}
