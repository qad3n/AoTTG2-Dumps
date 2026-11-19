// ==================== AoTTG2 cross-reference ====================
// Type: Map.CustomLogicAddonTransfer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/CustomLogicAddonTransfer.c
// Prior real C# source: none (type is newer than the last public source snapshot)
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

[Token(Token = "0x20003DB")]
internal class CustomLogicAddonTransfer : MonoBehaviour
{
	[Token(Token = "0x20003DD")]
	[CompilerGenerated]
	private sealed class _003CTransferAddonData_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40013AB")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40013AC")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40013AD")]
		[FieldOffset(Offset = "0x20")]
		public Player player;

		[Token(Token = "0x40013AE")]
		[FieldOffset(Offset = "0x28")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x170002A3")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001885")]
			[Address(RVA = "0x586B2A0", Offset = "0x586A2A0", VA = "0x586B2A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Map/CustomLogicAddonTransfer.c (Map.CustomLogicAddonTransfer.<TransferAddonData>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170002A4")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001887")]
			[Address(RVA = "0x586B2F0", Offset = "0x586A2F0", VA = "0x586B2F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Map/CustomLogicAddonTransfer.c (Map.CustomLogicAddonTransfer.<TransferAddonData>d__12$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6001882")]
		[Address(RVA = "0x586AB70", Offset = "0x5869B70", VA = "0x586AB70")]
		[DebuggerHidden]
		public _003CTransferAddonData_003Ed__12(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Map/CustomLogicAddonTransfer.c (Map.CustomLogicAddonTransfer.<TransferAddonData>d__12$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6001883")]
		[Address(RVA = "0x586AE30", Offset = "0x5869E30", VA = "0x586AE30", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Map/CustomLogicAddonTransfer.c (Map.CustomLogicAddonTransfer.<TransferAddonData>d__12$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6001884")]
		[Address(RVA = "0x586AE40", Offset = "0x5869E40", VA = "0x586AE40", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Map/CustomLogicAddonTransfer.c (Map.CustomLogicAddonTransfer.<TransferAddonData>d__12$$MoveNext): 3 lines keep C-only constructs
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
				uVar1 = (typeof(CustomLogicAddonTransfer)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (iVar11 != 0) {
					return false;
				}
				this.__1__state = -1;
				this._i_5__2 = 0;
				iVar11 = 0;
				uVar1 = (typeof(CustomLogicAddonTransfer)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			pMVar2 = CustomLogicAddonTransfer._transferData;
			if ((pMVar2 != null) &&(pSVar3 = pMVar2._messages, pSVar3 != null)) {
				iVar6 = pSVar3.get_Item();
				if (iVar6 <= iVar11) {
					return false;
				}
				__this_00 = RPCManager.PhotonView;
				pPStack_38 = this.player;
				parameters = (Object[])new object[3];
				pMVar2 = CustomLogicAddonTransfer._transferData;
				if ((pMVar2 != null) &&(pSVar3 = pMVar2._messages, pSVar3 != null)) {
					iVar6 = this._i_5__2;
					pIVar8 = pSVar3.get_Item(iVar6);
					if (parameters != null) {
						if ((pIVar8 != null) &&(pIVar9 = il2cpp_vm_Object_IsInst(pIVar8, (((parameters.obj).klass)._1).element_class), pIVar9 == null)) {
		label_0596b287: ;
							pIVar8 = new ArrayTypeMismatchException();
							throw pIVar8;
						}
						if ((int)parameters.Length != 0) {
							parameters[0] = pIVar8;
							iStack_3c = this._i_5__2;
							pIVar8 = (object)iStack_3c;
							if ((pIVar8 != null) &&(pIVar9 = il2cpp_vm_Object_IsInst(pIVar8, (((parameters.obj).klass)._1).element_class), pIVar9 == null)) goto label_0596b287;
							if ((parameters.Length & 0xfffffffe) != 0) {
								parameters[1] = pIVar8;
								pMVar2 = CustomLogicAddonTransfer._transferData;
								if ((pMVar2 != null) &&(pSVar3 = pMVar2._messages, pSVar3 != null)) {
									iStack_40 = pSVar3.get_Item();
									pIVar8 = (object)iStack_40;
									if ((pIVar8 != null) &&(pIVar9 = il2cpp_vm_Object_IsInst(pIVar8, (((parameters.obj).klass)._1).element_class), pIVar9 == null)) goto label_0596b287;
									if ((uint)parameters.Length < 3) goto label_0596b282;
									parameters[2] = pIVar8;
									if (__this_00 != null) {
										__this_00.RPC("TransferAddonBundleRPC", pPStack_38, parameters);
										__this_01 = new WaitForSeconds(0.5);
										this.__2__current = (object)__this_01;
										this.__1__state = 1;
										return true;
									}
								}
								goto label_0596b27d;
							}
						}
		label_0596b282: ;
						throw new IndexOutOfRangeException();
					}
				}
			}
		label_0596b27d: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6001886")]
		[Address(RVA = "0x586B2B0", Offset = "0x586A2B0", VA = "0x586B2B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Map/CustomLogicAddonTransfer.c (Map.CustomLogicAddonTransfer.<TransferAddonData>d__12$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Map_CustomLogicAddonTransfer_TransferAddonData_d__12_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x40013A4")]
	[FieldOffset(Offset = "0x0")]
	public static bool AddonTransferReady;

	[Token(Token = "0x40013A5")]
	[FieldOffset(Offset = "0x8")]
	public static string AddonBundleHash;

	[Token(Token = "0x40013A6")]
	[FieldOffset(Offset = "0x10")]
	private static CustomLogicAddonTransfer _instance;

	[Token(Token = "0x40013A7")]
	[FieldOffset(Offset = "0x18")]
	private static readonly CustomLogicTransferData _transferData;

	[Token(Token = "0x40013A8")]
	[FieldOffset(Offset = "0x20")]
	private static readonly ContentTransferChangeTracker _changeTracker;

	[Token(Token = "0x6001875")]
	[Address(RVA = "0x5869570", Offset = "0x5868570", VA = "0x5869570")]
	public static void Init()
	{
		// Lifted from source/cpp/Map/CustomLogicAddonTransfer.c (Map.CustomLogicAddonTransfer$$Init): 1 lines keep C-only constructs
		CustomLogicAddonTransfer pMVar2;
		OnPreLoadScene __this;

		pMVar2 = SingletonFactory.CreateSingleton<CustomLogicAddonTransfer>((object)CustomLogicAddonTransfer._instance);
		CustomLogicAddonTransfer._instance = pMVar2;
		__this = new OnPreLoadScene(null, (intptr_t)MethodInfo_Map_CustomLogicAddonTransfer_OnPreLoadScene);
		EventManager.add_OnPreLoadScene(__this);
		return;
	}

	[Token(Token = "0x6001876")]
	[Address(RVA = "0x5869640", Offset = "0x5868640", VA = "0x5869640")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
		// Lifted from source/cpp/Map/CustomLogicAddonTransfer.c (Map.CustomLogicAddonTransfer$$OnPreLoadScene): clean
		uint uVar1;
		CustomLogicAddonTransfer __this;
		CustomLogicTransferData __this_00;

		if (Il2CppMethodInitialized_07545973 == false) {
			Il2CppMethodInitialized_07545973 = true;
			uVar1 = (typeof(CustomLogicAddonTransfer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicAddonTransfer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = CustomLogicAddonTransfer._instance;
		}
		else {
			__this = *(CustomLogicAddonTransfer*)((long)(typeof(CustomLogicAddonTransfer)).static_fields + 0x10);
		}
		if (__this != null) {
			__this.StopAllCoroutines();
			__this_00 = CustomLogicAddonTransfer._transferData;
			if (__this_00 != null) {
				__this_00.Reset();
				CustomLogicAddonTransfer.AddonTransferReady = false;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001877")]
	[Address(RVA = "0x58697B0", Offset = "0x58687B0", VA = "0x58697B0")]
	public static void Start()
	{
		// Lifted from source/cpp/Map/CustomLogicAddonTransfer.c (Map.CustomLogicAddonTransfer$$Start): clean
		uint uVar1;
		ContentTransferChangeTracker pMVar2;
		String b;
		CustomLogicTransferData __this;
		Player pPVar4;
		PhotonView __this_00;
		bool bVar5;
		bool bVar6;
		String pSVar7;
		MethodInfo b_00;
		Player[] pPVar8;
		ulong uVar9;
		Object[] parameters;
		int iVar10;
		ulong uVar11;

		pSVar7 = CustomLogicAddonTransfer.BuildBundleJson();
		b_00 = (MethodInfo)Util.CreateMD5(pSVar7);
		pMVar2 = CustomLogicAddonTransfer._changeTracker;
		if (pMVar2 != null) {
			b = (String)**(ulong*)(g_data_07556758 + 0xb8);
			bVar5 = (pMVar2._identity != b);
			bVar6 = true;
			if (!bVar5) {
				bVar6 = (pMVar2._hash != (String)b_00);
			}
			pMVar2._identity = b;
			pMVar2._hash = (String)b_00;
			CustomLogicAddonTransfer.AddonBundleHash = (String)b_00;
			__this = CustomLogicAddonTransfer._transferData;
			if (__this != null) {
				__this.Prepare(pSVar7, CustomLogicAddonTransfer.AddonBundleHash);
				CustomLogicManager.ApplyAddonBundle(pSVar7);
				CustomLogicManager.FinishLoadAddons();
				pPVar8 = PhotonNetwork.PlayerListOthers;
				if (pPVar8 != null) {
					iVar10 = (int)pPVar8.Length;
					uVar9 = pPVar8.Length & 0xffffffff;
					if (bVar6 == false) {
						if (0 < iVar10) {
							uVar11 = 0;
							do {
								if (uVar9 <= uVar11) goto label_05969b25;
								pPVar4 = pPVar8[uVar11];
								pSVar7 = PhotonExtensions.GetStringProperty(pPVar4, PlayerProperty.CustomAddonHash, "");
								bVar5 = (pSVar7 != (String)b_00);
								if (bVar5) {
									CustomLogicAddonTransfer.Transfer(pPVar4);
								}
								else {
									__this_00 = RPCManager.PhotonView;
									parameters = (Object[])new object[0];
									if (__this_00 == null) goto label_05969b2a;
									__this_00.RPC("LoadCachedAddonBundleRPC", pPVar4, parameters);
								}
								uVar11 = uVar11 + 1;
								uVar1 = (uint)pPVar8.Length;
								uVar9 = (ulong)uVar1;
							} while ((long)uVar11 < (long)(int)uVar1);
						}
					}
					else if (0 < iVar10) {
						uVar11 = 0;
						do {
							if (uVar9 <= uVar11) {
	label_05969b25: ;
								throw new IndexOutOfRangeException();
							}
							pPVar4 = pPVar8[uVar11];
							CustomLogicAddonTransfer.Transfer(pPVar4);
							uVar11 = uVar11 + 1;
							uVar1 = (uint)pPVar8.Length;
							uVar9 = (ulong)uVar1;
						} while ((long)uVar11 < (long)(int)uVar1);
					}
					CustomLogicAddonTransfer.AddonTransferReady = true;
					return;
				}
			}
		}
	label_05969b2a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001878")]
	[Address(RVA = "0x586A5E0", Offset = "0x58695E0", VA = "0x586A5E0")]
	public static void Transfer(Player player)
	{
		// Lifted from source/cpp/Map/CustomLogicAddonTransfer.c (Map.CustomLogicAddonTransfer$$Transfer): 1 lines keep C-only constructs
		uint uVar1;
		CustomLogicAddonTransfer __this;
		CustomLogicAddonTransfer.d__12<TransferAddonData> __this_00;

		if (Il2CppMethodInitialized_07545975 == false) {
			Il2CppMethodInitialized_07545975 = true;
			uVar1 = (typeof(CustomLogicAddonTransfer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicAddonTransfer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = CustomLogicAddonTransfer._instance;
		}
		else {
			__this = *(CustomLogicAddonTransfer*)((long)(typeof(CustomLogicAddonTransfer)).static_fields + 0x10);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		if (Il2CppMethodInitialized_07545979 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicAddonTransfer.d__12<TransferAddonData>)) ;
			Il2CppMethodInitialized_07545979 = true;
		}
		__this_00 = new CustomLogicAddonTransfer.d__12<TransferAddonData>();
		__this_00.__1__state = 0;
		__this_00.player = player;
		__this.StartCoroutine((IEnumerator)__this_00);
		return;
	}

	[Token(Token = "0x6001879")]
	[Address(RVA = "0x5869B30", Offset = "0x5868B30", VA = "0x5869B30")]
	private static string BuildBundleJson()
	{
		// Lifted from source/cpp/Map/CustomLogicAddonTransfer.c (Map.CustomLogicAddonTransfer$$BuildBundleJson): 15 lines keep C-only constructs
		InGameSet pSVar1;
		InGameGeneralSettings pSVar2;
		ListSetting<StringSetting> pSVar3;
		List<T> source;
		object @object;
		byte puVar4;
		bool bVar5;
		JSONObject __this;
		Map_CustomLogicAddonTransfer___c_StaticFields pMVar6;
		Func<StringSetting, string> __this_00;
		System_Collections_Generic_IEnumerable_TResult__o source_00;
		System_Collections_Generic_List_TSource__o __this_01;
		String value;
		JSONNode pSVar7;
		String pSVar8;
		MethodInfo pMVar9;
		byte[] local_68 = new byte[8];
		String local_58;
		byte[] local_48 = new byte[16];
		String local_38;

		if (Il2CppMethodInitialized_07545976 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_StringSetting_string) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value) ;
			Il2CppMethodInitialized_07545976 = true;
		}
		local_68 = (byte[])0x0;
		local_58 = null;
		__this = new JSONObject();
		pSVar1 = SettingsManager.InGameCurrent;
		if (((pSVar1 != null) &&(pSVar2 = pSVar1.General, pSVar2 != null)) &&(pSVar3 = pSVar2.Addons, pSVar3 != null)) {
			source = pSVar3._value;
			if ((typeof(CustomLogicAddonTransfer.c)._2).cctor_finished_or_no_cctor == 0) {
				pMVar6 = typeof(CustomLogicAddonTransfer.c).static_fields;
				__this_00 = pMVar6.__9__9_0;
			}
			else {
				pMVar6 = typeof(CustomLogicAddonTransfer.c).static_fields;
				__this_00 = pMVar6.__9__9_0;
			}
			if (__this_00 == null) {
				if (((typeof(CustomLogicAddonTransfer.c))._2).cctor_finished_or_no_cctor == 0) {
					pMVar6 = typeof(CustomLogicAddonTransfer.c).static_fields;
				}
				@object = (object)pMVar6.__9;
				__this_00 = new Func<StringSetting, string>(@object, (intptr_t)MethodInfo_Map_CustomLogicAddonTransfer_c_BuildBundleJson_b__9_0);
				pMVar6 = typeof(CustomLogicAddonTransfer.c).static_fields;
				pMVar6.__9__9_0 = __this_00;
			}
			source_00 = Enumerable.Select<StringSetting, string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this_00);
			__this_01 = Enumerable.ToList<string>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
			if (__this_01 != null) {
				local_48.GetEnumerator((List<@object>)__this_01);
				local_58 = local_38;
				local_68 = (byte[])local_48._0_8_;
				local_48._0_8_ = null;
				local_48._8_8_ = local_68;
				puVar4 = local_68;
				if (__this == null) {
					while (true) {
						local_48._8_8_ = puVar4;
						pMVar9 = MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext;
						bVar5 = local_68.MoveNext();
						pSVar8 = local_58;
						if (!(bVar5)) break;
						bVar5 = BuiltinLevels.IsAddonBuiltin(pSVar8);
						puVar4 = (byte)local_48._8_8_;
						if (!bVar5) {
							pSVar8 = BuiltinLevels.LoadAddon(pSVar8);
							bVar5 = String.IsNullOrEmpty(pSVar8);
							puVar4 = (byte)local_48._8_8_;
							if (!bVar5) {
								((JSONNode)pSVar8);
								throw new NullReferenceException();
							}
						}
					}
				}
				else {
					while (true) {
						pMVar9 = MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext;
						bVar5 = local_68.MoveNext();
						pSVar8 = local_58;
						if (!(bVar5)) break;
						bVar5 = BuiltinLevels.IsAddonBuiltin(pSVar8);
						if (!bVar5) {
							value = BuiltinLevels.LoadAddon(pSVar8);
							bVar5 = String.IsNullOrEmpty(value);
							if (!bVar5) {
								pSVar7 = ((JSONNode)value);
								__this.set_Item(pSVar8, pSVar7);
							}
						}
					}
				}
				local_68.Dispose();
				if (__this != null) {
					pSVar8 = __this.ToString();
					return pSVar8;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600187A")]
	[Address(RVA = "0x5859430", Offset = "0x5858430", VA = "0x5859430")]
	public static void OnTransferAddonBundleRPC(byte[][] byteArr, int msgNumber, int msgTotal, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Map/CustomLogicAddonTransfer.c (Map.CustomLogicAddonTransfer$$OnTransferAddonBundleRPC): clean
		CustomLogicTransferData __this;
		String pSVar2;
		bool bVar3;
		String pSStack_38;
		String pSStack_30;

		pSStack_30 = null;
		pSStack_38 = null;
		if (info.Sender == null) {
	label_05959556: ;
			throw new NullReferenceException();
		}
		bVar3 = info.Sender.IsMasterClient;
		if (bVar3) {
			__this = CustomLogicAddonTransfer._transferData;
			if (__this == null) goto label_05959556;
			bVar3 = __this.TryReceive(byteArr, msgNumber, msgTotal, ref pSStack_30, ref pSStack_38);
			pSVar2 = pSStack_38;
			if (bVar3) {
				CustomLogicAddonTransfer.AddonBundleHash = pSVar2;
				pSVar2 = pSStack_30;
				CustomLogicManager.ApplyAddonBundle(pSVar2);
				CustomLogicManager.FinishLoadAddons();
			}
		}
		return;
	}

	[Token(Token = "0x600187B")]
	[Address(RVA = "0x5859610", Offset = "0x5858610", VA = "0x5859610")]
	public static void OnLoadCachedAddonBundleRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Map/CustomLogicAddonTransfer.c (Map.CustomLogicAddonTransfer$$OnLoadCachedAddonBundleRPC): clean
		bool bVar1;

		if (info.Sender != null) {
			bVar1 = info.Sender.IsMasterClient;
			if (!bVar1) {
				return;
			}
		}
		if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
			CustomLogicManager.FinishLoadAddons();
			return;
		}
		CustomLogicManager.FinishLoadAddons();
		return;
	}

	[Token(Token = "0x600187C")]
	[Address(RVA = "0x586A6D0", Offset = "0x58696D0", VA = "0x586A6D0")]
	[IteratorStateMachine(typeof(_003CTransferAddonData_003Ed__12))]
	private IEnumerator TransferAddonData(Player player)
	{
		// Lifted from source/cpp/Map/CustomLogicAddonTransfer.c (Map.CustomLogicAddonTransfer$$TransferAddonData): 1 lines keep C-only constructs
		CustomLogicAddonTransfer.d__12<TransferAddonData> __this_00;

		if (Il2CppMethodInitialized_07545979 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicAddonTransfer.d__12<TransferAddonData>)) ;
			Il2CppMethodInitialized_07545979 = true;
		}
		__this_00 = new CustomLogicAddonTransfer.d__12<TransferAddonData>();
		__this_00.__1__state = 0;
		__this_00.player = player;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600187D")]
	[Address(RVA = "0x586AB90", Offset = "0x5869B90", VA = "0x586AB90")]
	public CustomLogicAddonTransfer()
	{
		// Lifted from source/cpp/Map/CustomLogicAddonTransfer.c (Map.CustomLogicAddonTransfer$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Map/CustomLogicAddonTransfer.c.

	// Map.CustomLogicAddonTransfer$$.cctor: clean
	static CustomLogicAddonTransfer()
	{
		Map_CustomLogicAddonTransfer_StaticFields pMVar1;
		CustomLogicTransferData __this;
		ContentTransferChangeTracker __this_00;
		MethodInfo method_00;

		method_00 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
		pMVar1 = typeof(CustomLogicAddonTransfer).static_fields;
		pMVar1.AddonBundleHash = (String)method_00;
		__this = new CustomLogicTransferData();
		pMVar1 = typeof(CustomLogicAddonTransfer).static_fields;
		pMVar1._transferData = __this;
		__this_00 = new ContentTransferChangeTracker();
		pMVar1 = typeof(CustomLogicAddonTransfer).static_fields;
		pMVar1._changeTracker = __this_00;
		return;
	}

	// Map.CustomLogicAddonTransfer.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new CustomLogicAddonTransfer.c();
		CustomLogicAddonTransfer.c.__9 = (CustomLogicAddonTransfer.c)__this;
		return;
	}

	// Map.CustomLogicAddonTransfer.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Map.CustomLogicAddonTransfer.<>c$$<BuildBundleJson>b__9_0: clean
	private String c__BuildBundleJson_b__9_0(StringSetting x)
	{
		if (x == null) {
			throw new NullReferenceException();
		}
		return x._value;
	}
}
