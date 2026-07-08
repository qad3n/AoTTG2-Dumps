using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ApplicationManagers;
using Il2CppDummyDll;
using UnityEngine;

namespace Events;

[Token(Token = "0x20006C5")]
internal class EventManager : MonoBehaviour
{
	[Token(Token = "0x20006C6")]
	[CompilerGenerated]
	private sealed class _003CSecondTick_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40020CE")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40020CF")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000D18")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004372")]
			[Address(RVA = "0x404D660", Offset = "0x404D660", VA = "0x404D660", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D19")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004374")]
			[Address(RVA = "0x404D6B0", Offset = "0x404D6B0", VA = "0x404D6B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600436F")]
		[Address(RVA = "0x404D550", Offset = "0x404D550", VA = "0x404D550")]
		[DebuggerHidden]
		public _003CSecondTick_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004370")]
		[Address(RVA = "0x404D580", Offset = "0x404D580", VA = "0x404D580", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004371")]
		[Address(RVA = "0x404D590", Offset = "0x404D590", VA = "0x404D590", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004373")]
		[Address(RVA = "0x404D670", Offset = "0x404D670", VA = "0x404D670", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40020C9")]
	[FieldOffset(Offset = "0x0")]
	private static EventManager _instance;

	[Token(Token = "0x14000004")]
	public static event OnPreLoadScene OnPreLoadScene
	{
		[Token(Token = "0x6004361")]
		[Address(RVA = "0x404CD30", Offset = "0x404CD30", VA = "0x404CD30")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6004362")]
		[Address(RVA = "0x404CDF0", Offset = "0x404CDF0", VA = "0x404CDF0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000005")]
	public static event OnLoadScene OnLoadScene
	{
		[Token(Token = "0x6004363")]
		[Address(RVA = "0x404CEB0", Offset = "0x404CEB0", VA = "0x404CEB0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6004364")]
		[Address(RVA = "0x404CF70", Offset = "0x404CF70", VA = "0x404CF70")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000006")]
	public static event OnFinishInit OnFinishInit
	{
		[Token(Token = "0x6004365")]
		[Address(RVA = "0x404D030", Offset = "0x404D030", VA = "0x404D030")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6004366")]
		[Address(RVA = "0x404D0F0", Offset = "0x404D0F0", VA = "0x404D0F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000007")]
	public static event OnSecondTick OnSecondTick
	{
		[Token(Token = "0x6004367")]
		[Address(RVA = "0x404D1B0", Offset = "0x404D1B0", VA = "0x404D1B0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6004368")]
		[Address(RVA = "0x404D270", Offset = "0x404D270", VA = "0x404D270")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6004369")]
	[Address(RVA = "0x404D330", Offset = "0x404D330", VA = "0x404D330")]
	public static void Init()
	{
	}

	[Token(Token = "0x600436A")]
	[Address(RVA = "0x404D460", Offset = "0x404D460", VA = "0x404D460")]
	public static void InvokePreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x600436B")]
	[Address(RVA = "0x404D4B0", Offset = "0x404D4B0", VA = "0x404D4B0")]
	public static void InvokeLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x600436C")]
	[Address(RVA = "0x404D500", Offset = "0x404D500", VA = "0x404D500")]
	public static void InvokeFinishInit()
	{
	}

	[Token(Token = "0x600436D")]
	[Address(RVA = "0x404D410", Offset = "0x404D410", VA = "0x404D410")]
	[IteratorStateMachine(typeof(_003CSecondTick_003Ed__17))]
	private IEnumerator SecondTick()
	{
		return null;
	}

	[Token(Token = "0x600436E")]
	[Address(RVA = "0x404D570", Offset = "0x404D570", VA = "0x404D570")]
	public EventManager()
	{
	}
}
