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

[Token(Token = "0x20008FC")]
internal class EventManager : MonoBehaviour
{
	[Token(Token = "0x20008FF")]
	[CompilerGenerated]
	private sealed class _003CSecondTick_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002D92")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002D93")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000ED2")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005572")]
			[Address(RVA = "0x5CDAB80", Offset = "0x5CD9B80", VA = "0x5CDAB80", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000ED3")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005574")]
			[Address(RVA = "0x5CDABD0", Offset = "0x5CD9BD0", VA = "0x5CDABD0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600556F")]
		[Address(RVA = "0x5CDA9B0", Offset = "0x5CD99B0", VA = "0x5CDA9B0")]
		[DebuggerHidden]
		public _003CSecondTick_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005570")]
		[Address(RVA = "0x5CDAAA0", Offset = "0x5CD9AA0", VA = "0x5CDAAA0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005571")]
		[Address(RVA = "0x5CDAAB0", Offset = "0x5CD9AB0", VA = "0x5CDAAB0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005573")]
		[Address(RVA = "0x5CDAB90", Offset = "0x5CD9B90", VA = "0x5CDAB90", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002D8B")]
	[FieldOffset(Offset = "0x0")]
	private static EventManager _instance;

	[Token(Token = "0x4002D8C")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	private static OnPreLoadScene m_OnPreLoadScene;

	[Token(Token = "0x4002D8D")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	private static OnLoadScene m_OnLoadScene;

	[Token(Token = "0x4002D8E")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private static OnFinishInit m_OnFinishInit;

	[Token(Token = "0x4002D8F")]
	[FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	private static OnSecondTick m_OnSecondTick;

	[Token(Token = "0x14000008")]
	public static event OnPreLoadScene OnPreLoadScene
	{
		[Token(Token = "0x600555C")]
		[Address(RVA = "0x5CD9F30", Offset = "0x5CD8F30", VA = "0x5CD9F30")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600555D")]
		[Address(RVA = "0x5CD9FE0", Offset = "0x5CD8FE0", VA = "0x5CD9FE0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000009")]
	public static event OnLoadScene OnLoadScene
	{
		[Token(Token = "0x600555E")]
		[Address(RVA = "0x5CDA090", Offset = "0x5CD9090", VA = "0x5CDA090")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600555F")]
		[Address(RVA = "0x5CDA140", Offset = "0x5CD9140", VA = "0x5CDA140")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000A")]
	public static event OnFinishInit OnFinishInit
	{
		[Token(Token = "0x6005560")]
		[Address(RVA = "0x5CDA1F0", Offset = "0x5CD91F0", VA = "0x5CDA1F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6005561")]
		[Address(RVA = "0x5CDA2A0", Offset = "0x5CD92A0", VA = "0x5CDA2A0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000B")]
	public static event OnSecondTick OnSecondTick
	{
		[Token(Token = "0x6005562")]
		[Address(RVA = "0x5CDA350", Offset = "0x5CD9350", VA = "0x5CDA350")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6005563")]
		[Address(RVA = "0x5CDA400", Offset = "0x5CD9400", VA = "0x5CDA400")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6005564")]
	[Address(RVA = "0x5CDA4B0", Offset = "0x5CD94B0", VA = "0x5CDA4B0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6005565")]
	[Address(RVA = "0x5CDA5E0", Offset = "0x5CD95E0", VA = "0x5CDA5E0")]
	public static void InvokePreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6005566")]
	[Address(RVA = "0x5CDA890", Offset = "0x5CD9890", VA = "0x5CDA890")]
	public static void InvokeLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6005567")]
	[Address(RVA = "0x5CDA6B0", Offset = "0x5CD96B0", VA = "0x5CDA6B0")]
	private static void InvokeEach(Delegate handlers, Action<Delegate> invoke)
	{
	}

	[Token(Token = "0x6005568")]
	[Address(RVA = "0x5CDA960", Offset = "0x5CD9960", VA = "0x5CDA960")]
	public static void InvokeFinishInit()
	{
	}

	[Token(Token = "0x6005569")]
	[Address(RVA = "0x5CDA590", Offset = "0x5CD9590", VA = "0x5CDA590")]
	[IteratorStateMachine(typeof(_003CSecondTick_003Ed__18))]
	private IEnumerator SecondTick()
	{
		return null;
	}

	[Token(Token = "0x600556A")]
	[Address(RVA = "0x5CDA9D0", Offset = "0x5CD99D0", VA = "0x5CDA9D0")]
	public EventManager()
	{
	}
}
