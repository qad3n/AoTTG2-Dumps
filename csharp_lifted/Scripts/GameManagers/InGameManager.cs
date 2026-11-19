// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.InGameManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/GameManagers/InGameManager.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/InGameManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Characters;
using CustomSkins;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using Settings;
using UI;
using UnityEngine;

namespace GameManagers;

[Token(Token = "0x2000387")]
internal class InGameManager : BaseGameManager
{
	[Token(Token = "0x200038A")]
	[CompilerGenerated]
	private sealed class _003CFinishRestartGame_003Ed__58 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40011FA")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40011FB")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x1700026E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60016A3")]
			[Address(RVA = "0x58495D0", Offset = "0x58485D0", VA = "0x58495D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<FinishRestartGame>d__58$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x1700026F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60016A5")]
			[Address(RVA = "0x5849620", Offset = "0x5848620", VA = "0x5849620", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<FinishRestartGame>d__58$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60016A0")]
		[Address(RVA = "0x583DB20", Offset = "0x583CB20", VA = "0x583DB20")]
		[DebuggerHidden]
		public _003CFinishRestartGame_003Ed__58(int _003C_003E1__state)
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<FinishRestartGame>d__58$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60016A1")]
		[Address(RVA = "0x5849400", Offset = "0x5848400", VA = "0x5849400", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<FinishRestartGame>d__58$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60016A2")]
		[Address(RVA = "0x5849410", Offset = "0x5848410", VA = "0x5849410", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<FinishRestartGame>d__58$$MoveNext): clean
			int iVar1;
			PhotonView __this_00;
			UISettings pSVar2;
			BoolSetting pSVar3;
			Object[] parameters;
			WaitForSeconds __this_01;
			object __this_02;
			bool bVar4;

			iVar1 = this.__1__state;
			if (iVar1 - 1U < 2) {
				this.__1__state = -1;
				PhotonNetwork.DestroyAll();
				__this_00 = RPCManager.PhotonView;
				parameters = (Object[])new object[0];
				if (__this_00 == null) {
		label_059495c6: ;
					throw new NullReferenceException();
				}
				__this_00.RPC("RestartGameRPC", 0, parameters);
			}
			else if (iVar1 == 0) {
				this.__1__state = -1;
				pSVar2 = SettingsManager.UISettings;
				if ((pSVar2 == null) ||(pSVar3 = pSVar2.FadeLoadscreen, pSVar3 == null)) goto label_059495c6;
				if (pSVar3._value == false) {
					__this_02 = new WaitForEndOfFrame();
					this.__2__current = __this_02;
					this.__1__state = 2;
				}
				else {
					__this_01 = new WaitForSeconds(0.2);
					this.__2__current = (object)__this_01;
					this.__1__state = 1;
				}
			}
			else {
			}
			return bVar4;
		}

		[Token(Token = "0x60016A4")]
		[Address(RVA = "0x58495E0", Offset = "0x58485E0", VA = "0x58495E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<FinishRestartGame>d__58$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_GameManagers_InGameManager_FinishRestartGame_d__58_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x200038B")]
	[CompilerGenerated]
	private sealed class _003CGetAllCharactersEnumerable_003Ed__48 : IEnumerable<BaseCharacter>, IEnumerable, IEnumerator<BaseCharacter>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40011FC")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40011FD")]
		[FieldOffset(Offset = "0x18")]
		private BaseCharacter _003C_003E2__current;

		[Token(Token = "0x40011FE")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40011FF")]
		[FieldOffset(Offset = "0x28")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4001200")]
		[FieldOffset(Offset = "0x30")]
		private HashSet<Human>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x4001201")]
		[FieldOffset(Offset = "0x48")]
		private HashSet<BasicTitan>.Enumerator _003C_003E7__wrap2;

		[Token(Token = "0x4001202")]
		[FieldOffset(Offset = "0x60")]
		private HashSet<BaseShifter>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x4001203")]
		[FieldOffset(Offset = "0x78")]
		private HashSet<Horse>.Enumerator _003C_003E7__wrap4;

		[Token(Token = "0x17000270")]
		private BaseCharacter System_002ECollections_002EGeneric_002EIEnumerator_003CCharacters_002EBaseCharacter_003E_002ECurrent
		{
			[Token(Token = "0x60016AD")]
			[Address(RVA = "0x5849F20", Offset = "0x5848F20", VA = "0x5849F20", Slot = "6")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<GetAllCharactersEnumerable>d__48$$System.Collections.Generic.IEnumerator<Characters.BaseCharacter>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000271")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60016AF")]
			[Address(RVA = "0x5849F70", Offset = "0x5848F70", VA = "0x5849F70", Slot = "9")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<GetAllCharactersEnumerable>d__48$$System.Collections.IEnumerator.get_Current): clean
				return (object)this.__2__current;
			}
		}

		[Token(Token = "0x60016A6")]
		[Address(RVA = "0x583D260", Offset = "0x583C260", VA = "0x583D260")]
		[DebuggerHidden]
		public _003CGetAllCharactersEnumerable_003Ed__48(int _003C_003E1__state)
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<GetAllCharactersEnumerable>d__48$$.ctor): clean
			int iVar1;

			base();
			this.__1__state = __1__state;
			iVar1 = Environment.CurrentManagedThreadId;
			this.__l__initialThreadId = iVar1;
			return;
		}

		[Token(Token = "0x60016A7")]
		[Address(RVA = "0x5849630", Offset = "0x5848630", VA = "0x5849630", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<GetAllCharactersEnumerable>d__48$$System.IDisposable.Dispose): clean
			switch(this.__1__state) {
			case -6:
			case 4:
				this.__1__state = -1;
				(this.__7__wrap4).Dispose();
				return;
			case -5:
			case 3:
				break;
			case -4:
			case 2:
				this.__1__state = -1;
				(this.__7__wrap2).Dispose();
				return;
			case -3:
			case 1:
				this.__1__state = -1;
				(this.__7__wrap1).Dispose();
				return;
			default: ;
				return;
			}
			this.__1__state = -1;
			(this.__7__wrap3).Dispose();
			return;
		}

		[Token(Token = "0x60016A8")]
		[Address(RVA = "0x5849740", Offset = "0x5848740", VA = "0x5849740", Slot = "8")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<GetAllCharactersEnumerable>d__48$$MoveNext): 8 lines keep C-only constructs
			uint uVar1;
			InGameManager pGVar2;
			Human x;
			BasicTitan x_00;
			BaseShifter x_01;
			HashSet<object> pSVar3;
			Horse x_02;
			InGameManager.d__48<GetAllCharactersEnumerable> pGVar4;
			InGameManager.d__48<GetAllCharactersEnumerable>* ppGVar5;
			InGameManager.d__48<GetAllCharactersEnumerable>* ppGVar6;
			InGameManager.d__48<GetAllCharactersEnumerable>* ppGVar7;
			InGameManager.d__48<GetAllCharactersEnumerable>* ppGVar8;
			bool bVar9;
			InGameManager.d__48<GetAllCharactersEnumerable> local_68;
			System_Collections_Generic_HashSet_Enumerator_T__o local_60;
			byte local_28;

			local_68 = this;
			local_28 = (byte)&local_68;
			uVar1 = this.__1__state;
			if (uVar1 < 5) {
				pGVar2 = this.__4__this;
				ppGVar5 = &local_68;
				ppGVar6 = &local_68;
				ppGVar7 = &local_68;
				ppGVar8 = &local_68;
				switch(uVar1) {
				case 0:
					this.__1__state = -1;
					if (pGVar2 == null) {
						throw new NullReferenceException();
					}
					pSVar3 = (HashSet<object>)pGVar2.Humans;
					if (pSVar3 == null) {
						local_28 = (byte)&local_68;
						throw new NullReferenceException();
					}
					local_28 = (byte)&local_68;
					local_60 = pSVar3.GetEnumerator();
					local_68.__7__wrap1._current = (Human)local_60._current;
					local_68.__7__wrap1._set = local_60._set;
					local_68.__7__wrap1._index = local_60._index;
					local_68.__7__wrap1._version = local_60._version;
					this = local_68;
					ppGVar8 = (InGameManager.d__48<GetAllCharactersEnumerable>*)local_28;
				case 1:
					local_28 = (byte)ppGVar8;
					this.__1__state = -3;
					while (true) {
						bVar9 = (this.__7__wrap1).MoveNext();
						pGVar4 = local_68;
						if (!(bVar9)) break;
						x = local_68.__7__wrap1._current;
						bVar9 = ((Object)x != null);
						if (bVar9) {
							if (x == null) {
								throw new NullReferenceException();
							}
							if (x.Dead == false) {
								local_68.__2__current = (BaseCharacter)x;
								local_68.__1__state = 1;
								return true;
							}
						}
						this = local_68;
					}
					pGVar4.__1__state = -1;
					(pGVar4.__7__wrap1).Dispose() ;
					local_68.__7__wrap1._set = null;
					local_68.__7__wrap1._index = 0;
					local_68.__7__wrap1._version = 0;
					local_68.__7__wrap1._current = null;
					if (pGVar2 == null) {
						throw new NullReferenceException();
					}
					pSVar3 = (HashSet<object>)pGVar2.Titans;
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					local_60 = pSVar3.GetEnumerator() ;
					local_68.__7__wrap2._current = (BasicTitan)local_60._current;
					local_68.__7__wrap2._set = local_60._set;
					local_68.__7__wrap2._index = local_60._index;
					local_68.__7__wrap2._version = local_60._version;
					this = local_68;
					ppGVar7 = (InGameManager.d__48<GetAllCharactersEnumerable>*)local_28;
				case 2:
					local_28 = (byte)ppGVar7;
					this.__1__state = -4;
					while (true) {
						bVar9 = (this.__7__wrap2).MoveNext();
						pGVar4 = local_68;
						if (!(bVar9)) break;
						x_00 = local_68.__7__wrap2._current;
						bVar9 = ((Object)x_00 != null);
						if (bVar9) {
							if (x_00 == null) {
								throw new NullReferenceException();
							}
							if (x_00.Dead == false) {
								local_68.__2__current = (BaseCharacter)x_00;
								local_68.__1__state = 2;
								return true;
							}
						}
						this = local_68;
					}
					pGVar4.__1__state = -1;
					(pGVar4.__7__wrap2).Dispose();
					local_68.__7__wrap2._set = null;
					local_68.__7__wrap2._index = 0;
					local_68.__7__wrap2._version = 0;
					local_68.__7__wrap2._current = null;
					if (pGVar2 == null) {
						throw new NullReferenceException();
					}
					pSVar3 = (HashSet<object>)pGVar2.Shifters;
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					local_60 = pSVar3.GetEnumerator();
					local_68.__7__wrap3._current = (BaseShifter)local_60._current;
					local_68.__7__wrap3._set = local_60._set;
					local_68.__7__wrap3._index = local_60._index;
					local_68.__7__wrap3._version = local_60._version;
					this = local_68;
					ppGVar6 = (InGameManager.d__48<GetAllCharactersEnumerable>*)local_28;
				case 3:
					local_28 = (byte)ppGVar6;
					this.__1__state = -5;
					while (true) {
						bVar9 = (this.__7__wrap3).MoveNext();
						pGVar4 = local_68;
						if (!(bVar9)) break;
						x_01 = local_68.__7__wrap3._current;
						bVar9 = ((Object)x_01 != null);
						if (bVar9) {
							if (x_01 == null) {
								throw new NullReferenceException();
							}
							if (x_01.Dead == false) {
								local_68.__2__current = (BaseCharacter)x_01;
								local_68.__1__state = 3;
								return true;
							}
						}
						this = local_68;
					}
					pGVar4.__1__state = -1;
					(pGVar4.__7__wrap3).Dispose();
					local_68.__7__wrap3._set = null;
					local_68.__7__wrap3._index = 0;
					local_68.__7__wrap3._version = 0;
					local_68.__7__wrap3._current = null;
					if (pGVar2 == null) {
						throw new NullReferenceException();
					}
					pSVar3 = (HashSet<object>)pGVar2.Horses;
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					local_60 = pSVar3.GetEnumerator();
					local_68.__7__wrap4._current = (Horse)local_60._current;
					local_68.__7__wrap4._set = local_60._set;
					local_68.__7__wrap4._index = local_60._index;
					local_68.__7__wrap4._version = local_60._version;
					this = local_68;
					ppGVar5 = (InGameManager.d__48<GetAllCharactersEnumerable>*)local_28;
				case 4:
					local_28 = (byte)ppGVar5;
					this.__1__state = -6;
					while (true) {
						bVar9 = (this.__7__wrap4).MoveNext();
						pGVar4 = local_68;
						if (!(bVar9)) break;
						x_02 = local_68.__7__wrap4._current;
						bVar9 = ((Object)x_02 != null);
						if (bVar9) {
							if (x_02 == null) {
								throw new NullReferenceException();
							}
							if (x_02.Dead == false) {
								local_68.__2__current = (BaseCharacter)x_02;
								local_68.__1__state = 4;
								return true;
							}
						}
						this = local_68;
					}
					pGVar4.__1__state = -1;
					(pGVar4.__7__wrap4).Dispose() ;
					local_68.__7__wrap4._set = null;
					local_68.__7__wrap4._index = 0;
					local_68.__7__wrap4._version = 0;
					local_68.__7__wrap4._current = null;
				}
			}
			return false;
		}

		[Token(Token = "0x60016A9")]
		[Address(RVA = "0x5849E20", Offset = "0x5848E20", VA = "0x5849E20")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<GetAllCharactersEnumerable>d__48$$<>m__Finally1): clean
			this.__1__state = -1;
			(this.__7__wrap1).Dispose();
			return;
		}

		[Token(Token = "0x60016AA")]
		[Address(RVA = "0x5849E60", Offset = "0x5848E60", VA = "0x5849E60")]
		private void _003C_003Em__Finally2()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<GetAllCharactersEnumerable>d__48$$<>m__Finally2): clean
			this.__1__state = -1;
			(this.__7__wrap2).Dispose();
			return;
		}

		[Token(Token = "0x60016AB")]
		[Address(RVA = "0x5849EA0", Offset = "0x5848EA0", VA = "0x5849EA0")]
		private void _003C_003Em__Finally3()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<GetAllCharactersEnumerable>d__48$$<>m__Finally3): clean
			this.__1__state = -1;
			(this.__7__wrap3).Dispose();
			return;
		}

		[Token(Token = "0x60016AC")]
		[Address(RVA = "0x5849EE0", Offset = "0x5848EE0", VA = "0x5849EE0")]
		private void _003C_003Em__Finally4()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<GetAllCharactersEnumerable>d__48$$<>m__Finally4): clean
			this.__1__state = -1;
			(this.__7__wrap4).Dispose();
			return;
		}

		[Token(Token = "0x60016AE")]
		[Address(RVA = "0x5849F30", Offset = "0x5848F30", VA = "0x5849F30", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<GetAllCharactersEnumerable>d__48$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_GameManagers_InGameManager_GetAllCharactersEnumerable_d__48_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}

		[Token(Token = "0x60016B0")]
		[Address(RVA = "0x5849F80", Offset = "0x5848F80", VA = "0x5849F80", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<BaseCharacter> System_002ECollections_002EGeneric_002EIEnumerable_003CCharacters_002EBaseCharacter_003E_002EGetEnumerator()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<GetAllCharactersEnumerable>d__48$$System.Collections.Generic.IEnumerable<Characters.BaseCharacter>.GetEnumerator): clean
			int iVar1;
			int iVar2;
			InGameManager.d__48<GetAllCharactersEnumerable> __this_00;

			if ((this.__1__state == -2) &&(iVar1 = this.__l__initialThreadId, iVar2 = Environment.CurrentManagedThreadId, iVar1 == iVar2)) {
				this.__1__state = 0;
				return (IEnumerator)this;
			}
			__this_00 = new InGameManager.d__48<GetAllCharactersEnumerable>();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
			__this_00.__4__this = this.__4__this;
			return (IEnumerator)__this_00;
		}

		[Token(Token = "0x60016B1")]
		[Address(RVA = "0x584A020", Offset = "0x5849020", VA = "0x584A020", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<GetAllCharactersEnumerable>d__48$$System.Collections.IEnumerable.GetEnumerator): clean
			IEnumerator pSVar1;

			pSVar1 = this.System.Collections.Generic.IEnumerable<Characters.BaseCharacter>.GetEnumerator();
			return pSVar1;
		}
	}

	[Token(Token = "0x200038C")]
	[CompilerGenerated]
	private sealed class _003COnLoadSkyboxRPC_003Ed__126 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001204")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001205")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001206")]
		[FieldOffset(Offset = "0x20")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4001207")]
		[FieldOffset(Offset = "0x28")]
		public string[] urls;

		[Token(Token = "0x17000272")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60016B5")]
			[Address(RVA = "0x584A510", Offset = "0x5849510", VA = "0x584A510", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<OnLoadSkyboxRPC>d__126$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000273")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60016B7")]
			[Address(RVA = "0x584A560", Offset = "0x5849560", VA = "0x584A560", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<OnLoadSkyboxRPC>d__126$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60016B2")]
		[Address(RVA = "0x5848790", Offset = "0x5847790", VA = "0x5848790")]
		[DebuggerHidden]
		public _003COnLoadSkyboxRPC_003Ed__126(int _003C_003E1__state)
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<OnLoadSkyboxRPC>d__126$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60016B3")]
		[Address(RVA = "0x584A030", Offset = "0x5849030", VA = "0x584A030", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<OnLoadSkyboxRPC>d__126$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60016B4")]
		[Address(RVA = "0x584A040", Offset = "0x5849040", VA = "0x584A040", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<OnLoadSkyboxRPC>d__126$$MoveNext): 6 lines keep C-only constructs
			byte bVar1;
			int iVar2;
			uint uVar3;
			InGameManager __this_00;
			CustomSkinSettings pSVar4;
			BaseCustomSkinSettings<SkyboxCustomSkinSet> pSVar5;
			BoolSetting pSVar6;
			InspectorSettingMetadata pSVar7;
			OrderedDictionary pSVar8;
			Dictionary<string, BaseSetting> pSVar9;
			HashSet<string> pSVar10;
			String url;
			SkyboxCustomSkinLoader pCVar11;
			bool bVar12;
			InGameManager.d__127<ReloadSkybox> __this_01;
			BaseSetSetting pSVar13;
			Object[] pSVar14;
			ulong uVar15;
			IEnumerator pSVar16;
			Coroutine pUVar17;
			ulong uVar18;
			MethodInfo* __this_02;

			__this_02 = (MethodInfo*)this;
			if (Il2CppMethodInitialized_07545868 == false) {
				__this_02 = &MethodInfo_Settings_TypedSetting_string_get_Value;
				Il2CppMethodInitialized_07545868 = true;
			}
			iVar2 = this.__1__state;
			__this_00 = this.__4__this;
			if ((iVar2 == 2) || (iVar2 == 1)) {
				this.__1__state = -1;
				if (__this_00 != null) {
					__this_01 = new InGameManager.d__127<ReloadSkybox>();
					__this_01.__1__state = 0;
					__this_00.StartCoroutine((IEnumerator)__this_01);
					return false;
				}
				goto label_0594a4e1;
			}
			if (iVar2 != 0) {
				return false;
			}
			this.__1__state = -1;
			pSVar4 = SettingsManager.CustomSkinSettings;
			if (((pSVar4 == null) ||(pSVar5 = pSVar4.Skybox, pSVar5 == null)) ||(pSVar6 = pSVar5.SkinsEnabled, pSVar6 == null)) goto label_0594a4e1;
			if (pSVar6._value == false) goto label_0594a230;
			pSVar6 = pSVar5.SkinsLocal;
			if (pSVar6 == null) goto label_0594a4e1;
			if (pSVar6._value == false) {
		label_0594a1cf: ;
				if (__this_00 == null) goto label_0594a4e1;
				bVar12 = __this_02.IsValidSkybox(this.urls);
				if (bVar12) {
					pCVar11 = __this_00._skyboxCustomSkinLoader;
					if (pCVar11 != null) {
						pSVar16 = pCVar11.LoadSkinsFromRPC((Object[])this.urls);
						pUVar17 = __this_00.StartCoroutine(pSVar16);
						this.__2__current = (object)pUVar17;
						this.__1__state = 1;
						return true;
					}
					goto label_0594a4e1;
				}
			}
			else if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
				__this_02 = null;
				bVar12 = PhotonNetwork.IsMasterClient;
				if (bVar12) goto label_0594a1cf;
			}
			else {
				__this_02 = null;
				bVar12 = PhotonNetwork.IsMasterClient;
				if (bVar12) goto label_0594a1cf;
			}
		label_0594a230: ;
			pSVar6 = pSVar5.SkinsEnabled;
			if (pSVar6 != null) {
				if (pSVar6._value == false) {
					return false;
				}
				pSVar6 = pSVar5.SkinsLocal;
				if (pSVar6 != null) {
					if (pSVar6._value == false) {
						return false;
					}
					pSVar4 = SettingsManager.CustomSkinSettings;
					if ((pSVar4 != null) &&(pSVar5 = pSVar4.Skybox, pSVar5 != null)) {
						pSVar13 = pSVar5.GetSelectedSet();
						if (pSVar13 == null) {
							new string[6];
							throw new NullReferenceException();
						}
						bVar1 = (typeof(SkyboxCustomSkinSet)._2).typeHierarchyDepth;
						if (((pSVar13.klass._2).typeHierarchyDepth < bVar1) ||((pSVar13.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(SkyboxCustomSkinSet))) {
							throw new InvalidCastException();
						}
						pSVar14 = (Object[])new string[6];
						if (((*(ulong)((sbyte)pSVar13 + 0x48)) != null) && (pSVar14 != null)) {
							if ((int)pSVar14.Length != 0) {
								pSVar14[0] = (((*(Il2CppClass*)((sbyte)pSVar13 + 0x48)))._1).byval_arg.data;
								if ((*(ulong)((sbyte)pSVar13 + 0x50)) == null) goto label_0594a4e1;
								if ((pSVar14.Length & 0xfffffffe) != 0) {
									pSVar14[1] = *(object*)((long)(*(ulong)((sbyte)pSVar13 + 0x50)) + 0x20);
									pSVar7 = (*(ulong)((sbyte)pSVar13 + 0x58));
									if (pSVar7 == null) goto label_0594a4e1;
									if (2 < (uint)pSVar14.Length) {
										pSVar14[2] = (object)pSVar7.Header;
										pSVar8 = (*(ulong)((sbyte)pSVar13 + 0x60));
										if (pSVar8 == null) goto label_0594a4e1;
										if ((pSVar14.Length & 0xfffffffc) != 0) {
											pSVar14[3] = *(object*)&pSVar8._initialCapacity;
											pSVar9 = (*(ulong)((sbyte)pSVar13 + 0x68));
											if (pSVar9 == null) goto label_0594a4e1;
											if (4 < (uint)pSVar14.Length) {
												pSVar14[4] = *(object*)&pSVar9._count;
												pSVar10 = (*(ulong)((sbyte)pSVar13 + 0x70));
												if (pSVar10 == null) goto label_0594a4e1;
												if (5 < (uint)pSVar14.Length) {
													pSVar14[5] = *(object*)&pSVar10._count;
													if (__this_00 == null) goto label_0594a4e1;
													if ((pSVar14.Length & 0xffffffff) != 6) {
														return false;
													}
													if ((int)pSVar14.Length < 1) {
														return false;
													}
													uVar18 = 0;
													uVar15 = 6;
													while (uVar18 < uVar15) {
														url = (String)pSVar14[uVar18];
														bVar12 = TextureDownloader.ValidTextureURL(url, false);
														if (bVar12) {
															pCVar11 = __this_00._skyboxCustomSkinLoader;
															if (pCVar11 != null) {
																pSVar16 = pCVar11.LoadSkinsFromRPC(pSVar14);
																pUVar17 = __this_00.StartCoroutine(pSVar16);
																this.__2__current = (object)pUVar17;
																this.__1__state = 2;
																return true;
															}
															goto label_0594a4e1;
														}
														uVar18 = uVar18 + 1;
														uVar3 = (uint)pSVar14.Length;
														uVar15 = (ulong)uVar3;
														if ((long)(int)uVar3 <= (long)uVar18) {
															return false;
														}
													}
												}
											}
										}
									}
								}
							}
							throw new IndexOutOfRangeException();
						}
					}
				}
			}
		label_0594a4e1: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x60016B6")]
		[Address(RVA = "0x584A520", Offset = "0x5849520", VA = "0x584A520", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<OnLoadSkyboxRPC>d__126$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_GameManagers_InGameManager_OnLoadSkyboxRPC_d__126_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x200038D")]
	[CompilerGenerated]
	private sealed class _003CReloadSkybox_003Ed__127 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001208")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001209")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000274")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60016BB")]
			[Address(RVA = "0x584A740", Offset = "0x5849740", VA = "0x584A740", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<ReloadSkybox>d__127$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000275")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60016BD")]
			[Address(RVA = "0x584A790", Offset = "0x5849790", VA = "0x584A790", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<ReloadSkybox>d__127$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60016B8")]
		[Address(RVA = "0x5848800", Offset = "0x5847800", VA = "0x5848800")]
		[DebuggerHidden]
		public _003CReloadSkybox_003Ed__127(int _003C_003E1__state)
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<ReloadSkybox>d__127$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60016B9")]
		[Address(RVA = "0x584A570", Offset = "0x5849570", VA = "0x584A570", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<ReloadSkybox>d__127$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60016BA")]
		[Address(RVA = "0x584A580", Offset = "0x5849580", VA = "0x584A580", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<ReloadSkybox>d__127$$MoveNext): 1 lines keep C-only constructs
			byte bVar1;
			int iVar2;
			BaseCamera pCVar3;
			Material value;
			Skybox pUVar4;
			bool bVar5;
			Material x;
			WaitForSeconds __this_00;

			iVar2 = this.__1__state;
			if (iVar2 == 0) {
				this.__1__state = -1;
				__this_00 = new WaitForSeconds(0.5);
				this.__2__current = (object)__this_00;
				this.__1__state = 1;
			}
			else if (iVar2 == 1) {
				this.__1__state = -1;
				pCVar3 = SceneLoader.CurrentCamera;
				if (pCVar3 != null) {
					bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
					if (((pCVar3.klass._2).typeHierarchyDepth < bVar1) ||((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera)) ) {
						throw new InvalidCastException();
					}
				}
				value = SkyboxCustomSkinLoader.SkyboxMaterial;
				bVar5 = ((Object)value != null);
				if (bVar5) {
					if ((pCVar3 == null) ||(pUVar4 = pCVar3.Skybox, pUVar4 == null)) {
		label_0594a72f: ;
						throw new NullReferenceException();
					}
					x = pUVar4.material;
					bVar5 = ((Object)x != (Object)value);
					if (bVar5) {
						pUVar4 = pCVar3.Skybox;
						if (pUVar4 == null) goto label_0594a72f;
						pUVar4.material = value;
					}
				}
			}
			return iVar2 == 0;
		}

		[Token(Token = "0x60016BC")]
		[Address(RVA = "0x584A750", Offset = "0x5849750", VA = "0x584A750", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<ReloadSkybox>d__127$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_GameManagers_InGameManager_ReloadSkybox_d__127_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x200038E")]
	[CompilerGenerated]
	private sealed class _003CRespawnForever_003Ed__77 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400120A")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400120B")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400120C")]
		[FieldOffset(Offset = "0x20")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x400120D")]
		[FieldOffset(Offset = "0x28")]
		public float delay;

		[Token(Token = "0x17000276")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60016C1")]
			[Address(RVA = "0x584A880", Offset = "0x5849880", VA = "0x584A880", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<RespawnForever>d__77$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000277")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60016C3")]
			[Address(RVA = "0x584A8D0", Offset = "0x58498D0", VA = "0x584A8D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<RespawnForever>d__77$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60016BE")]
		[Address(RVA = "0x5841970", Offset = "0x5840970", VA = "0x5841970")]
		[DebuggerHidden]
		public _003CRespawnForever_003Ed__77(int _003C_003E1__state)
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<RespawnForever>d__77$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60016BF")]
		[Address(RVA = "0x584A7A0", Offset = "0x58497A0", VA = "0x584A7A0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<RespawnForever>d__77$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60016C0")]
		[Address(RVA = "0x584A7B0", Offset = "0x58497B0", VA = "0x584A7B0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<RespawnForever>d__77$$MoveNext): clean
			uint uVar1;
			InGameManager __this_00;
			WaitForSeconds __this_01;
			float fVar2;

			uVar1 = this.__1__state;
			if (uVar1 < 2) {
				__this_00 = this.__4__this;
				this.__1__state = -1;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				fVar2 = __this_00.RespawnTimeLeft + -1.0;
				__this_00.RespawnTimeLeft = fVar2;
				if (fVar2 <= 0.0) {
					__this_00.SpawnPlayer(false);
					__this_00.RespawnTimeLeft = this.delay;
				}
				__this_01 = new WaitForSeconds(1.0);
				this.__2__current = (object)__this_01;
				this.__1__state = 1;
			}
			return uVar1 < 2;
		}

		[Token(Token = "0x60016C2")]
		[Address(RVA = "0x584A890", Offset = "0x5849890", VA = "0x584A890", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<RespawnForever>d__77$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_GameManagers_InGameManager_RespawnForever_d__77_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x200038F")]
	[CompilerGenerated]
	private sealed class _003CSpawnAITitansAtCoroutine_003Ed__90 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400120E")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400120F")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001210")]
		[FieldOffset(Offset = "0x20")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4001211")]
		[FieldOffset(Offset = "0x28")]
		public string type;

		[Token(Token = "0x4001212")]
		[FieldOffset(Offset = "0x30")]
		public Vector3 position;

		[Token(Token = "0x4001213")]
		[FieldOffset(Offset = "0x3C")]
		public float rotationY;

		[Token(Token = "0x4001214")]
		[FieldOffset(Offset = "0x40")]
		public int count;

		[Token(Token = "0x4001215")]
		[FieldOffset(Offset = "0x44")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x17000278")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60016C7")]
			[Address(RVA = "0x584AA00", Offset = "0x5849A00", VA = "0x584AA00", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<SpawnAITitansAtCoroutine>d__90$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000279")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60016C9")]
			[Address(RVA = "0x584AA50", Offset = "0x5849A50", VA = "0x584AA50", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<SpawnAITitansAtCoroutine>d__90$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60016C4")]
		[Address(RVA = "0x5844A80", Offset = "0x5843A80", VA = "0x5844A80")]
		[DebuggerHidden]
		public _003CSpawnAITitansAtCoroutine_003Ed__90(int _003C_003E1__state)
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<SpawnAITitansAtCoroutine>d__90$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60016C5")]
		[Address(RVA = "0x584A8E0", Offset = "0x58498E0", VA = "0x584A8E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<SpawnAITitansAtCoroutine>d__90$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60016C6")]
		[Address(RVA = "0x584A8F0", Offset = "0x58498F0", VA = "0x584A8F0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<SpawnAITitansAtCoroutine>d__90$$MoveNext): 2 lines keep C-only constructs
			int iVar1;
			object pIVar2;
			int iVar3;
			WaitForEndOfFrame* __this_00;

			__this_00 = (WaitForEndOfFrame*)this;
			if (g_data_0754586b == false) {
				__this_00 = &typeof(WaitForEndOfFrame);
				g_data_0754586b = true;
			}
			iVar3 = this.__1__state;
			if (iVar3 == 2) {
				this.__1__state = -1;
				iVar3 = this._i_5__2 + 1;
				this._i_5__2 = iVar3;
				if (this.count <= iVar3) {
					return false;
				}
			}
			else {
				if (iVar3 == 1) {
					this.__1__state = -1;
					pIVar2 = new WaitForEndOfFrame();
					this.__2__current = pIVar2;
					iVar1 = 2;
					goto label_0594a9eb;
				}
				if (iVar3 != 0) {
					return false;
				}
				this.__1__state = -1;
				this._i_5__2 = 0;
				if (this.count < 1) {
					return false;
				}
			}
			if (this.__4__this == null) {
				throw new NullReferenceException();
			}
			__this_00.SpawnAITitanAt(this.type, (Vector3)this.position, this.rotationY);
			pIVar2 = new WaitForEndOfFrame();
			this.__2__current = pIVar2;
			iVar1 = 1;
		label_0594a9eb: ;
			this.__1__state = iVar1;
			return true;
		}

		[Token(Token = "0x60016C8")]
		[Address(RVA = "0x584AA10", Offset = "0x5849A10", VA = "0x584AA10", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<SpawnAITitansAtCoroutine>d__90$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_GameManagers_InGameManager_SpawnAITitansAtCoroutine_d__90_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000390")]
	[CompilerGenerated]
	private sealed class _003CSpawnAITitansCoroutine_003Ed__88 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001216")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001217")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001218")]
		[FieldOffset(Offset = "0x20")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4001219")]
		[FieldOffset(Offset = "0x28")]
		public int count;

		[Token(Token = "0x400121A")]
		[FieldOffset(Offset = "0x30")]
		public string type;

		[Token(Token = "0x400121B")]
		[FieldOffset(Offset = "0x38")]
		private IEnumerator<(Vector3 position, Quaternion rotation)> _003C_003E7__wrap1;

		[Token(Token = "0x1700027A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60016CE")]
			[Address(RVA = "0x584B040", Offset = "0x584A040", VA = "0x584B040", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<SpawnAITitansCoroutine>d__88$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x1700027B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60016D0")]
			[Address(RVA = "0x584B090", Offset = "0x584A090", VA = "0x584B090", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<SpawnAITitansCoroutine>d__88$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60016CA")]
		[Address(RVA = "0x58448E0", Offset = "0x58438E0", VA = "0x58448E0")]
		[DebuggerHidden]
		public _003CSpawnAITitansCoroutine_003Ed__88(int _003C_003E1__state)
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<SpawnAITitansCoroutine>d__88$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60016CB")]
		[Address(RVA = "0x584AA60", Offset = "0x5849A60", VA = "0x584AA60", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<SpawnAITitansCoroutine>d__88$$System.IDisposable.Dispose): clean
			object obj;
			uint uVar3;

			uVar3 = this.__1__state + 3;
			if ((uVar3 < 6) && ((0x31U >> (uVar3 & 0x1f) & 1) != 0)) {
				this.__1__state = -1;
				obj = (object)this.__7__wrap1;
				if (obj != null) {
					obj.Dispose();
					return;
				}
			}
			return;
		}

		[Token(Token = "0x60016CC")]
		[Address(RVA = "0x584AB10", Offset = "0x5849B10", VA = "0x584AB10", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<SpawnAITitansCoroutine>d__88$$MoveNext): 6 lines keep C-only constructs
			int iVar1;
			InGameManager __this_00;
			String type;
			InGameManager.d__88<SpawnAITitansCoroutine> pGVar4;
			InGameManager.d__88<SpawnAITitansCoroutine>* ppGVar5;
			bool bVar6;
			object pIVar7;
			int iVar10;
			InGameManager __this_01;
			Vector3 UVar12;
			Vector3 euler;
			Vector3 position;
			InGameManager.d__88<SpawnAITitansCoroutine> pGStack_88;
			float fStack_7c;
			Quaternion UStack_6c;
			byte puStack_50;
			ulong uStack_48;
			ulong uStack_38;
			float fStack_30;
			float fStack_24;
			float fStack_20;

			pGStack_88 = this;
			puStack_50 = (byte)&pGStack_88;
			UStack_6c.y = 0.0;
			UStack_6c.z = 0.0;
			UStack_6c.w = 0.0;
			UStack_6c.x = 0.0;
			iVar1 = this.__1__state;
			__this_00 = this.__4__this;
			ppGVar5 = &pGStack_88;
			if (iVar1 != 2) {
				if (iVar1 == 1) {
					this.__1__state = -3;
					pIVar7 = new WaitForEndOfFrame();
					pGStack_88.__2__current = pIVar7;
					iVar10 = 2;
					goto label_0594aec1;
				}
				if (iVar1 != 0) {
					return false;
				}
				this.__1__state = -1;
				if (__this_00 == null) {
					puStack_50 = (byte)&pGStack_88;
					throw new NullReferenceException();
				}
				puStack_50 = (byte)&pGStack_88;
				pIVar7 = (object)__this_00.GetTitanSpawnPositions(this.count);
				if (pIVar7 == null) {
					throw new NullReferenceException();
				}
				pIVar7 = pIVar7.Dispose();
				pGStack_88.__7__wrap1 =(IEnumerator<ValueTuple<Vector3, Quaternion>>)pIVar7;
				this = pGStack_88;
				ppGVar5 = (InGameManager.d__88<SpawnAITitansCoroutine>*)puStack_50;
			}
			puStack_50 = (byte)ppGVar5;
			this.__1__state = -3;
			pIVar7 = (object)this.__7__wrap1;
			if (pIVar7 == null) {
				throw new NullReferenceException();
			}
			bVar6 = pIVar7.Dispose();
			pGVar4 = pGStack_88;
			if (!bVar6) {
				pGVar4.__1__state = -1;
				pIVar7 = (object)pGVar4.__7__wrap1;
				if (pIVar7 != null) {
					pIVar7.Dispose();
				}
				pGStack_88.__7__wrap1 =null;
				return false;
			}
			pIVar7 = (object)pGStack_88.__7__wrap1;
			if (pIVar7 == null) {
				throw new NullReferenceException();
			}
			uStack_38.Dispose(pIVar7);
			UStack_6c.z = fStack_24;
			UStack_6c.w = fStack_20;
			type = pGStack_88.type;
			uStack_48 = uStack_38;
			fStack_7c = fStack_30;
			UVar12 = Quaternion.Internal_ToEulerRad(ref UStack_6c);
			euler.z = UVar12.z * 57.29578;
			__this_01 = null;
			euler.y = UVar12.y * 57.29578;
			euler.x = UVar12.x * 57.29578;
			UVar12 = Quaternion.Internal_MakePositive(euler);
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			position.z = fStack_7c;
			position.x = (float)(undefined4)uStack_48;
			position.y = (float)uStack_48._4_4_;
			__this_01.SpawnAITitanAt(type, position, UVar12.y);
			pIVar7 = new WaitForEndOfFrame();
			pGStack_88.__2__current = pIVar7;
			iVar10 = 1;
		label_0594aec1: ;
			pGStack_88.__1__state = iVar10;
			return true;
		}

		[Token(Token = "0x60016CD")]
		[Address(RVA = "0x584AFA0", Offset = "0x5849FA0", VA = "0x584AFA0")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<SpawnAITitansCoroutine>d__88$$<>m__Finally1): clean
			object obj;

			this.__1__state = -1;
			obj = (object)this.__7__wrap1;
			if (obj == null) {
				return;
			}
			obj.Dispose();
			return;
		}

		[Token(Token = "0x60016CF")]
		[Address(RVA = "0x584B050", Offset = "0x584A050", VA = "0x584B050", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<SpawnAITitansCoroutine>d__88$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_GameManagers_InGameManager_SpawnAITitansCoroutine_d__88_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000391")]
	[CompilerGenerated]
	private sealed class _003CWaitAndEndGame_003Ed__101 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400121C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400121D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400121E")]
		[FieldOffset(Offset = "0x20")]
		public float time;

		[Token(Token = "0x1700027C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60016D4")]
			[Address(RVA = "0x584B170", Offset = "0x584A170", VA = "0x584B170", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<WaitAndEndGame>d__101$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x1700027D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60016D6")]
			[Address(RVA = "0x584B1C0", Offset = "0x584A1C0", VA = "0x584B1C0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<WaitAndEndGame>d__101$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60016D1")]
		[Address(RVA = "0x5845A30", Offset = "0x5844A30", VA = "0x5845A30")]
		[DebuggerHidden]
		public _003CWaitAndEndGame_003Ed__101(int _003C_003E1__state)
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<WaitAndEndGame>d__101$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60016D2")]
		[Address(RVA = "0x584B0A0", Offset = "0x584A0A0", VA = "0x584B0A0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<WaitAndEndGame>d__101$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60016D3")]
		[Address(RVA = "0x584B0B0", Offset = "0x584A0B0", VA = "0x584B0B0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<WaitAndEndGame>d__101$$MoveNext): clean
			float seconds;
			int iVar1;
			WaitForSeconds __this_00;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				seconds = this.time;
				__this_00 = new WaitForSeconds(seconds);
				this.__2__current = (object)__this_00;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				this.__1__state = -1;
				InGameManager.RestartGame();
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x60016D5")]
		[Address(RVA = "0x584B180", Offset = "0x584A180", VA = "0x584B180", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<WaitAndEndGame>d__101$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_GameManagers_InGameManager_WaitAndEndGame_d__101_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000392")]
	[CompilerGenerated]
	private sealed class _003CWaitAndUnpauseGame_003Ed__56 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400121F")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001220")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001221")]
		[FieldOffset(Offset = "0x20")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4001222")]
		[FieldOffset(Offset = "0x28")]
		private float _003CendTime_003E5__2;

		[Token(Token = "0x1700027E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60016DA")]
			[Address(RVA = "0x584B300", Offset = "0x584A300", VA = "0x584B300", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<WaitAndUnpauseGame>d__56$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x1700027F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60016DC")]
			[Address(RVA = "0x584B350", Offset = "0x584A350", VA = "0x584B350", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<WaitAndUnpauseGame>d__56$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60016D7")]
		[Address(RVA = "0x583D820", Offset = "0x583C820", VA = "0x583D820")]
		[DebuggerHidden]
		public _003CWaitAndUnpauseGame_003Ed__56(int _003C_003E1__state)
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<WaitAndUnpauseGame>d__56$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60016D8")]
		[Address(RVA = "0x584B1D0", Offset = "0x584A1D0", VA = "0x584B1D0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<WaitAndUnpauseGame>d__56$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60016D9")]
		[Address(RVA = "0x584B1E0", Offset = "0x584A1E0", VA = "0x584B1E0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<WaitAndUnpauseGame>d__56$$MoveNext): clean
			int iVar1;
			InGameManager __this_00;
			bool bVar2;
			float fVar3;
			float fVar4;

			iVar1 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar1 == 1) {
				this.__1__state = -1;
				if (__this_00 == null) goto label_0594b2ed;
				fVar4 = __this_00.PauseTimeLeft;
			}
			else {
				if (iVar1 != 0) {
					return false;
				}
				this.__1__state = -1;
				fVar3 = Time.realtimeSinceStartup;
				if (__this_00 == null) {
		label_0594b2ed: ;
					throw new NullReferenceException();
				}
				fVar4 = __this_00.PauseTimeLeft;
				this._endTime_5__2 = fVar3 + fVar4;
			}
			if (0.0 < fVar4) {
				fVar4 = this._endTime_5__2;
				fVar3 = Time.realtimeSinceStartup;
				fVar4 = fVar4 - fVar3;
				if (fVar4 <= 0.0) {
					fVar4 = 0.0;
				}
				__this_00.PauseTimeLeft = fVar4;
				this.__2__current = null;
				this.__1__state = 1;
				return true;
			}
			if (((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar2 = PhotonNetwork.IsMasterClient;
			if (bVar2) {
				__this_00.UnpauseGame();
				return false;
			}
			return false;
		}

		[Token(Token = "0x60016DB")]
		[Address(RVA = "0x584B310", Offset = "0x584A310", VA = "0x584B310", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager.<WaitAndUnpauseGame>d__56$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_GameManagers_InGameManager_WaitAndUnpauseGame_d__56_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x40011CD")]
	[FieldOffset(Offset = "0x0")]
	private static bool _returnToMapEditorOnLeave;

	[Token(Token = "0x40011CE")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] PrewarmEffects;

	[Token(Token = "0x40011CF")]
	[FieldOffset(Offset = "0x10")]
	private static readonly List<string> BlueSpawnTags;

	[Token(Token = "0x40011D0")]
	[FieldOffset(Offset = "0x18")]
	private static readonly List<string> RedSpawnTags;

	[Token(Token = "0x40011D1")]
	[FieldOffset(Offset = "0x20")]
	private static readonly List<string> HumanSpawnTags;

	[Token(Token = "0x40011D2")]
	[FieldOffset(Offset = "0x28")]
	private SkyboxCustomSkinLoader _skyboxCustomSkinLoader;

	[Token(Token = "0x40011D3")]
	[FieldOffset(Offset = "0x30")]
	private GeneralInputSettings _generalInputSettings;

	[Token(Token = "0x40011D4")]
	[FieldOffset(Offset = "0x38")]
	private InGameMenu _inGameMenu;

	[Token(Token = "0x40011D5")]
	[FieldOffset(Offset = "0x40")]
	public HashSet<Human> Humans;

	[Token(Token = "0x40011D6")]
	[FieldOffset(Offset = "0x48")]
	public HashSet<BasicTitan> Titans;

	[Token(Token = "0x40011D7")]
	[FieldOffset(Offset = "0x50")]
	public HashSet<BaseShifter> Shifters;

	[Token(Token = "0x40011D8")]
	[FieldOffset(Offset = "0x58")]
	public HashSet<Horse> Horses;

	[Token(Token = "0x40011D9")]
	private const int MaxSmartTitansPerHuman = 2;

	[Token(Token = "0x40011DA")]
	[FieldOffset(Offset = "0x60")]
	private readonly Dictionary<Human, int> _smartTitanCounts;

	[Token(Token = "0x40011DB")]
	[FieldOffset(Offset = "0x68")]
	public List<PhotonVoiceSync> PhotonVoiceSyncs;

	[Token(Token = "0x40011DC")]
	[FieldOffset(Offset = "0x70")]
	public bool IsEnding;

	[Token(Token = "0x40011DD")]
	[FieldOffset(Offset = "0x74")]
	public float EndTimeLeft;

	[Token(Token = "0x40011DE")]
	[FieldOffset(Offset = "0x78")]
	public GameState State;

	[Token(Token = "0x40011DF")]
	[FieldOffset(Offset = "0x80")]
	public BaseCharacter CurrentCharacter;

	[Token(Token = "0x40011E0")]
	[FieldOffset(Offset = "0x88")]
	private bool _gameSettingsLoaded;

	[Token(Token = "0x40011E1")]
	[FieldOffset(Offset = "0x89")]
	private bool _songPopupPending;

	[Token(Token = "0x40011E2")]
	[FieldOffset(Offset = "0x90")]
	private Coroutine _respawnForever;

	[Token(Token = "0x40011E3")]
	[FieldOffset(Offset = "0x28")]
	public static Dictionary<int, PlayerInfo> AllPlayerInfo;

	[Token(Token = "0x40011E4")]
	[FieldOffset(Offset = "0x30")]
	public static HashSet<int> MuteEmote;

	[Token(Token = "0x40011E5")]
	[FieldOffset(Offset = "0x38")]
	public static HashSet<int> MuteText;

	[Token(Token = "0x40011E6")]
	[FieldOffset(Offset = "0x40")]
	public static HashSet<int> MuteVoiceChat;

	[Token(Token = "0x40011E7")]
	[FieldOffset(Offset = "0x48")]
	public static Dictionary<int, float> VoiceChatVolumeMultiplier;

	[Token(Token = "0x40011E8")]
	[FieldOffset(Offset = "0x50")]
	public static PlayerInfo MyPlayerInfo;

	[Token(Token = "0x40011E9")]
	[FieldOffset(Offset = "0x58")]
	[CompilerGenerated]
	private static Action<int> m_PlayerInfoUpdated;

	[Token(Token = "0x40011EA")]
	private const int MaxPlayerInfoRpcBytes = 16384;

	[Token(Token = "0x40011EB")]
	[FieldOffset(Offset = "0x60")]
	private static bool _needSendPlayerInfo;

	[Token(Token = "0x40011EC")]
	[FieldOffset(Offset = "0x98")]
	public bool HasSpawned;

	[Token(Token = "0x40011ED")]
	[FieldOffset(Offset = "0x99")]
	public bool GlobalPause;

	[Token(Token = "0x40011EE")]
	[FieldOffset(Offset = "0x9A")]
	public bool Restarting;

	[Token(Token = "0x40011F0")]
	[FieldOffset(Offset = "0x9C")]
	public float PauseTimeLeft;

	[Token(Token = "0x40011F1")]
	[FieldOffset(Offset = "0xA0")]
	public float RespawnTimeLeft;

	[Token(Token = "0x40011F2")]
	[FieldOffset(Offset = "0xA8")]
	public HashSet<BaseDetection> Detections;

	[Token(Token = "0x40011F3")]
	[FieldOffset(Offset = "0xB0")]
	private float pingUpdateInterval;

	[Token(Token = "0x40011F4")]
	[FieldOffset(Offset = "0xB4")]
	private float timeSinceLastPingUpdate;

	[Token(Token = "0x1700026D")]
	public bool TitanGoreEnabled
	{
		[Token(Token = "0x6001643")]
		[Address(RVA = "0x583C7A0", Offset = "0x583B7A0", VA = "0x583C7A0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$get_TitanGoreEnabled): clean
			return this._TitanGoreEnabled_k__BackingField;
		}
		[Token(Token = "0x6001644")]
		[Address(RVA = "0x583C7B0", Offset = "0x583B7B0", VA = "0x583C7B0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$set_TitanGoreEnabled): clean
			this._TitanGoreEnabled_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x14000003")]
	public static event Action<int> PlayerInfoUpdated
	{
		[Token(Token = "0x6001641")]
		[Address(RVA = "0x583C5C0", Offset = "0x583B5C0", VA = "0x583C5C0")]
		[CompilerGenerated]
		add
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$add_PlayerInfoUpdated): 1 lines keep C-only constructs
			Action<int> pSVar2;
			Delegate obj;
			object value_00;
			Action<int> a;
			bool bVar3;

			a = InGameManager.PlayerInfoUpdated;
			do {
				obj = Delegate.Combine((Delegate)a, (Delegate)value);
				value_00 = null;
				if (obj != null) {
					value_00 = ((object)obj as Action<int>);
					if (value_00 == null) {
						throw new InvalidCastException();
					}
				}
				pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&InGameManager.PlayerInfoUpdated, value_00, a);
				bVar3 = pSVar2 != a;
				a = pSVar2;
			} while (bVar3);
			return;
		}
		[Token(Token = "0x6001642")]
		[Address(RVA = "0x583C6B0", Offset = "0x583B6B0", VA = "0x583C6B0")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$remove_PlayerInfoUpdated): 1 lines keep C-only constructs
			Action<int> pSVar2;
			Delegate obj;
			object value_00;
			Action<int> source;
			bool bVar3;

			source = InGameManager.PlayerInfoUpdated;
			do {
				obj = Delegate.Remove((Delegate)source, (Delegate)value);
				value_00 = null;
				if (obj != null) {
					value_00 = ((object)obj as Action<int>);
					if (value_00 == null) {
						throw new InvalidCastException();
					}
				}
				pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&InGameManager.PlayerInfoUpdated, value_00, source);
				bVar3 = pSVar2 != source;
				source = pSVar2;
			} while (bVar3);
			return;
		}
	}

	[Token(Token = "0x6001640")]
	[Address(RVA = "0x583C550", Offset = "0x583B550", VA = "0x583C550")]
	public static void StartMapEditorPlaytest()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$StartMapEditorPlaytest): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07545810 == false) {
			Il2CppMethodInitialized_07545810 = true;
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			InGameManager._returnToMapEditorOnLeave = true;
			return;
		}
		*(byte)(typeof(InGameManager)).static_fields = 1;
		return;
	}

	[Token(Token = "0x6001645")]
	[Address(RVA = "0x583C7C0", Offset = "0x583B7C0", VA = "0x583C7C0")]
	public void RegisterCharacter(BaseCharacter character)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$RegisterCharacter): 9 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		BaseCharacter pCVar3;
		HashSet<object> __this_00;
		bool bVar4;
		MethodInfo* ppMVar5;
		HashSet<Horse> __this_01;
		System_Collections_Generic_HashSet_Enumerator_T__o local_48;
		byte local_20;

		if (Il2CppMethodInitialized_07545813 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_BaseShifter_Add) ;
			Il2CppMethodInitialized_07545813 = true;
		}
		local_48._set = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		if (character != null) {
			pCVar3 = character.klass;
			bVar1 = (pCVar3._2).typeHierarchyDepth;
			bVar2 = (typeof(Human)._2).typeHierarchyDepth;
			if ((bVar1 < bVar2) ||((pCVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(Human))) {
				bVar2 = (typeof(BasicTitan)._2).typeHierarchyDepth;
				if ((bVar1 < bVar2) ||((pCVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BasicTitan))) {
					bVar2 = (typeof(BaseShifter)._2).typeHierarchyDepth;
					if ((bVar1 < bVar2) ||((pCVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BaseShifter))) {
						bVar2 = (typeof(Horse)._2).typeHierarchyDepth;
						if ((bVar1 < bVar2) ||((pCVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(Horse))) goto label_0593c98b;
						__this_01 = this.Horses;
						if (__this_01 == null) goto label_0593ca16;
						ppMVar5 = &MethodInfo_System_Collections_Generic_HashSet_Horse_Add;
					}
					else {
						__this_01 = (HashSet<Horse>)this.Shifters;
						if (__this_01 == null) goto label_0593ca16;
						ppMVar5 = &MethodInfo_System_Collections_Generic_HashSet_BaseShifter_Add;
					}
				}
				else {
					__this_01 = (HashSet<Horse>)this.Titans;
					if (__this_01 == null) goto label_0593ca16;
					ppMVar5 = &MethodInfo_System_Collections_Generic_HashSet_BasicTitan_Add;
				}
			}
			else {
				__this_01 = (HashSet<Horse>)this.Humans;
				if (__this_01 == null) goto label_0593ca16;
				ppMVar5 = &MethodInfo_System_Collections_Generic_HashSet_Human_Add;
			}
			__this_01.Add((object)character);
		}
	label_0593c98b: ;
		__this_00 = (HashSet<object>)this.Detections;
		if (__this_00 != null) {
			local_48 = __this_00.GetEnumerator();
			local_20 = (byte)&local_48;
			while(true) {
				bVar4 = local_48.MoveNext();
				if (!bVar4) {
					local_48.Dispose();
					return;
				}
				if ((BaseDetection)local_48._current == null) break;
				local_48._current.OnCharacterSpawned(character);
			}
			throw new NullReferenceException();
		}
	label_0593ca16: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001646")]
	[Address(RVA = "0x583CA80", Offset = "0x583BA80", VA = "0x583CA80")]
	public HashSet<BaseCharacter> GetAllCharacters()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$GetAllCharacters): 15 lines keep C-only constructs
		HashSet<object> pSVar1;
		InGameManager pGVar2;
		Object pUVar3;
		bool bVar4;
		HashSet<BaseCharacter> __this_00;
		byte[] local_c8 = new byte[16];
		Object local_b8;
		InGameManager local_b0;
		byte[] local_a8 = new byte[8];
		Object local_98;
		byte[] local_88 = new byte[8];
		Object local_78;
		byte[] local_68 = new byte[8];
		ulong uStack_60;
		Object local_58;
		byte[] local_48 = new byte[8];
		Object local_38;

		local_88 = (byte[])0x0;
		local_78 = null;
		local_a8 = (byte[])0x0;
		local_98 = null;
		local_48 = (byte[])0x0;
		local_38 = null;
		local_68 = (byte[])0x0;
		uStack_60._0_4_ = 0;
		uStack_60._4_4_ = 0;
		local_58 = null;
		__this_00 = new HashSet<BaseCharacter>();
		pSVar1 = (HashSet<object>)this.Humans;
		if (pSVar1 != null) {
			local_b0 = this;
			local_c8.GetEnumerator(pSVar1);
			local_78 = local_b8;
			local_88 = (byte[])local_c8._0_8_;
			local_c8._0_8_ = null;
			local_c8._8_8_ = local_88;
			if (__this_00 == null) {
				while (true) {
					bVar4 = local_88.MoveNext();
					pUVar3 = local_78;
					if (!(bVar4)) break;
					bVar4 = (pUVar3 != null);
					if (bVar4) {
						if (pUVar3 == null) goto label_0593d017;
						if (*(sbyte)&(*(ulong)((sbyte)pUVar3 + 0x78)) == false) {
							throw new NullReferenceException();
						}
					}
				}
			}
			else {
				while (true) {
					bVar4 = local_88.MoveNext();
					pUVar3 = local_78;
					if (!(bVar4)) break;
					bVar4 = (pUVar3 != null);
					if (bVar4) {
						if (pUVar3 == null) {
	label_0593d017: ;
							throw new NullReferenceException();
						}
						if (*(sbyte)&(*(ulong)((sbyte)pUVar3 + 0x78)) == false) {
							__this_00.Add((object)pUVar3);
						}
					}
				}
			}
			local_88.Dispose();
			pSVar1 = (HashSet<object>)local_b0.Titans;
			if (pSVar1 != null) {
				local_c8.GetEnumerator(pSVar1) ;
				local_98 = local_b8;
				local_a8 = (byte[])local_c8._0_8_;
				local_c8._0_8_ = null;
				local_c8._8_8_ = local_a8;
				if (__this_00 == null) {
					while (true) {
						bVar4 = local_a8.MoveNext();
						pUVar3 = local_98;
						if (!(bVar4)) break;
						bVar4 = (pUVar3 != null);
						if (bVar4) {
							if (pUVar3 == null) goto label_0593d01c;
							if (*(sbyte)&(*(ulong)((sbyte)pUVar3 + 0x78)) == false) {
								throw new NullReferenceException();
							}
						}
					}
				}
				else {
					while (true) {
						bVar4 = local_a8.MoveNext();
						pUVar3 = local_98;
						if (!(bVar4)) break;
						bVar4 = (pUVar3 != null);
						if (bVar4) {
							if (pUVar3 == null) {
	label_0593d01c: ;
								throw new NullReferenceException();
							}
							if (*(sbyte)&(*(ulong)((sbyte)pUVar3 + 0x78)) == false) {
								__this_00.Add((object)pUVar3);
							}
						}
					}
				}
				local_a8.Dispose();
				pGVar2 = local_b0;
				pSVar1 = (HashSet<object>)local_b0.Shifters;
				if (pSVar1 != null) {
					local_c8.GetEnumerator(pSVar1);
					local_38 = local_b8;
					local_48 = (byte[])local_c8._0_8_;
					local_c8._0_8_ = null;
					local_c8._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_48;
					while(true) {
						bVar4 = local_48.MoveNext();
						pUVar3 = local_38;
						if (!bVar4) break;
						bVar4 = (pUVar3 != null);
						if (bVar4) {
							if (pUVar3 == null) {
								throw new NullReferenceException();
							}
							if (*(sbyte)&(*(ulong)((sbyte)pUVar3 + 0x78)) == false) {
								if (__this_00 == null) {
									throw new NullReferenceException();
								}
								__this_00.Add((object)pUVar3);
							}
						}
					}
					local_48.Dispose();
					pSVar1 = (HashSet<object>)pGVar2.Horses;
					if (pSVar1 != null) {
						local_c8.GetEnumerator(pSVar1);
						local_58 = local_b8;
						local_68 = (byte[])local_c8._0_8_;
						uStack_60 = (System_Collections_Generic_HashSet_Enumerator_T__o)local_c8._8_8_;
						local_c8._0_8_ = null;
						local_c8._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_68;
						while(true) {
							do {
								bVar4 = local_68.MoveNext();
								pUVar3 = local_58;
								if (!bVar4) {
									local_68.Dispose();
									return __this_00;
								}
								bVar4 = (pUVar3 != null);
							} while (!bVar4);
							if (pUVar3 == null) break;
							if (*(sbyte)&(*(ulong)((sbyte)pUVar3 + 0x78)) == false) {
								if (__this_00 == null) {
									throw new NullReferenceException();
								}
								__this_00.Add((object)pUVar3);
							}
						}
						throw new NullReferenceException();
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001647")]
	[Address(RVA = "0x583D1F0", Offset = "0x583C1F0", VA = "0x583D1F0")]
	[IteratorStateMachine(typeof(_003CGetAllCharactersEnumerable_003Ed__48))]
	public IEnumerable<BaseCharacter> GetAllCharactersEnumerable()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$GetAllCharactersEnumerable): clean
		int iVar1;
		InGameManager.d__48<GetAllCharactersEnumerable> __this_00;

		__this_00 = new InGameManager.d__48<GetAllCharactersEnumerable>();
		__this_00.__1__state = -2;
		iVar1 = Environment.CurrentManagedThreadId;
		__this_00.__l__initialThreadId = iVar1;
		__this_00.__4__this = this;
		return (IEnumerable<BaseCharacter>)__this_00;
	}

	[Token(Token = "0x6001648")]
	[Address(RVA = "0x583D290", Offset = "0x583C290", VA = "0x583D290")]
	public HashSet<BaseCharacter> GetAllNonAICharacters()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$GetAllNonAICharacters): 4 lines keep C-only constructs
		object @object;
		HashSet<BaseCharacter> source;
		GameManagers_InGameManager___c_StaticFields pGVar1;
		Func<BaseCharacter, bool> __this_00;
		System_Collections_Generic_IEnumerable_TSource__o source_00;
		System_Collections_Generic_HashSet_TSource__o pSVar2;

		source = this.GetAllCharacters();
		if ((typeof(InGameManager.c)._2).cctor_finished_or_no_cctor == 0) {
			pGVar1 = typeof(InGameManager.c).static_fields;
			__this_00 = pGVar1.__9__49_0;
		}
		else {
			pGVar1 = typeof(InGameManager.c).static_fields;
			__this_00 = pGVar1.__9__49_0;
		}
		if (__this_00 == null) {
			if (((typeof(InGameManager.c))._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(InGameManager.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this_00 = new Func<BaseCharacter, bool>(@object, (intptr_t)MethodInfo_GameManagers_InGameManager_c_GetAllNonAICharacters_b__49_0);
			pGVar1 = typeof(InGameManager.c).static_fields;
			pGVar1.__9__49_0 = __this_00;
		}
		source_00 = Enumerable.Where<BaseCharacter>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
		pSVar2 = Enumerable.ToHashSet<BaseCharacter>(source_00);
		return (HashSet<BaseCharacter>)pSVar2;
	}

	[Token(Token = "0x6001649")]
	[Address(RVA = "0x583D3D0", Offset = "0x583C3D0", VA = "0x583D3D0")]
	public void PauseGame()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$PauseGame): clean
		uint uVar1;
		PhotonView __this_00;
		bool bVar2;
		Object[] parameters;

		if (Il2CppMethodInitialized_07545817 == false) {
			Il2CppMethodInitialized_07545817 = true;
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar2 = PhotonNetwork.IsMasterClient;
		}
		else {
			bVar2 = PhotonNetwork.IsMasterClient;
		}
		if ((bVar2) && (this.GlobalPause == false)) {
			__this_00 = RPCManager.PhotonView;
			parameters = (Object[])new object[0];
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.RPC("PauseGameRPC", 0, parameters);
			return;
		}
		return;
	}

	[Token(Token = "0x600164A")]
	[Address(RVA = "0x583D4B0", Offset = "0x583C4B0", VA = "0x583D4B0")]
	public void OnPauseGameRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$OnPauseGameRPC): clean
		bool bVar1;

		if (info.Sender == null) {
			throw new NullReferenceException();
		}
		bVar1 = info.Sender.IsMasterClient;
		if (bVar1) {
			this.GlobalPause = true;
			this.PauseTimeLeft = -1.0;
			Time.timeScale = 0.0;
			return;
		}
		return;
	}

	[Token(Token = "0x600164B")]
	[Address(RVA = "0x583D4F0", Offset = "0x583C4F0", VA = "0x583D4F0")]
	public void UnpauseGame()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$UnpauseGame): clean
		uint uVar1;
		PhotonView __this_00;
		bool bVar2;
		Object[] parameters;

		if (Il2CppMethodInitialized_07545818 == false) {
			Il2CppMethodInitialized_07545818 = true;
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar2 = PhotonNetwork.IsMasterClient;
		}
		else {
			bVar2 = PhotonNetwork.IsMasterClient;
		}
		if ((bVar2) && (this.GlobalPause != false)) {
			__this_00 = RPCManager.PhotonView;
			parameters = (Object[])new object[0];
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.RPC("UnpauseGameRPC", 0, parameters);
			return;
		}
		return;
	}

	[Token(Token = "0x600164C")]
	[Address(RVA = "0x583D5D0", Offset = "0x583C5D0", VA = "0x583D5D0")]
	public void OnUnpauseGameRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$OnUnpauseGameRPC): clean
		bool bVar1;

		if (info.Sender == null) {
			throw new NullReferenceException();
		}
		bVar1 = info.Sender.IsMasterClient;
		if (bVar1) {
			this.GlobalPause = false;
			this.PauseTimeLeft = -1.0;
			Time.timeScale = 1.0;
			return;
		}
		return;
	}

	[Token(Token = "0x600164D")]
	[Address(RVA = "0x583D620", Offset = "0x583C620", VA = "0x583D620")]
	public void StartUnpauseGame()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$StartUnpauseGame): clean
		uint uVar1;
		PhotonView __this_00;
		bool bVar2;
		Object[] parameters;

		if (Il2CppMethodInitialized_07545819 == false) {
			Il2CppMethodInitialized_07545819 = true;
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar2 = PhotonNetwork.IsMasterClient;
		}
		else {
			bVar2 = PhotonNetwork.IsMasterClient;
		}
		if ((bVar2) && (this.GlobalPause != false)) {
			__this_00 = RPCManager.PhotonView;
			parameters = (Object[])new object[0];
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.RPC("StartUnpauseGameRPC", 0, parameters);
			return;
		}
		return;
	}

	[Token(Token = "0x600164E")]
	[Address(RVA = "0x583D700", Offset = "0x583C700", VA = "0x583D700")]
	public void OnStartUnpauseGameRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$OnStartUnpauseGameRPC): clean
		bool bVar1;
		InGameManager.d__56<WaitAndUnpauseGame> __this_00;

		if (info.Sender == null) {
			throw new NullReferenceException();
		}
		bVar1 = info.Sender.IsMasterClient;
		if (bVar1) {
			this.GlobalPause = true;
			this.PauseTimeLeft = 5.0;
			__this_00 = new InGameManager.d__56<WaitAndUnpauseGame>();
			__this_00.__1__state = 0;
			__this_00.__4__this = this;
			this.StartCoroutine((IEnumerator)__this_00);
			return;
		}
		return;
	}

	[Token(Token = "0x600164F")]
	[Address(RVA = "0x583D7B0", Offset = "0x583C7B0", VA = "0x583D7B0")]
	[IteratorStateMachine(typeof(_003CWaitAndUnpauseGame_003Ed__56))]
	private IEnumerator WaitAndUnpauseGame()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$WaitAndUnpauseGame): clean
		InGameManager.d__56<WaitAndUnpauseGame> __this_00;

		__this_00 = new InGameManager.d__56<WaitAndUnpauseGame>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6001650")]
	[Address(RVA = "0x583D840", Offset = "0x583C840", VA = "0x583D840")]
	public static void RestartGame()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$RestartGame): 7 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		BaseGameManager __this;
		PhotonView __this_00;
		UISettings pSVar3;
		BoolSetting pSVar4;
		bool bVar5;
		ulong in_RAX;
		Object[] parameters;
		object pIVar6;
		object pIVar7;
		InGameManager.d__58<FinishRestartGame> __this_01;
		ulong uStack_28;

		uStack_28 = in_RAX;
		if (Il2CppMethodInitialized_0754581b == false) {
			Il2CppMethodInitialized_0754581b = true;
			uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			bVar5 = PhotonNetwork.IsMasterClient;
		}
		else {
			bVar5 = PhotonNetwork.IsMasterClient;
		}
		if (bVar5) {
			__this = SceneLoader.CurrentGameManager;
			if (__this != null) {
				bVar1 = ((typeof(InGameManager))._2).typeHierarchyDepth;
				if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
					throw new InvalidCastException();
				}
			}
			__this_00 = RPCManager.PhotonView;
			parameters = (Object[])new object[1];
			pSVar3 = SettingsManager.UISettings;
			if ((pSVar3 != null) &&(pSVar4 = pSVar3.FadeLoadscreen, pSVar4 != null)) {
				uStack_28 = CONCAT17(pSVar4._value, (undefined7)uStack_28) ^ 0x100000000000000;
				pIVar6 = (object)(((long)&uStack_28 + 7));
				if (parameters != null) {
					if ((pIVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((parameters.obj).klass)._1).element_class), pIVar7 == null)) {
						pIVar6 = new ArrayTypeMismatchException();
						throw pIVar6;
					}
					if ((int)parameters.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					parameters[0] = pIVar6;
					if (__this_00 != null) {
						__this_00.RPC("PreRestartGameRPC", 0, parameters);
						Time.timeScale = 1.0;
						if (__this != null) {
							__this_01 = il2cpp_codegen_object_new(typeof(InGameManager.d__58<FinishRestartGame>)) ;
							__this_01 = new Object();
							__this_01.__1__state = 0;
							__this.StartCoroutine((IEnumerator)__this_01);
							return;
						}
					}
				}
			}
			throw new NullReferenceException();
		}
		return;
	}

	[Token(Token = "0x6001651")]
	[Address(RVA = "0x583DAD0", Offset = "0x583CAD0", VA = "0x583DAD0")]
	[IteratorStateMachine(typeof(_003CFinishRestartGame_003Ed__58))]
	private IEnumerator FinishRestartGame()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$FinishRestartGame): clean
		InGameManager.d__58<FinishRestartGame> __this_00;

		__this_00 = new InGameManager.d__58<FinishRestartGame>();
		__this_00.__1__state = 0;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6001652")]
	[Address(RVA = "0x583DB40", Offset = "0x583CB40", VA = "0x583DB40")]
	public static void OnRestartGameRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$OnRestartGameRPC): 1 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		bool bVar3;

		if (info.Sender == null) {
			throw new NullReferenceException();
		}
		bVar3 = info.Sender.IsMasterClient;
		if (!bVar3) {
			return;
		}
		InGameManager.ResetRoundPlayerProperties();
		if (Il2CppMethodInitialized_07544cc2 == false) {
			Il2CppMethodInitialized_07544cc2 = true;
			uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			cVar1 = PhotonNetwork.offlineMode;
		}
		else {
			cVar1 = *(sbyte)((long)(typeof(PhotonNetwork)).static_fields + 0x30);
		}
		if (cVar1 != false) {
			SceneLoader.LoadScene(2);
			return;
		}
		if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
		}
		ChatManager.AddLine("Master client has restarted the game.", 3, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
		SceneLoader.LoadScene(2);
		return;
	}

	[Token(Token = "0x6001653")]
	[Address(RVA = "0x583E020", Offset = "0x583D020", VA = "0x583E020")]
	public static void OnPreRestartGameRPC(bool immediate, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$OnPreRestartGameRPC): 1 lines keep C-only constructs
		byte bVar1;
		BaseGameManager pGVar2;
		BaseMenu __this;
		LoadingMenu __this_00;
		bool bVar3;
		GameObject __this_01;

		if (info.Sender != null) {
			bVar3 = info.Sender.IsMasterClient;
			if (!bVar3) {
				return;
			}
			pGVar2 = SceneLoader.CurrentGameManager;
			if (pGVar2 != null) {
				bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((pGVar2.klass._2).typeHierarchyDepth < bVar1) ||((pGVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
					throw new InvalidCastException();
				}
				*(byte)((long)&(*(ulong)((sbyte)pGVar2 + 0x98)) + 2) = 1;
				ChatManager.PreserveInputOnRestart = true;
				__this = UIManager.CurrentMenu;
				if (__this != null) {
					__this_01 = __this.gameObject ;
					if (__this_01 != null) {
						__this_01.SetActive(false);
						__this_00 = UIManager.LoadingMenu;
						if (__this_00 != null) {
							__this_00.Show(immediate);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001654")]
	[Address(RVA = "0x583C2D0", Offset = "0x583B2D0", VA = "0x583C2D0")]
	public static void LeaveRoom()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$LeaveRoom): clean
		MultiplayerSettings __this;
		InGameSet pSVar1;
		InGameCharacterSettings pSVar2;
		bool bVar3;
		GameManagers_InGameManager_StaticFields pGVar4;
		int sceneName;

		if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor == 0) {
			pGVar4 = typeof(InGameManager).static_fields;
			sceneName = (uint)pGVar4._returnToMapEditorOnLeave * 2 + 1;
			if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(InGameManager).static_fields;
			}
		}
		else {
			pGVar4 = typeof(InGameManager).static_fields;
			sceneName = (uint)pGVar4._returnToMapEditorOnLeave * 2 + 1;
		}
		pGVar4._returnToMapEditorOnLeave = false;
		ChatManager.PreserveInputOnRestart = false;
		ChatManager.ResetAllPMState();
		InGameManager.ResetPersistentPlayerProperties();
		if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
			bVar3 = PhotonNetwork.IsMasterClient;
			if (!bVar3) goto label_0593c3c8;
	label_0593c3f1: ;
			PhotonNetwork.DestroyAll();
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor != 0) goto label_0593c3d4;
	label_0593c415: ;
			bVar3 = PhotonNetwork.IsConnected;
			if (bVar3) goto label_0593c425;
		}
		else {
			bVar3 = PhotonNetwork.IsMasterClient;
			if (bVar3) goto label_0593c3f1;
	label_0593c3c8: ;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) goto label_0593c415;
	label_0593c3d4: ;
			bVar3 = PhotonNetwork.IsConnected;
			if (bVar3) {
	label_0593c425: ;
				__this = SettingsManager.MultiplayerSettings;
				if (__this == null) goto label_0593c4eb;
				__this.Disconnect();
			}
		}
		pSVar1 = SettingsManager.InGameCurrent;
		if (pSVar1 != null) {
			pSVar1.SetDefault();
			pSVar1 = SettingsManager.InGameUI;
			if (pSVar1 != null) {
				pSVar1.SetDefault();
				pSVar2 = SettingsManager.InGameCharacterSettings;
				if (pSVar2 != null) {
					pSVar2.SetDefault();
					SceneLoader.LoadScene(sceneName);
					MaterialCache.Clear();
					return;
				}
			}
		}
	label_0593c4eb: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001655")]
	[Address(RVA = "0x583E6B0", Offset = "0x583D6B0", VA = "0x583E6B0", Slot = "31")]
	public override void OnLeftRoom()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$OnLeftRoom): clean
		uint uVar1;
		BaseMenu __this_00;
		bool bVar2;
		InGameMenu pUVar3;
		ChatPanel __this_01;

		if (Il2CppMethodInitialized_07545820 == false) {
			Il2CppMethodInitialized_07545820 = true;
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar2 = PhotonNetwork.IsConnected;
		}
		else {
			bVar2 = PhotonNetwork.IsConnected;
		}
		if (!bVar2) {
			return;
		}
		if (((typeof(UIManager))._2).cctor_finished_or_no_cctor == 0) {
			__this_00 = UIManager.CurrentMenu;
		}
		else {
			__this_00 = *(BaseMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if ((__this_00 == null) ||(pUVar3 = __this_00.GetComponent<InGameMenu>(), pUVar3 == null)) {
			__this_01 = null;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			__this_01 = pUVar3.ChatPanel;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar2 = ((Object)__this_01 != null);
		if (bVar2) {
			if (__this_01 == null) {
				throw new NullReferenceException();
			}
			__this_01.ResetPMState();
		}
		InGameManager.LeaveRoom();
		if ((typeof(MainMenuGameManager)._2).cctor_finished_or_no_cctor == 0) {
			MainMenuGameManager.JustLeftRoom = true;
			return;
		}
		MainMenuGameManager.JustLeftRoom = true;
		return;
	}

	[Token(Token = "0x6001656")]
	[Address(RVA = "0x583E870", Offset = "0x583D870", VA = "0x583E870")]
	public static void OnJoinRoom()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$OnJoinRoom): 3 lines keep C-only constructs
		sbyte cVar1;
		MultiplayerSettings __this;
		Room room;
		String pSVar2;
		Object[] pSVar3;
		object pIVar4;
		String str0;

		AnticheatManager.Reset();
		InGameManager.ResetPlayerInfo();
		InGameManager.ResetPersistentPlayerProperties();
		InGameManager._needSendPlayerInfo = true;
		__this = SettingsManager.MultiplayerSettings;
		if (__this == null) goto label_0593ec84;
		__this.OnRoomJoined();
		ChatManager.SyncPMPartnersOnJoin();
		pSVar2 = "single player";
		if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07544cc2 == false) goto label_0593ea34;
	label_0593ea07: ;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor != 0) goto label_0593ea13;
	label_0593ea53: ;
			cVar1 = PhotonNetwork.offlineMode;
		}
		else {
			if (Il2CppMethodInitialized_07544cc2 != false) goto label_0593ea07;
	label_0593ea34: ;
			Il2CppMethodInitialized_07544cc2 = true;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) goto label_0593ea53;
	label_0593ea13: ;
			cVar1 = PhotonNetwork.offlineMode;
		}
		if (cVar1 == false) {
			if (((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor == 0) {
			}
			room = PhotonNetwork.CurrentRoom;
			pSVar2 = PhotonExtensions.GetStringProperty((RoomInfo)room, RoomProperty.Name, "");
			if (pSVar2 == null) goto label_0593ec84;
			pSVar2 = pSVar2.Trim();
			pSVar2 = MiscExtensions.HexColor(pSVar2);
		}
		pSVar3 = (Object[])new object[1];
		if (pSVar3 == null) {
	label_0593ec84: ;
			throw new NullReferenceException();
		}
		if ((pSVar2 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar2, (((pSVar3.obj).klass)._1).element_class), pIVar4 == null)) {
	label_0593ec8e: ;
			pIVar4 = new ArrayTypeMismatchException();
			throw pIVar4;
		}
		if ((int)pSVar3.Length != 0) {
			pSVar3[0] = (object)pSVar2;
			str0 = UIManager.GetLocaleFormatted("InGame", "Chat", "Motd", pSVar3);
			pSVar3 = (Object[])new object[1];
			if (pSVar3 == null) goto label_0593ec84;
			if ((pSVar2 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar2, (((pSVar3.obj).klass)._1).element_class), pIVar4 == null)) goto label_0593ec8e;
			if ((int)pSVar3.Length != 0) {
				pSVar3[0] = (object)pSVar2;
				pSVar2 = UIManager.GetLocaleFormatted("InGame", "Chat", "Help", pSVar3);
				pSVar2 = String.Concat(str0, "\n", pSVar2);
				ChatManager.AddLine(pSVar2, 3, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
				SceneLoader.LoadScene(2);
				return;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6001657")]
	[Address(RVA = "0x583EF70", Offset = "0x583DF70", VA = "0x583EF70")]
	public void RegisterMainCharacterDie()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$RegisterMainCharacterDie): clean
		BaseCharacter x;
		String key;
		bool bVar1;
		int iVar2;
		CustomLogicEvaluator pCVar3;
		Player player;
		Player player_00;
		object value;
		int local_1c;

		InGameManager.UpdateRoundPlayerProperties();
		x = this.CurrentCharacter;
		bVar1 = ((Object)x == null);
		if (!bVar1) {
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
				pCVar3 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar3 = CustomLogicManager.Evaluator;
			}
			if (pCVar3 != null) {
				if (((typeof(CustomLogicManager))._2).cctor_finished_or_no_cctor == 0) {
					pCVar3 = CustomLogicManager.Evaluator;
					if (pCVar3 == null) {
						throw new NullReferenceException();
					}
				}
				if (pCVar3.DefaultAddKillScore != false) {
					player = PhotonNetwork.LocalPlayer;
					key = PlayerProperty.Deaths;
					player_00 = PhotonNetwork.LocalPlayer;
					iVar2 = PhotonExtensions.GetIntProperty(player_00, PlayerProperty.Deaths, 0);
					local_1c = iVar2 + 1;
					value = (object)local_1c;
					PhotonExtensions.SetCustomProperty(player, key, value);
				}
			}
		}
		return;
	}

	[Token(Token = "0x6001658")]
	[Address(RVA = "0x583F550", Offset = "0x583E550", VA = "0x583F550")]
	public void RegisterMainCharacterKill(BaseCharacter victim)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$RegisterMainCharacterKill): 8 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		BaseCharacter pCVar3;
		BaseCharacter pCVar4;
		String pSVar5;
		bool bVar6;
		int iVar7;
		Dictionary<string, object> __this_00;
		Player pPVar8;
		object value;
		uint weapon;
		KillMethod GVar9;
		KillMethod method_00;
		KillMethod method_01;
		int local_2c;

		pCVar3 = this.CurrentCharacter;
		bVar6 = ((Object)pCVar3 == null);
		if (!bVar6) {
			if (victim != null) {
				bVar1 = (typeof(Horse)._2).typeHierarchyDepth;
				if ((bVar1 <= (victim.klass._2).typeHierarchyDepth) &&((victim.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Horse))) {
					return;
				}
			}
			pCVar3 = this.CurrentCharacter;
			weapon = 4;
			if (pCVar3 != null) {
				pCVar4 = pCVar3.klass;
				bVar1 = (pCVar4._2).typeHierarchyDepth;
				bVar2 = (typeof(Human)._2).typeHierarchyDepth;
				if ((bVar1 < bVar2) ||((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(Human))) {
					bVar2 = (typeof(BasicTitan)._2).typeHierarchyDepth;
					if ((bVar1 < bVar2) ||((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BasicTitan))) {
						bVar2 = (typeof(BaseShifter)._2).typeHierarchyDepth;
						if (bVar2 <= bVar1) {
							weapon = (pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(BaseShifter) | 4;
						}
					}
					else {
						weapon = 6;
					}
				}
				else {
					pSVar5 = (*(ulong)((sbyte)pCVar3 + 0x150));
					if (pSVar5 == null) goto label_0593f921;
					weapon = *(uint)&pSVar5[0x13].monitor;
					if (2 < weapon) {
						weapon = 4 - (weapon == 3);
					}
				}
			}
			if (victim != null) {
				pCVar4 = victim.klass;
				bVar1 = (pCVar4._2).typeHierarchyDepth;
				bVar2 = (typeof(Human)._2).typeHierarchyDepth;
				if ((bVar1 < bVar2) ||((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(Human))) {
					bVar2 = (typeof(BasicTitan)._2).typeHierarchyDepth;
					if ((bVar2 <= bVar1) &&((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(BasicTitan))) {
						GVar9 = ((KillMethod)weapon);
						method_00.Special = GVar9.Special;
						bVar1 = (typeof(BasicTitan)._2).typeHierarchyDepth;
						if (((victim.klass._2).typeHierarchyDepth < bVar1) ||((victim.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(BasicTitan))) goto label_0593f926;
						method_00._4_4_ = 0;
						method_00.Weapon = GVar9.Weapon;
						GameProgressManager.RegisterTitanKill((BasicTitan)victim, method_00);
					}
				}
				else {
					GVar9 = ((KillMethod)weapon);
					method_01.Special = GVar9.Special;
					bVar1 = (typeof(Human)._2).typeHierarchyDepth;
					if (((victim.klass._2).typeHierarchyDepth < bVar1) ||((victim.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Human))) {
	label_0593f926: ;
						throw new InvalidCastException();
					}
					method_01._4_4_ = 0;
					method_01.Weapon = GVar9.Weapon;
					GameProgressManager.RegisterHumanKill((Human)victim, method_01);
				}
			}
			__this_00 = new Dictionary<string, object>();
			pSVar5 = PlayerProperty.Kills;
			pPVar8 = PhotonNetwork.LocalPlayer;
			iVar7 = PhotonExtensions.GetIntProperty(pPVar8, PlayerProperty.Kills, 0);
			local_2c = iVar7 + 1;
			value = (object)local_2c;
			if (__this_00 == null) {
	label_0593f921: ;
				throw new NullReferenceException();
			}
			__this_00.Add((object)pSVar5, value) ;
			pPVar8 = PhotonNetwork.LocalPlayer;
			PhotonExtensions.SetCustomProperties(pPVar8, __this_00);
		}
		return;
	}

	[Token(Token = "0x6001659")]
	[Address(RVA = "0x583F930", Offset = "0x583E930", VA = "0x583F930")]
	public void RegisterMainCharacterDamage(BaseCharacter victim, int damage)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$RegisterMainCharacterDamage): 8 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		int iVar3;
		BaseCharacter pCVar4;
		BaseCharacter pCVar5;
		String pSVar6;
		BaseComponentCache pUVar7;
		bool bVar8;
		int iVar9;
		GameObject victim_00;
		Dictionary<string, object> __this_00;
		Player pPVar10;
		object pIVar11;
		String* ppSVar12;
		KillMethod GVar13;
		ulong local_48;
		BaseComponentCache local_40;
		int local_38;
		int local_34;

		pCVar4 = this.CurrentCharacter;
		bVar8 = ((Object)pCVar4 == null);
		if (bVar8) {
			return;
		}
		if (victim != null) {
			bVar1 = (typeof(Horse)._2).typeHierarchyDepth;
			if ((bVar1 <= (victim.klass._2).typeHierarchyDepth) &&((victim.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Horse))) {
				return;
			}
		}
		GVar13 = ((KillMethod)4);
		local_40 = (BaseComponentCache)GVar13.Special;
		local_48 = (ulong)(uint)GVar13.Weapon;
		pCVar4 = this.CurrentCharacter;
		if (pCVar4 != null) {
			pCVar5 = pCVar4.klass;
			bVar1 = (pCVar5._2).typeHierarchyDepth;
			bVar2 = (typeof(Human)._2).typeHierarchyDepth;
			if ((bVar1 < bVar2) ||((pCVar5._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(Human))) {
				bVar2 = (typeof(BasicTitan)._2).typeHierarchyDepth;
				if ((bVar1 < bVar2) ||((pCVar5._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BasicTitan))) {
					bVar2 = (typeof(BaseShifter)._2).typeHierarchyDepth;
					if ((bVar1 < bVar2) ||((pCVar5._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BaseShifter))) goto joined_r0x0593fd1a;
					iVar9 = 5;
				}
				else {
					iVar9 = 6;
				}
				GVar13 = ((KillMethod)iVar9);
				local_40 = (BaseComponentCache)GVar13.Special;
				local_48 = (ulong)(uint)GVar13.Weapon;
			}
			else {
				pSVar6 = (*(ulong)((sbyte)pCVar4 + 0x150));
				if (pSVar6 == null) goto label_0593fd20;
				switch(*(uint)&pSVar6[0x13].monitor) {
				case 0:
					local_48 = 0;
					break;
				case 1:
					local_48 = 1;
					break;
				case 2:
					local_48 = 2;
					break;
				case 3:
					local_48 = 3;
				}
				iVar3._0_1_ = (*(byte)((sbyte)pCVar4 + 0x178));
				iVar3._1_1_ = (*(byte)((sbyte)pCVar4 + 0x179));
				iVar3._2_2_ = *(ushort)&pCVar4[1].field_0x6a;
				if (iVar3 == 9) {
					ppSVar12 = (String*)&(*(ulong)((sbyte)pCVar4 + 0x180));
				}
				else {
					ppSVar12 = &"";
				}
				local_40 = (BaseComponentCache)*ppSVar12;
			}
		}
	joined_r0x0593fd1a: ;
		if (victim != null) {
			victim_00 = victim.gameObject;
			pUVar7 = local_40;
			GVar13.Special = (String)pUVar7;
			GVar13._0_8_ = local_48;
			GameProgressManager.RegisterDamage(victim_00, GVar13, damage);
			__this_00 = new Dictionary<string, object>();
			pSVar6 = PlayerProperty.TotalDamage;
			pPVar10 = PhotonNetwork.LocalPlayer;
			iVar9 = PhotonExtensions.GetIntProperty(pPVar10, PlayerProperty.TotalDamage, 0);
			local_34 = iVar9 + damage;
			pIVar11 = (object)local_34;
			if (__this_00 != null) {
				__this_00.Add((object)pSVar6, pIVar11);
				pSVar6 = PlayerProperty.HighestDamage;
				pPVar10 = PhotonNetwork.LocalPlayer;
				iVar9 = PhotonExtensions.GetIntProperty(pPVar10, PlayerProperty.HighestDamage, 0);
				local_38 = damage;
				if (damage < iVar9) {
					local_38 = iVar9;
				}
				pIVar11 = (object)local_38;
				__this_00.Add((object)pSVar6, pIVar11);
				pPVar10 = PhotonNetwork.LocalPlayer;
				PhotonExtensions.SetCustomProperties(pPVar10, __this_00);
				return;
			}
		}
	label_0593fd20: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600165A")]
	[Address(RVA = "0x583FD30", Offset = "0x583ED30", VA = "0x583FD30", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$OnPlayerEnteredRoom): 4 lines keep C-only constructs
		uint uVar1;
		int key;
		Dictionary<int, object> pSVar2;
		PhotonView pPVar3;
		InGameSet pSVar4;
		CompressionAlgorithm __this_00;
		bool bVar5;
		UnsavedPlayerInfo __this_01;
		Byte[] pSVar6;
		Object[] pSVar7;
		object pIVar8;
		String str;

		if (Il2CppMethodInitialized_07545825 == false) {
			Il2CppMethodInitialized_07545825 = true;
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if ((player != null) &&(pSVar2 = *(Dictionary<int, object>*)((long)(typeof(InGameManager)).static_fields + 0x28), pSVar2 != null)) {
			bVar5 = pSVar2.ContainsKey(player.actorNumber);
			if (!bVar5) {
				pSVar2 = (Dictionary<int, object>)InGameManager.AllPlayerInfo;
				key = player.actorNumber;
				__this_01 = new UnsavedPlayerInfo();
				if (pSVar2 == null) goto label_05940157;
				pSVar2.Add(key, (object)__this_01);
			}
			pSVar6 = InGameManager.SerializeMyPlayerInfo();
			pPVar3 = RPCManager.PhotonView;
			pSVar7 = (Object[])new object[1];
			if (pSVar7 != null) {
				if ((pSVar6 != null) &&(pIVar8 = il2cpp_vm_Object_IsInst(&pSVar6.obj, (((pSVar7.obj).klass)._1).element_class), pIVar8 == null)) {
	label_05940161: ;
					pIVar8 = new ArrayTypeMismatchException();
					throw pIVar8;
				}
				if ((int)pSVar7.Length == 0) {
	label_0594015c: ;
					throw new IndexOutOfRangeException();
				}
				pSVar7[0] = &pSVar6.obj;
				if (pPVar3 != null) {
					pPVar3.RPC("PlayerInfoRPC", player, pSVar7);
					if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
						bVar5 = PhotonNetwork.IsMasterClient;
					}
					else {
						bVar5 = PhotonNetwork.IsMasterClient;
					}
					if (!bVar5) goto label_059400f4;
					pPVar3 = RPCManager.PhotonView;
					pSVar7 = (Object[])new object[1];
					pSVar4 = SettingsManager.InGameCurrent;
					if (pSVar4 != null) {
						__this_00 = (CompressionAlgorithm)DataCompressors.Brotli;
						str = pSVar4.SerializeToJsonString();
						if ((__this_00 != null) &&(pSVar6 = __this_00.CompressString(str, 1), pSVar7 != null)) {
							if ((pSVar6 != null) &&(pIVar8 = il2cpp_vm_Object_IsInst(&pSVar6.obj, (((pSVar7.obj).klass)._1).element_class), pIVar8 == null)) goto label_05940161;
							if ((int)pSVar7.Length == 0) goto label_0594015c;
							pSVar7[0] = &pSVar6.obj;
							if (pPVar3 != null) {
								pPVar3.RPC("GameSettingsRPC", player, pSVar7) ;
								if (this.GlobalPause != false) {
									pPVar3 = RPCManager.PhotonView;
									pSVar7 = (Object[])new object[0];
									if (pPVar3 == null) goto label_05940157;
									pPVar3.RPC("PauseGameRPC", player, pSVar7);
								}
	label_059400f4: ;
								if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
									bVar5 = ChatManager.HasActivePlayerSuggestions();
								}
								else {
									bVar5 = ChatManager.HasActivePlayerSuggestions();
								}
								if (bVar5) {
									if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
									}
									ChatManager.RefreshPlayerSuggestions();
									return;
								}
								return;
							}
						}
					}
				}
			}
		}
	label_05940157: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600165B")]
	[Address(RVA = "0x5840220", Offset = "0x583F220", VA = "0x5840220")]
	public void OnNotifyPlayerJoined(Player player)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$OnNotifyPlayerJoined): 1 lines keep C-only constructs
		UISettings pSVar1;
		BoolSetting pSVar2;
		bool bVar3;
		CustomLogicEvaluator __this_00;
		String pSVar4;
		String str1;

		if (Il2CppMethodInitialized_07545826 == false) {
			Il2CppMethodInitialized_07545826 = true;
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor != 0) goto label_05940247;
	label_059402d2: ;
			__this_00 = CustomLogicManager.Evaluator;
		}
		else {
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) goto label_059402d2;
	label_05940247: ;
			__this_00 = CustomLogicManager.Evaluator;
		}
		if (__this_00 != null) {
			if (((typeof(CustomLogicManager))._2).cctor_finished_or_no_cctor == 0) {
				__this_00 = CustomLogicManager.Evaluator;
				if (__this_00 == null) goto label_0594044b;
			}
			__this_00.OnPlayerJoin(player);
		}
		pSVar1 = SettingsManager.UISettings;
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.JoinNotifications, pSVar2 != null)) {
			if (pSVar2._value != false) {
				pSVar4 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Name, "");
				str1 = ChatManager.GetColorString(" has joined the room.", 3, false);
				pSVar4 = String.Concat(pSVar4, str1);
				ChatManager.AddLine(pSVar4, 0, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
			}
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
				bVar3 = ChatManager.HasActivePlayerSuggestions();
			}
			else {
				bVar3 = ChatManager.HasActivePlayerSuggestions();
			}
			if (bVar3) {
				if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
				}
				ChatManager.RefreshPlayerSuggestions();
				return;
			}
			return;
		}
	label_0594044b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600165C")]
	[Address(RVA = "0x5840450", Offset = "0x583F450", VA = "0x5840450", Slot = "43")]
	public override void OnPlayerLeftRoom(Player player)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$OnPlayerLeftRoom): 1 lines keep C-only constructs
		uint uVar1;
		Dictionary<int, object> pSVar2;
		UISettings pSVar3;
		BoolSetting pSVar4;
		HashSet<int> pSVar5;
		Dictionary<int, float> pSVar6;
		bool bVar7;
		InGameMenu pUVar8;
		String pSVar9;
		String str1;
		CustomLogicEvaluator __this_00;
		ChatPanel __this_01;
		BaseMenu __this_02;

		this.OnPlayerLeftRoom(player);
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			__this_02 = UIManager.CurrentMenu;
			if (__this_02 != null) goto label_05940591;
	label_059405c1: ;
			__this_01 = null;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			__this_02 = UIManager.CurrentMenu;
			if (__this_02 == null) goto label_059405c1;
	label_05940591: ;
			pUVar8 = __this_02.GetComponent<InGameMenu>();
			if (pUVar8 == null) goto label_059405c1;
			__this_01 = pUVar8.ChatPanel;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar7 = ((Object)__this_01 != null);
		if (bVar7) {
			if (__this_01 == null) goto label_05940a4a;
			__this_01.RemovePMPartner(player);
			__this_01.Sync();
		}
		if ((player == null) ||(pSVar2 = (Dictionary<int, object>)InGameManager.AllPlayerInfo, pSVar2 == null)) goto label_05940a4a;
		bVar7 = pSVar2.ContainsKey(player.actorNumber);
		if (bVar7) {
			pSVar2 = (Dictionary<int, object>)InGameManager.AllPlayerInfo;
			if (pSVar2 == null) goto label_05940a4a;
			pSVar2.Remove(player.actorNumber);
		}
		pSVar3 = SettingsManager.UISettings;
		if ((pSVar3 == null) ||(pSVar4 = pSVar3.JoinNotifications, pSVar4 == null)) goto label_05940a4a;
		if (pSVar4._value != false) {
			pSVar9 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Name, "");
			str1 = ChatManager.GetColorString(" has left the room.", 3, false);
			pSVar9 = String.Concat(pSVar9, str1);
			ChatManager.AddLine(pSVar9, 0, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
		}
		if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
			__this_00 = CustomLogicManager.Evaluator;
			if (__this_00 != null) goto label_05940792;
	label_05940805: ;
			if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor == 0) goto label_059407d0;
	label_05940811: ;
			pSVar5 = InGameManager.MuteEmote;
		}
		else {
			__this_00 = CustomLogicManager.Evaluator;
			if (__this_00 == null) goto label_05940805;
	label_05940792: ;
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
				__this_00 = CustomLogicManager.Evaluator;
				if (__this_00 == null) goto label_05940a4a;
			}
			__this_00.OnPlayerLeave(player);
			if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor != 0) goto label_05940811;
	label_059407d0: ;
			pSVar5 = InGameManager.MuteEmote;
		}
		if (pSVar5 != null) {
			bVar7 = pSVar5.Contains(player.actorNumber);
			if (bVar7) {
				pSVar5 = InGameManager.MuteEmote;
				if (pSVar5 == null) goto label_05940a4a;
				pSVar5.Remove(player.actorNumber);
			}
			pSVar5 = InGameManager.MuteText;
			if (pSVar5 != null) {
				bVar7 = pSVar5.Contains(player.actorNumber);
				if (bVar7) {
					pSVar5 = InGameManager.MuteText;
					if (pSVar5 == null) goto label_05940a4a;
					pSVar5.Remove(player.actorNumber);
				}
				pSVar5 = InGameManager.MuteVoiceChat;
				if (pSVar5 != null) {
					bVar7 = pSVar5.Contains(player.actorNumber);
					if (bVar7) {
						pSVar5 = InGameManager.MuteVoiceChat;
						if (pSVar5 == null) goto label_05940a4a;
						pSVar5.Remove(player.actorNumber);
					}
					pSVar6 = InGameManager.VoiceChatVolumeMultiplier;
					if (pSVar6 != null) {
						bVar7 = pSVar6.ContainsKey(player.actorNumber);
						if (bVar7) {
							pSVar6 = InGameManager.VoiceChatVolumeMultiplier;
							if (pSVar6 == null) goto label_05940a4a;
							pSVar6.Remove(player.actorNumber);
						}
						AnticheatManager.ResetVoteKicks(player);
						if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
							bVar7 = ChatManager.HasActivePlayerSuggestions();
						}
						else {
							bVar7 = ChatManager.HasActivePlayerSuggestions();
						}
						if (bVar7) {
							if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
							}
							ChatManager.RefreshPlayerSuggestions();
							return;
						}
						return;
					}
				}
			}
		}
	label_05940a4a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600165D")]
	[Address(RVA = "0x5840A50", Offset = "0x583FA50", VA = "0x5840A50", Slot = "32")]
	public override void OnMasterClientSwitched(Player newMasterClient)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$OnMasterClientSwitched): 2 lines keep C-only constructs
		bool bVar1;
		Object[] args;
		String pSVar2;
		object pIVar3;
		InGameSet pSVar4;

		args = (Object[])new object[1];
		pSVar2 = PhotonExtensions.GetStringProperty(newMasterClient, PlayerProperty.Name, "");
		if (args == null) {
			throw new NullReferenceException();
		}
		if ((pSVar2 != null) &&(pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((args.obj).klass)._1).element_class), pIVar3 == null)) {
			pIVar3 = new ArrayTypeMismatchException();
			throw pIVar3;
		}
		if ((int)args.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		args[0] = (object)pSVar2;
		pSVar2 = UIManager.GetLocaleFormatted("InGame", "Chat", "MasterclientChangeTo", args);
		ChatManager.AddLine(pSVar2, 3, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false) ;
		CustomLogicManager.WaitForRestart();
		if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
			bVar1 = PhotonNetwork.IsMasterClient;
		}
		else {
			bVar1 = PhotonNetwork.IsMasterClient;
		}
		if (bVar1) {
			pSVar4 = SettingsManager.InGameCurrent;
			if (((typeof(InGameManager))._2).cctor_finished_or_no_cctor == 0) {
			}
			InGameManager.ResetContentSettings(pSVar4);
			pSVar4 = SettingsManager.InGameUI;
			InGameManager.ResetContentSettings(pSVar4);
			InGameManager.RestartGame();
			return;
		}
		return;
	}

	[Token(Token = "0x600165E")]
	[Address(RVA = "0x5840CE0", Offset = "0x583FCE0", VA = "0x5840CE0")]
	private static void ResetContentSettings(InGameSet settings)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$ResetContentSettings): clean
		InGameGeneralSettings pSVar1;
		StringSetting pSVar2;
		ListSetting<StringSetting> pSVar3;
		InGameModeSettings pSVar4;
		Dictionary<object, object> pSVar5;
		InGameAddonSettings pSVar6;

		if (((settings != null) &&(pSVar1 = settings.General, pSVar1 != null)) &&(pSVar2 = pSVar1.MapCategory, pSVar2 != null)) {
			pSVar2.SetDefault();
			pSVar1 = settings.General;
			if ((pSVar1 != null) &&(pSVar2 = pSVar1.MapName, pSVar2 != null)) {
				pSVar2.SetDefault();
				pSVar1 = settings.General;
				if ((pSVar1 != null) &&(pSVar2 = pSVar1.GameMode, pSVar2 != null)) {
					pSVar2.SetDefault();
					pSVar1 = settings.General;
					if ((pSVar1 != null) &&(pSVar2 = pSVar1.PrevGameMode, pSVar2 != null)) {
						pSVar2.SetDefault();
						pSVar1 = settings.General;
						if ((pSVar1 != null) &&(pSVar3 = pSVar1.Addons, pSVar3 != null)) {
							pSVar3.SetDefault();
							pSVar4 = settings.Mode;
							if (pSVar4 != null) {
								pSVar4.SetDefault();
								pSVar4 = settings.Mode;
								if ((pSVar4 != null) &&(pSVar5 = (Dictionary<object, object>)pSVar4.Current , pSVar5 != null)) {
									pSVar5.Clear();
									pSVar6 = settings.Addons;
									if (pSVar6 != null) {
										pSVar6.SetDefault();
										pSVar6 = settings.Addons;
										if ((pSVar6 != null) &&(pSVar5 = (Dictionary<object, object>)pSVar6.Current, pSVar5 != null)) {
											pSVar5.Clear();
											return;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600165F")]
	[Address(RVA = "0x5840E70", Offset = "0x583FE70", VA = "0x5840E70")]
	public static void OnPlayerInfoRPC(byte[] data, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$OnPlayerInfoRPC): 1 lines keep C-only constructs
		int iVar1;
		Dictionary<int, object> pSVar2;
		CompressionAlgorithm __this;
		Action<int> pSVar3;
		HashSet<object> __this_00;
		ProfileSettings pSVar4;
		StringSetting pSVar5;
		bool bVar6;
		UnsavedPlayerInfo __this_01;
		PlayerInfo pGVar7;
		String pSVar8;

		if (Il2CppMethodInitialized_0754582a == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_0754582a = true;
		}
		if ((info.Sender == null) ||(pSVar2 = (Dictionary<int, object>)InGameManager.AllPlayerInfo, pSVar2 == null)) goto label_05941204;
		bVar6 = pSVar2.ContainsKey(((info.Sender).fields).actorNumber);
		if (!bVar6) {
			pSVar2 = (Dictionary<int, object>)InGameManager.AllPlayerInfo;
			iVar1 = ((info.Sender).fields).actorNumber;
			__this_01 = new UnsavedPlayerInfo();
			if (pSVar2 == null) goto label_05941204;
			pSVar2.Add(iVar1, (object)__this_01);
		}
		if (data == null) {
			return;
		}
		if (0x4000 < (int)data.Length) {
			return;
		}
		pSVar2 = (Dictionary<int, object>)InGameManager.AllPlayerInfo;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		pGVar7 = pSVar2.get_Item(((info.Sender).fields).actorNumber);
		__this = (CompressionAlgorithm)DataCompressors.Brotli;
		if (__this == null) {
			throw new NullReferenceException();
		}
		pSVar8 = __this.DecompressString(data, 0x1000, 0xa00000);
		if (pGVar7 == null) {
			throw new NullReferenceException();
		}
		pGVar7.DeserializeFromJsonString(pSVar8);
		iVar1 = ((info.Sender).fields).actorNumber;
		if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_0754584b != false) goto label_059410a0;
	label_059411be: ;
			Il2CppMethodInitialized_0754584b = true;
			if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor != 0) goto label_059410b1;
	label_059411e2: ;
			pSVar3 = InGameManager.PlayerInfoUpdated;
		}
		else {
			if (Il2CppMethodInitialized_0754584b == false) goto label_059411be;
	label_059410a0: ;
			if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor == 0) goto label_059411e2;
	label_059410b1: ;
			pSVar3 = InGameManager.PlayerInfoUpdated;
		}
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,iVar1,pSVar3.method);
		}
		pSVar2 = (Dictionary<int, object>)InGameManager.AllPlayerInfo;
		if (pSVar2 != null) {
			__this_00 = (HashSet<object>)AnticheatManager.BanList;
			pGVar7 = pSVar2.get_Item(((info.Sender).fields).actorNumber);
			if ((((pGVar7 != null) &&(pSVar4 = pGVar7.Profile, pSVar4 != null)) &&(pSVar5 = pSVar4.ID, pSVar5 != null)) &&(__this_00 != null)) {
				bVar6 = __this_00.Contains((object)pSVar5._value);
				if (!bVar6) {
					return;
				}
				AnticheatManager.KickPlayer(info.Sender, false, "") ;
				return;
			}
		}
	label_05941204: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001660")]
	[Address(RVA = "0x5841330", Offset = "0x5840330", VA = "0x5841330")]
	public static void OnGameSettingsRPC(byte[] data, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$OnGameSettingsRPC): 5 lines keep C-only constructs
		Coroutine* targetAddress;
		float fVar1;
		byte bVar2;
		InGameSet pSVar3;
		InGameMiscSettings pSVar4;
		StringSetting pSVar5;
		String original;
		CompressionAlgorithm __this;
		InGameManager __this_00;
		BoolSetting pSVar6;
		FloatSetting pSVar7;
		bool bVar8;
		String pSVar9;
		InGameManager.d__77<RespawnForever> __this_01;
		Coroutine pUVar10;
		InGameManager klass;

		if (info.Sender != null) {
			bVar8 = info.Sender.IsMasterClient;
			if (!bVar8) {
				return;
			}
			pSVar3 = SettingsManager.InGameCurrent;
			if (((pSVar3 != null) &&(pSVar4 = pSVar3.Misc, pSVar4 != null)) &&(pSVar5 = pSVar4.Motd, pSVar5 != null)) {
				original = pSVar5._value;
				__this = (CompressionAlgorithm)DataCompressors.Brotli;
				if (__this != null) {
					pSVar9 = __this.DecompressString(data, 0x1000, 0xa00000);
					pSVar3.DeserializeFromJsonString(pSVar9);
					klass = typeof(InGameManager);
					__this_00 = (InGameManager)SceneLoader.CurrentGameManager;
					if (__this_00 != null) {
						bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
						if (((__this_00.klass._2).typeHierarchyDepth < bVar2) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) {
							throw new InvalidCastException();
						}
						__this_00._gameSettingsLoaded = true;
						InGameManager.PrintMOTD(original);
						VoiceChatManager.ApplySoundSettings();
						targetAddress = &__this_00._respawnForever;
						pUVar10 = __this_00._respawnForever;
						if (pUVar10 != null) {
							__this_00.StopCoroutine(pUVar10);
							__this_00._respawnForever = null;
						}
						pSVar3 = SettingsManager.InGameCurrent;
						if (((pSVar3 != null) &&(pSVar4 = pSVar3.Misc, pSVar4 != null)) &&(pSVar6 = pSVar4.EndlessRespawnEnabled, pSVar6 != null)) {
							if (pSVar6._value == false) {
								return;
							}
							pSVar7 = pSVar4.EndlessRespawnTime;
							if (pSVar7 != null) {
								fVar1 = pSVar7._value;
								__this_01 = new InGameManager.d__77<RespawnForever>();
								__this_01.__1__state = 0;
								__this_01.__4__this = __this_00;
								__this_01.delay = fVar1;
								pUVar10 = __this_00.StartCoroutine((IEnumerator)__this_01);
								__this_00._respawnForever = pUVar10;
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001661")]
	[Address(RVA = "0x58417E0", Offset = "0x58407E0", VA = "0x58417E0")]
	public static void OnCharacterChosen()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$OnCharacterChosen): 4 lines keep C-only constructs
		uint uVar1;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_0754582c == false) {
			Il2CppMethodInitialized_0754582c = true;
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(InGameManager);
		}
		else {
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(InGameManager);
		}
		typeof(InGameManager) = (InGameManager)klass;
		if (uVar1 == 0) {
			InGameManager.ResetRespawnTimeLeft();
			return;
		}
		InGameManager.ResetRespawnTimeLeft();
		return;
	}

	[Token(Token = "0x6001662")]
	[Address(RVA = "0x5841910", Offset = "0x5840910", VA = "0x5841910")]
	public static void OnLocalPlayerDied(Player player)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$OnLocalPlayerDied): 4 lines keep C-only constructs
		uint uVar1;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_0754582d == false) {
			Il2CppMethodInitialized_0754582d = true;
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(InGameManager);
		}
		else {
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(InGameManager);
		}
		typeof(InGameManager) = (InGameManager)klass;
		if (uVar1 == 0) {
			InGameManager.ResetRespawnTimeLeft();
			return;
		}
		InGameManager.ResetRespawnTimeLeft();
		return;
	}

	[Token(Token = "0x6001663")]
	[Address(RVA = "0x5841840", Offset = "0x5840840", VA = "0x5841840")]
	private static void ResetRespawnTimeLeft()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$ResetRespawnTimeLeft): 1 lines keep C-only constructs
		byte bVar1;
		InGameSet pSVar2;
		InGameMiscSettings pSVar3;
		FloatSetting pSVar4;
		BaseGameManager pGVar5;

		pSVar2 = SettingsManager.InGameCurrent;
		if ((((pSVar2 == null) ||(pSVar3 = pSVar2.Misc, pSVar3 == null)) ||(pSVar4 = pSVar3.EndlessRespawnTime, pSVar4 == null)) ||(pGVar5 = SceneLoader.CurrentGameManager, pGVar5 == null)) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
		if (((pGVar5.klass._2).typeHierarchyDepth < bVar1) ||((pGVar5.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
			throw new InvalidCastException();
		}
		*(float)&(*(ulong)((sbyte)pGVar5 + 0xa0)) = pSVar4._value;
		return;
	}

	[Token(Token = "0x6001664")]
	[Address(RVA = "0x5841760", Offset = "0x5840760", VA = "0x5841760")]
	[IteratorStateMachine(typeof(_003CRespawnForever_003Ed__77))]
	private IEnumerator RespawnForever(float delay)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$RespawnForever): clean
		InGameManager.d__77<RespawnForever> __this_00;

		__this_00 = new InGameManager.d__77<RespawnForever>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.delay = delay;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6001665")]
	[Address(RVA = "0x5841990", Offset = "0x5840990", VA = "0x5841990")]
	public void SpawnPlayer(bool force)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$SpawnPlayer): 8 lines keep C-only constructs
		CustomLogicEvaluator pCVar1;
		InGameCharacterSettings pSVar2;
		StringSetting pSVar3;
		String a;
		float fVar4;
		bool bVar5;
		bool bVar6;
		Player pPVar7;
		InGameManager __this_00;
		Vector3 UVar8;
		Vector3 euler;
		Vector3 position;
		System_ValueTuple_Vector3__Quaternion__o local_68;
		byte[] local_48 = new byte[40];

		bVar5 = this.IsFinishedLoading();
		if (bVar5) {
			pCVar1 = CustomLogicManager.Evaluator;
			if (pCVar1 == null) goto label_05941c2a;
			bVar5 = (pCVar1.ForcedCharacterType != (String)**(ulong*)(g_data_07556758 + 0xb8));
			if (bVar5) {
				pSVar2 = SettingsManager.InGameCharacterSettings;
				if (pSVar2 == null) goto label_05941c2a;
				pSVar3 = pSVar2.CharacterType;
				pCVar1 = CustomLogicManager.Evaluator;
				if ((pCVar1 == null) || (pSVar3 == null) ) goto label_05941c2a;
				pSVar3.Value = (object)pCVar1.ForcedCharacterType;
			}
			pSVar2 = SettingsManager.InGameCharacterSettings;
			if ((pSVar2 == null) ||(pSVar3 = pSVar2.CharacterType, pSVar3 == null)) {
	label_05941c2a: ;
				throw new NullReferenceException();
			}
			a = pSVar3._value;
			bVar5 = (a == PlayerCharacter.Human);
			pPVar7 = PhotonNetwork.LocalPlayer;
			__this_00 = null;
			bVar6 = PhotonExtensions.HasSpawnPoint(pPVar7);
			if (bVar6) {
				pPVar7 = PhotonNetwork.LocalPlayer;
				UVar8 = PhotonExtensions.GetSpawnPoint(pPVar7);
				this.SpawnPlayerAt(force, UVar8, 0.0);
				return;
			}
			if (bVar5) {
				local_68 = __this_00.GetHumanSpawnPoint();
			}
			else {
				local_68 = __this_00.GetTitanSpawnPoint();
			}
			fVar4 = local_68.Item1.z;
			local_48._0_4_ = local_68.Item1.x;
			local_48._4_4_ = local_68.Item1.y;
			local_48._8_8_ = 0;
			local_48._24_4_ = local_68.Item2.z;
			local_48._28_4_ = local_68.Item2.w;
			local_68.Item1.z = local_68.Item2.z;
			local_68.Item2.x = local_68.Item2.w;
			UVar8 = Quaternion.Internal_ToEulerRad(ref local_68);
			euler.x = UVar8.x * 57.29578;
			euler.y = UVar8.y * 57.29578;
			euler.z = UVar8.z * 57.29578;
			UVar8 = Quaternion.Internal_MakePositive(euler);
			position.z = fVar4;
			position.x = (float)local_48._0_4_;
			position.y = (float)local_48._4_4_;
			this.SpawnPlayerAt(force, position, UVar8.y);
		}
		return;
	}

	[Token(Token = "0x6001666")]
	[Address(RVA = "0x5842FB0", Offset = "0x5841FB0", VA = "0x5842FB0")]
	public void SpawnPlayerShifterAt(string shifterName, float liveTime, Vector3 position, float rotationY)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$SpawnPlayerShifterAt): 16 lines keep C-only constructs
		byte bVar1;
		int health;
		InGameSet pSVar2;
		InGameMiscSettings pSVar3;
		IntSetting pSVar4;
		bool bVar5;
		BaseCharacter pCVar6;
		String pSVar7;
		InGameManager __this_00;
		BaseCharacter __this_01;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		Quaternion UVar8;
		Vector3 position_00;
		Vector3 local_58;
		byte[] local_48 = new byte[16];
		byte[] local_38 = new byte[16];

		local_38._8_4_ = in_XMM1_Dc;
		local_38._0_8_ = position._0_8_;
		local_38._12_4_ = in_XMM1_Dd;
		local_58.x = 0.0;
		local_58.y = rotationY * 0.017453292;
		local_58.z = 0.0;
		UVar8 = Quaternion.Internal_FromEulerRad(ref local_58);
		local_48._8_4_ = extraout_XMM0_Dc;
		local_48._0_8_ = UVar8._0_8_;
		local_48._12_4_ = extraout_XMM0_Dd;
		bVar5 = (shifterName == "Annie");
		if (bVar5) {
			pSVar7 = CharacterPrefabs.AnnieShifter;
		}
		else {
			bVar5 = (shifterName == "Eren");
			if (bVar5) {
				pSVar7 = CharacterPrefabs.ErenShifter;
			}
			else {
				__this_01 = null;
				bVar5 = (shifterName == "Armored");
				if (!bVar5) goto label_059431ab;
				pSVar7 = CharacterPrefabs.ArmoredShifter;
			}
		}
		position_00.z = position.z;
		position_00.x = (float)local_38._0_4_;
		position_00.y = (float)local_38._4_4_;
		UVar8.z = UVar8.z;
		UVar8.w = UVar8.w;
		UVar8.x = (float)local_48._0_4_;
		UVar8.y = (float)local_48._4_4_;
		pCVar6 = CharacterSpawner.Spawn(pSVar7, position_00, UVar8);
		__this_01 = null;
		if (pCVar6 != null) {
			bVar1 = (typeof(BaseShifter)._2).typeHierarchyDepth;
			if (((pCVar6.klass._2).typeHierarchyDepth < bVar1) ||((pCVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(BaseShifter)) ) {
				throw new InvalidCastException();
			}
			__this_01 = pCVar6;
		}
	label_059431ab: ;
		bVar5 = ((Object)__this_01 != null);
		if (!bVar5) {
			return;
		}
		pSVar7 = HumanSpecials.GetSpecialIcon(shifterName);
		if (__this_01 != null) {
			__this_00 = (InGameManager)&(*(uint)((sbyte)__this_01 + 0x2d0));
			*(String*)&(*(uint)((sbyte)__this_01 + 0x2d0)) = pSVar7;
			pSVar7 = __this_00.GetPlayerTeam(false);
			(*(code)((Il2CppClass)__this_01.klass).vtable[204].methodPtr)(liveTime,__this_01,0,pSVar7,0,((Il2CppClass)__this_01.klass).vtable[204].method) ;
			this.CurrentCharacter = __this_01;
			pSVar2 = SettingsManager.InGameCurrent;
			if (((pSVar2 != null) &&(pSVar3 = pSVar2.Misc, pSVar3 != null)) &&(pSVar4 = pSVar3.ShifterHealth, pSVar4 != null)) {
				health = pSVar4._value;
				if (health < 1) {
					return;
				}
				__this_01.SetHealth(health);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001667")]
	[Address(RVA = "0x58433D0", Offset = "0x58423D0", VA = "0x58433D0")]
	public InGameCharacterSettings GetSetHumanSettings()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$GetSetHumanSettings): clean
		InGameSet pSVar1;
		InGameCharacterSettings pSVar2;
		InGameMiscSettings pSVar3;
		StringSetting pSVar4;
		BoolSetting pSVar5;
		bool bVar6;
		List<string> pSVar7;
		String pSVar8;

		pSVar1 = SettingsManager.InGameCurrent;
		if (pSVar1 != null) {
			pSVar2 = SettingsManager.InGameCharacterSettings;
			pSVar3 = pSVar1.Misc;
			pSVar7 = HumanLoadout.GetAllowed();
			if (((pSVar2 != null) &&(pSVar4 = pSVar2.Loadout, pSVar4 != null)) &&(pSVar7 != null)) {
				bVar6 = pSVar7.Contains((object)pSVar4._value);
				if (!bVar6) {
					pSVar4 = pSVar2.Loadout;
					pSVar8 = pSVar7.get_Item(0);
					if (pSVar4 == null) goto label_059435d4;
					pSVar4.Value = (object)pSVar8;
				}
				pSVar4 = pSVar2.Loadout;
				if (((pSVar4 != null) && (pSVar3 != null)) &&(pSVar5 = pSVar3.AllowShifterSpecials, pSVar5 != null)) {
					pSVar8 = pSVar4._value;
					bVar6 = pSVar5._value;
					pSVar7 = HumanSpecials.GetSpecialNames(pSVar8, bVar6);
					pSVar4 = pSVar2.Special;
					if ((pSVar4 != null) &&(pSVar7 != null)) {
						bVar6 = pSVar7.Contains((object)pSVar4._value) ;
						if (!bVar6) {
							pSVar4 = pSVar2.Special;
							if (pSVar4 == null) goto label_059435d4;
							pSVar4.Value = (object)HumanSpecials.DefaultSpecial;
						}
						return SettingsManager.InGameCharacterSettings;
					}
				}
			}
		}
	label_059435d4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001668")]
	[Address(RVA = "0x5841C30", Offset = "0x5840C30", VA = "0x5841C30")]
	public void SpawnPlayerAt(bool force, Vector3 position, float rotationY)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$SpawnPlayerAt): 35 lines keep C-only constructs
		int piVar1;
		BaseCharacter* targetAddress;
		byte bVar2;
		int iVar3;
		int health;
		InGameCharacterSettings pSVar4;
		CustomLogicEvaluator pCVar5;
		StringSetting pSVar6;
		InGameSet pSVar7;
		IntSetting pSVar8;
		InGameMiscSettings pSVar9;
		BaseCharacter pCVar10;
		BoolSetting pSVar11;
		String[] pSVar12;
		TitanCustomSettings pSVar13;
		Settings_SetSettingsContainer_TitanCustomSet__o pSVar14;
		ListSetting<T> __this_00;
		List<T> pSVar15;
		InGameTitanSettings pSVar16;
		FloatSetting pSVar17;
		FloatSetting pSVar18;
		bool bVar19;
		uint uVar20;
		List<string> pSVar21;
		String pSVar22;
		Human __this_01;
		BaseSetting obj;
		TitanCustomSet pSVar23;
		InGameManager pGVar24;
		String str1;
		BasicTitan __this_02;
		int iVar26;
		InGameManager pGVar28;
		BasicTitan __this_03;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		Quaternion UVar29;
		Quaternion rotation;
		float local_98;
		float local_94;
		String local_90;
		float local_78;
		Vector3 local_68;
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[16];

		bVar19 = this.IsFinishedLoading();
		if (!bVar19) {
			return;
		}
		local_68.x = 0.0;
		local_68.y = rotationY * 0.017453292;
		local_68.z = 0.0;
		UVar29 = Quaternion.Internal_FromEulerRad(ref local_68);
		local_58._8_4_ = extraout_XMM0_Dc;
		local_58._0_8_ = UVar29._0_8_;
		local_58._12_4_ = extraout_XMM0_Dd;
		local_48._8_4_ = in_XMM1_Dc;
		local_48._0_8_ = UVar29._8_8_;
		local_48._12_4_ = in_XMM1_Dd;
		pSVar4 = SettingsManager.InGameCharacterSettings;
		pCVar5 = CustomLogicManager.Evaluator;
		if (pCVar5 == null) goto label_05942afb;
		bVar19 = (pCVar5.ForcedCharacterType != (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (bVar19) {
			if (pSVar4 == null) goto label_05942afb;
			pSVar6 = pSVar4.CharacterType;
			pCVar5 = CustomLogicManager.Evaluator;
			if ((pCVar5 == null) || (pSVar6 == null)) goto label_05942afb;
			pSVar6.Value = (object)pCVar5.ForcedCharacterType;
		}
		else if (pSVar4 == null) goto label_05942afb;
		pSVar6 = pSVar4.CharacterType;
		if (((pSVar6 == null) ||(pSVar7 = SettingsManager.InGameCurrent, pSVar7 == null)) ||(pSVar8 = pSVar4.ChooseStatus, pSVar8 == null)) goto label_05942afb;
		if (pSVar8._value != 2) {
			return;
		}
		local_90 = pSVar6._value;
		pSVar9 = pSVar7.Misc;
		targetAddress = &this.CurrentCharacter;
		pCVar10 = this.CurrentCharacter;
		bVar19 = ((Object)pCVar10 != null);
		pCVar10 = *targetAddress;
		if (bVar19) {
			if (pCVar10 == null) goto label_05942afb;
			if ((pCVar10.Dead == false) && (!force)) {
				return;
			}
		}
		bVar19 = ((Object)pCVar10 != null);
		if (bVar19) {
			pCVar10 = *targetAddress;
			if (pCVar10 == null) goto label_05942afb;
			if (pCVar10.Dead == false) {
				pCVar10.GetKilled("");
			}
		}
		InGameManager.UpdatePlayerName();
		pSVar21 = new List<string>();
		if ((typeof(HumanLoadout)._2).cctor_finished_or_no_cctor == 0) {
			bVar19 = HumanLoadout.AnyAllowed();
			if (bVar19) goto label_05942067;
		}
		else {
			bVar19 = HumanLoadout.AnyAllowed();
			if (bVar19) {
	label_05942067: ;
				if (pSVar21 == null) goto label_05942afb;
				pSVar22 = PlayerCharacter.Human;
				piVar1 = &pSVar21._version;
				*piVar1 = *piVar1 + 1;
				pSVar12 = pSVar21._items;
				if (pSVar12 == null) goto label_05942afb;
				uVar20 = pSVar21._size;
				if (uVar20 < (uint)pSVar12.Length) {
					pSVar21._size = uVar20 + 1;
					pSVar12[(int)uVar20] = pSVar22;
				}
				else {
					pSVar21.AddWithResize((object)pSVar22);
				}
			}
		}
		if ((pSVar9 == null) ||(pSVar11 = pSVar9.AllowPlayerTitans, pSVar11 == null)) goto label_05942afb;
		if (pSVar11._value != false) {
			if (pSVar21 == null) goto label_05942afb;
			pSVar22 = PlayerCharacter.Titan;
			piVar1 = &pSVar21._version;
			*piVar1 = *piVar1 + 1;
			pSVar12 = pSVar21._items;
			if (pSVar12 == null) goto label_05942afb;
			uVar20 = pSVar21._size;
			if (uVar20 < (uint)pSVar12.Length) {
				pSVar21._size = uVar20 + 1;
				pSVar12[(int)uVar20] = pSVar22;
			}
			else {
				pSVar21.AddWithResize((object)pSVar22);
			}
		}
		pSVar11 = pSVar9.AllowShifters;
		if (pSVar11 == null) goto label_05942afb;
		if (pSVar11._value == false) {
			if (pSVar21 == null) goto label_05942afb;
			iVar3 = pSVar21._size;
		}
		else {
			if (pSVar21 == null) goto label_05942afb;
			pSVar22 = PlayerCharacter.Shifter;
			piVar1 = &pSVar21._version;
			*piVar1 = *piVar1 + 1;
			pSVar12 = pSVar21._items;
			if (pSVar12 == null) goto label_05942afb;
			uVar20 = pSVar21._size;
			if (uVar20 < (uint)pSVar12.Length) {
				pSVar21._size = uVar20 + 1;
				pSVar12[(int)uVar20] = pSVar22;
				iVar3 = pSVar21._size;
			}
			else {
				pSVar21.AddWithResize((object)pSVar22);
				iVar3 = pSVar21._size;
			}
		}
		if (iVar3 == 0) {
			uVar20 = 0;
			if (((typeof(PlayerCharacter))._2).cctor_finished_or_no_cctor == 0) {
				uVar20 = pSVar21._size;
			}
			pSVar22 = PlayerCharacter.Human;
			piVar1 = &pSVar21._version;
			*piVar1 = *piVar1 + 1;
			pSVar12 = pSVar21._items;
			if (pSVar12 == null) goto label_05942afb;
			if (uVar20 < (uint)pSVar12.Length) {
				pSVar21._size = uVar20 + 1;
				pSVar12[(int)uVar20] = pSVar22;
			}
			else {
				pSVar21.AddWithResize((object)pSVar22);
			}
		}
		bVar19 = pSVar21.Contains((object)local_90);
		if (!bVar19) {
			local_90 = pSVar21.get_Item(0);
		}
		bVar19 = (local_90 == PlayerCharacter.Human);
		if (bVar19) {
			pSVar21 = HumanLoadout.GetAllowed();
			pSVar6 = pSVar4.Loadout;
			if ((pSVar6 != null) &&(pSVar21 != null)) {
				bVar19 = pSVar21.Contains((object)pSVar6._value);
				if (!bVar19) {
					pSVar6 = pSVar4.Loadout;
					pSVar22 = pSVar21.get_Item(0) ;
					if (pSVar6 == null) goto label_05942afb;
					pSVar6.Value = (object)pSVar22;
				}
				pCVar5 = CustomLogicManager.Evaluator;
				if (pCVar5 != null) {
					bVar19 = (pCVar5.ForcedLoadout != (String)**(ulong*)(g_data_07556758 + 0xb8));
					if (bVar19) {
						pSVar6 = pSVar4.Loadout;
						pCVar5 = CustomLogicManager.Evaluator;
						if ((pCVar5 == null) ||(pSVar6 == null)) goto label_05942afb;
						pSVar6.Value = (object)pCVar5.ForcedLoadout;
					}
					pSVar6 = pSVar4.Loadout;
					if ((pSVar6 != null) &&(pSVar11 = pSVar9.AllowShifterSpecials, pSVar11 != null)) {
						pSVar22 = pSVar6._value;
						bVar19 = pSVar11._value;
						pSVar21 = HumanSpecials.GetSpecialNames(pSVar22, bVar19);
						pSVar6 = pSVar4.Special;
						if ((pSVar6 != null) &&(pSVar21 != null)) {
							bVar19 = pSVar21.Contains((object)pSVar6._value);
							if (!bVar19) {
								pSVar6 = pSVar4.Special;
								if (pSVar6 == null) goto label_05942afb;
								pSVar6.Value = (object)HumanSpecials.DefaultSpecial;
							}
							pGVar24 = (InGameManager)CharacterPrefabs.Human;
							rotation.z = (float)local_48._0_4_;
							rotation.w = (float)local_48._4_4_;
							rotation.x = (float)local_58._0_4_;
							rotation.y = (float)local_58._4_4_;
							__this_01 = (Human)CharacterSpawner.Spawn((String)pGVar24, position, rotation);
							if (__this_01 == null) {
								pGVar24.GetPlayerTeam(false);
								throw new NullReferenceException();
							}
							bVar2 = (typeof(Human)._2).typeHierarchyDepth;
							if (((__this_01.klass._2).typeHierarchyDepth < bVar2) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(Human))) {
								throw new InvalidCastException();
							}
							pSVar22 = pGVar24.GetPlayerTeam(false);
							__this_01.Init(false, pSVar22, SettingsManager.InGameCharacterSettings);
							*targetAddress = (BaseCharacter)__this_01;
							pSVar7 = SettingsManager.InGameCurrent;
							if (((pSVar7 != null) &&(pSVar9 = pSVar7.Misc, pSVar9 != null)) &&(pSVar8 = pSVar9.HumanHealth, pSVar8 != null)) {
								health = pSVar8._value;
								if (1 < health) {
									__this_01.SetHealth(health);
								}
								goto label_05942ac7;
							}
						}
					}
				}
			}
			goto label_05942afb;
		}
		bVar19 = (local_90 == PlayerCharacter.Shifter);
		if (bVar19) {
			pCVar5 = CustomLogicManager.Evaluator;
			if (pCVar5 != null) {
				pSVar22 = pCVar5.ForcedLoadout;
				bVar19 = (pSVar22 != (String)**(ulong*)(g_data_07556758 + 0xb8)) ;
				if (bVar19) {
					pSVar6 = pSVar4.Loadout;
					if (pSVar6 == null) goto label_05942afb;
					pSVar6.Value = (object)pSVar22;
				}
				pSVar6 = pSVar4.Loadout;
				if (pSVar6 != null) {
					this.SpawnPlayerShifterAt(pSVar6._value, 0.0, position, rotationY);
					goto label_05942ac7;
				}
			}
			goto label_05942afb;
		}
		bVar19 = (local_90 == PlayerCharacter.Titan);
		if (!bVar19) goto label_05942ac7;
		pSVar8 = pSVar4.CustomSet;
		if ((((pSVar8 == null) ||(pSVar13 = SettingsManager.TitanCustomSettings, pSVar13 == null)) ||(pSVar14 = pSVar13.TitanCustomSets, pSVar14 == null)) ||((__this_00 = pSVar14.Sets, __this_00 == null ||(pSVar15 = __this_00._value, pSVar15 == null)))) goto label_05942afb;
		iVar3 = pSVar8._value;
		iVar26 = pSVar15._size;
		if (iVar3 < iVar26) {
			iVar26 = iVar3;
		}
		pSVar23 = null;
		if (iVar3 < 0) {
			iVar26 = 0;
		}
		if (0 < iVar26) {
			obj = __this_00.GetItemAt(iVar26 + -1);
			pSVar23 = (TitanCustomSet)il2cpp_codegen_is_inst_class((object)obj, typeof(TitanCustomSet));
		}
		pGVar24 = (InGameManager)TitanSkinPicker.Pick(false, null, pSVar23);
		if (pGVar24 == null) goto label_05942afb;
		pSVar22 = CharacterPrefabs.BasicTitanPrefix;
		str1 = pGVar24.ToString();
		pSVar22 = String.Concat(pSVar22, str1);
		UVar29.z = (float)local_48._0_4_;
		UVar29.w = (float)local_48._4_4_;
		UVar29.x = (float)local_58._0_4_;
		UVar29.y = (float)local_58._4_4_;
		__this_02 = (BasicTitan)CharacterSpawner.Spawn(pSVar22, position, UVar29);
		if (__this_02 == null) {
			if (pSVar23 == null) goto label_05942afb;
	label_059428c1: ;
			pGVar28 = pGVar24;
			pSVar23 = pGVar24.ApplyTo(pSVar23);
			pSVar22 = pGVar28.GetPlayerTeam(true);
			if (__this_02 == null) goto label_05942afb;
		}
		else {
			bVar2 = (typeof(BasicTitan)._2).typeHierarchyDepth;
			if (((__this_02.klass._2).typeHierarchyDepth < bVar2) ||((__this_02.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(BasicTitan))) {
				throw new InvalidCastException();
			}
			if (pSVar23 != null) goto label_059428c1;
			pGVar28 = pGVar24;
			pSVar23 = pGVar24.CreateSet(__this_02.Setup);
			pSVar22 = pGVar28.GetPlayerTeam(true);
		}
		__this_03 = __this_02;
		__this_02.Init(false, pSVar22, null, pSVar23, *(int)&pGVar24._skyboxCustomSkinLoader);
		__this_03.SetupTitan(__this_02, false);
		pSVar7 = SettingsManager.InGameCurrent;
		if (((pSVar7 == null) ||(pSVar16 = pSVar7.Titan, pSVar16 == null)) ||(pSVar11 = pSVar16.TitanSizeEnabled, pSVar11 == null)) {
	label_05942afb: ;
			throw new NullReferenceException();
		}
		if (pSVar11._value == false) {
			local_98 = 1.0;
			local_94 = 2.0;
			local_78 = 3.0;
		}
		else {
			pSVar17 = pSVar16.TitanSizeMin;
			if ((pSVar17 == null) ||(pSVar18 = pSVar16.TitanSizeMax, pSVar18 == null)) goto label_05942afb;
			local_98 = pSVar17._value;
			local_78 = pSVar18._value;
			if (local_78 <= local_98) {
				local_98 = local_78;
			}
			local_94 = (local_78 + local_98) * 0.5;
		}
		pCVar5 = CustomLogicManager.Evaluator;
		if (pCVar5 == null) goto label_05942afb;
		pSVar22 = pCVar5.ForcedLoadout;
		bVar19 = (pSVar22 != (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (bVar19) {
			pSVar6 = pSVar4.Loadout;
			if (pSVar6 == null) goto label_05942afb;
			pSVar6.Value = (object)pSVar22;
		}
		pSVar6 = pSVar4.Loadout;
		if (pSVar6 == null) goto label_05942afb;
		pSVar22 = pSVar6._value;
		bVar19 = (pSVar22 == "Small");
		if (bVar19) {
	label_05942aa7: ;
			__this_02.SetSize(local_98);
		}
		else {
			bVar19 = (pSVar22 == "Medium");
			local_98 = local_94;
			if (bVar19) goto label_05942aa7;
			bVar19 = (pSVar22 == "Large");
			local_98 = local_78;
			if (bVar19) goto label_05942aa7;
		}
		*targetAddress = (BaseCharacter)__this_02;
	label_05942ac7: ;
		this.HasSpawned = true;
		InGameManager.UpdateRoundPlayerProperties();
		return;
	}

	[Token(Token = "0x6001669")]
	[Address(RVA = "0x5842B20", Offset = "0x5841B20", VA = "0x5842B20")]
	private (Vector3, Quaternion) GetHumanSpawnPoint()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$GetHumanSpawnPoint): 27 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		InGameSet pSVar4;
		InGameMiscSettings pSVar5;
		IntSetting pSVar6;
		InGameCharacterSettings pSVar7;
		StringSetting pSVar8;
		String a;
		List<string> tags;
		byte[] auVar11 = new byte[16];
		bool bVar12;
		List<string>* ppSVar13;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		ulong uVar14;
		ulong uVar15;
		Quaternion UVar16;
		Vector3 UVar17;
		Transform local_40;
		byte[] local_38 = new byte[16];

		local_40 = null;
		pSVar4 = SettingsManager.InGameCurrent;
		if (((pSVar4 != null) &&(pSVar5 = pSVar4.Misc, pSVar5 != null)) &&(pSVar6 = pSVar5.PVP, pSVar6 != null)) {
			if (pSVar6._value == 2) {
				pSVar7 = SettingsManager.InGameCharacterSettings;
				if ((pSVar7 == null) ||(pSVar8 = pSVar7.Team, pSVar8 == null)) goto label_05942def;
				a = pSVar8._value;
				bVar12 = (a == TeamInfo.Blue);
				uVar3 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
				if (bVar12) {
					if (uVar3 == 0) {
					}
					ppSVar13 = &InGameManager.BlueSpawnTags;
				}
				else {
					if (uVar3 == 0) {
					}
					ppSVar13 = &InGameManager.RedSpawnTags;
				}
				tags = *ppSVar13;
				uVar3 = (typeof(MapManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				tags = InGameManager.HumanSpawnTags;
				uVar3 = (typeof(MapManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar3 == 0) {
			}
			bVar12 = MapManager.TryGetRandomTagsXform(tags, ref local_40);
			if (!bVar12) {
				auVar11 = local_38;
				uVar1 = (Vector3.zeroVector).x;
				uVar2 = (Vector3.zeroVector).y;
				local_38._4_4_ = uVar2;
				local_38._0_4_ = uVar1;
				UVar17.z = (Vector3.zeroVector).z;
				if (Il2CppMethodInitialized_0753e72b == false) {
					local_38._8_8_ = 0;
					Il2CppMethodInitialized_0753e72b = true;
					uVar1 = local_38._0_4_;
					uVar2 = local_38._4_4_;
					auVar11 = local_38;
				}
				local_38 = auVar11;
				uVar14._0_4_ = (Quaternion.identityQuaternion).x;
				uVar14._4_4_ = (Quaternion.identityQuaternion).y;
				uVar15._0_4_ = (Quaternion.identityQuaternion).z;
				uVar15._4_4_ = (Quaternion.identityQuaternion).w;
				__return_storage_ptr__.Item2.x = 0.0;
				__return_storage_ptr__.Item2.y = 0.0;
				__return_storage_ptr__.Item2.z = 0.0;
				__return_storage_ptr__.Item2.w = 0.0;
				__return_storage_ptr__.Item1.x = 0.0;
				__return_storage_ptr__.Item1.y = 0.0;
				*(ulong)&__return_storage_ptr__.Item1.z = 0;
	label_05942da5: ;
				UVar16.z = (float)(int)uVar15;
				UVar16.w = (float)(int)((ulong)uVar15 >> 0x20);
				UVar16.x = (float)(int)uVar14;
				UVar16.y = (float)(int)((ulong)uVar14 >> 0x20);
				UVar17.y = (float)uVar2;
				UVar17.x = (float)uVar1;
				UVar17.z = UVar17.z;
				__return_storage_ptr__ = new ValueTuple<Vector3, Quaternion>(UVar17, UVar16);
				return __return_storage_ptr__;
			}
			if (local_40 != null) {
				UVar17 = local_40.position;
				UVar17.z = UVar17.z;
				local_38._8_4_ = extraout_XMM0_Dc;
				local_38._0_8_ = UVar17._0_8_;
				local_38._12_4_ = extraout_XMM0_Dd;
				if (local_40 != null) {
					UVar16 = local_40.rotation;
					uVar14 = UVar16._0_8_;
					uVar15 = UVar16._8_8_;
					__return_storage_ptr__.Item1.x = 0.0;
					__return_storage_ptr__.Item1.y = 0.0;
					*(ulong)&__return_storage_ptr__.Item1.z = 0;
					__return_storage_ptr__.Item2.x = 0.0;
					__return_storage_ptr__.Item2.y = 0.0;
					__return_storage_ptr__.Item2.z = 0.0;
					__return_storage_ptr__.Item2.w = 0.0;
					uVar1 = local_38._0_4_;
					uVar2 = local_38._4_4_;
					goto label_05942da5;
				}
			}
		}
	label_05942def: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600166A")]
	[Address(RVA = "0x5842E00", Offset = "0x5841E00", VA = "0x5842E00")]
	private (Vector3, Quaternion) GetTitanSpawnPoint()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$GetTitanSpawnPoint): 24 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		String tag;
		byte[] auVar5 = new byte[16];
		bool bVar6;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		ulong uVar7;
		ulong uVar8;
		Quaternion UVar9;
		Vector3 UVar10;
		Transform local_30;
		byte[] local_28 = new byte[16];

		local_30 = null;
		tag = MapTags.TitanSpawnPoint;
		bVar6 = MapManager.TryGetRandomTagXform(tag, ref local_30);
		if (bVar6) {
			if (local_30 != null) {
				UVar10 = local_30.position;
				UVar10.z = UVar10.z;
				local_28._8_4_ = extraout_XMM0_Dc;
				local_28._0_8_ = UVar10._0_8_;
				local_28._12_4_ = extraout_XMM0_Dd;
				if (local_30 != null) {
					UVar9 = local_30.rotation;
					uVar7 = UVar9._0_8_;
					uVar8 = UVar9._8_8_;
					__return_storage_ptr__.Item1.x = 0.0;
					__return_storage_ptr__.Item1.y = 0.0;
					*(ulong)&__return_storage_ptr__.Item1.z = 0;
					__return_storage_ptr__.Item2.x = 0.0;
					__return_storage_ptr__.Item2.y = 0.0;
					__return_storage_ptr__.Item2.z = 0.0;
					__return_storage_ptr__.Item2.w = 0.0;
					uVar1 = local_28._0_4_;
					uVar2 = local_28._4_4_;
					goto label_05942f97;
				}
			}
			throw new NullReferenceException();
		}
		auVar5 = local_28;
		uVar1 = (Vector3.zeroVector).x;
		uVar2 = (Vector3.zeroVector).y;
		local_28._4_4_ = uVar2;
		local_28._0_4_ = uVar1;
		UVar10.z = (Vector3.zeroVector).z;
		if (Il2CppMethodInitialized_0753e72b == false) {
			local_28._8_8_ = 0;
			Il2CppMethodInitialized_0753e72b = true;
			uVar1 = local_28._0_4_;
			uVar2 = local_28._4_4_;
			auVar5 = local_28;
		}
		local_28 = auVar5;
		uVar7._0_4_ = (Quaternion.identityQuaternion).x;
		uVar7._4_4_ = (Quaternion.identityQuaternion).y;
		uVar8._0_4_ = (Quaternion.identityQuaternion).z;
		uVar8._4_4_ = (Quaternion.identityQuaternion).w;
		__return_storage_ptr__.Item2.x = 0.0;
		__return_storage_ptr__.Item2.y = 0.0;
		__return_storage_ptr__.Item2.z = 0.0;
		__return_storage_ptr__.Item2.w = 0.0;
		__return_storage_ptr__.Item1.x = 0.0;
		__return_storage_ptr__.Item1.y = 0.0;
		*(ulong)&__return_storage_ptr__.Item1.z = 0;
	label_05942f97: ;
		UVar9.z = (float)(int)uVar8;
		UVar9.w = (float)(int)((ulong)uVar8 >> 0x20);
		UVar9.x = (float)(int)uVar7;
		UVar9.y = (float)(int)((ulong)uVar7 >> 0x20);
		UVar10.y = (float)uVar2;
		UVar10.x = (float)uVar1;
		UVar10.z = UVar10.z;
		__return_storage_ptr__ = new ValueTuple<Vector3, Quaternion>(UVar10, UVar9);
		return __return_storage_ptr__;
	}

	[Token(Token = "0x600166B")]
	[Address(RVA = "0x58432C0", Offset = "0x58422C0", VA = "0x58432C0")]
	private string GetPlayerTeam(bool titan)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$GetPlayerTeam): 4 lines keep C-only constructs
		int iVar1;
		uint uVar2;
		InGameSet pSVar3;
		InGameMiscSettings pSVar4;
		IntSetting pSVar5;
		InGameCharacterSettings pSVar6;
		StringSetting pSVar7;
		String* ppSVar8;

		pSVar3 = SettingsManager.InGameCurrent;
		if (((pSVar3 == null) ||(pSVar4 = pSVar3.Misc, pSVar4 == null)) ||(pSVar5 = pSVar4.PVP, pSVar5 == null)) {
	label_05943351: ;
			throw new NullReferenceException();
		}
		iVar1 = pSVar5._value;
		if (iVar1 == 1) {
			ppSVar8 = &TeamInfo.None;
		}
		else {
			if (iVar1 == 2) {
				pSVar6 = SettingsManager.InGameCharacterSettings;
				if ((pSVar6 == null) ||(pSVar7 = pSVar6.Team, pSVar7 == null)) goto label_05943351;
			}
			else {
				uVar2 = (typeof(TeamInfo)._2).cctor_finished_or_no_cctor;
				if (titan) {
					if (uVar2 == 0) {
					}
					ppSVar8 = &TeamInfo.Titan;
					goto label_059433c2;
				}
				if (uVar2 == 0) {
				}
				pSVar7 = (StringSetting)typeof(TeamInfo).static_fields;
			}
			ppSVar8 = &pSVar7._value;
		}
	label_059433c2: ;
		return *ppSVar8;
	}

	[Token(Token = "0x600166C")]
	[Address(RVA = "0x5843D00", Offset = "0x5842D00", VA = "0x5843D00")]
	public BasicTitan SpawnAITitan(string type)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$SpawnAITitan): 6 lines keep C-only constructs
		BasicTitan pCVar1;
		InGameManager __this_00;
		Vector3 UVar2;
		Vector3 euler;
		Vector3 position;
		Quaternion UStack_4c;
		byte[] local_38 = new byte[16];
		System_ValueTuple_Vector3__Quaternion__o local_28;

		local_28 = type.GetTitanSpawnPoint();
		UStack_4c.z = local_28.Item2.z;
		UStack_4c.w = local_28.Item2.w;
		local_38._0_4_ = local_28.Item1.x;
		local_38._4_4_ = local_28.Item1.y;
		local_38._8_8_ = 0;
		UVar2 = Quaternion.Internal_ToEulerRad(ref UStack_4c);
		euler.x = UVar2.x * 57.29578;
		euler.y = UVar2.y * 57.29578;
		euler.z = UVar2.z * 57.29578;
		__this_00 = null;
		UVar2 = Quaternion.Internal_MakePositive(euler);
		position.z = local_28.Item1.z;
		position.x = (float)local_38._0_4_;
		position.y = (float)local_38._4_4_;
		pCVar1 = __this_00.SpawnAITitanAt(type, position, UVar2.y);
		return pCVar1;
	}

	[Token(Token = "0x600166D")]
	[Address(RVA = "0x58442F0", Offset = "0x58432F0", VA = "0x58442F0")]
	public IEnumerable<BasicTitan> SpawnAITitans(string type, int count)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$SpawnAITitans): 4 lines keep C-only constructs
		InGameManager.c__DisplayClass86_0 __this_00;
		IEnumerable<ValueTuple<Vector3, Quaternion>> source;
		Func<T, TResult> __this_01;
		System_Collections_Generic_IEnumerable_TResult__o pSVar1;

		if (Il2CppMethodInitialized_07545837 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(Func<ValueTuple<Vector3, Quaternion>, BasicTitan>)) ;
			Il2CppMethodInitialized_07545837 = true;
		}
		__this_00 = new InGameManager.c__DisplayClass86_0();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		__this_00.type = type;
		source = this.GetTitanSpawnPositions(count);
		__this_01 = new Func<ValueTuple<Vector3, Quaternion>, BasicTitan>((object)__this_00, (intptr_t)MethodInfo_GameManagers_InGameManager_c__DisplayClass86_0_SpawnAITitans_b__0);
		pSVar1 = Enumerable.Select<ValueTuple<Vector3, Quaternion>, BasicTitan>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this_01);
		return (IEnumerable<BasicTitan>)pSVar1;
	}

	[Token(Token = "0x600166E")]
	[Address(RVA = "0x58447C0", Offset = "0x58437C0", VA = "0x58447C0")]
	public void SpawnAITitansAsync(string type, int count)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$SpawnAITitansAsync): clean
		InGameManager.d__88<SpawnAITitansCoroutine> __this_00;

		__this_00 = new InGameManager.d__88<SpawnAITitansCoroutine>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.type = type;
		__this_00.count = count;
		this.StartCoroutine((IEnumerator)__this_00);
		return;
	}

	[Token(Token = "0x600166F")]
	[Address(RVA = "0x5844850", Offset = "0x5843850", VA = "0x5844850")]
	[IteratorStateMachine(typeof(_003CSpawnAITitansCoroutine_003Ed__88))]
	private IEnumerator SpawnAITitansCoroutine(string type, int count)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$SpawnAITitansCoroutine): clean
		InGameManager.d__88<SpawnAITitansCoroutine> __this_00;

		__this_00 = new InGameManager.d__88<SpawnAITitansCoroutine>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.type = type;
		__this_00.count = count;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6001670")]
	[Address(RVA = "0x5844900", Offset = "0x5843900", VA = "0x5844900")]
	public void SpawnAITitansAtAsync(string type, int count, Vector3 position, float rotationY)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$SpawnAITitansAtAsync): clean
		InGameManager.d__90<SpawnAITitansAtCoroutine> __this_00;

		__this_00 = new InGameManager.d__90<SpawnAITitansAtCoroutine>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.type = type;
		__this_00.count = count;
		__this_00.position.x = position.x;
		__this_00.position.y = position.y;
		__this_00.position.z = position.z;
		__this_00.rotationY = rotationY;
		this.StartCoroutine((IEnumerator)__this_00);
		return;
	}

	[Token(Token = "0x6001671")]
	[Address(RVA = "0x58449C0", Offset = "0x58439C0", VA = "0x58449C0")]
	[IteratorStateMachine(typeof(_003CSpawnAITitansAtCoroutine_003Ed__90))]
	private IEnumerator SpawnAITitansAtCoroutine(string type, int count, Vector3 position, float rotationY)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$SpawnAITitansAtCoroutine): clean
		InGameManager.d__90<SpawnAITitansAtCoroutine> __this_00;

		__this_00 = new InGameManager.d__90<SpawnAITitansAtCoroutine>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.type = type;
		__this_00.count = count;
		__this_00.position.x = position.x;
		__this_00.position.y = position.y;
		__this_00.position.z = position.z;
		__this_00.rotationY = rotationY;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6001672")]
	[Address(RVA = "0x58443F0", Offset = "0x58433F0", VA = "0x58443F0")]
	private IEnumerable<(Vector3, Quaternion)> GetTitanSpawnPositions(int count)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$GetTitanSpawnPositions): 7 lines keep C-only constructs
		float fVar1;
		float fVar2;
		byte bVar3;
		BaseCharacter pCVar4;
		HashSet<Human> pSVar5;
		BaseComponentCache pUVar6;
		Transform __this_00;
		String tag;
		object @object;
		System_ValueTuple_Vector3__Quaternion__o element;
		Vector3 item1;
		List<Transform> source;
		bool bVar8;
		GameManagers_InGameManager___c_StaticFields pGVar9;
		Func<T, TResult> __this_01;
		IEnumerable<ValueTuple<Vector3, Quaternion>> pSVar10;
		float avoidRadius;
		Vector3 UVar11;
		List<Transform> local_50;
		System_ValueTuple_Vector3__Quaternion__o local_48;

		if (Il2CppMethodInitialized_0754583a == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Human_get_Count) ;
			Il2CppMethodInitialized_0754583a = true;
		}
		local_50 = null;
		pCVar4 = this.CurrentCharacter;
		bVar8 = ((Object)pCVar4 != null);
		if ((bVar8) && (pCVar4 = this.CurrentCharacter, pCVar4 != null)) {
			bVar3 = (typeof(Human)._2).typeHierarchyDepth;
			if ((bVar3 <= (pCVar4.klass._2).typeHierarchyDepth) &&((pCVar4.klass._2).typeHierarchy[(ulong)bVar3 - 1] == typeof(Human))) {
				pSVar5 = this.Humans;
				if (pSVar5 == null) {
	label_059447b7: ;
					throw new NullReferenceException();
				}
				if (pSVar5._count == 1) {
					pUVar6 = pCVar4.Cache;
					if ((pUVar6 == null) ||(__this_00 = pUVar6.Transform, __this_00 == null)) goto label_059447b7;
					UVar11 = __this_00.position;
					UVar11.z = UVar11.z;
					fVar1 = UVar11.x;
					fVar2 = UVar11.y;
					avoidRadius = 100.0;
					goto label_05944584;
				}
			}
		}
		UVar11.z = (Vector3.zeroVector).z;
		fVar1 = (Vector3.zeroVector).x;
		fVar2 = (Vector3.zeroVector).y;
		avoidRadius = 0.0;
	label_05944584: ;
		tag = MapTags.TitanSpawnPoint;
		UVar11.y = fVar2;
		UVar11.x = fVar1;
		UVar11.z = UVar11.z;
		bVar8 = MapManager.TryGetRandomTagXforms(tag, UVar11, avoidRadius, count, ref local_50);
		source = local_50;
		if (bVar8) {
			if ((typeof(InGameManager.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar9 = typeof(InGameManager.c).static_fields;
				__this_01 = (Func<T, TResult>)pGVar9.__9__91_0;
			}
			else {
				pGVar9 = typeof(InGameManager.c).static_fields;
				__this_01 = (Func<T, TResult>)pGVar9.__9__91_0;
			}
			if (__this_01 == null) {
				if (((typeof(InGameManager.c))._2).cctor_finished_or_no_cctor == 0) {
					pGVar9 = typeof(InGameManager.c).static_fields;
				}
				@object = (object)pGVar9.__9;
				__this_01 = new Func<Transform, ValueTuple<Vector3, Quaternion>>(@object, (intptr_t)MethodInfo_GameManagers_InGameManager_c_GetTitanSpawnPositions_b__91_0);
				pGVar9 = typeof(InGameManager.c).static_fields;
				pGVar9.__9__91_0 = (Func<Transform, ValueTuple<Vector3, Quaternion>>)__this_01;
			}
			pSVar10 = (IEnumerable<ValueTuple<Vector3, Quaternion>>)Enumerable.Select<Transform, ValueTuple<Vector3, Quaternion>>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this_01);
		}
		else {
			item1 = (Vector3.zeroVector);
			local_48.Item2.y = 0.0;
			local_48.Item2.z = 0.0;
			local_48.Item2.w = 0.0;
			local_48.Item1.x = 0.0;
			local_48.Item1.y = 0.0;
			local_48.Item1.z = 0.0;
			local_48.Item2.x = 0.0;
			local_48 = new ValueTuple<Vector3, Quaternion>((Vector3)item1, (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields);
			element.Item1.z = local_48.Item1.z;
			element.Item1.x = local_48.Item1.x;
			element.Item1.y = local_48.Item1.y;
			element.Item2.x = local_48.Item2.x;
			element.Item2.y = local_48.Item2.y;
			element.Item2.z = local_48.Item2.z;
			element.Item2.w = local_48.Item2.w;
			pSVar10 = (IEnumerable<ValueTuple<Vector3, Quaternion>>)Enumerable.Repeat<ValueTuple<Vector3, Quaternion>>(element, count);
		}
		return pSVar10;
	}

	[Token(Token = "0x6001673")]
	[Address(RVA = "0x5843D80", Offset = "0x5842D80", VA = "0x5843D80")]
	public BasicTitan SpawnAITitanAt(string type, Vector3 position, float rotationY)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$SpawnAITitanAt): 35 lines keep C-only constructs
		byte bVar1;
		int difficulty;
		InGameSet pSVar2;
		InGameTitanSettings pSVar3;
		BoolSetting pSVar4;
		FloatSetting pSVar5;
		FloatSetting pSVar6;
		FloatSetting pSVar7;
		FloatSetting pSVar8;
		FloatSetting pSVar9;
		FloatSetting pSVar10;
		InGameGeneralSettings pSVar11;
		IntSetting pSVar12;
		bool bVar13;
		uint uVar14;
		String* ppSVar15;
		object pIVar16;
		MethodInfo method_00;
		TitanSkinSelection __this_00;
		String str1;
		String pSVar17;
		BasicTitan __this_01;
		TitanCustomSet customSet;
		BasicTitan __this_02;
		float fVar18;
		uint in_XMM0_Dc;
		uint extraout_XMM0_Dc;
		uint in_XMM0_Dd;
		uint extraout_XMM0_Dd;
		float fVar19;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		Quaternion UVar20;
		Vector3 position_00;
		Vector3 local_68;
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[16];
		byte[] local_38 = new byte[16];

		position_00.z = position.z;
		local_38._8_4_ = in_XMM0_Dc;
		local_38._0_8_ = position._0_8_;
		local_38._12_4_ = in_XMM0_Dd;
		if (g_data_0754583b == false) {
			local_58._0_4_ = rotationY;
			g_data_0754583b = true;
			rotationY = (float)local_58._0_4_;
		}
		local_68.x = 0.0;
		local_68.y = rotationY * 0.017453292;
		local_68.z = 0.0;
		UVar20 = Quaternion.Internal_FromEulerRad(ref local_68);
		local_58._8_4_ = extraout_XMM0_Dc;
		local_58._0_8_ = UVar20._0_8_;
		local_58._12_4_ = extraout_XMM0_Dd;
		local_48._8_4_ = in_XMM1_Dc;
		local_48._0_8_ = UVar20._8_8_;
		local_48._12_4_ = in_XMM1_Dd;
		bVar13 = (type == "Default");
		if (bVar13) {
			pSVar2 = SettingsManager.InGameCurrent;
			if (((pSVar2 == null) ||(pSVar3 = pSVar2.Titan, pSVar3 == null)) ||(pSVar4 = pSVar3.TitanSpawnEnabled, pSVar4 == null)) goto label_059442d0;
			if (pSVar4._value != false) {
				fVar18 = Random.Range(0.0, 1.0);
				pSVar5 = pSVar3.TitanSpawnNormal;
				if ((((pSVar5 == null) ||(pSVar6 = pSVar3.TitanSpawnAbnormal, pSVar6 == null)) ||((pSVar7 = pSVar3.TitanSpawnJumper, pSVar7 == null ||((pSVar8 = pSVar3.TitanSpawnCrawler, pSVar8 == null ||(pSVar9 = pSVar3.TitanSpawnThrower, pSVar9 == null)))))) ||(pSVar10 = pSVar3.TitanSpawnPunk, pSVar10 == null)) goto label_059442d0;
				fVar19 = pSVar5._value / 100.0;
				if (fVar19 <= fVar18) {
					fVar19 = fVar19 + pSVar6._value / 100.0;
					if (fVar19 <= fVar18) {
						fVar19 = fVar19 + pSVar7._value / 100.0;
						if (fVar19 <= fVar18) {
							fVar19 = fVar19 + pSVar8._value / 100.0;
							if (fVar19 <= fVar18) {
								fVar19 = fVar19 + pSVar9._value / 100.0;
								if (fVar19 <= fVar18) {
									if (fVar19 + pSVar10._value / 100.0 <= fVar18) goto label_0594413f;
									ppSVar15 = &"Punk";
								}
								else {
									ppSVar15 = &"Thrower";
								}
							}
							else {
								ppSVar15 = &"Crawler";
							}
						}
						else {
							ppSVar15 = &"Jumper";
						}
					}
					else {
						ppSVar15 = &"Abnormal";
					}
				}
				else {
					ppSVar15 = &"Normal";
				}
				goto label_0594413c;
			}
		}
		else {
			bVar13 = (type == "Random");
			if (bVar13) {
				pIVar16 = new string[5];
				if (pIVar16 == null) goto label_059442d0;
				if (*(int)&pIVar16[1].monitor == 0) {
	label_059442d5: ;
					throw new IndexOutOfRangeException();
				}
				pIVar16[2].klass = (Il2CppClass *)"Normal";
				if (((ulong)pIVar16[1].monitor & 0xfffffffe) == 0) goto label_059442d5;
				pIVar16[2].monitor = "Abnormal";
				if (*(uint)&pIVar16[1].monitor < 3) goto label_059442d5;
				pIVar16[3].klass = (Il2CppClass *)"Jumper";
				if (((ulong)pIVar16[1].monitor & 0xfffffffc) == 0) goto label_059442d5;
				pIVar16[3].monitor = "Crawler";
				if (*(uint)&pIVar16[1].monitor < 5) goto label_059442d5;
				pIVar16[4].klass = (Il2CppClass *)"Thrower";
				uVar14 = Random.Range(0, *(int)&pIVar16[1].monitor);
				if (*(uint)&pIVar16[1].monitor <= uVar14) goto label_059442d5;
				ppSVar15 = (String*)(&pIVar16[2].klass + (int)uVar14);
	label_0594413c: ;
				type = *ppSVar15;
			}
		}
	label_0594413f: ;
		pSVar2 = SettingsManager.InGameCurrent;
		if (((pSVar2 != null) &&(pSVar11 = pSVar2.General, pSVar11 != null)) &&(pSVar12 = pSVar11.Difficulty, pSVar12 != null)) {
			difficulty = pSVar12._value;
			method_00 = (MethodInfo)CharacterData.GetTitanAI(difficulty, type);
			__this_00 = TitanSkinPicker.Pick(true, (JSONNode)method_00, null);
			if (__this_00 != null) {
				pSVar17 = CharacterPrefabs.BasicTitanPrefix;
				str1 = (__this_00.Body).ToString();
				pSVar17 = String.Concat(pSVar17, str1);
				position_00.x = (float)local_38._0_4_;
				position_00.y = (float)local_38._4_4_;
				UVar20.z = (float)local_48._0_4_;
				UVar20.w = (float)local_48._4_4_;
				UVar20.x = (float)local_58._0_4_;
				UVar20.y = (float)local_58._4_4_;
				__this_01 = (BasicTitan)CharacterSpawner.Spawn(pSVar17, position_00, UVar20);
				if (__this_01 != null) {
					bVar1 = (typeof(BasicTitan)._2).typeHierarchyDepth;
					if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(BasicTitan))) {
						throw new InvalidCastException();
					}
				}
				if (__this_01 != null) {
					pSVar17 = TeamInfo.Titan;
					customSet = __this_00.CreateSet(__this_01.Setup);
					__this_02 = __this_01;
					__this_01.Init(true, pSVar17, (JSONNode)method_00, customSet, __this_00.SkinSlot);
					__this_02.SetupTitan(__this_01, true);
					return __this_01;
				}
			}
		}
	label_059442d0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001674")]
	[Address(RVA = "0x5843A40", Offset = "0x5842A40", VA = "0x5843A40")]
	public void SetupTitan(BasicTitan titan, bool ai = true)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$SetupTitan): clean
		InGameSet pSVar1;
		InGameTitanSettings pSVar2;
		BoolSetting pSVar3;
		FloatSetting pSVar4;
		FloatSetting pSVar5;
		IntSetting pSVar6;
		IntSetting pSVar7;
		int health;
		int iVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		float fVar12;

		pSVar1 = SettingsManager.InGameCurrent;
		if (pSVar1 == null) goto label_05943cf9;
		pSVar2 = pSVar1.Titan;
		if (ai) {
			if (titan == null) goto label_05943cf9;
			if (titan.IsCrawler != false) goto label_05943ac7;
			if ((pSVar2 == null) ||(pSVar3 = pSVar2.TitanWardedEnabled, pSVar3 == null)) goto label_05943cf9;
			if (pSVar3._value != false) {
				fVar9 = Random.value;
				pSVar4 = pSVar2.TitanChanceWarded;
				if (pSVar4 == null) goto label_05943cf9;
				if (fVar9 * 100.0 <= pSVar4._value) {
					titan.SetWarded(true);
				}
			}
		}
		else {
	label_05943ac7: ;
			if (pSVar2 == null) goto label_05943cf9;
		}
		pSVar3 = pSVar2.TitanSizeEnabled;
		if (pSVar3 != null) {
			if (pSVar3._value == false) {
				fVar9 = Random.Range(1.0, 3.0);
			}
			else {
				pSVar4 = pSVar2.TitanSizeMin;
				if ((pSVar4 == null) ||(pSVar5 = pSVar2.TitanSizeMax, pSVar5 == null)) goto label_05943cf9;
				fVar9 = Random.Range(pSVar4._value, pSVar5._value);
			}
			if (titan != null) {
				titan.SetSize(fVar9);
				pSVar6 = pSVar2.TitanHealthMode;
				if (pSVar6 != null) {
					iVar8 = pSVar6._value;
					if (iVar8 < 1) {
						health = 10;
						if (ai) {
							return;
						}
	label_05943ceb: ;
						titan.SetHealth(health);
						return;
					}
					if (iVar8 == 2) {
						pSVar3 = pSVar2.TitanSizeEnabled;
						if (pSVar3 != null) {
							if (pSVar3._value == false) {
								fVar9 = 1.0;
								fVar11 = 3.0;
							}
							else {
								pSVar4 = pSVar2.TitanSizeMin;
								if ((pSVar4 == null) ||(pSVar5 = pSVar2.TitanSizeMax, pSVar5 == null)) goto label_05943cf9;
								fVar9 = pSVar4._value;
								fVar10 = pSVar5._value;
								fVar11 = fVar9;
								if (fVar9 <= fVar10) {
									fVar11 = fVar10;
								}
							}
							fVar10 = 0.0;
							if (0.0 < fVar11 - fVar9) {
								fVar10 = titan.Size;
								fVar12 = fVar11;
								if (fVar10 <= fVar11) {
									fVar12 = fVar10;
								}
								fVar10 = ((float)(~-(uint)(fVar9 <= fVar10) & (uint)fVar9 |(uint)fVar12 & -(uint)(fVar9 <= fVar10)) - fVar9) / (fVar11 - fVar9);
							}
							pSVar6 = pSVar2.TitanHealthMax;
							if ((pSVar6 != null) &&(pSVar7 = pSVar2.TitanHealthMin, pSVar7 != null)) {
								fVar9 = 1.0;
								if (fVar10 <= 1.0) {
									fVar9 = fVar10;
								}
								iVar8 = pSVar7._value;
								iVar8 = (int)((float)iVar8 +(float)(pSVar6._value - iVar8) *(float)(-(uint)(0.0 <= fVar10) & (uint)fVar9));
								health = 1;
								if (1 < iVar8) {
									health = iVar8;
								}
								goto label_05943ceb;
							}
						}
					}
					else {
						if (iVar8 != 1) {
							return;
						}
						pSVar6 = pSVar2.TitanHealthMin;
						if ((pSVar6 != null) &&(pSVar7 = pSVar2.TitanHealthMax, pSVar7 != null)) {
							health = Random.Range(pSVar6._value, pSVar7._value);
							goto label_05943ceb;
						}
					}
				}
			}
		}
	label_05943cf9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001675")]
	[Address(RVA = "0x5844AA0", Offset = "0x5843AA0", VA = "0x5844AA0")]
	public BaseShifter SpawnAIShifter(string type)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$SpawnAIShifter): 6 lines keep C-only constructs
		BaseShifter pCVar1;
		InGameManager __this_00;
		Vector3 UVar2;
		Vector3 euler;
		Vector3 position;
		Quaternion UStack_4c;
		byte[] local_38 = new byte[16];
		System_ValueTuple_Vector3__Quaternion__o local_28;

		local_28 = type.GetTitanSpawnPoint();
		UStack_4c.z = local_28.Item2.z;
		UStack_4c.w = local_28.Item2.w;
		local_38._0_4_ = local_28.Item1.x;
		local_38._4_4_ = local_28.Item1.y;
		local_38._8_8_ = 0;
		UVar2 = Quaternion.Internal_ToEulerRad(ref UStack_4c);
		euler.x = UVar2.x * 57.29578;
		euler.y = UVar2.y * 57.29578;
		euler.z = UVar2.z * 57.29578;
		__this_00 = null;
		UVar2 = Quaternion.Internal_MakePositive(euler);
		position.z = local_28.Item1.z;
		position.x = (float)local_38._0_4_;
		position.y = (float)local_38._4_4_;
		pCVar1 = __this_00.SpawnAIShifterAt(type, position, UVar2.y);
		return pCVar1;
	}

	[Token(Token = "0x6001676")]
	[Address(RVA = "0x5844B20", Offset = "0x5843B20", VA = "0x5844B20")]
	public BaseShifter SpawnAIShifterAt(string type, Vector3 position, float rotationY)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$SpawnAIShifterAt): 30 lines keep C-only constructs
		byte bVar1;
		int difficulty;
		InGameSet pSVar2;
		InGameGeneralSettings pSVar3;
		IntSetting pSVar4;
		bool bVar5;
		String* ppSVar6;
		BaseShifter pCVar7;
		JSONNode pSVar8;
		String a;
		uint in_XMM0_Dc;
		uint extraout_XMM0_Dc;
		uint in_XMM0_Dd;
		uint extraout_XMM0_Dd;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		Quaternion UVar9;
		Vector3 position_00;
		Vector3 local_68;
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[16];
		byte[] local_38 = new byte[16];

		position_00.z = position.z;
		local_38._8_4_ = in_XMM0_Dc;
		local_38._0_8_ = position._0_8_;
		local_38._12_4_ = in_XMM0_Dd;
		if (g_data_0754583d == false) {
			local_58._0_4_ = rotationY;
			g_data_0754583d = true;
			rotationY = (float)local_58._0_4_;
		}
		local_68.x = 0.0;
		local_68.y = rotationY * 0.017453292;
		local_68.z = 0.0;
		UVar9 = Quaternion.Internal_FromEulerRad(ref local_68);
		a = "";
		local_58._8_4_ = extraout_XMM0_Dc;
		local_58._0_8_ = UVar9._0_8_;
		local_58._12_4_ = extraout_XMM0_Dd;
		local_48._8_4_ = in_XMM1_Dc;
		local_48._0_8_ = UVar9._8_8_;
		local_48._12_4_ = in_XMM1_Dd;
		bVar5 = (type == "Annie");
		if (bVar5) {
			ppSVar6 = &CharacterPrefabs.AnnieShifter;
		}
		else {
			bVar5 = (type == "Armored");
			if (bVar5) {
				ppSVar6 = &CharacterPrefabs.ArmoredShifter;
			}
			else {
				bVar5 = (type == "Eren");
				if (bVar5) {
					ppSVar6 = &CharacterPrefabs.ErenShifter;
				}
				else {
					bVar5 = (type == "WallColossal");
					if (!bVar5) goto label_05944d29;
					ppSVar6 = &CharacterPrefabs.WallColossal;
				}
			}
		}
		a = *ppSVar6;
	label_05944d29: ;
		bVar5 = (a == "");
		if (bVar5) {
			return null;
		}
		UVar9.z = (float)local_48._0_4_;
		UVar9.w = (float)local_48._4_4_;
		UVar9.x = (float)local_58._0_4_;
		UVar9.y = (float)local_58._4_4_;
		position_00.x = (float)local_38._0_4_;
		position_00.y = (float)local_38._4_4_;
		pCVar7 = (BaseShifter)CharacterSpawner.Spawn(a, position_00, UVar9);
		pSVar2 = SettingsManager.InGameCurrent;
		if (((pSVar2 != null) &&(pSVar3 = pSVar2.General, pSVar3 != null)) &&(pSVar4 = pSVar3.Difficulty, pSVar4 != null)) {
			difficulty = pSVar4._value;
			pSVar8 = CharacterData.GetShifterAI(difficulty, type);
			if (pCVar7 != null) {
				bVar1 = (typeof(BaseShifter)._2).typeHierarchyDepth;
				if (((pCVar7.klass._2).typeHierarchyDepth < bVar1) ||((pCVar7.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(BaseShifter))) {
					throw new InvalidCastException();
				}
			}
			if (pCVar7 != null) {
				pCVar7.Init(true, TeamInfo.Titan, pSVar8, 0.0);
				return pCVar7;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001677")]
	[Address(RVA = "0x5844E60", Offset = "0x5843E60", VA = "0x5844E60")]
	public Human SpawnAIHuman(int costume, string costumeName, string loadout)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$SpawnAIHuman): 8 lines keep C-only constructs
		Human pCVar1;
		uint in_register_00000034;
		InGameManager __this_00;
		Vector3 UVar2;
		Vector3 euler;
		Vector3 position;
		Quaternion UStack_5c;
		byte[] local_48 = new byte[16];
		System_ValueTuple_Vector3__Quaternion__o local_38;

		local_38 = (CONCAT44(in_register_00000034, costume)).GetHumanSpawnPoint();
		UStack_5c.z = local_38.Item2.z;
		UStack_5c.w = local_38.Item2.w;
		local_48._0_4_ = local_38.Item1.x;
		local_48._4_4_ = local_38.Item1.y;
		local_48._8_8_ = 0;
		UVar2 = Quaternion.Internal_ToEulerRad(ref UStack_5c);
		euler.x = UVar2.x * 57.29578;
		euler.y = UVar2.y * 57.29578;
		euler.z = UVar2.z * 57.29578;
		__this_00 = null;
		UVar2 = Quaternion.Internal_MakePositive(euler);
		position.z = local_38.Item1.z;
		position.x = (float)local_48._0_4_;
		position.y = (float)local_48._4_4_;
		pCVar1 = __this_00.SpawnAIHumanAt(costume, costumeName, loadout, position, UVar2.y);
		return pCVar1;
	}

	[Token(Token = "0x6001678")]
	[Address(RVA = "0x5844EF0", Offset = "0x5843EF0", VA = "0x5844EF0")]
	public Human SpawnAIHumanAt(int costume, string costumeName, string loadout, Vector3 position, float rotationY)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$SpawnAIHumanAt): 42 lines keep C-only constructs
		byte bVar1;
		HumanCustomSettings pSVar2;
		Settings_SetSettingsContainer_HumanCustomSet__o pSVar3;
		List<object> __this_00;
		StringSetting pSVar4;
		IntSetting pSVar5;
		HumanSetup __this_01;
		InGameSet pSVar6;
		InGameMiscSettings pSVar7;
		Settings_SetSettingsContainer_HumanCustomSet__o pSVar8;
		ListSetting<T> __this_02;
		byte[] auVar9 = new byte[16];
		byte[] auVar10 = new byte[16];
		bool bVar11;
		int iVar12;
		int iVar13;
		HumanCustomSet __this_03;
		InGameCharacterSettings __this_04;
		Human __this_05;
		ListSetting<T> pSVar14;
		int iVar15;
		bool bVar16;
		uint in_XMM0_Dc;
		uint extraout_XMM0_Dc;
		uint in_XMM0_Dd;
		uint extraout_XMM0_Dd;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		Quaternion UVar17;
		Vector3 position_00;
		byte[] local_b8 = new byte[16];
		object local_a8;
		String local_a0;
		byte[] local_98 = new byte[8];
		object local_88;
		byte[] local_78 = new byte[16];
		byte[] local_68 = new byte[16];
		HumanCustomSet local_50;
		byte[] local_48 = new byte[16];

		position_00.z = position.z;
		local_68._0_4_ = rotationY;
		local_48._8_4_ = in_XMM0_Dc;
		local_48._0_8_ = position._0_8_;
		local_48._12_4_ = in_XMM0_Dd;
		local_a0 = loadout;
		local_98 = (byte[])0x0;
		local_88 = null;
		bVar16 = costume == -1;
		if (bVar16) {
			bVar11 = String.IsNullOrWhiteSpace(costumeName);
			if (bVar11) {
				return null;
			}
			__this_03 = new HumanCustomSet();
			if (__this_03 == null) {
				throw new NullReferenceException();
			}
			__this_03.DeserializeFromJsonString(costumeName);
		}
		else {
			__this_03 = null;
		}
		pSVar2 = SettingsManager.HumanCustomSettings;
		if ((pSVar2 == null) ||(pSVar3 = pSVar2.CustomSets, pSVar3 == null)) goto label_059454a2;
		if (costume == 3) {
			pSVar3 = pSVar2.Costume3Sets;
			if (pSVar3 == null) goto label_059454a2;
			pSVar14 = pSVar3.Sets;
			iVar12 = 2;
	label_05945119: ;
			auVar10._12_4_ = 0;
			auVar10._0_12_ = local_78._4_12_;
			local_78 = auVar10 << 0x20;
			if (costume == -1) goto label_059450e1;
	label_0594512a: ;
			local_50 = __this_03;
			if ((pSVar14 == null) ||(__this_00 = (List<object>)pSVar14._value, __this_00 == null)) goto label_059454a2;
			local_b8.GetEnumerator(__this_00);
			local_88 = local_a8;
			local_98 = (byte[])local_b8._0_8_;
			local_b8._0_8_ = null;
			iVar15 = 0;
			local_b8._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_98;
			while (bVar11 = local_98.MoveNext()) {
				if (local_88 == null) {
					throw new NullReferenceException();
				}
				if (local_88[3].klass == null) {
					throw new NullReferenceException();
				}
				bVar11 = (((local_88[3].klass)._1).byval_arg.data == costumeName);
				if (bVar11) {
					bVar16 = true;
					break;
				}
				iVar15 = iVar15 + 1;
			}
			local_98.Dispose();
			if (!bVar16) {
				return null;
			}
		}
		else {
			if (costume == 2) {
				pSVar3 = pSVar2.Costume2Sets;
				if (pSVar3 == null) goto label_059454a2;
				pSVar14 = pSVar3.Sets;
				iVar12 = 1;
				goto label_05945119;
			}
			if (costume == 1) {
				pSVar3 = pSVar2.Costume1Sets;
				if (pSVar3 == null) goto label_059454a2;
				pSVar14 = pSVar3.Sets;
				iVar12 = 0;
				auVar9._12_4_ = 0;
				auVar9._0_12_ = local_78._4_12_;
				local_78 = auVar9 << 0x20;
				goto label_0594512a;
			}
			pSVar8 = pSVar2.Costume1Sets;
			if ((pSVar8 == null) ||(__this_02 = pSVar8.Sets, __this_02 == null)) goto label_059454a2;
			pSVar14 = pSVar3.Sets;
			iVar13 = __this_02.GetCount();
			iVar12 = -1;
			local_78._0_4_ = iVar13;
			if (costume != -1) goto label_0594512a;
	label_059450e1: ;
			iVar15 = 0;
			local_50 = __this_03;
		}
		__this_04 = new InGameCharacterSettings();
		if ((__this_04 != null) &&(pSVar4 = __this_04.Loadout, pSVar4 != null)) {
			pSVar4.Value = (object)local_a0;
			pSVar5 = __this_04.CustomSet;
			if (pSVar5 != null) {
				pSVar5.Value = iVar15 + local_78._0_4_;
				pSVar5 = __this_04.Costume;
				if (pSVar5 != null) {
					pSVar5.Value = iVar12;
					local_b8._0_8_ = (ulong)(uint)((float)local_68._0_4_ * 0.017453292) << 0x20;
					local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
					UVar17 = Quaternion.Internal_FromEulerRad((Vector3)local_b8);
					local_68._8_4_ = extraout_XMM0_Dc;
					local_68._0_8_ = UVar17._0_8_;
					local_68._12_4_ = extraout_XMM0_Dd;
					local_78._8_4_ = in_XMM1_Dc;
					local_78._0_8_ = UVar17._8_8_;
					local_78._12_4_ = in_XMM1_Dd;
					pSVar4 = __this_04.Special;
					if (pSVar4 != null) {
						pSVar4.Value = (object)HumanSpecials.DefaultSpecial;
						UVar17.z = (float)local_78._0_4_;
						UVar17.w = (float)local_78._4_4_;
						UVar17.x = (float)local_68._0_4_;
						UVar17.y = (float)local_68._4_4_;
						position_00.x = (float)local_48._0_4_;
						position_00.y = (float)local_48._4_4_;
						__this_05 = (Human)CharacterSpawner.Spawn(CharacterPrefabs.Human, position_00, UVar17);
						if (__this_05 != null) {
							bVar1 = (typeof(Human)._2).typeHierarchyDepth;
							if (((__this_05.klass._2).typeHierarchyDepth < bVar1) ||((__this_05.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(Human))) {
								throw new InvalidCastException();
							}
						}
						if (__this_05 != null) {
							__this_05.Init(true, TeamInfo.Human, __this_04);
							if (costume == -1) {
								__this_01 = __this_05.Setup;
								iVar12 = HumanLoadout.ToWeapon(local_a0);
								if (__this_01 == null) goto label_059454a2;
								__this_01.Load(local_50, iVar12, false);
							}
							pSVar6 = SettingsManager.InGameCurrent;
							if (((pSVar6 != null) &&(pSVar7 = pSVar6.Misc, pSVar7 != null)) &&(pSVar5 = pSVar7.HumanHealth, pSVar5 != null)) {
								iVar12 = pSVar5._value;
								if (1 < iVar12) {
									__this_05.SetHealth(iVar12);
								}
								return __this_05;
							}
						}
					}
				}
			}
		}
	label_059454a2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001679")]
	[Address(RVA = "0x58455A0", Offset = "0x58445A0", VA = "0x58455A0")]
	public static void OnSetLabelRPC(string label, string message, float time, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$OnSetLabelRPC): clean
		Player pPVar1;

		if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
			pPVar1 = PhotonNetwork.MasterClient;
		}
		else {
			pPVar1 = PhotonNetwork.MasterClient;
		}
		if (info.Sender != pPVar1) {
			return;
		}
		if (((typeof(InGameManager))._2).cctor_finished_or_no_cctor == 0) {
		}
		InGameManager.SetLabel(label, message, time);
		return;
	}

	[Token(Token = "0x600167A")]
	[Address(RVA = "0x5845660", Offset = "0x5844660", VA = "0x5845660")]
	public static void SetLabel(string label, string message, float time = 0f)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$SetLabel): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameMenu __this;

		if (Il2CppMethodInitialized_07545840 == false) {
			Il2CppMethodInitialized_07545840 = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this = (InGameMenu)UIManager.CurrentMenu;
		}
		else {
			__this = *(InGameMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
		if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
			throw new InvalidCastException();
		}
		__this.SetLabel(label, message, time);
		return;
	}

	[Token(Token = "0x600167B")]
	[Address(RVA = "0x5845760", Offset = "0x5844760", VA = "0x5845760")]
	public void EndGame(float time, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$EndGame): clean
		float num;
		UISettings pSVar1;
		BoolSetting pSVar2;
		CustomLogicEvaluator pCVar3;
		bool bVar4;
		Player pPVar5;
		InGameManager.d__101<WaitAndEndGame> __this_00;
		String pSVar6;

		if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
			pPVar5 = PhotonNetwork.MasterClient;
		}
		else {
			pPVar5 = PhotonNetwork.MasterClient;
		}
		if ((info.Sender != pPVar5) || (this.IsEnding != false)) {
			return;
		}
		this.IsEnding = true;
		this.EndTimeLeft = time;
		bVar4 = PhotonNetwork.IsMasterClient;
		if (bVar4) {
			__this_00 = new InGameManager.d__101<WaitAndEndGame>();
			__this_00.__1__state = 0;
			__this_00.time = time;
			this.StartCoroutine((IEnumerator)__this_00);
		}
		pSVar1 = SettingsManager.UISettings;
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.GameFeed, pSVar2 != null)) {
			if (pSVar2._value == false) {
				return;
			}
			pCVar3 = CustomLogicManager.Evaluator;
			if (pCVar3 != null) {
				num = pCVar3.CurrentTime;
				pSVar6 = Util.FormatFloat(num, 2);
				pSVar6 = String.Concat("(", pSVar6, ")");
				pSVar6 = ChatManager.GetColorString(pSVar6, 3, false);
				pSVar6 = String.Concat(pSVar6, " Round ended.");
				ChatManager.AddFeed(pSVar6);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600167C")]
	[Address(RVA = "0x58459D0", Offset = "0x58449D0", VA = "0x58459D0")]
	[IteratorStateMachine(typeof(_003CWaitAndEndGame_003Ed__101))]
	private IEnumerator WaitAndEndGame(float time)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$WaitAndEndGame): clean
		InGameManager.d__101<WaitAndEndGame> __this_00;

		__this_00 = new InGameManager.d__101<WaitAndEndGame>();
		__this_00.__1__state = 0;
		__this_00.time = time;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600167D")]
	[Address(RVA = "0x583E180", Offset = "0x583D180", VA = "0x583E180")]
	private static void ResetPersistentPlayerProperties()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$ResetPersistentPlayerProperties): clean
		uint uVar1;
		Hashtable __this;
		PlayerInfo pGVar2;
		ProfileSettings pSVar3;
		NameSetting pSVar4;
		StringSetting pSVar5;
		String selectedRoleName;
		Player pPVar6;
		String pSVar7;
		String pSVar8;
		Dictionary<string, object> __this_00;
		object pIVar9;
		uint local_3c;
		uint local_38;
		uint local_34;
		uint local_30;
		uint local_2c;

		if (Il2CppMethodInitialized_07545843 == false) {
			Il2CppMethodInitialized_07545843 = true;
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pPVar6 = PhotonNetwork.LocalPlayer;
		}
		else {
			pPVar6 = PhotonNetwork.LocalPlayer;
		}
		if ((pPVar6 != null) &&(__this = pPVar6._CustomProperties_k__BackingField, __this != null)) {
			__this.Clear();
			pGVar2 = InGameManager.MyPlayerInfo;
			if (((pGVar2 != null) &&(pSVar3 = pGVar2.Profile, pSVar3 != null)) &&(pSVar4 = pSVar3.Name, pSVar4 != null)) {
				pSVar7 = pSVar4._value;
				pSVar7 = ChatFilter.FilterBadWords(pSVar7);
				pSVar7 = MiscExtensions.HexColor(pSVar7);
				pGVar2 = InGameManager.MyPlayerInfo;
				if (((pGVar2 != null) &&(pSVar3 = pGVar2.Profile, pSVar3 != null)) &&(pSVar4 = pSVar3.Guild, pSVar4 != null)) {
					pSVar8 = ChatFilter.FilterBadWords(pSVar4._value);
					pSVar8 = MiscExtensions.HexColor(pSVar8);
					pPVar6 = PhotonNetwork.LocalPlayer;
					pGVar2 = InGameManager.MyPlayerInfo;
					if (((pGVar2 != null) &&(pSVar3 = pGVar2.Profile, pSVar3 != null)) &&(pSVar5 = pSVar3.GuildRoleSprite, pSVar5 != null)) {
						selectedRoleName = pSVar5._value;
						pSVar8 = RoleSpriteHelpers.ComposeGuildWithRoleSprite(pPVar6, pSVar8, selectedRoleName);
						__this_00 = new Dictionary<string, object>();
						if (__this_00 != null) {
							__this_00.Add((object)PlayerProperty.Name, (object)pSVar7);
							__this_00.Add((object)PlayerProperty.Guild, (object)pSVar8);
							__this_00.Add((object)PlayerProperty.Team, null);
							pSVar7 = PlayerProperty.CharacterViewId;
							local_2c = 0xffffffff;
							pIVar9 = (object)local_2c;
							__this_00.Add((object)pSVar7, pIVar9);
							__this_00.Add((object)PlayerProperty.CustomMapHash, null);
							__this_00.Add((object)PlayerProperty.CustomLogicHash, null);
							__this_00.Add((object)PlayerProperty.CustomAddonHash, null);
							__this_00.Add((object)PlayerProperty.Status, null);
							__this_00.Add((object)PlayerProperty.Character, null);
							__this_00.Add((object)PlayerProperty.Loadout, null);
							pSVar7 = PlayerProperty.Kills;
							local_30 = 0;
							pIVar9 = (object)local_30;
							__this_00.Add((object)pSVar7, pIVar9);
							pSVar7 = PlayerProperty.Deaths;
							local_34 = 0;
							pIVar9 = (object)local_34;
							__this_00.Add((object)pSVar7, pIVar9);
							pSVar7 = PlayerProperty.HighestDamage;
							local_38 = 0;
							pIVar9 = (object)local_38;
							__this_00.Add((object)pSVar7, pIVar9);
							pSVar7 = PlayerProperty.TotalDamage;
							local_3c = 0;
							pIVar9 = (object)local_3c;
							__this_00.Add((object)pSVar7, pIVar9);
							__this_00.Add((object)PlayerProperty.SpawnPoint, (Il2CppObject *)"null");
							pPVar6 = PhotonNetwork.LocalPlayer;
							PhotonExtensions.SetCustomProperties(pPVar6, __this_00);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600167E")]
	[Address(RVA = "0x5845A50", Offset = "0x5844A50", VA = "0x5845A50")]
	public static void ResetPlayerKD(Player player)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$ResetPlayerKD): clean
		String pSVar1;
		Dictionary<string, object> __this;
		object pIVar2;
		uint uStack_40;
		uint uStack_3c;
		uint uStack_38;
		uint uStack_34;

		__this = new Dictionary<string, object>();
		pSVar1 = PlayerProperty.Kills;
		uStack_34 = 0;
		pIVar2 = (object)uStack_34;
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((object)pSVar1, pIVar2);
		pSVar1 = PlayerProperty.Deaths;
		uStack_38 = 0;
		pIVar2 = (object)uStack_38;
		__this.Add((object)pSVar1, pIVar2);
		pSVar1 = PlayerProperty.HighestDamage;
		uStack_3c = 0;
		pIVar2 = (object)uStack_3c;
		__this.Add((object)pSVar1, pIVar2);
		pSVar1 = PlayerProperty.TotalDamage;
		uStack_40 = 0;
		pIVar2 = (object)uStack_40;
		__this.Add((object)pSVar1, pIVar2);
		PhotonExtensions.SetCustomProperties(player, __this);
		return;
	}

	[Token(Token = "0x600167F")]
	[Address(RVA = "0x583DCA0", Offset = "0x583CCA0", VA = "0x583DCA0")]
	private static void ResetRoundPlayerProperties()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$ResetRoundPlayerProperties): clean
		InGameSet pSVar1;
		InGameMiscSettings pSVar2;
		BoolSetting pSVar3;
		String pSVar4;
		Dictionary<string, object> pSVar5;
		object pIVar6;
		Player pPVar7;
		uint local_40;
		uint local_3c;
		uint local_38;
		uint uStack_34;

		pSVar1 = SettingsManager.InGameCurrent;
		if (((pSVar1 != null) &&(pSVar2 = pSVar1.Misc, pSVar2 != null)) &&(pSVar3 = pSVar2.ClearKDROnRestart, pSVar3 != null)) {
			if (pSVar3._value != false) {
				pSVar5 = new Dictionary<string, object>();
				pSVar4 = PlayerProperty.Kills;
				local_40 = 0;
				pIVar6 = (object)local_40;
				if (pSVar5 == null) goto label_0593e00e;
				pSVar5.Add((object)pSVar4, pIVar6);
				pSVar4 = PlayerProperty.Deaths;
				uStack_34 = 0;
				pIVar6 = (object)uStack_34;
				pSVar5.Add((object)pSVar4, pIVar6);
				pSVar4 = PlayerProperty.HighestDamage;
				local_38 = 0;
				pIVar6 = (object)local_38;
				pSVar5.Add((object)pSVar4, pIVar6);
				pSVar4 = PlayerProperty.TotalDamage;
				local_3c = 0;
				pIVar6 = (object)local_3c;
				pSVar5.Add((object)pSVar4, pIVar6);
				pPVar7 = PhotonNetwork.LocalPlayer;
				PhotonExtensions.SetCustomProperties(pPVar7, pSVar5);
			}
			pSVar5 = new Dictionary<string, object>();
			pSVar4 = PlayerProperty.Status;
			if (pSVar5 != null) {
				pSVar5.Add((object)pSVar4, (object)PlayerStatus.Spectating);
				pSVar4 = PlayerProperty.CharacterViewId;
				local_40 = 0xffffffff;
				pIVar6 = (object)local_40;
				pSVar5.Add((object)pSVar4, pIVar6);
				pSVar5.Add((object)PlayerProperty.SpawnPoint, (Il2CppObject *)"null");
				pPVar7 = PhotonNetwork.LocalPlayer;
				PhotonExtensions.ForceUpdateProps(pPVar7, pSVar5, PlayerProperty.Status, PlayerProperty.CharacterViewId);
				return;
			}
		}
	label_0593e00e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001680")]
	[Address(RVA = "0x58435E0", Offset = "0x58425E0", VA = "0x58435E0")]
	public static void UpdatePlayerName()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$UpdatePlayerName): clean
		uint uVar1;
		PlayerInfo pGVar2;
		ProfileSettings pSVar3;
		NameSetting pSVar4;
		StringSetting pSVar5;
		String pSVar6;
		InGameSet pSVar7;
		InGameMiscSettings pSVar8;
		IntSetting pSVar9;
		InGameCharacterSettings pSVar10;
		bool bVar11;
		String pSVar12;
		String pSVar13;
		Player pPVar14;
		Dictionary<string, object> __this;
		int color;
		int iVar15;

		if (Il2CppMethodInitialized_07545846 == false) {
			Il2CppMethodInitialized_07545846 = true;
			if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor == 0) goto label_059436ec;
	label_0594360c: ;
			pGVar2 = InGameManager.MyPlayerInfo;
		}
		else {
			if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor != 0) goto label_0594360c;
	label_059436ec: ;
			pGVar2 = InGameManager.MyPlayerInfo;
		}
		if (((pGVar2 == null) ||(pSVar3 = pGVar2.Profile, pSVar3 == null)) ||(pSVar4 = pSVar3.Name, pSVar4 == null)) goto label_05943a39;
		pSVar12 = pSVar4._value;
		if (((typeof(ChatFilter))._2).cctor_finished_or_no_cctor == 0) {
		}
		pSVar12 = ChatFilter.FilterBadWords(pSVar12);
		pSVar12 = MiscExtensions.HexColor(pSVar12);
		pGVar2 = InGameManager.MyPlayerInfo;
		if (((pGVar2 == null) ||(pSVar3 = pGVar2.Profile, pSVar3 == null)) ||(pSVar4 = pSVar3.Guild, pSVar4 == null)) goto label_05943a39;
		pSVar13 = ChatFilter.FilterBadWords(pSVar4._value);
		pSVar13 = MiscExtensions.HexColor(pSVar13);
		pPVar14 = PhotonNetwork.LocalPlayer;
		pGVar2 = InGameManager.MyPlayerInfo;
		if (((pGVar2 == null) ||(pSVar3 = pGVar2.Profile, pSVar3 == null)) ||(pSVar5 = pSVar3.GuildRoleSprite, pSVar5 == null)) goto label_05943a39;
		pSVar6 = pSVar5._value;
		pSVar13 = RoleSpriteHelpers.ComposeGuildWithRoleSprite(pPVar14, pSVar13, pSVar6);
		pSVar7 = SettingsManager.InGameCurrent;
		if (((pSVar7 == null) ||(pSVar8 = pSVar7.Misc, pSVar8 == null)) ||(pSVar9 = pSVar8.PVP, pSVar9 == null)) goto label_05943a39;
		if (pSVar9._value == 2) {
			pSVar10 = SettingsManager.InGameCharacterSettings;
			if ((pSVar10 == null) ||(pSVar5 = pSVar10.Team, pSVar5 == null)) goto label_05943a39;
			pSVar6 = pSVar5._value;
			bVar11 = (pSVar6 == TeamInfo.Blue);
			if (bVar11) {
				iVar15 = 6;
				color = 6;
				uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				pSVar10 = SettingsManager.InGameCharacterSettings;
				if ((pSVar10 == null) ||(pSVar5 = pSVar10.Team, pSVar5 == null)) goto label_05943a39;
				pSVar6 = pSVar5._value;
				bVar11 = (pSVar6 == TeamInfo.Red);
				if (!bVar11) goto label_0594397e;
				iVar15 = 5;
				color = 5;
				uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				color = iVar15;
			}
			pSVar12 = ChatManager.GetColorString(pSVar12, color, false);
		}
	label_0594397e: ;
		pPVar14 = PhotonNetwork.LocalPlayer;
		__this = new Dictionary<string, object>();
		if (__this != null) {
			__this.Add((object)PlayerProperty.Name, (object)pSVar12);
			__this.Add((object)PlayerProperty.Guild, (object)pSVar13);
			PhotonExtensions.SetCustomProperties(pPVar14, __this);
			return;
		}
	label_05943a39: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001681")]
	[Address(RVA = "0x5845C00", Offset = "0x5844C00", VA = "0x5845C00")]
	public static void SyncLocalProfileToPlayerInfo(string reason)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$SyncLocalProfileToPlayerInfo): 6 lines keep C-only constructs
		PlayerInfo pGVar1;
		ProfileSettings pSVar3;
		Dictionary<int, object> __this;
		PhotonView pPVar4;
		Action<int> pSVar5;
		bool bVar6;
		bool bVar7;
		UnsavedPlayerInfo __this_00;
		Player pPVar8;
		Room pPVar9;
		Byte[] obj;
		Object[] parameters;
		object pIVar10;
		Il2CppClass klass;
		int key;

		if (SettingsManager.ProfileSettings == null) {
			return;
		}
		if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor == 0) {
			if (InGameManager.MyPlayerInfo != null) goto label_05945cd2;
	label_05945d0f: ;
			__this_00 = new UnsavedPlayerInfo();
			InGameManager.MyPlayerInfo = (PlayerInfo)__this_00;
			if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor != 0) goto label_05945cdf;
	label_05945d69: ;
			pGVar1 = InGameManager.MyPlayerInfo;
		}
		else {
			if (InGameManager.MyPlayerInfo == null) goto label_05945d0f;
	label_05945cd2: ;
			if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor == 0) goto label_05945d69;
	label_05945cdf: ;
			pGVar1 = InGameManager.MyPlayerInfo;
		}
		if ((pGVar1 == null) ||(pSVar3 = pGVar1.Profile, pSVar3 == null)) goto label_05946097;
		pSVar3.Copy((BaseSetting)SettingsManager.ProfileSettings);
		pPVar8 = PhotonNetwork.LocalPlayer;
		bVar6 = true;
		if (pPVar8 == null) {
			key = -1;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor != 0) goto label_05945e56;
	label_05945e79: ;
			pPVar8 = PhotonNetwork.LocalPlayer;
		}
		else {
			pPVar8 = PhotonNetwork.LocalPlayer;
			if (pPVar8 == null) goto label_05946097;
			key = pPVar8.actorNumber;
			if (0 < key) {
				__this = (Dictionary<int, object>)InGameManager.AllPlayerInfo;
				if (__this == null) goto label_05946097;
				__this.set_Item(key, (object)InGameManager.MyPlayerInfo);
				bVar6 = false;
			}
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) goto label_05945e79;
	label_05945e56: ;
			pPVar8 = PhotonNetwork.LocalPlayer;
		}
		if (pPVar8 != null) {
			if (((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor == 0) {
				pPVar9 = PhotonNetwork.CurrentRoom;
				klass = typeof(InGameManager);
			}
			else {
				pPVar9 = PhotonNetwork.CurrentRoom;
				klass = typeof(InGameManager);
			}
			typeof(InGameManager) = (InGameManager)klass;
			if (pPVar9 != null) {
				InGameManager.UpdatePlayerName();
				pPVar4 = RPCManager.PhotonView;
				bVar7 = ((Object)pPVar4 != null);
				if (bVar7) {
					obj = InGameManager.SerializeMyPlayerInfo();
					pPVar4 = RPCManager.PhotonView;
					parameters = (Object[])new object[1];
					if (parameters == null) {
	label_05946097: ;
						throw new NullReferenceException();
					}
					if ((obj != null) &&(pIVar10 = il2cpp_vm_Object_IsInst(&obj.obj, (((parameters.obj).klass)._1).element_class), pIVar10 == null)) {
						pIVar10 = new ArrayTypeMismatchException();
						throw pIVar10;
					}
					if ((int)parameters.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					parameters[0] = &obj.obj;
					if (pPVar4 == null) goto label_05946097;
					pPVar4.RPC("PlayerInfoRPC", 1, parameters);
				}
			}
		}
		if (bVar6) goto label_05946008;
		if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_0754584b != false) goto label_05945fd9;
	label_05946051: ;
			Il2CppMethodInitialized_0754584b = true;
			if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor != 0) goto label_05945fea;
	label_05946075: ;
			pSVar5 = InGameManager.PlayerInfoUpdated;
		}
		else {
			if (Il2CppMethodInitialized_0754584b == false) goto label_05946051;
	label_05945fd9: ;
			if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor == 0) goto label_05946075;
	label_05945fea: ;
			pSVar5 = InGameManager.PlayerInfoUpdated;
		}
		if (pSVar5 != null) {
			(*(code)pSVar5.invoke_impl)(pSVar5.method_code,key,pSVar5.method);
		}
	label_05946008: ;
		if (SceneLoader.SceneName == 2) {
			SettingsManager.NotifySettingsChanged();
			return;
		}
		return;
	}

	[Token(Token = "0x6001682")]
	[Address(RVA = "0x583F140", Offset = "0x583E140", VA = "0x583F140")]
	public static void UpdateRoundPlayerProperties()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$UpdateRoundPlayerProperties): 7 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		BaseGameManager pGVar3;
		Object x;
		InGameCharacterSettings pSVar4;
		IntSetting pSVar5;
		String pSVar6;
		long lVar7;
		StringSetting pSVar8;
		bool bVar9;
		uint uVar10;
		ulong in_RAX;
		GameManagers_PlayerStatus_StaticFields pGVar11;
		Dictionary<string, object> __this;
		object value;
		Player player;
		ulong uStack_38;

		uStack_38 = in_RAX;
		pGVar3 = SceneLoader.CurrentGameManager;
		if (pGVar3 == null) goto label_0593f53e;
		bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
		if (((pGVar3.klass._2).typeHierarchyDepth < bVar1) ||((pGVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
			throw new InvalidCastException();
		}
		x = (*(ulong)((sbyte)pGVar3 + 0x80));
		bVar9 = (x != null);
		if (bVar9) {
			if ((*(ulong)((sbyte)pGVar3 + 0x80)) == null) goto label_0593f53e;
			if (*(sbyte)((long)(*(ulong)((sbyte)pGVar3 + 0x80)) + 0x78) != false) goto label_0593f288;
			pGVar11 = typeof(PlayerStatus).static_fields;
			bVar9 = false;
		}
		else {
	label_0593f288: ;
			pSVar4 = SettingsManager.InGameCharacterSettings;
			if ((pSVar4 == null) ||(pSVar5 = pSVar4.ChooseStatus, pSVar5 == null)) goto label_0593f53e;
			uVar2 = (typeof(PlayerStatus)._2).cctor_finished_or_no_cctor;
			if (pSVar5._value == 2) {
				if (uVar2 == 0) {
				}
				pGVar11 = (GameManagers_PlayerStatus_StaticFields)&PlayerStatus.Dead;
			}
			else {
				if (uVar2 == 0) {
				}
				pGVar11 = (GameManagers_PlayerStatus_StaticFields)&PlayerStatus.Spectating;
			}
			bVar9 = true;
		}
		pSVar6 = pGVar11.Alive;
		__this = new Dictionary<string, object>();
		if (__this != null) {
			__this.Add((object)PlayerProperty.Status, (object)pSVar6);
			pSVar6 = PlayerProperty.CharacterViewId;
			uVar10 = 0xffffffff;
			if (!bVar9) {
				if ((((*(ulong)((sbyte)pGVar3 + 0x80)) == null) ||(lVar7 = *(long)((long)(*(ulong)((sbyte)pGVar3 + 0x80)) + 0x80), lVar7 == 0)) ||(lVar7 = *(long)(lVar7 + 0x20), lVar7 == 0)) goto label_0593f53e;
				uVar10 = *(uint)(lVar7 + 0x94);
			}
			uStack_38 = CONCAT44(uVar10, (undefined4)uStack_38);
			value = (object)(((long)&uStack_38 + 4));
			__this.Add((object)pSVar6, value);
			pSVar4 = SettingsManager.InGameCharacterSettings;
			if ((pSVar4 != null) &&(pSVar8 = pSVar4.CharacterType, pSVar8 != null)) {
				__this.Add((object)PlayerProperty.Character, (object)pSVar8._value);
				pSVar4 = SettingsManager.InGameCharacterSettings;
				if ((pSVar4 != null) &&(pSVar8 = pSVar4.Loadout, pSVar8 != null)) {
					__this.Add((object)PlayerProperty.Loadout, (object)pSVar8._value);
					pSVar4 = SettingsManager.InGameCharacterSettings;
					if ((pSVar4 != null) &&(pSVar8 = pSVar4.Team, pSVar8 != null)) {
						__this.Add((object)PlayerProperty.Team, (object)pSVar8._value) ;
						player = PhotonNetwork.LocalPlayer;
						PhotonExtensions.ForceUpdateProps(player, __this, PlayerProperty.Status, PlayerProperty.CharacterViewId);
						return;
					}
				}
			}
		}
	label_0593f53e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001683")]
	[Address(RVA = "0x583ECA0", Offset = "0x583DCA0", VA = "0x583ECA0")]
	private static void ResetPlayerInfo()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$ResetPlayerInfo): 1 lines keep C-only constructs
		uint uVar1;
		int iVar2;
		Dictionary<int, object> pSVar3;
		HashSet<int> pSVar4;
		Dictionary<int, float> __this;
		ProfileSettings pSVar5;
		Action<int> pSVar7;
		code *vtableDispatch;
		UnsavedPlayerInfo __this_00;
		Player pPVar8;

		if (Il2CppMethodInitialized_07545849 == false) {
			Il2CppMethodInitialized_07545849 = true;
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = (Dictionary<int, object>)InGameManager.AllPlayerInfo;
		}
		else {
			pSVar3 = *(Dictionary<int, object>*)((long)(typeof(InGameManager)).static_fields + 0x28);
		}
		if (pSVar3 != null) {
			pSVar3.Clear();
			pSVar4 = InGameManager.MuteEmote;
			if (pSVar4 != null) {
				pSVar4.Clear();
				pSVar4 = InGameManager.MuteText;
				if (pSVar4 != null) {
					pSVar4.Clear();
					pSVar4 = InGameManager.MuteVoiceChat;
					if (pSVar4 != null) {
						pSVar4.Clear();
						__this = InGameManager.VoiceChatVolumeMultiplier;
						if (__this != null) {
							__this.Clear();
							__this_00 = new UnsavedPlayerInfo();
							if ((__this_00 != null) &&(pSVar5 = __this_00.Profile, pSVar5 != null)) {
								pSVar5.Copy((BaseSetting)SettingsManager.ProfileSettings);
								pSVar3 = (Dictionary<int, object>)InGameManager.AllPlayerInfo;
								pPVar8 = PhotonNetwork.LocalPlayer;
								if ((pPVar8 != null) &&(pSVar3 != null)) {
									pSVar3.Add(pPVar8.actorNumber, (object)__this_00);
									InGameManager.MyPlayerInfo = (PlayerInfo)__this_00;
									pPVar8 = PhotonNetwork.LocalPlayer;
									if (pPVar8 != null) {
										iVar2 = pPVar8.actorNumber;
										if (Il2CppMethodInitialized_0754584b == false) {
											Il2CppMethodInitialized_0754584b = true;
											uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
										}
										else {
											uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
										}
										if (uVar1 == 0) {
											pSVar7 = InGameManager.PlayerInfoUpdated;
										}
										else {
											pSVar7 = *(Action<int>*)((long)(typeof(InGameManager)).static_fields + 0x58);
										}
										if (pSVar7 == null) {
											return;
										}
										vtableDispatch = (code)pSVar7.invoke_impl;
										(*vtableDispatch)(pSVar7.method_code,iVar2,pSVar7.method,vtableDispatch) ;
										return;
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001684")]
	[Address(RVA = "0x5840170", Offset = "0x583F170", VA = "0x5840170")]
	private static byte[] SerializeMyPlayerInfo()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$SerializeMyPlayerInfo): clean
		CompressionAlgorithm __this;
		PlayerInfo pGVar1;
		String str;
		Byte[] pSVar2;

		__this = (CompressionAlgorithm)DataCompressors.Brotli;
		pGVar1 = InGameManager.MyPlayerInfo;
		if (pGVar1 != null) {
			str = pGVar1.SerializeToJsonString();
			if (__this != null) {
				pSVar2 = __this.CompressString(str, 1);
				return pSVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001685")]
	[Address(RVA = "0x58412A0", Offset = "0x58402A0", VA = "0x58412A0")]
	private static void NotifyPlayerInfoUpdated(int actorNumber)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$NotifyPlayerInfoUpdated): 1 lines keep C-only constructs
		uint uVar1;
		Action<int> pSVar2;
		code *vtableDispatch;

		if (Il2CppMethodInitialized_0754584b == false) {
			Il2CppMethodInitialized_0754584b = true;
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = InGameManager.PlayerInfoUpdated;
		}
		else {
			pSVar2 = *(Action<int>*)((long)(typeof(InGameManager)).static_fields + 0x58);
		}
		if (pSVar2 == null) {
			return;
		}
		vtableDispatch = (code)pSVar2.invoke_impl;
		(*vtableDispatch)(pSVar2.method_code,actorNumber,pSVar2.method,vtableDispatch);
		return;
	}

	[Token(Token = "0x6001686")]
	[Address(RVA = "0x5841630", Offset = "0x5840630", VA = "0x5841630")]
	private static void PrintMOTD(string original)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$PrintMOTD): 1 lines keep C-only constructs
		InGameSet pSVar1;
		InGameMiscSettings pSVar2;
		StringSetting pSVar3;
		bool bVar4;
		String message;

		pSVar1 = SettingsManager.InGameCurrent;
		if (((pSVar1 != null) &&(pSVar2 = pSVar1.Misc, pSVar2 != null)) &&(pSVar3 = pSVar2.Motd, pSVar3 != null)) {
			bVar4 = (original != pSVar3._value);
			if (!bVar4) {
				return;
			}
			pSVar1 = SettingsManager.InGameCurrent;
			if (((pSVar1 != null) &&(pSVar2 = pSVar1.Misc, pSVar2 != null)) &&(pSVar3 = pSVar2.Motd, pSVar3 != null)) {
				message = String.Concat("MOTD: ", pSVar3._value) ;
				ChatManager.AddLine(message, 3, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001687")]
	[Address(RVA = "0x58460B0", Offset = "0x58450B0", VA = "0x58460B0")]
	private void PrewarmAssets()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$PrewarmAssets): clean
		bool gore;
		uint uVar1;
		String[] pSVar2;
		String name;
		String path;
		ulong uVar3;
		ulong uVar4;

		pSVar2 = InGameManager.PrewarmEffects;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		if (0 < (int)pSVar2.Length) {
			uVar3 = pSVar2.Length & 0xffffffff;
			uVar4 = 0;
			do {
				if (uVar3 <= uVar4) {
					throw new IndexOutOfRangeException();
				}
				name = pSVar2[uVar4];
				path = ResourcePaths.Effects;
				ResourceManager.LoadAsset(path, name, false, true);
				uVar4 = uVar4 + 1;
				uVar1 = (uint)pSVar2.Length;
				uVar3 = (ulong)uVar1;
			} while ((long)uVar4 < (long)(int)uVar1);
		}
		gore = this._TitanGoreEnabled_k__BackingField;
		BasicTitanComponentCache.PrewarmAssets(gore);
		BasicTitanSetup.PreloadAIAssets();
		KillFeedBigPopup.LoadWeaponIcon("Blade");
		return;
	}

	[Token(Token = "0x6001688")]
	[Address(RVA = "0x5846250", Offset = "0x5845250", VA = "0x5846250", Slot = "54")]
	protected override void Awake()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$Awake): clean
		InputSettings pSVar1;
		GraphicsSettings pSVar2;
		BoolSetting pSVar3;
		InGameSet pSVar4;
		InGameMiscSettings pSVar5;
		StringSetting pSVar6;
		String original;
		bool bVar7;
		GameObject __this_00;
		SkyboxCustomSkinLoader pCVar8;
		GeneralInputSettings method_00;
		InGameSet method_01;

		__this_00 = this.gameObject;
		if (__this_00 != null) {
			pCVar8 = __this_00.AddComponent<SkyboxCustomSkinLoader>();
			this._skyboxCustomSkinLoader = pCVar8;
			pSVar1 = SettingsManager.InputSettings;
			if (pSVar1 != null) {
				method_00 = pSVar1.General;
				this._generalInputSettings = method_00;
				pSVar2 = SettingsManager.GraphicsSettings;
				if ((pSVar2 != null) &&(pSVar3 = pSVar2.TitanGore, pSVar3 != null)) {
					this._TitanGoreEnabled_k__BackingField = pSVar3._value;
					this.PrewarmAssets();
					InGameManager.ResetRoundPlayerProperties();
					if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
						bVar7 = PhotonNetwork.IsMasterClient;
					}
					else {
						bVar7 = PhotonNetwork.IsMasterClient;
					}
					if (bVar7) {
						pSVar4 = SettingsManager.InGameCurrent;
						if (((pSVar4 == null) ||(pSVar5 = pSVar4.Misc, pSVar5 == null)) ||(pSVar6 = pSVar5.Motd, pSVar6 == null)) goto label_05946402;
						original = pSVar6._value;
						method_01 = SettingsManager.InGameUI;
						pSVar4.Copy((BaseSetting)method_01);
						InGameManager.PrintMOTD(original);
					}
					this.Awake();
					return;
				}
			}
		}
	label_05946402: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001689")]
	[Address(RVA = "0x5846410", Offset = "0x5845410", VA = "0x5846410", Slot = "55")]
	protected override void Start()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$Start): 26 lines keep C-only constructs
		ulong uVar1;
		ulong uVar2;
		byte bVar3;
		PhotonView __this_00;
		InGameSet pSVar5;
		CompressionAlgorithm __this_01;
		InGameGeneralSettings pSVar6;
		StringSetting pSVar7;
		StringSetting pSVar8;
		String value;
		BoolSetting pSVar9;
		InGameMenu pUVar10;
		bool bVar11;
		int iVar12;
		Player pPVar13;
		object pIVar14;
		Object[] parameters;
		String pSVar15;
		Byte[] obj;
		MethodInfo method_00;
		InGameManager pGVar16;
		InGameMenu pUVar17;
		uint uVar18;
		uint uVar19;
		uint uVar20;
		uint uVar21;
		float fVar22;
		Quaternion rotation;
		Vector3 position;
		byte uStack_75;
		float fStack_74;
		uint uStack_70;
		int iStack_6c;
		ulong uStack_68;
		ulong uStack_60;
		ulong uStack_58;
		ulong uStack_48;

		if (Il2CppMethodInitialized_0754584f == false) {
			Il2CppMethodInitialized_0754584f = true;
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) goto label_0594658b;
	label_05946445: ;
			pUVar17 = (InGameMenu)UIManager.CurrentMenu;
			if (pUVar17 != null) goto label_05946459;
	label_059465a7: ;
			this._inGameMenu = null;
		}
		else {
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor != 0) goto label_05946445;
	label_0594658b: ;
			pUVar17 = (InGameMenu)UIManager.CurrentMenu;
			if (pUVar17 == null) goto label_059465a7;
	label_05946459: ;
			pUVar10 = typeof(InGameMenu);
			bVar3 = (typeof(InGameMenu)._2).typeHierarchyDepth;
			if (((((BaseMenu)pUVar17.klass)._2).typeHierarchyDepth < bVar3) ||((((BaseMenu)pUVar17.klass)._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(InGameMenu))) {
	label_05946a30: ;
				throw new InvalidCastException();
			}
			this._inGameMenu = pUVar17;
			if (((((BaseMenu)pUVar17.klass)._2).typeHierarchyDepth < bVar3) ||((((BaseMenu)pUVar17.klass)._2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass)pUVar10)) goto label_05946a30;
		}
		if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
			bVar11 = PhotonNetwork.IsMasterClient;
		}
		else {
			bVar11 = PhotonNetwork.IsMasterClient;
		}
		if (bVar11) {
			__this_00 = RPCManager.PhotonView;
			parameters = (Object[])new object[1];
			pSVar5 = SettingsManager.InGameCurrent;
			if (pSVar5 != null) {
				__this_01 = (CompressionAlgorithm)DataCompressors.Brotli;
				pSVar15 = pSVar5.SerializeToJsonString();
				if ((__this_01 != null) &&(obj = __this_01.CompressString(pSVar15, 1) , parameters != null)) {
					if ((obj != null) &&(pIVar14 = il2cpp_vm_Object_IsInst(&obj.obj, (((parameters.obj).klass)._1).element_class), pIVar14 == null)) {
						pIVar14 = new ArrayTypeMismatchException();
						throw pIVar14;
					}
					if ((int)parameters.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					parameters[0] = &obj.obj;
					if (__this_00 != null) {
						__this_00.RPC("GameSettingsRPC", 0, parameters);
						pSVar5 = SettingsManager.InGameCurrent;
						if (((pSVar5 != null) &&(pSVar6 = pSVar5.General, pSVar6 != null)) &&(pSVar7 = pSVar6.MapName, pSVar7 != null)) {
							pSVar8 = pSVar6.GameMode;
							uStack_68 = this;
							if (pSVar8 != null) {
								pSVar15 = pSVar7._value;
								value = pSVar8._value;
								method_00 = (MethodInfo)il2cpp_codegen_object_new(typeof(Hashtable)) ;
								method_00 = new Hashtable();
								if (method_00 != null) {
									method_00.Add((object)RoomProperty.Map, (object)pSVar15);
									method_00.Add((object)RoomProperty.GameMode, (object)value);
									pSVar9 = pSVar5.Sandbox;
									if (pSVar9 != null) {
										pSVar15 = RoomProperty.Sandbox;
										uStack_75 = pSVar9._value;
										pIVar14 = (object)uStack_75;
										method_00.Add((object)pSVar15, pIVar14);
										pSVar7 = pSVar5.ExperienceName;
										if (pSVar7 != null) {
											method_00.Add((object)RoomProperty.Experience, (object)pSVar7._value);
											pGVar16 = (InGameManager)PhotonNetwork.CurrentRoom;
											this = uStack_68;
											if (pGVar16 != null) {
												(*((VirtualInvokeData_8545bef1388f)&(pGVar16.klass.vtable)._5_unknown).methodPtr)(pGVar16,(Hashtable)method_00,null,null,((VirtualInvokeData_8545bef1388f)&(pGVar16.klass.vtable)._5_unknown). method);
												pGVar16.LoadSkin();
												goto joined_r0x05946a0d;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			throw new NullReferenceException();
		}
	joined_r0x05946a0d: ;
		pGVar16 = *(InGameManager*)&(Vector3.zeroVector);
		fVar22 = (Vector3.zeroVector).z;
		uVar18 = (int)pGVar16;
		uVar19 = (int)((ulong)pGVar16 >> 0x20);
		uVar20 = 0;
		uVar21 = 0;
		if (Il2CppMethodInitialized_0753e72b == false) {
			uStack_60 = 0;
			fStack_74 = fVar22;
			uStack_68 = pGVar16;
			Il2CppMethodInitialized_0753e72b = true;
			uVar18 = (undefined4)uStack_68;
			uVar19 = uStack_68._4_4_;
			uVar20 = (undefined4)uStack_60;
			uVar21 = uStack_60._4_4_;
			fVar22 = fStack_74;
		}
		uVar1._0_4_ = (Quaternion.identityQuaternion).x;
		uVar1._4_4_ = (Quaternion.identityQuaternion).y;
		uVar2._0_4_ = (Quaternion.identityQuaternion).z;
		uVar2._4_4_ = (Quaternion.identityQuaternion).w;
		if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
			uStack_68 = (InGameManager)CONCAT44(uVar19, uVar18);
			uStack_60 = CONCAT44(uVar21, uVar20);
			fStack_74 = fVar22;
			uStack_58 = uVar2;
			uStack_48 = uVar1;
			uVar18 = (undefined4)uStack_68;
			uVar19 = uStack_68._4_4_;
			fVar22 = fStack_74;
			uVar1._0_4_ = (undefined4)uStack_48;
			uVar1._4_4_ = uStack_48._4_4_;
			uVar2._0_4_ = (undefined4)uStack_58;
			uVar2._4_4_ = uStack_58._4_4_;
		}
		rotation.y = (float)uVar1._4_4_;
		rotation.x = (float)(undefined4)uVar1;
		rotation.w = (float)uVar2._4_4_;
		rotation.z = (float)(undefined4)uVar2;
		position.y = (float)uVar19;
		position.x = (float)uVar18;
		position.z = fVar22;
		PhotonNetwork.Instantiate("Game/PhotonVoicePrefab", position, rotation, 0, null);
		this.Start();
		iVar12 = PhotonNetwork.GetPing();
		pPVar13 = PhotonNetwork.LocalPlayer;
		pSVar15 = PlayerProperty.Ping;
		iStack_6c = iVar12;
		pIVar14 = (object)iStack_6c;
		PhotonExtensions.SetCustomProperty(pPVar13, pSVar15, pIVar14);
		pPVar13 = PhotonNetwork.LocalPlayer;
		pSVar15 = PlayerProperty.SpectateID;
		uStack_70 = 0xffffffff;
		pIVar14 = (object)uStack_70;
		PhotonExtensions.SetCustomProperty(pPVar13, pSVar15, pIVar14);
		return;
	}

	[Token(Token = "0x600168A")]
	[Address(RVA = "0x5846F20", Offset = "0x5845F20", VA = "0x5846F20", Slot = "56")]
	public override bool IsFinishedLoading()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$IsFinishedLoading): clean
		bool bVar1;
		bool bVar2;

		bVar1 = this.IsFinishedLoading();
		if (bVar1) {
			bVar2 = this._gameSettingsLoaded != false;
		}
		return bVar2;
	}

	[Token(Token = "0x600168B")]
	[Address(RVA = "0x5846F50", Offset = "0x5845F50", VA = "0x5846F50")]
	private void Update()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$Update): 2 lines keep C-only constructs
		String key;
		ulong in_RAX;
		Player player;
		object value;
		float fVar1;
		float fVar2;
		uint uStack_24;

		uStack_24 = (undefined4)((ulong)in_RAX >> 0x20);
		if (this.State != 0) {
			this.UpdateInput();
		}
		this.UpdateCleanCharacters();
		fVar2 = this.EndTimeLeft;
		fVar1 = Time.deltaTime;
		fVar2 = fVar2 - fVar1;
		if (fVar2 <= 0.0) {
			fVar2 = 0.0;
		}
		this.EndTimeLeft = fVar2;
		fVar2 = this.timeSinceLastPingUpdate;
		fVar1 = Time.deltaTime;
		fVar1 = fVar1 + fVar2;
		this.timeSinceLastPingUpdate = fVar1;
		if (this.pingUpdateInterval <= fVar1) {
			PhotonNetwork.GetPing();
			player = PhotonNetwork.LocalPlayer;
			key = PlayerProperty.Ping;
			value = (object)uStack_24;
			PhotonExtensions.SetCustomProperty(player, key, value);
			this.timeSinceLastPingUpdate = 0.0;
		}
		return;
	}

	[Token(Token = "0x600168C")]
	[Address(RVA = "0x58477D0", Offset = "0x58467D0", VA = "0x58477D0", Slot = "57")]
	protected override void OnFinishLoading()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$OnFinishLoading): 2 lines keep C-only constructs
		float num;
		sbyte cVar1;
		MapScript pMVar2;
		CustomLogic_CustomLogicManager_StaticFields pCVar3;
		LoadingMenu __this_00;
		IntSetting pSVar4;
		InGameMenu __this_01;
		InGameSet pSVar5;
		InGameModeSettings pSVar6;
		InGameAddonSettings pSVar7;
		Dictionary<string, BaseSetting> modeSettings;
		Dictionary<string, Dictionary<string, BaseSetting>> addonSettings;
		PhotonView pPVar8;
		UISettings pSVar9;
		BoolSetting pSVar10;
		CustomLogicEvaluator pCVar11;
		bool bVar12;
		Settings_SettingsManager_StaticFields pSVar13;
		Object[] pSVar14;
		Byte[] obj;
		object pIVar15;
		String pSVar16;

		this.OnFinishLoading();
		pSVar16 = CustomLogicManager.Logic;
		bVar12 = (pSVar16 == BuiltinLevels.UseMapLogic);
		if (bVar12) {
			pMVar2 = MapManager.MapScript;
			if (pMVar2 == null) goto label_05947e13;
			pSVar16 = pMVar2.Logic;
			pCVar3 = typeof(CustomLogicManager).static_fields;
			pCVar3.Logic = pSVar16;
		}
		else {
			pSVar16 = CustomLogicManager.Logic;
			pMVar2 = MapManager.MapScript;
			if (pMVar2 == null) goto label_05947e13;
			pSVar16 = String.Concat(pSVar16, pMVar2.Logic);
			pCVar3 = typeof(CustomLogicManager).static_fields;
			pCVar3.Logic = pSVar16;
		}
		__this_00 = UIManager.LoadingMenu;
		if (__this_00 == null) goto label_05947e13;
		__this_00.UpdateLoading(1.0, true, false);
		if ((typeof(MapDestruction)._2).cctor_finished_or_no_cctor == 0) {
			MapDestruction.RequestState();
			if (this.State == 0) goto label_05947b77;
	label_05947a84: ;
			cVar1 = this._songPopupPending;
		}
		else {
			MapDestruction.RequestState();
			if (this.State != 0) goto label_05947a84;
	label_05947b77: ;
			this.State = 1;
			cVar1 = this._songPopupPending;
		}
		if (cVar1 != false) {
			this.OnSongChange();
		}
		pSVar13 = typeof(SettingsManager).static_fields;
		if ((pSVar13.InGameCharacterSettings != null) &&(pSVar4 = pSVar13.InGameCharacterSettings.ChooseStatus, pSVar4 != null )) {
			if (pSVar4._value == 0) {
				__this_01 = this._inGameMenu;
				if (__this_01 == null) goto label_05947e13;
				__this_01.SetCharacterMenu(true);
				pSVar13 = typeof(SettingsManager).static_fields;
			}
			pSVar5 = pSVar13.InGameCurrent;
			if (((pSVar5 != null) &&(pSVar6 = pSVar5.Mode, pSVar6 != null)) &&(pSVar7 = pSVar5.Addons, pSVar7 != null)) {
				modeSettings = pSVar6.Current;
				addonSettings = pSVar7.Current;
				CustomLogicManager.StartLogic(modeSettings, addonSettings);
				if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor == 0) {
					cVar1 = InGameManager._needSendPlayerInfo;
				}
				else {
					cVar1 = InGameManager._needSendPlayerInfo;
				}
				if (cVar1 != false) {
					pPVar8 = RPCManager.PhotonView;
					pSVar14 = (Object[])new object[1];
					obj = InGameManager.SerializeMyPlayerInfo();
					if (pSVar14 == null) goto label_05947e13;
					if ((obj != null) &&(pIVar15 = il2cpp_vm_Object_IsInst(&obj.obj, (((pSVar14.obj).klass)._1).element_class), pIVar15 == null)) {
						pIVar15 = new ArrayTypeMismatchException();
						throw pIVar15;
					}
					if ((int)pSVar14.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					pSVar14[0] = &obj.obj;
					if (pPVar8 == null) goto label_05947e13;
					pPVar8.RPC("PlayerInfoRPC", 1, pSVar14);
					bVar12 = PhotonNetwork.IsMasterClient;
					if (!bVar12) {
						pPVar8 = RPCManager.PhotonView;
						pSVar14 = (Object[])new object[0];
						if (pPVar8 == null) goto label_05947e13;
						pPVar8.RPC("NotifyPlayerJoinedRPC", 1, pSVar14);
					}
					if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor == 0) {
					}
					InGameManager._needSendPlayerInfo = false;
				}
				this.SpawnPlayer(false);
				pSVar9 = SettingsManager.UISettings;
				if ((pSVar9 != null) &&(pSVar10 = pSVar9.GameFeed, pSVar10 != null)) {
					if (pSVar10._value == false) {
						return;
					}
					pCVar11 = CustomLogicManager.Evaluator;
					if (pCVar11 != null) {
						num = pCVar11.CurrentTime;
						pSVar16 = Util.FormatFloat(num, 2);
						pSVar16 = String.Concat("(", pSVar16, ")");
						pSVar16 = ChatManager.GetColorString(pSVar16, 3, false);
						pSVar16 = String.Concat(pSVar16, " Round started.");
						ChatManager.AddFeed(pSVar16);
						return;
					}
				}
			}
		}
	label_05947e13: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600168D")]
	[Address(RVA = "0x5847090", Offset = "0x5846090", VA = "0x5847090")]
	private void UpdateInput()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$UpdateInput): clean
		GeneralInputSettings pSVar1;
		KeybindSetting pSVar2;
		InGameMenu pUVar3;
		BaseCharacter pCVar4;
		InGameCharacterSettings pSVar5;
		IntSetting __this_00;
		BoolSetting pSVar6;
		InputSettings pSVar7;
		bool bVar8;
		bool bVar9;

		pSVar1 = this._generalInputSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.ToggleScoreboard, pSVar2 == null)) goto label_05947681;
		bVar8 = pSVar2.GetKey(false);
		if (!bVar8) {
			pUVar3 = this._inGameMenu;
			if (pUVar3 == null) goto label_05947681;
			pUVar3.ScoreboardDismissedUntilRelease = false;
		}
		pSVar1 = this._generalInputSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.ToggleMap, pSVar2 == null)) goto label_05947681;
		bVar8 = pSVar2.GetKey(false);
		if (!bVar8) {
			pUVar3 = this._inGameMenu;
			if (pUVar3 == null) goto label_05947681;
			pUVar3.MapDismissedUntilRelease = false;
		}
		if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
			bVar8 = ChatManager.IsChatActive();
			if (bVar8) {
				return;
			}
		}
		else {
			bVar8 = ChatManager.IsChatActive();
			if (bVar8) {
				return;
			}
		}
		bVar8 = Input.GetKeyDown(0x1b);
		if (bVar8) {
	label_0594721f: ;
			if ((typeof(GisketchInputCapture)._2).cctor_finished_or_no_cctor == 0) {
				bVar9 = GisketchInputCapture.BlocksUiInput;
				if (bVar9) {
					return;
				}
			}
			else {
				bVar9 = GisketchInputCapture.BlocksUiInput;
				if (bVar9) {
					return;
				}
			}
			bVar9 = AottgGisketchUiHost.ClosedInGameOverlayThisFrame;
			if ((bVar9) ||((bVar8 && (bVar8 = AottgGisketchUiHost.IsInGameOverlayActive)))) {
				return;
			}
			pUVar3 = this._inGameMenu;
			if (pUVar3 == null) goto label_05947681;
			bVar8 = pUVar3.TryDismissGameplayMenu();
			if (bVar8) {
				return;
			}
			bVar8 = AottgGisketchUiHost.IsPauseScreenActive;
			UIManager.PlaySound((uint)bVar8);
			pUVar3 = this._inGameMenu;
			if (pUVar3 == null) goto label_05947681;
			pUVar3.SetPauseMenu(!bVar8);
		}
		else {
			pSVar1 = this._generalInputSettings;
			if ((pSVar1 == null) ||(pSVar2 = pSVar1.Pause, pSVar2 == null)) goto label_05947681;
			bVar9 = pSVar2.GetKeyDown(false);
			if (bVar9) goto label_0594721f;
		}
		pSVar1 = this._generalInputSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.ChangeCharacter, pSVar2 == null)) goto label_05947681;
		bVar8 = pSVar2.GetKeyDown(false);
		if ((bVar8) && (bVar8 = InGameMenu.InMenu(), !bVar8)) {
			if (((CustomLogicManager.Cutscene == false) &&(this.Restarting == false)) &&(bVar8 = this.IsFinishedLoading())) {
				pCVar4 = this.CurrentCharacter;
				bVar8 = ((Object)pCVar4 != null);
				if (bVar8) {
					pCVar4 = this.CurrentCharacter;
					if (pCVar4 == null) goto label_05947681;
					if (pCVar4.Dead == false) {
						pCVar4.GetKilled("");
					}
				}
				pSVar5 = SettingsManager.InGameCharacterSettings;
				if ((pSVar5 == null) ||(__this_00 = pSVar5.ChooseStatus, __this_00 == null)) goto label_05947681;
				__this_00.Value = 0;
				pUVar3 = this._inGameMenu;
				if (pUVar3 == null) goto label_05947681;
				pUVar3.SetCharacterMenu(true);
			}
		}
		pSVar1 = this._generalInputSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.RestartGame, pSVar2 == null)) goto label_05947681;
		bVar8 = pSVar2.GetKeyDown(false);
		if (bVar8) {
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
				bVar8 = PhotonNetwork.IsMasterClient;
				if (bVar8) goto label_0594746d;
			}
			else {
				bVar8 = PhotonNetwork.IsMasterClient;
				if (bVar8) {
	label_0594746d: ;
					pUVar3 = this._inGameMenu;
					if (pUVar3 == null) goto label_05947681;
					bVar8 = pUVar3.IsPauseMenuActive();
					if (!bVar8) {
						InGameManager.RestartGame();
					}
				}
			}
		}
		pSVar1 = this._generalInputSettings;
		if ((pSVar1 == null) ||(pSVar6 = pSVar1.TapScoreboard, pSVar6 == null)) goto label_05947681;
		pSVar2 = pSVar1.ToggleScoreboard;
		if (pSVar6._value == false) {
			if (pSVar2 == null) goto label_05947681;
			bVar8 = pSVar2.GetKey(false);
			pUVar3 = this._inGameMenu;
			if (bVar8) {
				if (pUVar3 == null) goto label_05947681;
				if (pUVar3.ScoreboardDismissedUntilRelease != false) goto label_05947534;
				bVar8 = true;
			}
			else {
				if (pUVar3 == null) goto label_05947681;
	label_05947534: ;
				bVar8 = false;
			}
			pUVar3.SetScoreboardMenu(bVar8, false);
		}
		else {
			if (pSVar2 == null) goto label_05947681;
			bVar8 = pSVar2.GetKeyDown(false);
			if (bVar8) {
				pUVar3 = this._inGameMenu;
				if (pUVar3 == null) goto label_05947681;
				pUVar3.ToggleScoreboardMenu();
			}
		}
		pSVar1 = this._generalInputSettings;
		if ((pSVar1 == null) ||(pSVar6 = pSVar1.TapMap, pSVar6 == null)) goto label_05947681;
		pSVar2 = pSVar1.ToggleMap;
		if (pSVar6._value == false) {
			if (pSVar2 == null) goto label_05947681;
			bVar8 = pSVar2.GetKey(false);
			pUVar3 = this._inGameMenu;
			if (bVar8) {
				if (pUVar3 == null) goto label_05947681;
				if (pUVar3.MapDismissedUntilRelease != false) goto label_059475d1;
				bVar8 = true;
			}
			else {
				if (pUVar3 == null) goto label_05947681;
	label_059475d1: ;
				bVar8 = false;
			}
			pUVar3.SetMapMenu(bVar8, false);
		}
		else {
			if (pSVar2 == null) goto label_05947681;
			bVar8 = pSVar2.GetKeyDown(false);
			if (bVar8) {
				pUVar3 = this._inGameMenu;
				if (pUVar3 == null) goto label_05947681;
				pUVar3.ToggleMapMenu();
			}
		}
		pSVar7 = SettingsManager.InputSettings;
		if (((pSVar7 == null) ||(pSVar1 = pSVar7.General, pSVar1 == null)) ||(pSVar2 = pSVar1.HideUI, pSVar2 == null)) {
	label_05947681: ;
			throw new NullReferenceException();
		}
		bVar8 = pSVar2.GetKeyDown(false);
		if ((bVar8) && (bVar8 = InGameMenu.InMenu(), !bVar8)) {
			if (CustomLogicManager.Cutscene == false) {
				pUVar3 = this._inGameMenu;
				if (pUVar3 == null) goto label_05947681;
				bVar8 = pUVar3.IsActive();
				pUVar3.ToggleUI(!bVar8);
			}
		}
		Input.GetKeyDown(0x11d);
		return;
	}

	[Token(Token = "0x600168E")]
	[Address(RVA = "0x5847E30", Offset = "0x5846E30", VA = "0x5847E30")]
	public void OnSongChange()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$OnSongChange): 1 lines keep C-only constructs
		byte bVar1;
		InGameMenu pUVar2;
		BasePopup x;
		SongPopup __this_00;
		bool bVar3;
		IEnumerator routine;

		pUVar2 = this._inGameMenu;
		bVar3 = ((Object)pUVar2 == null);
		if (!bVar3) {
			pUVar2 = this._inGameMenu;
			if (pUVar2 == null) {
	label_05947f4a: ;
				throw new NullReferenceException();
			}
			x = pUVar2._songPopup;
			bVar3 = ((Object)x == null);
			if (!bVar3) {
				bVar3 = this.IsFinishedLoading();
				if (bVar3) {
					this._songPopupPending = false;
					pUVar2 = this._inGameMenu;
					if ((pUVar2 != null) &&(__this_00 = (SongPopup)pUVar2._songPopup, __this_00 != null)) {
						bVar1 = (typeof(SongPopup)._2).typeHierarchyDepth;
						if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(SongPopup))) {
							throw new InvalidCastException();
						}
						routine = __this_00.ShowNextSongPopup();
						this.StartCoroutine(routine);
						return;
					}
					goto label_05947f4a;
				}
			}
		}
		this._songPopupPending = true;
		return;
	}

	[Token(Token = "0x600168F")]
	[Address(RVA = "0x5847F60", Offset = "0x5846F60", VA = "0x5847F60")]
	private void TakePreviewScreenshot()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$TakePreviewScreenshot): clean
		InGameSet pSVar1;
		InGameGeneralSettings pSVar2;
		StringSetting pSVar3;
		Texture2D __this_00;
		String pSVar4;
		Byte[] bytes;
		Color color;
		Rect source;

		__this_00 = new Texture2D(0x400, 0x400, 3, false);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		color.b = 1.0;
		color.a = 1.0;
		color.r = 1.0;
		color.g = 1.0;
		__this_00.SetPixel(0, 0, color);
		source.m_Width = 1024.0;
		source.m_Height = 1024.0;
		source.m_XMin = 448.0;
		source.m_YMin = 28.0;
		__this_00.ReadPixels(source, 0, 0);
		__this_00.Apply();
		TextureScaler.ScaleBlocking(__this_00, 0x100, 0x100);
		pSVar4 = String.Concat(FolderPaths.Documents, "/MapPreviews");
		Directory.CreateDirectory(pSVar4);
		pSVar1 = SettingsManager.InGameCurrent;
		if (((pSVar1 == null) ||(pSVar2 = pSVar1.General, pSVar2 == null)) ||(pSVar3 = pSVar2.MapName, pSVar3 == null)) {
			throw new NullReferenceException();
		}
		pSVar4 = String.Concat(FolderPaths.Documents, "/MapPreviews/", pSVar3._value, "Preview.png");
		bytes = ImageConversion.EncodeToPNG(__this_00);
		File.WriteAllBytes(pSVar4, bytes);
		return;
	}

	[Token(Token = "0x6001690")]
	[Address(RVA = "0x58481E0", Offset = "0x58471E0", VA = "0x58481E0")]
	private void FixedUpdate()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$FixedUpdate): clean
		uint uVar1;
		bool bVar2;

		if (Il2CppMethodInitialized_07545855 == false) {
			Il2CppMethodInitialized_07545855 = true;
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar2 = PhotonNetwork.IsMasterClient;
		}
		else {
			bVar2 = PhotonNetwork.IsMasterClient;
		}
		if (bVar2) {
			this.UpdateSmartTitans();
			return;
		}
		return;
	}

	[Token(Token = "0x6001691")]
	[Address(RVA = "0x5848250", Offset = "0x5847250", VA = "0x5848250")]
	private void UpdateSmartTitans()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$UpdateSmartTitans): 7 lines keep C-only constructs
		Dictionary<object, int> __this_00;
		HashSet<object> pSVar1;
		bool bVar2;
		byte[] auStack_70 = new byte[16];
		BaseTitan pCStack_60;
		System_Collections_Generic_HashSet_Enumerator_T__o SStack_58;
		byte[] auStack_38 = new byte[16];
		BaseTitan pCStack_28;

		SStack_58._set = null;
		SStack_58._index = 0;
		SStack_58._version = 0;
		SStack_58._current = null;
		__this_00 = (Dictionary<object, int>)this._smartTitanCounts;
		if (__this_00 != null) {
			__this_00.Clear();
			pSVar1 = (HashSet<object>)this.Titans;
			if (pSVar1 != null) {
				auStack_70.GetEnumerator(pSVar1) ;
				pCStack_28 = pCStack_60;
				auStack_38._0_8_ = auStack_70._0_8_;
				auStack_38._8_8_ = auStack_70._8_8_;
				auStack_70._0_8_ = null;
				auStack_70._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)auStack_38;
				while(true) {
					bVar2 = auStack_38.MoveNext();
					if (!bVar2) break;
					this.TryEnableSmartTitan(pCStack_28);
				}
				auStack_38.Dispose();
				pSVar1 = (HashSet<object>)this.Shifters;
				if (pSVar1 != null) {
					SStack_58 = pSVar1.GetEnumerator();
					auStack_70._0_8_ = null;
					auStack_70._8_8_ = &SStack_58;
					while(true) {
						bVar2 = SStack_58.MoveNext();
						if (!bVar2) break;
						this.TryEnableSmartTitan((BaseTitan)SStack_58._current);
					}
					SStack_58.Dispose();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001692")]
	[Address(RVA = "0x58484C0", Offset = "0x58474C0", VA = "0x58484C0")]
	private void TryEnableSmartTitan(BaseTitan titan)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$TryEnableSmartTitan): 9 lines keep C-only constructs
		byte bVar1;
		BaseDetection pCVar2;
		BaseCharacter x;
		Dictionary<object, int> pSVar3;
		BaseComponentCache pUVar4;
		Transform pUVar5;
		bool bVar6;
		BaseTitanAIController pCVar7;
		uint uVar8;
		float fVar9;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		Vector3 UVar10;
		int local_40;
		float local_3c;
		byte[] local_38 = new byte[16];

		local_40 = 0;
		bVar6 = ((Object)titan == null);
		if (!bVar6) {
			if (titan == null) {
	label_0594870a: ;
				throw new NullReferenceException();
			}
			if (((titan.Dead == false) && (titan.AI != false)) &&(bVar6 = titan.IsMine())) {
				pCVar2 = titan.Detection;
				if (pCVar2 == null) goto label_0594870a;
				x = pCVar2.ClosestEnemy;
				if (x != null) {
					bVar1 = (typeof(Human)._2).typeHierarchyDepth;
					if ((bVar1 <= (x.klass._2).typeHierarchyDepth) &&((x.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Human))) {
						bVar6 = ((Object)x == null);
						if ((!bVar6) &&(bVar6 = x.isActiveAndEnabled)) {
							pSVar3 = (Dictionary<object, int>)this._smartTitanCounts;
							if (pSVar3 != null) {
								pSVar3.TryGetValue((object)x, ref local_40);
								if (1 < local_40) {
									return;
								}
								pUVar4 = x.Cache;
								if ((pUVar4 != null) &&(pUVar5 = pUVar4.Transform, pUVar5 != null)) {
									UVar10 = pUVar5.position;
									pUVar4 = titan.Cache;
									if (pUVar4 != null) {
										local_38._8_4_ = extraout_XMM0_Dc;
										local_38._0_8_ = UVar10._0_8_;
										local_38._12_4_ = extraout_XMM0_Dd;
										pUVar5 = pUVar4.Transform;
										local_3c = UVar10.z;
										if (pUVar5 != null) {
											UVar10 = pUVar5.position;
											uVar8 = il2cpp_runtime_helper_05956b50(local_38._0_4_, local_3c, UVar10.x, UVar10.z, 0);
											local_38._0_4_ = uVar8;
											fVar9 = titan.GetColliderToggleRadius();
											if (fVar9 <= (float)local_38._0_4_) {
												return;
											}
											pCVar7 = titan.GetComponent<BaseTitanAIController>();
											if (pCVar7 != null) {
												pCVar7.SmartAttack = true;
												pSVar3 = (Dictionary<object, int>)this._smartTitanCounts;
												if (pSVar3 != null) {
													pSVar3.set_Item((object)x, local_40 + 1);
													return;
												}
											}
										}
									}
								}
							}
							goto label_0594870a;
						}
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x6001693")]
	[Address(RVA = "0x5847690", Offset = "0x5846690", VA = "0x5847690")]
	private void UpdateCleanCharacters()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$UpdateCleanCharacters): clean
		HashSet<Human> pSVar1;
		HashSet<BasicTitan> pSVar2;
		HashSet<BaseShifter> pSVar3;
		HashSet<Horse> pSVar4;
		HashSet<BaseDetection> pSVar5;

		pSVar1 = this.Humans;
		pSVar1 = (HashSet<Human>)Util.RemoveNullOrDead<Human>((HashSet<T>)pSVar1);
		this.Humans = pSVar1;
		pSVar2 = (HashSet<BasicTitan>)Util.RemoveNullOrDead<BasicTitan>((HashSet<T>)this.Titans);
		this.Titans = pSVar2;
		pSVar3 = Util.RemoveNullOrDeadShifters(this.Shifters);
		this.Shifters = pSVar3;
		pSVar4 = (HashSet<Horse>)Util.RemoveNullOrDead<Horse>((HashSet<T>)this.Horses);
		this.Horses = pSVar4;
		pSVar5 = (HashSet<BaseDetection>)Util.RemoveNullOrDeadDetections<BaseDetection>((HashSet<T>)this.Detections);
		this.Detections = pSVar5;
		return;
	}

	[Token(Token = "0x6001694")]
	[Address(RVA = "0x5846A50", Offset = "0x5845A50", VA = "0x5846A50")]
	protected void LoadSkin()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$LoadSkin): 5 lines keep C-only constructs
		byte bVar1;
		CustomSkinSettings pSVar2;
		BaseCustomSkinSettings<SkyboxCustomSkinSet> __this_00;
		BoolSetting pSVar3;
		InspectorSettingMetadata pSVar4;
		OrderedDictionary pSVar5;
		Dictionary<string, BaseSetting> pSVar6;
		HashSet<string> pSVar7;
		PhotonView __this_01;
		bool bVar8;
		String[] value;
		BaseSetSetting pSVar9;
		String pSVar10;
		Object[] parameters;
		object pIVar11;

		if (Il2CppMethodInitialized_07545859 == false) {
			Il2CppMethodInitialized_07545859 = true;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) goto label_05946b2b;
	label_05946a75: ;
			bVar8 = PhotonNetwork.IsMasterClient;
			if (!bVar8) goto label_05946b90;
	label_05946b3b: ;
			pSVar2 = SettingsManager.CustomSkinSettings;
			if (((pSVar2 == null) ||(__this_00 = pSVar2.Skybox, __this_00 == null)) ||(pSVar3 = __this_00.SkinsEnabled, pSVar3 == null)) goto label_05946ee4;
			if (pSVar3._value == false) goto label_05946b90;
			pSVar3 = __this_00.SkinsLocal;
			if (pSVar3 == null) goto label_05946ee4;
			if (pSVar3._value != false) goto label_05946b90;
			pSVar9 = __this_00.GetSelectedSet();
			if (pSVar9 == null) {
				new string[6];
				throw new NullReferenceException();
			}
			bVar1 = (typeof(SkyboxCustomSkinSet)._2).typeHierarchyDepth;
			if (((pSVar9.klass._2).typeHierarchyDepth < bVar1) ||((pSVar9.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(SkyboxCustomSkinSet))) {
				throw new InvalidCastException();
			}
			value = (String[])new string[6];
			if (((*(ulong)((sbyte)pSVar9 + 0x48)) == null) || (value == null)) goto label_05946ee4;
			if ((int)value.Length == 0) goto label_05946ee9;
			value[0] = (((*(Il2CppClass*)((sbyte)pSVar9 + 0x48)))._1).byval_arg.data;
			if ((*(ulong)((sbyte)pSVar9 + 0x50)) == null) goto label_05946ee4;
			if ((value.Length & 0xfffffffe) == 0) goto label_05946ee9;
			value[1] = *(String*)((long)(*(ulong)((sbyte)pSVar9 + 0x50)) + 0x20);
			pSVar4 = (*(ulong)((sbyte)pSVar9 + 0x58));
			if (pSVar4 == null) goto label_05946ee4;
			if ((uint)value.Length < 3) goto label_05946ee9;
			value[2] = pSVar4.Header;
			pSVar5 = (*(ulong)((sbyte)pSVar9 + 0x60));
			if (pSVar5 == null) goto label_05946ee4;
			if ((value.Length & 0xfffffffc) == 0) goto label_05946ee9;
			value[3] = *(String*)&pSVar5._initialCapacity;
			pSVar6 = (*(ulong)((sbyte)pSVar9 + 0x68));
			if (pSVar6 == null) goto label_05946ee4;
			if ((uint)value.Length < 5) goto label_05946ee9;
			value[4] = *(String*)&pSVar6._count;
			pSVar7 = (*(ulong)((sbyte)pSVar9 + 0x70));
			if (pSVar7 == null) goto label_05946ee4;
			if ((uint)value.Length < 6) goto label_05946ee9;
			pSVar10 = *(String*)&pSVar7._count;
		}
		else {
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor != 0) goto label_05946a75;
	label_05946b2b: ;
			bVar8 = PhotonNetwork.IsMasterClient;
			if (bVar8) goto label_05946b3b;
	label_05946b90: ;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
				bVar8 = PhotonNetwork.IsMasterClient;
			}
			else {
				bVar8 = PhotonNetwork.IsMasterClient;
			}
			if (!bVar8) {
				return;
			}
			value = (String[])new string[6];
			if (value == null) goto label_05946ee4;
			if ((int)value.Length == 0) goto label_05946ee9;
			value[0] = (String)**(ulong*)(g_data_07556758 + 0xb8);
			if ((value.Length & 0xfffffffe) == 0) goto label_05946ee9;
			value[1] = (String)**(ulong*)(g_data_07556758 + 0xb8);
			if ((uint)value.Length < 3) goto label_05946ee9;
			value[2] = (String)**(ulong*)(g_data_07556758 + 0xb8);
			if ((value.Length & 0xfffffffc) == 0) goto label_05946ee9;
			value[3] = (String)**(ulong*)(g_data_07556758 + 0xb8);
			if ((uint)value.Length < 5) goto label_05946ee9;
			value[4] = (String)**(ulong*)(g_data_07556758 + 0xb8);
			if ((uint)value.Length < 6) goto label_05946ee9;
			pSVar10 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		value[5] = pSVar10;
		pSVar10 = String.Join(",", value);
		__this_01 = RPCManager.PhotonView;
		parameters = (Object[])new object[1];
		if (parameters != null) {
			if ((pSVar10 != null) &&(pIVar11 = il2cpp_vm_Object_IsInst((object)pSVar10, (((parameters.obj).klass)._1).element_class), pIVar11 == null)) {
				pIVar11 = new ArrayTypeMismatchException();
				throw pIVar11;
			}
			if ((int)parameters.Length == 0) {
	label_05946ee9: ;
				throw new IndexOutOfRangeException();
			}
			parameters[0] = (object)pSVar10;
			if (__this_01 != null) {
				__this_01.RPC("LoadSkyboxRPC", 3, parameters);
				return;
			}
		}
	label_05946ee4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001695")]
	[Address(RVA = "0x5848710", Offset = "0x5847710", VA = "0x5848710")]
	[IteratorStateMachine(typeof(_003COnLoadSkyboxRPC_003Ed__126))]
	public IEnumerator OnLoadSkyboxRPC(string[] urls)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$OnLoadSkyboxRPC): clean
		InGameManager.d__126<OnLoadSkyboxRPC> __this_00;

		__this_00 = new InGameManager.d__126<OnLoadSkyboxRPC>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.urls = urls;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6001696")]
	[Address(RVA = "0x58487B0", Offset = "0x58477B0", VA = "0x58487B0")]
	[IteratorStateMachine(typeof(_003CReloadSkybox_003Ed__127))]
	protected IEnumerator ReloadSkybox()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$ReloadSkybox): clean
		InGameManager.d__127<ReloadSkybox> __this_00;

		__this_00 = new InGameManager.d__127<ReloadSkybox>();
		__this_00.__1__state = 0;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6001697")]
	[Address(RVA = "0x5848820", Offset = "0x5847820", VA = "0x5848820")]
	private bool IsValidSkybox(string[] urls)
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$IsValidSkybox): clean
		uint uVar1;
		String url;
		bool bVar2;
		ulong uVar3;
		ulong uVar4;

		if (urls == null) {
			throw new NullReferenceException();
		}
		if (((urls.Length & 0xffffffff) == 6) && (0 < (int)urls.Length)) {
			uVar4 = 0;
			uVar3 = 6;
			do {
				if (uVar3 <= uVar4) {
					throw new IndexOutOfRangeException();
				}
				url = urls[uVar4];
				bVar2 = TextureDownloader.ValidTextureURL(url, false);
				if (bVar2) {
					return true;
				}
				uVar4 = uVar4 + 1;
				uVar1 = (uint)urls.Length;
				uVar3 = (ulong)uVar1;
			} while ((long)uVar4 < (long)(int)uVar1);
		}
		return false;
	}

	[Token(Token = "0x6001698")]
	[Address(RVA = "0x58488D0", Offset = "0x58478D0", VA = "0x58488D0")]
	public InGameManager()
	{
		// Lifted from source/cpp/GameManagers/InGameManager.c (GameManagers.InGameManager$$.ctor): 2 lines keep C-only constructs
		HashSet<Human> __this_00;
		HashSet<BasicTitan> __this_01;
		HashSet<BaseShifter> __this_02;
		HashSet<Horse> __this_03;
		Dictionary<Human, int> __this_04;
		List<PhotonVoiceSync> __this_05;
		HashSet<BaseDetection> __this_06;

		if (Il2CppMethodInitialized_0754585d == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_BasicTitan_ctor) ;
			Il2CppMethodInitialized_0754585d = true;
		}
		__this_00 = new HashSet<Human>();
		this.Humans = __this_00;
		__this_01 = il2cpp_codegen_object_new(typeof(HashSet<BasicTitan>)) ;
		__this_01 = new HashSet<object>();
		this.Titans = __this_01;
		__this_02 = new HashSet<BaseShifter>();
		this.Shifters = __this_02;
		__this_03 = new HashSet<Horse>();
		this.Horses = __this_03;
		__this_04 = new Dictionary<Human, int>();
		this._smartTitanCounts = __this_04;
		__this_05 = new List<PhotonVoiceSync>();
		this.PhotonVoiceSyncs = __this_05;
		this.PauseTimeLeft = -1.0;
		__this_06 = new HashSet<BaseDetection>();
		this.Detections = __this_06;
		this.pingUpdateInterval = 10.0;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/GameManagers/InGameManager.c.

	// GameManagers.InGameManager.<>c__DisplayClass86_0$$.ctor: clean
	private void c__DisplayClass86_0__ctor()
	{
		base();
		return;
	}

	// GameManagers.InGameManager$$.cctor: 25 lines keep C-only constructs
	static InGameManager()
	{
		int piVar1;
		uint uVar2;
		GameManagers_InGameManager_StaticFields pGVar3;
		String pSVar4;
		String[] pSVar6;
		List<string> pSVar7;
		Dictionary<int, PlayerInfo> __this;
		HashSet<int> pSVar8;
		Dictionary<int, float> __this_00;
		UnsavedPlayerInfo __this_01;

		if (Il2CppMethodInitialized_0754585e == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(Dictionary<int, PlayerInfo>)) ;
			Il2CppMethodInitialized_0754585e = true;
		}
		pSVar6 = (String[])new string[3];
		if (pSVar6 == null) {
	label_05949244: ;
			throw new NullReferenceException();
		}
		if ((int)pSVar6.Length != 0) {
			pSVar6[0] = EffectPrefabs.Blood1;
			if ((pSVar6.Length & 0xfffffffe) != 0) {
				pSVar6[1] = EffectPrefabs.CriticalHit;
				if (2 < (uint)pSVar6.Length) {
					pSVar6[2] = EffectPrefabs.Boom2;
					pGVar3 = typeof(InGameManager).static_fields;
					pGVar3.PrewarmEffects = pSVar6;
					pSVar7 = new List<string>();
					if (pSVar7 != null) {
						pSVar4 = MapTags.HumanSpawnPointBlue;
						piVar1 = &pSVar7._version;
						*piVar1 = *piVar1 + 1;
						pSVar6 = pSVar7._items;
						if (pSVar6 != null) {
							uVar2 = pSVar7._size;
							if (uVar2 < (uint)pSVar6.Length) {
								pSVar7._size = uVar2 + 1;
								pSVar6[(int)uVar2] = pSVar4;
							}
							else {
								pSVar7.AddWithResize((object)pSVar4);
							}
							pSVar4 = MapTags.HumanSpawnPoint;
							piVar1 = &pSVar7._version;
							*piVar1 = *piVar1 + 1;
							pSVar6 = pSVar7._items;
							if (pSVar6 != null) {
								uVar2 = pSVar7._size;
								if (uVar2 < (uint)pSVar6.Length) {
									pSVar7._size = uVar2 + 1;
									pSVar6[(int)uVar2] = pSVar4;
								}
								else {
									pSVar7.AddWithResize((object)pSVar4);
								}
								pSVar4 = MapTags.HumanSpawnPointRed;
								piVar1 = &pSVar7._version;
								*piVar1 = *piVar1 + 1;
								pSVar6 = pSVar7._items;
								if (pSVar6 != null) {
									uVar2 = pSVar7._size;
									if (uVar2 < (uint)pSVar6.Length) {
										pSVar7._size = uVar2 + 1;
										pSVar6[(int)uVar2] = pSVar4;
									}
									else {
										pSVar7.AddWithResize((object)pSVar4);
									}
									pGVar3 = typeof(InGameManager).static_fields;
									pGVar3.BlueSpawnTags = pSVar7;
									pSVar7 = new List<string>();
									if (pSVar7 != null) {
										pSVar4 = MapTags.HumanSpawnPointRed;
										piVar1 = &pSVar7._version;
										*piVar1 = *piVar1 + 1;
										pSVar6 = pSVar7._items;
										if (pSVar6 != null) {
											uVar2 = pSVar7._size;
											if (uVar2 < (uint)pSVar6.Length) {
												pSVar7._size = uVar2 + 1;
												pSVar6[(int)uVar2] = pSVar4;
											}
											else {
												pSVar7.AddWithResize((object)pSVar4);
											}
											pSVar4 = MapTags.HumanSpawnPoint;
											piVar1 = &pSVar7._version;
											*piVar1 = *piVar1 + 1;
											pSVar6 = pSVar7._items;
											if (pSVar6 != null) {
												uVar2 = pSVar7._size;
												if (uVar2 < (uint)pSVar6.Length) {
													pSVar7._size = uVar2 + 1;
													pSVar6[(int)uVar2] = pSVar4;
												}
												else {
													pSVar7.AddWithResize((object)pSVar4);
												}
												pSVar4 = MapTags.HumanSpawnPointBlue;
												piVar1 = &pSVar7._version;
												*piVar1 = *piVar1 + 1;
												pSVar6 = pSVar7._items;
												if (pSVar6 != null) {
													uVar2 = pSVar7._size;
													if (uVar2 < (uint)pSVar6.Length) {
														pSVar7._size = uVar2 + 1;
														pSVar6[(int)uVar2] = pSVar4;
													}
													else {
														pSVar7.AddWithResize((object)pSVar4);
													}
													pGVar3 = typeof(InGameManager).static_fields;
													pGVar3.RedSpawnTags = pSVar7;
													pSVar7 = new List<string>();
													if (pSVar7 != null) {
														pSVar4 = MapTags.HumanSpawnPoint;
														piVar1 = &pSVar7._version;
														*piVar1 = *piVar1 + 1;
														pSVar6 = pSVar7._items;
														if (pSVar6 != null) {
															uVar2 = pSVar7._size;
															if (uVar2 < (uint)pSVar6.Length) {
																pSVar7._size = uVar2 + 1;
																pSVar6[(int)uVar2] = pSVar4;
															}
															else {
																pSVar7.AddWithResize((object)pSVar4);
															}
															pSVar4 = MapTags.HumanSpawnPointBlue;
															piVar1 = &pSVar7._version;
															*piVar1 = *piVar1 + 1;
															pSVar6 = pSVar7._items;
															if (pSVar6 != null) {
																uVar2 = pSVar7._size;
																if (uVar2 < (uint)pSVar6.Length) {
																	pSVar7._size = uVar2 + 1;
																	pSVar6[(int)uVar2] = pSVar4;
																}
																else {
																	pSVar7.AddWithResize((object)pSVar4);
																}
																pSVar4 = MapTags.HumanSpawnPointRed;
																piVar1 = &pSVar7._version;
																*piVar1 = *piVar1 + 1;
																pSVar6 = pSVar7._items;
																if (pSVar6 != null) {
																	uVar2 = pSVar7._size;
																	if (uVar2 < (uint)pSVar6.Length) {
																		pSVar7._size = uVar2 + 1;
																		pSVar6[(int)uVar2] = pSVar4;
																	}
																	else {
																		pSVar7.AddWithResize((object)pSVar4);
																	}
																	pGVar3 = typeof(InGameManager).static_fields;
																	pGVar3.HumanSpawnTags = pSVar7;
																	__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<int, PlayerInfo>));
																	__this = new Dictionary<int, object>();
																	pGVar3 = typeof(InGameManager).static_fields;
																	pGVar3.AllPlayerInfo = __this;
																	pSVar8 = il2cpp_codegen_object_new((Il2CppClass)typeof(HashSet<int>));
																	pSVar8 = new HashSet<int>();
																	pGVar3 = typeof(InGameManager).static_fields;
																	pGVar3.MuteEmote = pSVar8;
																	pSVar8 = il2cpp_codegen_object_new((Il2CppClass)typeof(HashSet<int>));
																	pSVar8 = new HashSet<int>();
																	pGVar3 = typeof(InGameManager).static_fields;
																	pGVar3.MuteText = pSVar8;
																	pSVar8 = il2cpp_codegen_object_new((Il2CppClass)typeof(HashSet<int>));
																	pSVar8 = new HashSet<int>();
																	pGVar3 = typeof(InGameManager).static_fields;
																	pGVar3.MuteVoiceChat = pSVar8;
																	__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<int, float>));
																	__this_00 = new Dictionary<int, float>();
																	pGVar3 = typeof(InGameManager).static_fields;
																	pGVar3.VoiceChatVolumeMultiplier = __this_00;
																	__this_01 = il2cpp_codegen_object_new(typeof(UnsavedPlayerInfo)) ;
																	__this_01 = new UnsavedPlayerInfo();
																	pGVar3 = typeof(InGameManager).static_fields;
																	pGVar3.MyPlayerInfo = (PlayerInfo)__this_01;
																	return;
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					goto label_05949244;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// GameManagers.InGameManager.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new InGameManager.c();
		InGameManager.c.__9 = (InGameManager.c)__this;
		return;
	}

	// GameManagers.InGameManager.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// GameManagers.InGameManager.<>c$$<GetAllNonAICharacters>b__49_0: clean
	private bool c__GetAllNonAICharacters_b__49_0(BaseCharacter x)
	{
		if (x == null) {
			throw new NullReferenceException();
		}
		return x.AI == false;
	}

	// GameManagers.InGameManager.<>c$$<GetTitanSpawnPositions>b__91_0: 1 lines keep C-only constructs
	private System_ValueTuple_Vector3__Quaternion__o c__GetTitanSpawnPositions_b__91_0(Transform xform)
	{
		Quaternion item2;
		Vector3 item1;

		if (xform == null) {
			throw new NullReferenceException();
		}
		item1 = xform.position;
		item2 = xform.rotation;
		__return_storage_ptr__.Item1.x = 0.0;
		__return_storage_ptr__.Item1.y = 0.0;
		*(ulong)&__return_storage_ptr__.Item1.z = 0;
		__return_storage_ptr__.Item2.x = 0.0;
		__return_storage_ptr__.Item2.y = 0.0;
		__return_storage_ptr__.Item2.z = 0.0;
		__return_storage_ptr__.Item2.w = 0.0;
		__return_storage_ptr__ = new ValueTuple<Vector3, Quaternion>(item1, item2);
		return __return_storage_ptr__;
	}

	// GameManagers.InGameManager.<>c__DisplayClass86_0$$<SpawnAITitans>b__0: 1 lines keep C-only constructs
	private BasicTitan c__DisplayClass86_0__SpawnAITitans_b__0(System_ValueTuple_Vector3__Quaternion__o p)
	{
		String type;
		InGameManager pGVar1;
		System_ValueTuple_Vector3__Quaternion__o SVar2;
		BasicTitan pCVar3;
		InGameManager __this_00;
		Vector3 UVar4;
		Vector3 euler;

		SVar2 = p;
		type = this.type;
		pGVar1 = this.__4__this;
		UVar4 = Quaternion.Internal_ToEulerRad(ref p.Item2);
		euler.x = UVar4.x * 57.29578;
		euler.y = UVar4.y * 57.29578;
		euler.z = UVar4.z * 57.29578;
		__this_00 = null;
		UVar4 = Quaternion.Internal_MakePositive(euler);
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pCVar3 = __this_00.SpawnAITitanAt(type, SVar2.Item1, UVar4.y);
		return pCVar3;
	}
}
