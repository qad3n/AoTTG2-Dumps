// ==================== AoTTG2 cross-reference ====================
// Type: Map.CustomLogicTransfer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/CustomLogicTransfer.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicTransfer.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ApplicationManagers;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;

namespace Map;

[Token(Token = "0x20003DE")]
internal class CustomLogicTransfer : MonoBehaviour
{
	[Token(Token = "0x20003DF")]
	[CompilerGenerated]
	private sealed class _003CTransferLogicData_003Ed__11 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40013B4")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40013B5")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40013B6")]
		[FieldOffset(Offset = "0x20")]
		public Player player;

		[Token(Token = "0x40013B7")]
		[FieldOffset(Offset = "0x28")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x170002A5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001894")]
			[Address(RVA = "0x586BFC0", Offset = "0x586AFC0", VA = "0x586BFC0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Map/CustomLogicTransfer.c (Map.CustomLogicTransfer.<TransferLogicData>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170002A6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001896")]
			[Address(RVA = "0x586C010", Offset = "0x586B010", VA = "0x586C010", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Map/CustomLogicTransfer.c (Map.CustomLogicTransfer.<TransferLogicData>d__11$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6001891")]
		[Address(RVA = "0x586BA70", Offset = "0x586AA70", VA = "0x586BA70")]
		[DebuggerHidden]
		public _003CTransferLogicData_003Ed__11(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Map/CustomLogicTransfer.c (Map.CustomLogicTransfer.<TransferLogicData>d__11$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6001892")]
		[Address(RVA = "0x586BB50", Offset = "0x586AB50", VA = "0x586BB50", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Map/CustomLogicTransfer.c (Map.CustomLogicTransfer.<TransferLogicData>d__11$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6001893")]
		[Address(RVA = "0x586BB60", Offset = "0x586AB60", VA = "0x586BB60", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Map/CustomLogicTransfer.c (Map.CustomLogicTransfer.<TransferLogicData>d__11$$MoveNext): 3 lines keep C-only constructs
			uint uVar1;
			CustomLogicTransferData pMVar2;
			List<byte[][]> pSVar3;
			PhotonView __this_00;
			int iVar6;
			Object[] parameters;
			object pIVar8;
			object pIVar9;
			WaitForSeconds __this_01;
			int iVar11;
			int iStack_40;
			int iStack_3c;
			Player pPStack_38;

			iVar11 = this.__1__state;
			if (iVar11 == 1) {
				this.__1__state = -1;
				iVar11 = this._i_5__2 + 1;
				this._i_5__2 = iVar11;
				uVar1 = (typeof(CustomLogicTransfer)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (iVar11 != 0) {
					return false;
				}
				this.__1__state = -1;
				this._i_5__2 = 0;
				iVar11 = 0;
				uVar1 = (typeof(CustomLogicTransfer)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			pMVar2 = CustomLogicTransfer._transferData;
			if ((pMVar2 != null) &&(pSVar3 = pMVar2._messages, pSVar3 != null)) {
				iVar6 = pSVar3.get_Item();
				if (iVar6 <= iVar11) {
					return false;
				}
				__this_00 = RPCManager.PhotonView;
				pPStack_38 = this.player;
				parameters = (Object[])new object[3];
				pMVar2 = CustomLogicTransfer._transferData;
				if ((pMVar2 != null) &&(pSVar3 = pMVar2._messages, pSVar3 != null)) {
					iVar6 = this._i_5__2;
					pIVar8 = pSVar3.get_Item(iVar6);
					if (parameters != null) {
						if ((pIVar8 != null) &&(pIVar9 = il2cpp_vm_Object_IsInst(pIVar8, (((parameters.obj).klass)._1).element_class), pIVar9 == null)) {
		label_0596bfa7: ;
							pIVar8 = new ArrayTypeMismatchException();
							throw pIVar8;
						}
						if ((int)parameters.Length != 0) {
							parameters[0] = pIVar8;
							iStack_3c = this._i_5__2;
							pIVar8 = (object)iStack_3c;
							if ((pIVar8 != null) &&(pIVar9 = il2cpp_vm_Object_IsInst(pIVar8, (((parameters.obj).klass)._1).element_class), pIVar9 == null)) goto label_0596bfa7;
							if ((parameters.Length & 0xfffffffe) != 0) {
								parameters[1] = pIVar8;
								pMVar2 = CustomLogicTransfer._transferData;
								if ((pMVar2 != null) &&(pSVar3 = pMVar2._messages, pSVar3 != null)) {
									iStack_40 = pSVar3.get_Item();
									pIVar8 = (object)iStack_40;
									if ((pIVar8 != null) &&(pIVar9 = il2cpp_vm_Object_IsInst(pIVar8, (((parameters.obj).klass)._1).element_class), pIVar9 == null)) goto label_0596bfa7;
									if ((uint)parameters.Length < 3) goto label_0596bfa2;
									parameters[2] = pIVar8;
									if (__this_00 != null) {
										__this_00.RPC("TransferLogicRPC", pPStack_38, parameters);
										__this_01 = new WaitForSeconds(0.5);
										this.__2__current = (object)__this_01;
										this.__1__state = 1;
										return true;
									}
								}
								goto label_0596bf9d;
							}
						}
		label_0596bfa2: ;
						throw new IndexOutOfRangeException();
					}
				}
			}
		label_0596bf9d: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6001895")]
		[Address(RVA = "0x586BFD0", Offset = "0x586AFD0", VA = "0x586BFD0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Map/CustomLogicTransfer.c (Map.CustomLogicTransfer.<TransferLogicData>d__11$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Map_CustomLogicTransfer_TransferLogicData_d__11_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x40013AF")]
	[FieldOffset(Offset = "0x0")]
	public static bool LogicTransferReady;

	[Token(Token = "0x40013B0")]
	[FieldOffset(Offset = "0x8")]
	public static string LogicHash;

	[Token(Token = "0x40013B1")]
	[FieldOffset(Offset = "0x10")]
	private static CustomLogicTransfer _instance;

	[Token(Token = "0x40013B2")]
	[FieldOffset(Offset = "0x18")]
	private static readonly CustomLogicTransferData _transferData;

	[Token(Token = "0x40013B3")]
	[FieldOffset(Offset = "0x20")]
	private static readonly ContentTransferChangeTracker _changeTracker;

	[Token(Token = "0x6001888")]
	[Address(RVA = "0x586B300", Offset = "0x586A300", VA = "0x586B300")]
	public static void Init()
	{
		// Lifted from source/cpp/Map/CustomLogicTransfer.c (Map.CustomLogicTransfer$$Init): 1 lines keep C-only constructs
		CustomLogicTransfer pMVar2;
		OnPreLoadScene __this;

		pMVar2 = SingletonFactory.CreateSingleton<CustomLogicTransfer>((object)CustomLogicTransfer._instance);
		CustomLogicTransfer._instance = pMVar2;
		__this = new OnPreLoadScene(null, (intptr_t)MethodInfo_Map_CustomLogicTransfer_OnPreLoadScene);
		EventManager.add_OnPreLoadScene(__this);
		return;
	}

	[Token(Token = "0x6001889")]
	[Address(RVA = "0x586B3D0", Offset = "0x586A3D0", VA = "0x586B3D0")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
		// Lifted from source/cpp/Map/CustomLogicTransfer.c (Map.CustomLogicTransfer$$OnPreLoadScene): clean
		uint uVar1;
		CustomLogicTransfer __this;
		CustomLogicTransferData __this_00;

		if (Il2CppMethodInitialized_0754597f == false) {
			Il2CppMethodInitialized_0754597f = true;
			uVar1 = (typeof(CustomLogicTransfer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicTransfer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = CustomLogicTransfer._instance;
		}
		else {
			__this = *(CustomLogicTransfer*)((long)(typeof(CustomLogicTransfer)).static_fields + 0x10);
		}
		if (__this != null) {
			__this.StopAllCoroutines();
			__this_00 = CustomLogicTransfer._transferData;
			if (__this_00 != null) {
				__this_00.Reset();
				CustomLogicTransfer.LogicTransferReady = false;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600188A")]
	[Address(RVA = "0x586B470", Offset = "0x586A470", VA = "0x586B470")]
	public static void Start(string modeName)
	{
		// Lifted from source/cpp/Map/CustomLogicTransfer.c (Map.CustomLogicTransfer$$Start): clean
		uint uVar1;
		ContentTransferChangeTracker pMVar2;
		CustomLogicTransferData __this;
		Player pPVar4;
		PhotonView __this_00;
		bool bVar5;
		bool bVar6;
		MethodInfo b;
		Player[] pPVar7;
		ulong uVar8;
		String pSVar9;
		Object[] parameters;
		int iVar10;
		ulong uVar11;
		MethodInfo pMVar12;

		pSVar9 = CustomLogicManager.Logic;
		b = (MethodInfo)Util.CreateMD5(pSVar9);
		pMVar2 = CustomLogicTransfer._changeTracker;
		if (pMVar2 != null) {
			bVar5 = (pMVar2._identity != modeName);
			bVar6 = true;
			if (!bVar5) {
				bVar6 = (pMVar2._hash != (String)b);
			}
			pMVar2._identity = modeName;
			pMVar2._hash = (String)b;
			CustomLogicTransfer.LogicHash = (String)b;
			__this = CustomLogicTransfer._transferData;
			if (__this != null) {
				pMVar12 = (MethodInfo)CustomLogicManager.Logic;
				__this.Prepare((String)pMVar12, CustomLogicTransfer.LogicHash);
				pPVar7 = PhotonNetwork.PlayerListOthers;
				if (pPVar7 != null) {
					iVar10 = (int)pPVar7.Length;
					uVar8 = pPVar7.Length & 0xffffffff;
					if (bVar6 == false) {
						if (0 < iVar10) {
							uVar11 = 0;
							do {
								if (uVar8 <= uVar11) goto label_0596b7ce;
								pPVar4 = pPVar7[uVar11];
								pSVar9 = PhotonExtensions.GetStringProperty(pPVar4, PlayerProperty.CustomLogicHash, "");
								pMVar12 = b;
								bVar5 = (pSVar9 != (String)b);
								if (bVar5) {
									CustomLogicTransfer.Transfer(pPVar4);
								}
								else {
									__this_00 = RPCManager.PhotonView;
									parameters = (Object[])new object[0];
									if (__this_00 == null) goto label_0596b7d3;
									__this_00.RPC("LoadCachedLogicRPC", pPVar4, parameters);
								}
								uVar11 = uVar11 + 1;
								uVar1 = (uint)pPVar7.Length;
								uVar8 = (ulong)uVar1;
							} while ((long)uVar11 < (long)(int)uVar1);
						}
					}
					else if (0 < iVar10) {
						uVar11 = 0;
						do {
							if (uVar8 <= uVar11) {
	label_0596b7ce: ;
								throw new IndexOutOfRangeException();
							}
							pPVar4 = pPVar7[uVar11];
							CustomLogicTransfer.Transfer(pPVar4);
							uVar11 = uVar11 + 1;
							uVar1 = (uint)pPVar7.Length;
							uVar8 = (ulong)uVar1;
						} while ((long)uVar11 < (long)(int)uVar1);
					}
					CustomLogicTransfer.LogicTransferReady = true;
					return;
				}
			}
		}
	label_0596b7d3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600188B")]
	[Address(RVA = "0x586B8D0", Offset = "0x586A8D0", VA = "0x586B8D0")]
	public static void UseBuiltin(string modeName)
	{
		// Lifted from source/cpp/Map/CustomLogicTransfer.c (Map.CustomLogicTransfer$$UseBuiltin): clean
		uint uVar1;
		ContentTransferChangeTracker pMVar2;
		String b;
		bool bVar4;

		if (Il2CppMethodInitialized_07545981 == false) {
			Il2CppMethodInitialized_07545981 = true;
			uVar1 = (typeof(CustomLogicTransfer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicTransfer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pMVar2 = CustomLogicTransfer._changeTracker;
		}
		else {
			pMVar2 = *(ContentTransferChangeTracker*)((long)(typeof(CustomLogicTransfer)).static_fields + 0x20);
		}
		if (pMVar2 == null) {
			throw new NullReferenceException();
		}
		b = (String)**(ulong*)(g_data_07556758 + 0xb8);
		bVar4 = (pMVar2._identity != modeName);
		if (!bVar4) {
			(pMVar2._hash != b);
		}
		pMVar2._identity = modeName;
		pMVar2._hash = b;
		CustomLogicTransfer.LogicHash = (String)**(ulong*)(g_data_07556758 + 0xb8);
		return;
	}

	[Token(Token = "0x600188C")]
	[Address(RVA = "0x586B7E0", Offset = "0x586A7E0", VA = "0x586B7E0")]
	public static void Transfer(Player player)
	{
		// Lifted from source/cpp/Map/CustomLogicTransfer.c (Map.CustomLogicTransfer$$Transfer): clean
		uint uVar1;
		CustomLogicTransfer __this;
		CustomLogicTransfer.d__11<TransferLogicData> __this_00;

		if (Il2CppMethodInitialized_07545982 == false) {
			Il2CppMethodInitialized_07545982 = true;
			uVar1 = (typeof(CustomLogicTransfer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicTransfer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = CustomLogicTransfer._instance;
		}
		else {
			__this = *(CustomLogicTransfer*)((long)(typeof(CustomLogicTransfer)).static_fields + 0x10);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this_00 = new CustomLogicTransfer.d__11<TransferLogicData>();
		__this_00.__1__state = 0;
		__this_00.player = player;
		__this.StartCoroutine((IEnumerator)__this_00);
		return;
	}

	[Token(Token = "0x600188D")]
	[Address(RVA = "0x5859190", Offset = "0x5858190", VA = "0x5859190")]
	public static void OnTransferLogicRPC(byte[][] byteArr, int msgNumber, int msgTotal, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Map/CustomLogicTransfer.c (Map.CustomLogicTransfer$$OnTransferLogicRPC): clean
		CustomLogicTransferData __this;
		CustomLogic_CustomLogicManager_StaticFields pCVar1;
		String pSVar3;
		bool bVar4;
		String pSStack_38;
		String pSStack_30;

		pSStack_30 = null;
		pSStack_38 = null;
		if (info.Sender == null) {
	label_059592f2: ;
			throw new NullReferenceException();
		}
		bVar4 = info.Sender.IsMasterClient;
		if (bVar4) {
			__this = CustomLogicTransfer._transferData;
			if (__this == null) goto label_059592f2;
			bVar4 = __this.TryReceive(byteArr, msgNumber, msgTotal, ref pSStack_30, ref pSStack_38);
			pSVar3 = pSStack_30;
			if (bVar4) {
				pCVar1 = typeof(CustomLogicManager).static_fields;
				pCVar1.Logic = pSVar3;
				pSVar3 = pSStack_38;
				CustomLogicTransfer.LogicHash = pSVar3;
				pCVar1 = typeof(CustomLogicManager).static_fields;
				pCVar1.LogicHash = CustomLogicTransfer.LogicHash;
				CustomLogicManager.FinishLoadLogic();
			}
		}
		return;
	}

	[Token(Token = "0x600188E")]
	[Address(RVA = "0x586BA00", Offset = "0x586AA00", VA = "0x586BA00")]
	[IteratorStateMachine(typeof(_003CTransferLogicData_003Ed__11))]
	private IEnumerator TransferLogicData(Player player)
	{
		// Lifted from source/cpp/Map/CustomLogicTransfer.c (Map.CustomLogicTransfer$$TransferLogicData): clean
		CustomLogicTransfer.d__11<TransferLogicData> __this_00;

		__this_00 = new CustomLogicTransfer.d__11<TransferLogicData>();
		__this_00.__1__state = 0;
		__this_00.player = player;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600188F")]
	[Address(RVA = "0x586BA90", Offset = "0x586AA90", VA = "0x586BA90")]
	public CustomLogicTransfer()
	{
		// Lifted from source/cpp/Map/CustomLogicTransfer.c (Map.CustomLogicTransfer$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Map/CustomLogicTransfer.c.

	// Map.CustomLogicTransfer$$.cctor: clean
	static CustomLogicTransfer()
	{
		Map_CustomLogicTransfer_StaticFields pMVar1;
		CustomLogicTransferData __this;
		ContentTransferChangeTracker __this_00;

		__this = new CustomLogicTransferData();
		pMVar1 = typeof(CustomLogicTransfer).static_fields;
		pMVar1._transferData = __this;
		__this_00 = new ContentTransferChangeTracker();
		pMVar1 = typeof(CustomLogicTransfer).static_fields;
		pMVar1._changeTracker = __this_00;
		return;
	}
}
