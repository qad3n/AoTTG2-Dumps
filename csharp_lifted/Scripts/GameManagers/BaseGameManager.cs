// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.BaseGameManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameManagers/BaseGameManager.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/BaseGameManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
				// Lifted from source/cpp/GameManagers/BaseGameManager.c (GameManagers.BaseGameManager.<WaitAndLoad>d__2$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
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
				// Lifted from source/cpp/GameManagers/BaseGameManager.c (GameManagers.BaseGameManager.<WaitAndLoad>d__2$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6001572")]
		[Address(RVA = "0x58251D0", Offset = "0x58241D0", VA = "0x58251D0")]
		[DebuggerHidden]
		public _003CWaitAndLoad_003Ed__2(int _003C_003E1__state)
		{
			// Lifted from source/cpp/GameManagers/BaseGameManager.c (GameManagers.BaseGameManager.<WaitAndLoad>d__2$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6001573")]
		[Address(RVA = "0x58252A0", Offset = "0x58242A0", VA = "0x58252A0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/GameManagers/BaseGameManager.c (GameManagers.BaseGameManager.<WaitAndLoad>d__2$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6001574")]
		[Address(RVA = "0x58252B0", Offset = "0x58242B0", VA = "0x58252B0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/GameManagers/BaseGameManager.c (GameManagers.BaseGameManager.<WaitAndLoad>d__2$$MoveNext): clean
			BaseGameManager pGVar1;
			BaseCamera pCVar2;
			bool bVar3;

			if ((uint)this.__1__state < 2) {
				pGVar1 = this.__4__this;
				this.__1__state = -1;
				if (pGVar1 == null) {
		label_059253a1: ;
					throw new NullReferenceException();
				}
				bVar3 = pGVar1.IsFinishedLoading();
				if (bVar3) {
					pGVar1.OnFinishLoading();
					pCVar2 = SceneLoader.CurrentCamera;
					if (pCVar2 == null) goto label_059253a1;
					pCVar2.OnFinishLoading();
					bVar3 = false;
					WeatherManager.OnFinishLoading();
				}
				else {
					this.__2__current = null;
					this.__1__state = 1;
					bVar3 = true;
				}
			}
			else {
				bVar3 = false;
			}
			return bVar3;
		}

		[Token(Token = "0x6001576")]
		[Address(RVA = "0x58253C0", Offset = "0x58243C0", VA = "0x58253C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/GameManagers/BaseGameManager.c (GameManagers.BaseGameManager.<WaitAndLoad>d__2$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_GameManagers_BaseGameManager_WaitAndLoad_d__2_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x600156C")]
	[Address(RVA = "0x58250E0", Offset = "0x58240E0", VA = "0x58250E0", Slot = "54")]
	protected virtual void Awake()
	{
		// Lifted from source/cpp/GameManagers/BaseGameManager.c (GameManagers.BaseGameManager$$Awake): clean
		return;
	}

	[Token(Token = "0x600156D")]
	[Address(RVA = "0x58250F0", Offset = "0x58240F0", VA = "0x58250F0", Slot = "55")]
	protected virtual void Start()
	{
		// Lifted from source/cpp/GameManagers/BaseGameManager.c (GameManagers.BaseGameManager$$Start): 1 lines keep C-only constructs
		BaseGameManager.d__2<WaitAndLoad> __this_00;

		__this_00 = il2cpp_codegen_object_new(typeof(BaseGameManager.d__2<WaitAndLoad>)) ;
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		this.StartCoroutine((IEnumerator)__this_00);
		return;
	}

	[Token(Token = "0x600156E")]
	[Address(RVA = "0x5825160", Offset = "0x5824160", VA = "0x5825160")]
	[IteratorStateMachine(typeof(_003CWaitAndLoad_003Ed__2))]
	protected IEnumerator WaitAndLoad()
	{
		// Lifted from source/cpp/GameManagers/BaseGameManager.c (GameManagers.BaseGameManager$$WaitAndLoad): 1 lines keep C-only constructs
		BaseGameManager.d__2<WaitAndLoad> __this_00;

		__this_00 = il2cpp_codegen_object_new(typeof(BaseGameManager.d__2<WaitAndLoad>)) ;
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600156F")]
	[Address(RVA = "0x58251F0", Offset = "0x58241F0", VA = "0x58251F0", Slot = "56")]
	public virtual bool IsFinishedLoading()
	{
		// Lifted from source/cpp/GameManagers/BaseGameManager.c (GameManagers.BaseGameManager$$IsFinishedLoading): clean
		bool addonsLoaded;
		bool bVar1;

		bVar1 = CustomLogicManager.LogicLoaded;
		addonsLoaded = CustomLogicManager.AddonsLoaded;
		bVar1 = ContentLoadingState.IsFinished(bVar1, addonsLoaded, MapManager.MapLoaded);
		return bVar1;
	}

	[Token(Token = "0x6001570")]
	[Address(RVA = "0x5825280", Offset = "0x5824280", VA = "0x5825280", Slot = "57")]
	protected virtual void OnFinishLoading()
	{
		// Lifted from source/cpp/GameManagers/BaseGameManager.c (GameManagers.BaseGameManager$$OnFinishLoading): clean
		return;
	}

	[Token(Token = "0x6001571")]
	[Address(RVA = "0x5825290", Offset = "0x5824290", VA = "0x5825290")]
	public BaseGameManager()
	{
		// Lifted from source/cpp/GameManagers/BaseGameManager.c (GameManagers.BaseGameManager$$.ctor): clean
		base();
		return;
	}
}
