// ==================== AoTTG2 cross-reference ====================
// Type: Events.EventManager
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000713")]
internal class EventManager : MonoBehaviour
{
	[Token(Token = "0x2000714")]
	[CompilerGenerated]
	private sealed class _003CSecondTick_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400222B")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400222C")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000D92")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60045DA")]
			[Address(RVA = "0x4380670", Offset = "0x4380670", VA = "0x4380670", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D93")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60045DC")]
			[Address(RVA = "0x43806C0", Offset = "0x43806C0", VA = "0x43806C0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60045D7")]
		[Address(RVA = "0x4380560", Offset = "0x4380560", VA = "0x4380560")]
		[DebuggerHidden]
		public _003CSecondTick_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60045D8")]
		[Address(RVA = "0x4380590", Offset = "0x4380590", VA = "0x4380590", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60045D9")]
		[Address(RVA = "0x43805A0", Offset = "0x43805A0", VA = "0x43805A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60045DB")]
		[Address(RVA = "0x4380680", Offset = "0x4380680", VA = "0x4380680", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002226")]
	[FieldOffset(Offset = "0x0")]
	private static EventManager _instance;

	[Token(Token = "0x14000005")]
	public static event OnPreLoadScene OnPreLoadScene
	{
		[Token(Token = "0x60045C9")]
		[Address(RVA = "0x437FD40", Offset = "0x437FD40", VA = "0x437FD40")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60045CA")]
		[Address(RVA = "0x437FE00", Offset = "0x437FE00", VA = "0x437FE00")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000006")]
	public static event OnLoadScene OnLoadScene
	{
		[Token(Token = "0x60045CB")]
		[Address(RVA = "0x437FEC0", Offset = "0x437FEC0", VA = "0x437FEC0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60045CC")]
		[Address(RVA = "0x437FF80", Offset = "0x437FF80", VA = "0x437FF80")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000007")]
	public static event OnFinishInit OnFinishInit
	{
		[Token(Token = "0x60045CD")]
		[Address(RVA = "0x4380040", Offset = "0x4380040", VA = "0x4380040")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60045CE")]
		[Address(RVA = "0x4380100", Offset = "0x4380100", VA = "0x4380100")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000008")]
	public static event OnSecondTick OnSecondTick
	{
		[Token(Token = "0x60045CF")]
		[Address(RVA = "0x43801C0", Offset = "0x43801C0", VA = "0x43801C0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60045D0")]
		[Address(RVA = "0x4380280", Offset = "0x4380280", VA = "0x4380280")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60045D1")]
	[Address(RVA = "0x4380340", Offset = "0x4380340", VA = "0x4380340")]
	public static void Init()
	{
	}

	[Token(Token = "0x60045D2")]
	[Address(RVA = "0x4380470", Offset = "0x4380470", VA = "0x4380470")]
	public static void InvokePreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x60045D3")]
	[Address(RVA = "0x43804C0", Offset = "0x43804C0", VA = "0x43804C0")]
	public static void InvokeLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x60045D4")]
	[Address(RVA = "0x4380510", Offset = "0x4380510", VA = "0x4380510")]
	public static void InvokeFinishInit()
	{
	}

	[Token(Token = "0x60045D5")]
	[Address(RVA = "0x4380420", Offset = "0x4380420", VA = "0x4380420")]
	[IteratorStateMachine(typeof(_003CSecondTick_003Ed__17))]
	private IEnumerator SecondTick()
	{
		return null;
	}

	[Token(Token = "0x60045D6")]
	[Address(RVA = "0x4380580", Offset = "0x4380580", VA = "0x4380580")]
	public EventManager()
	{
	}
}
