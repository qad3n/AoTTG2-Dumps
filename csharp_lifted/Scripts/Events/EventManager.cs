// ==================== AoTTG2 cross-reference ====================
// Type: Events.EventManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Events/EventManager.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/EventManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
				// Lifted from source/cpp/Events/EventManager.c (Events.EventManager.<SecondTick>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
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
				// Lifted from source/cpp/Events/EventManager.c (Events.EventManager.<SecondTick>d__18$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600556F")]
		[Address(RVA = "0x5CDA9B0", Offset = "0x5CD99B0", VA = "0x5CDA9B0")]
		[DebuggerHidden]
		public _003CSecondTick_003Ed__18(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Events/EventManager.c (Events.EventManager.<SecondTick>d__18$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6005570")]
		[Address(RVA = "0x5CDAAA0", Offset = "0x5CD9AA0", VA = "0x5CDAAA0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Events/EventManager.c (Events.EventManager.<SecondTick>d__18$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6005571")]
		[Address(RVA = "0x5CDAAB0", Offset = "0x5CD9AB0", VA = "0x5CDAAB0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Events/EventManager.c (Events.EventManager.<SecondTick>d__18$$MoveNext): clean
			int iVar1;
			OnSecondTick pEVar2;
			WaitForSeconds __this_00;

			iVar1 = this.__1__state;
			if (iVar1 == 1) {
				this.__1__state = -1;
				pEVar2 = EventManager.OnSecondTick;
				if (pEVar2 != null) {
					(*(code)pEVar2.invoke_impl)(pEVar2.method_code);
				}
			}
			else {
				if (iVar1 != 0) {
					return false;
				}
				this.__1__state = -1;
			}
			__this_00 = new WaitForSeconds(1.0);
			this.__2__current = (object)__this_00;
			this.__1__state = 1;
			return true;
		}

		[Token(Token = "0x6005573")]
		[Address(RVA = "0x5CDAB90", Offset = "0x5CD9B90", VA = "0x5CDAB90", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Events/EventManager.c (Events.EventManager.<SecondTick>d__18$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Events_EventManager_SecondTick_d__18_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
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
			// Lifted from source/cpp/Events/EventManager.c (Events.EventManager$$add_OnPreLoadScene): 2 lines keep C-only constructs
			OnPreLoadScene pEVar1;
			Delegate value_00;
			OnPreLoadScene a;
			bool bVar2;

			a = EventManager.OnPreLoadScene;
			while(true) {
				value_00 = Delegate.Combine((Delegate)a, (Delegate)value);
				if ((value_00 != null) &&((OnPreLoadScene)value_00.klass != typeof(OnPreLoadScene))) break;
				pEVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&EventManager.OnPreLoadScene, value_00, a);
				bVar2 = pEVar1 == a;
				a = pEVar1;
				if (bVar2) {
					return;
				}
			}
			throw new InvalidCastException();
		}
		[Token(Token = "0x600555D")]
		[Address(RVA = "0x5CD9FE0", Offset = "0x5CD8FE0", VA = "0x5CD9FE0")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/Events/EventManager.c (Events.EventManager$$remove_OnPreLoadScene): 2 lines keep C-only constructs
			OnPreLoadScene pEVar1;
			Delegate value_00;
			OnPreLoadScene source;
			bool bVar2;

			source = EventManager.OnPreLoadScene;
			while(true) {
				value_00 = Delegate.Remove((Delegate)source, (Delegate)value);
				if ((value_00 != null) &&((OnPreLoadScene)value_00.klass != typeof(OnPreLoadScene))) break;
				pEVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&EventManager.OnPreLoadScene, value_00, source);
				bVar2 = pEVar1 == source;
				source = pEVar1;
				if (bVar2) {
					return;
				}
			}
			throw new InvalidCastException();
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
			// Lifted from source/cpp/Events/EventManager.c (Events.EventManager$$add_OnLoadScene): 2 lines keep C-only constructs
			OnLoadScene pEVar1;
			Delegate value_00;
			OnLoadScene a;
			bool bVar2;

			a = EventManager.OnLoadScene;
			while(true) {
				value_00 = Delegate.Combine((Delegate)a, (Delegate)value);
				if ((value_00 != null) &&((OnLoadScene)value_00.klass != typeof(OnLoadScene))) break;
				pEVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&EventManager.OnLoadScene, value_00, a);
				bVar2 = pEVar1 == a;
				a = pEVar1;
				if (bVar2) {
					return;
				}
			}
			throw new InvalidCastException();
		}
		[Token(Token = "0x600555F")]
		[Address(RVA = "0x5CDA140", Offset = "0x5CD9140", VA = "0x5CDA140")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/Events/EventManager.c (Events.EventManager$$remove_OnLoadScene): 2 lines keep C-only constructs
			OnLoadScene pEVar1;
			Delegate value_00;
			OnLoadScene source;
			bool bVar2;

			source = EventManager.OnLoadScene;
			while(true) {
				value_00 = Delegate.Remove((Delegate)source, (Delegate)value);
				if ((value_00 != null) &&((OnLoadScene)value_00.klass != typeof(OnLoadScene))) break;
				pEVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&EventManager.OnLoadScene, value_00, source);
				bVar2 = pEVar1 == source;
				source = pEVar1;
				if (bVar2) {
					return;
				}
			}
			throw new InvalidCastException();
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
			// Lifted from source/cpp/Events/EventManager.c (Events.EventManager$$add_OnFinishInit): 2 lines keep C-only constructs
			OnFinishInit pEVar1;
			Delegate value_00;
			OnFinishInit a;
			bool bVar2;

			a = EventManager.OnFinishInit;
			while(true) {
				value_00 = Delegate.Combine((Delegate)a, (Delegate)value);
				if ((value_00 != null) &&((OnFinishInit)value_00.klass != typeof(OnFinishInit))) break;
				pEVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&EventManager.OnFinishInit, value_00, a);
				bVar2 = pEVar1 == a;
				a = pEVar1;
				if (bVar2) {
					return;
				}
			}
			throw new InvalidCastException();
		}
		[Token(Token = "0x6005561")]
		[Address(RVA = "0x5CDA2A0", Offset = "0x5CD92A0", VA = "0x5CDA2A0")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/Events/EventManager.c (Events.EventManager$$remove_OnFinishInit): 2 lines keep C-only constructs
			OnFinishInit pEVar1;
			Delegate value_00;
			OnFinishInit source;
			bool bVar2;

			source = EventManager.OnFinishInit;
			while(true) {
				value_00 = Delegate.Remove((Delegate)source, (Delegate)value);
				if ((value_00 != null) &&((OnFinishInit)value_00.klass != typeof(OnFinishInit))) break;
				pEVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&EventManager.OnFinishInit, value_00, source);
				bVar2 = pEVar1 == source;
				source = pEVar1;
				if (bVar2) {
					return;
				}
			}
			throw new InvalidCastException();
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
			// Lifted from source/cpp/Events/EventManager.c (Events.EventManager$$add_OnSecondTick): 2 lines keep C-only constructs
			OnSecondTick pEVar1;
			Delegate value_00;
			OnSecondTick a;
			bool bVar2;

			a = EventManager.OnSecondTick;
			while(true) {
				value_00 = Delegate.Combine((Delegate)a, (Delegate)value);
				if ((value_00 != null) &&((OnSecondTick)value_00.klass != typeof(OnSecondTick))) break;
				pEVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&EventManager.OnSecondTick, value_00, a);
				bVar2 = pEVar1 == a;
				a = pEVar1;
				if (bVar2) {
					return;
				}
			}
			throw new InvalidCastException();
		}
		[Token(Token = "0x6005563")]
		[Address(RVA = "0x5CDA400", Offset = "0x5CD9400", VA = "0x5CDA400")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/Events/EventManager.c (Events.EventManager$$remove_OnSecondTick): 2 lines keep C-only constructs
			OnSecondTick pEVar1;
			Delegate value_00;
			OnSecondTick source;
			bool bVar2;

			source = EventManager.OnSecondTick;
			while(true) {
				value_00 = Delegate.Remove((Delegate)source, (Delegate)value);
				if ((value_00 != null) &&((OnSecondTick)value_00.klass != typeof(OnSecondTick))) break;
				pEVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&EventManager.OnSecondTick, value_00, source);
				bVar2 = pEVar1 == source;
				source = pEVar1;
				if (bVar2) {
					return;
				}
			}
			throw new InvalidCastException();
		}
	}

	[Token(Token = "0x6005564")]
	[Address(RVA = "0x5CDA4B0", Offset = "0x5CD94B0", VA = "0x5CDA4B0")]
	public static void Init()
	{
		// Lifted from source/cpp/Events/EventManager.c (Events.EventManager$$Init): clean
		EventManager pEVar1;
		EventManager.d__18<SecondTick> __this;

		pEVar1 = SingletonFactory.CreateSingleton<EventManager>((object)EventManager._instance);
		EventManager._instance = pEVar1;
		pEVar1 = EventManager._instance;
		if (pEVar1 == null) {
			throw new NullReferenceException();
		}
		__this = new EventManager.d__18<SecondTick>();
		__this.__1__state = 0;
		pEVar1.StartCoroutine((IEnumerator)__this);
		return;
	}

	[Token(Token = "0x6005565")]
	[Address(RVA = "0x5CDA5E0", Offset = "0x5CD95E0", VA = "0x5CDA5E0")]
	public static void InvokePreLoadScene(SceneName sceneName)
	{
		// Lifted from source/cpp/Events/EventManager.c (Events.EventManager$$InvokePreLoadScene): 1 lines keep C-only constructs
		OnPreLoadScene handlers;
		EventManager.c__DisplayClass14_0 __this;
		Action<Delegate> __this_00;

		__this = new EventManager.c__DisplayClass14_0();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.sceneName = sceneName;
		handlers = EventManager.OnPreLoadScene;
		__this_00 = new Action<Delegate>((object)__this, (intptr_t)MethodInfo_Events_EventManager_c__DisplayClass14_0_InvokePreLoadScene_b__0);
		EventManager.InvokeEach((Delegate)handlers, __this_00);
		return;
	}

	[Token(Token = "0x6005566")]
	[Address(RVA = "0x5CDA890", Offset = "0x5CD9890", VA = "0x5CDA890")]
	public static void InvokeLoadScene(SceneName sceneName)
	{
		// Lifted from source/cpp/Events/EventManager.c (Events.EventManager$$InvokeLoadScene): 1 lines keep C-only constructs
		OnLoadScene handlers;
		EventManager.c__DisplayClass15_0 __this;
		Action<Delegate> __this_00;

		__this = new EventManager.c__DisplayClass15_0();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.sceneName = sceneName;
		handlers = EventManager.OnLoadScene;
		__this_00 = new Action<Delegate>((object)__this, (intptr_t)MethodInfo_Events_EventManager_c__DisplayClass15_0_InvokeLoadScene_b__0);
		EventManager.InvokeEach((Delegate)handlers, __this_00);
		return;
	}

	[Token(Token = "0x6005567")]
	[Address(RVA = "0x5CDA6B0", Offset = "0x5CD96B0", VA = "0x5CDA6B0")]
	private static void InvokeEach(Delegate handlers, Action<Delegate> invoke)
	{
		// Lifted from source/cpp/Events/EventManager.c (Events.EventManager$$InvokeEach): clean
		uint uVar1;
		int iVar2;
		Delegate[] pSVar3;
		ulong uVar4;
		ulong uVar5;

		if (handlers != null) {
			pSVar3 = handlers.GetInvocationList();
			if (pSVar3 == null) {
				throw new NullReferenceException();
			}
			iVar2 = (int)pSVar3.Length;
			if (invoke == null) {
				if (0 < iVar2) {
					if (iVar2 != 0) {
						throw new NullReferenceException();
					}
	label_05dda844: ;
					throw new IndexOutOfRangeException();
				}
			}
			else if (0 < iVar2) {
				uVar4 = pSVar3.Length & 0xffffffff;
				uVar5 = 0;
				do {
					if (uVar4 <= uVar5) goto label_05dda844;
					(*(code)invoke.invoke_impl)(invoke.method_code,pSVar3[uVar5],invoke.method);
					uVar5 = uVar5 + 1;
					uVar1 = (uint)pSVar3.Length;
					uVar4 = (ulong)uVar1;
				} while ((long)uVar5 < (long)(int)uVar1);
			}
		}
		return;
	}

	[Token(Token = "0x6005568")]
	[Address(RVA = "0x5CDA960", Offset = "0x5CD9960", VA = "0x5CDA960")]
	public static void InvokeFinishInit()
	{
		// Lifted from source/cpp/Events/EventManager.c (Events.EventManager$$InvokeFinishInit): 2 lines keep C-only constructs
		OnFinishInit pEVar1;
		code *vtableDispatch;
		ulong in_RDX;

		pEVar1 = EventManager.OnFinishInit;
		if (pEVar1 == null) {
			return;
		}
		vtableDispatch = (code)pEVar1.invoke_impl;
		(*vtableDispatch)(pEVar1.method_code,pEVar1.method,in_RDX,vtableDispatch);
		return;
	}

	[Token(Token = "0x6005569")]
	[Address(RVA = "0x5CDA590", Offset = "0x5CD9590", VA = "0x5CDA590")]
	[IteratorStateMachine(typeof(_003CSecondTick_003Ed__18))]
	private IEnumerator SecondTick()
	{
		// Lifted from source/cpp/Events/EventManager.c (Events.EventManager$$SecondTick): clean
		EventManager.d__18<SecondTick> __this_00;

		__this_00 = new EventManager.d__18<SecondTick>();
		__this_00.__1__state = 0;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600556A")]
	[Address(RVA = "0x5CDA9D0", Offset = "0x5CD99D0", VA = "0x5CDA9D0")]
	public EventManager()
	{
		// Lifted from source/cpp/Events/EventManager.c (Events.EventManager$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Events/EventManager.c.

	// Events.EventManager.<>c__DisplayClass14_0$$.ctor: clean
	private void c__DisplayClass14_0__ctor()
	{
		base();
		return;
	}

	// Events.EventManager.<>c__DisplayClass15_0$$.ctor: clean
	private void c__DisplayClass15_0__ctor()
	{
		base();
		return;
	}

	// Events.EventManager.<>c__DisplayClass14_0$$<InvokePreLoadScene>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass14_0__InvokePreLoadScene_b__0(Delegate handler)
	{
		if (handler == null) {
			throw new NullReferenceException();
		}
		if ((OnPreLoadScene)handler.klass != typeof(OnPreLoadScene)) {
			throw new InvalidCastException();
		}
		(*(code)handler.invoke_impl)(handler.method_code,this.sceneName,handler.method);
		return;
	}

	// Events.EventManager.<>c__DisplayClass15_0$$<InvokeLoadScene>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass15_0__InvokeLoadScene_b__0(Delegate handler)
	{
		if (handler == null) {
			throw new NullReferenceException();
		}
		if ((OnLoadScene)handler.klass != typeof(OnLoadScene)) {
			throw new InvalidCastException();
		}
		(*(code)handler.invoke_impl)(handler.method_code,this.sceneName,handler.method);
		return;
	}
}
