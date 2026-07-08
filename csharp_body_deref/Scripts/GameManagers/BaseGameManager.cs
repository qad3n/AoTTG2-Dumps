using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Photon.Pun;

namespace GameManagers;

[Token(Token = "0x20001CD")]
internal class BaseGameManager : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x20001CE")]
	[CompilerGenerated]
	private sealed class _003CWaitAndLoad_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000A00")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000A01")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000A02")]
		[FieldOffset(Offset = "0x20")]
		public BaseGameManager _003C_003E4__this;

		[Token(Token = "0x17000126")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000A74")]
			[Address(RVA = "0x4110770", Offset = "0x4110770", VA = "0x4110770", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000127")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000A76")]
			[Address(RVA = "0x41107C0", Offset = "0x41107C0", VA = "0x41107C0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000A71")]
		[Address(RVA = "0x4110580", Offset = "0x4110580", VA = "0x4110580")]
		[DebuggerHidden]
		public _003CWaitAndLoad_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000A72")]
		[Address(RVA = "0x4110660", Offset = "0x4110660", VA = "0x4110660", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000A73")]
		[Address(RVA = "0x4110670", Offset = "0x4110670", VA = "0x4110670", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A75")]
		[Address(RVA = "0x4110780", Offset = "0x4110780", VA = "0x4110780", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x4110480", Offset = "0x4110480", VA = "0x4110480", Slot = "54")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x4110490", Offset = "0x4110490", VA = "0x4110490", Slot = "55")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x4110510", Offset = "0x4110510", VA = "0x4110510")]
	[IteratorStateMachine(typeof(_003CWaitAndLoad_003Ed__2))]
	protected IEnumerator WaitAndLoad()
	{
		return null;
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x41105A0", Offset = "0x41105A0", VA = "0x41105A0", Slot = "56")]
	public virtual bool IsFinishedLoading()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x4110640", Offset = "0x4110640", VA = "0x4110640", Slot = "57")]
	protected virtual void OnFinishLoading()
	{
	}

	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x4110650", Offset = "0x4110650", VA = "0x4110650")]
	public BaseGameManager()
	{
	}
}
