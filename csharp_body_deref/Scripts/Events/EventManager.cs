// ==================== AoTTG2 cross-reference ====================
// Type: Events.EventManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Events/EventManager.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/EventManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ApplicationManagers;
using Il2CppDummyDll;
using UnityEngine;

namespace Events;

[Token(Token = "0x2000896")]
internal class EventManager : MonoBehaviour
{
	[Token(Token = "0x2000899")]
	[CompilerGenerated]
	private sealed class _003CSecondTick_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002AEA")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002AEB")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000EF3")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005236")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000EF4")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005238")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6005233")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CSecondTick_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005234")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005235")]
		[Address(RVA = "0x2340260", Offset = "0x233E860", VA = "0x182340260", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005237")]
		[Address(RVA = "0x2340330", Offset = "0x233E930", VA = "0x182340330", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002AE3")]
	[FieldOffset(Offset = "0x0")]
	private static EventManager _instance;

	[Token(Token = "0x4002AE4")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	private static OnPreLoadScene m_OnPreLoadScene;

	[Token(Token = "0x4002AE5")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	private static OnLoadScene m_OnLoadScene;

	[Token(Token = "0x4002AE6")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private static OnFinishInit m_OnFinishInit;

	[Token(Token = "0x4002AE7")]
	[FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	private static OnSecondTick m_OnSecondTick;

	[Token(Token = "0x14000005")]
	public static event OnPreLoadScene OnPreLoadScene
	{
		[Token(Token = "0x6005220")]
		[Address(RVA = "0x2337240", Offset = "0x2335840", VA = "0x182337240")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6005221")]
		[Address(RVA = "0x2337540", Offset = "0x2335B40", VA = "0x182337540")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000006")]
	public static event OnLoadScene OnLoadScene
	{
		[Token(Token = "0x6005222")]
		[Address(RVA = "0x2337180", Offset = "0x2335780", VA = "0x182337180")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6005223")]
		[Address(RVA = "0x2337480", Offset = "0x2335A80", VA = "0x182337480")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000007")]
	public static event OnFinishInit OnFinishInit
	{
		[Token(Token = "0x6005224")]
		[Address(RVA = "0x23370C0", Offset = "0x23356C0", VA = "0x1823370C0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6005225")]
		[Address(RVA = "0x23373C0", Offset = "0x23359C0", VA = "0x1823373C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000008")]
	public static event OnSecondTick OnSecondTick
	{
		[Token(Token = "0x6005226")]
		[Address(RVA = "0x2337300", Offset = "0x2335900", VA = "0x182337300")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6005227")]
		[Address(RVA = "0x2337600", Offset = "0x2335C00", VA = "0x182337600")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6005228")]
	[Address(RVA = "0x2336CB0", Offset = "0x23352B0", VA = "0x182336CB0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6005229")]
	[Address(RVA = "0x2336FA0", Offset = "0x23355A0", VA = "0x182336FA0")]
	public static void InvokePreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x600522A")]
	[Address(RVA = "0x2336ED0", Offset = "0x23354D0", VA = "0x182336ED0")]
	public static void InvokeLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x600522B")]
	[Address(RVA = "0x2336DA0", Offset = "0x23353A0", VA = "0x182336DA0")]
	private static void InvokeEach(Delegate handlers, Action<Delegate> invoke)
	{
	}

	[Token(Token = "0x600522C")]
	[Address(RVA = "0x2336E80", Offset = "0x2335480", VA = "0x182336E80")]
	public static void InvokeFinishInit()
	{
	}

	[Token(Token = "0x600522D")]
	[Address(RVA = "0x2337070", Offset = "0x2335670", VA = "0x182337070")]
	[IteratorStateMachine(typeof(_003CSecondTick_003Ed__18))]
	private IEnumerator SecondTick()
	{
		return null;
	}

	[Token(Token = "0x600522E")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public EventManager()
	{
	}
}
