// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapTransfer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapTransfer.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapTransfer.cs
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
using SimpleJSONFixed;
using UnityEngine;

namespace Map;

[Token(Token = "0x200042B")]
internal class MapTransfer : MonoBehaviour
{
	[Token(Token = "0x200042D")]
	[CompilerGenerated]
	private sealed class _003CTransferMapData_003Ed__26 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001564")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001565")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001566")]
		[FieldOffset(Offset = "0x20")]
		public Player player;

		[Token(Token = "0x4001567")]
		[FieldOffset(Offset = "0x28")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x170002C9")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001A60")]
			[Address(RVA = "0x58A87B0", Offset = "0x58A77B0", VA = "0x58A87B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Map/MapTransfer.c (Map.MapTransfer.<TransferMapData>d__26$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170002CA")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001A62")]
			[Address(RVA = "0x58A8800", Offset = "0x58A7800", VA = "0x58A8800", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Map/MapTransfer.c (Map.MapTransfer.<TransferMapData>d__26$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6001A5D")]
		[Address(RVA = "0x58A8330", Offset = "0x58A7330", VA = "0x58A8330")]
		[DebuggerHidden]
		public _003CTransferMapData_003Ed__26(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Map/MapTransfer.c (Map.MapTransfer.<TransferMapData>d__26$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6001A5E")]
		[Address(RVA = "0x58A8490", Offset = "0x58A7490", VA = "0x58A8490", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Map/MapTransfer.c (Map.MapTransfer.<TransferMapData>d__26$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6001A5F")]
		[Address(RVA = "0x58A84A0", Offset = "0x58A74A0", VA = "0x58A84A0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Map/MapTransfer.c (Map.MapTransfer.<TransferMapData>d__26$$MoveNext): 3 lines keep C-only constructs
			uint uVar1;
			List<byte[][]> pSVar2;
			PhotonView pPVar3;
			Player targetPlayer;
			Object[] parameters;
			object pIVar4;
			object pIVar5;
			WaitForSeconds __this_00;
			int iVar6;
			int iStack_40;
			int iStack_3c;
			PhotonView pPStack_38;

			iVar6 = this.__1__state;
			if (iVar6 == 1) {
				this.__1__state = -1;
				iVar6 = this._i_5__2 + 1;
				this._i_5__2 = iVar6;
				uVar1 = (typeof(MapTransfer)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (iVar6 != 0) {
					return false;
				}
				this.__1__state = -1;
				this._i_5__2 = 0;
				iVar6 = 0;
				uVar1 = (typeof(MapTransfer)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			pSVar2 = MapTransfer._mapTransferData;
			if (pSVar2 != null) {
				if (pSVar2._size <= iVar6) {
					return false;
				}
				pPVar3 = RPCManager.PhotonView;
				targetPlayer = this.player;
				parameters = (Object[])new object[3];
				pSVar2 = MapTransfer._mapTransferData;
				if ((pSVar2 != null) &&(pIVar4 = pSVar2.get_Item(this._i_5__2), parameters != null)) {
					if ((pIVar4 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((parameters.obj).klass)._1).element_class), pIVar5 == null)) {
		label_059a879e: ;
						pIVar4 = new ArrayTypeMismatchException();
						throw pIVar4;
					}
					pPStack_38 = pPVar3;
					if ((int)parameters.Length != 0) {
						parameters[0] = pIVar4;
						iStack_3c = this._i_5__2;
						pIVar4 = (object)iStack_3c;
						if ((pIVar4 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((parameters.obj).klass)._1).element_class), pIVar5 == null)) goto label_059a879e;
						if ((parameters.Length & 0xfffffffe) != 0) {
							parameters[1] = pIVar4;
							pSVar2 = MapTransfer._mapTransferData;
							if (pSVar2 != null) {
								iStack_40 = pSVar2._size;
								pIVar4 = (object)iStack_40;
								if ((pIVar4 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((parameters.obj).klass)._1).element_class), pIVar5 == null)) goto label_059a879e;
								pPVar3 = pPStack_38;
								if ((uint)parameters.Length < 3) goto label_059a8799;
								parameters[2] = pIVar4;
								if (pPVar3 != null) {
									pPVar3.RPC("TransferMapRPC", targetPlayer, parameters);
									__this_00 = new WaitForSeconds(0.25);
									this.__2__current = (object)__this_00;
									this.__1__state = 1;
									return true;
								}
							}
							goto label_059a8794;
						}
					}
		label_059a8799: ;
					throw new IndexOutOfRangeException();
				}
			}
		label_059a8794: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6001A61")]
		[Address(RVA = "0x58A87C0", Offset = "0x58A77C0", VA = "0x58A87C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Map/MapTransfer.c (Map.MapTransfer.<TransferMapData>d__26$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Map_MapTransfer_TransferMapData_d__26_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4001553")]
	[FieldOffset(Offset = "0x0")]
	public static bool MapTransferReady;

	[Token(Token = "0x4001554")]
	[FieldOffset(Offset = "0x8")]
	public static string MapHash;

	[Token(Token = "0x4001555")]
	[FieldOffset(Offset = "0x10")]
	public static string MapName;

	[Token(Token = "0x4001556")]
	[FieldOffset(Offset = "0x18")]
	private static MapTransfer _instance;

	[Token(Token = "0x4001557")]
	[FieldOffset(Offset = "0x20")]
	private static readonly byte MsgMapStart;

	[Token(Token = "0x4001558")]
	[FieldOffset(Offset = "0x21")]
	private static readonly byte MsgMapBody;

	[Token(Token = "0x4001559")]
	[FieldOffset(Offset = "0x22")]
	private static readonly byte MsgLogicBody;

	[Token(Token = "0x400155A")]
	[FieldOffset(Offset = "0x23")]
	private static readonly byte MsgMapEnd;

	[Token(Token = "0x400155B")]
	[FieldOffset(Offset = "0x24")]
	private static int CompressDeltaRows;

	[Token(Token = "0x400155C")]
	[FieldOffset(Offset = "0x28")]
	private static JSONNode _mapScriptSymbolTable;

	[Token(Token = "0x400155D")]
	[FieldOffset(Offset = "0x30")]
	public static List<byte> _mapScriptCompressed;

	[Token(Token = "0x400155E")]
	[FieldOffset(Offset = "0x38")]
	private static List<byte[][]> _mapTransferData;

	[Token(Token = "0x400155F")]
	[FieldOffset(Offset = "0x40")]
	public static List<byte> _logicScriptCompressed;

	[Token(Token = "0x4001560")]
	[FieldOffset(Offset = "0x48")]
	private static readonly ContentTransferChangeTracker _changeTracker;

	[Token(Token = "0x4001561")]
	[FieldOffset(Offset = "0x50")]
	private static readonly OrderedTransferReceiver _receiver;

	[Token(Token = "0x4001562")]
	[FieldOffset(Offset = "0x58")]
	private static bool _receivingLogic;

	[Token(Token = "0x6001A4E")]
	[Address(RVA = "0x589F140", Offset = "0x589E140", VA = "0x589F140")]
	public static void Init()
	{
		// Lifted from source/cpp/Map/MapTransfer.c (Map.MapTransfer$$Init): 1 lines keep C-only constructs
		MapTransfer pMVar2;
		OnPreLoadScene __this;

		pMVar2 = SingletonFactory.CreateSingleton<MapTransfer>((object)MapTransfer._instance);
		MapTransfer._instance = pMVar2;
		__this = new OnPreLoadScene(null, (intptr_t)MethodInfo_Map_MapTransfer_OnPreLoadScene) ;
		EventManager.add_OnPreLoadScene(__this);
		return;
	}

	[Token(Token = "0x6001A4F")]
	[Address(RVA = "0x58A65F0", Offset = "0x58A55F0", VA = "0x58A65F0")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
		// Lifted from source/cpp/Map/MapTransfer.c (Map.MapTransfer$$OnPreLoadScene): clean
		uint uVar1;
		MapTransfer __this;
		MethodInfo method_00;

		if (Il2CppMethodInitialized_07545abe == false) {
			Il2CppMethodInitialized_07545abe = true;
			uVar1 = (typeof(MapTransfer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapTransfer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = MapTransfer._instance;
		}
		else {
			__this = *(MapTransfer*)((long)(typeof(MapTransfer)).static_fields + 0x18);
		}
		if (__this != null) {
			__this.StopAllCoroutines();
			method_00 = (MethodInfo)MapTransfer._receiver;
			if (method_00 != null) {
				method_00.Reset();
				MapTransfer.ResetReceiveState();
				MapTransfer.MapTransferReady = false;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001A50")]
	[Address(RVA = "0x58A0810", Offset = "0x589F810", VA = "0x58A0810")]
	public static void Start(string mapName)
	{
		// Lifted from source/cpp/Map/MapTransfer.c (Map.MapTransfer$$Start): 1 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		MapScript pMVar3;
		MethodInfo hash;
		ContentTransferChangeTracker __this;
		Player pPVar5;
		PhotonView __this_00;
		bool bVar6;
		Player[] pPVar7;
		ulong uVar8;
		String a;
		Object[] parameters;
		int iVar9;
		ulong uVar10;
		MethodInfo method_00;

		if (Il2CppMethodInitialized_07545abf == false) {
			Il2CppMethodInitialized_07545abf = true;
			uVar1 = (typeof(MapManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pMVar3 = MapManager.MapScript;
		}
		else {
			pMVar3 = *(MapScript*)((long)(typeof(MapManager)).static_fields + 8);
		}
		if (pMVar3 != null) {
			hash = (MethodInfo)pMVar3.MapHash;
			if (((typeof(MapTransfer))._2).cctor_finished_or_no_cctor == 0) {
			}
			__this = MapTransfer._changeTracker;
			if (__this != null) {
				bVar6 = __this.Update(mapName, (String)hash);
				MapTransfer.MapHash = (String)hash;
				method_00 = (MethodInfo)&MapTransfer.MapHash;
				MapTransfer.CreateTransferData();
				pPVar7 = PhotonNetwork.PlayerListOthers;
				if (pPVar7 != null) {
					iVar9 = (int)pPVar7.Length;
					uVar8 = pPVar7.Length & 0xffffffff;
					if (bVar6) {
						if (0 < iVar9) {
							uVar10 = 0;
							do {
								if (uVar8 <= uVar10) {
	label_059a0b25: ;
									throw new IndexOutOfRangeException();
								}
								pPVar5 = pPVar7[uVar10];
								MapTransfer.Transfer(pPVar5);
								uVar10 = uVar10 + 1;
								uVar2 = (uint)pPVar7.Length;
								uVar8 = (ulong)uVar2;
							} while ((long)uVar10 < (long)(int)uVar2);
						}
					}
					else if (0 < iVar9) {
						uVar10 = 0;
						do {
							if (uVar8 <= uVar10) goto label_059a0b25;
							pPVar5 = pPVar7[uVar10];
							a = PhotonExtensions.GetStringProperty(pPVar5, PlayerProperty.CustomMapHash, "");
							bVar6 = (a != (String)hash);
							if (bVar6) {
								MapTransfer.Transfer(pPVar5);
							}
							else {
								__this_00 = RPCManager.PhotonView;
								parameters = (Object[])new object[0];
								if (__this_00 == null) goto label_059a0b2a;
								__this_00.RPC("LoadCachedMapRPC", pPVar5, parameters);
							}
							uVar10 = uVar10 + 1;
							uVar2 = (uint)pPVar7.Length;
							uVar8 = (ulong)uVar2;
						} while ((long)uVar10 < (long)(int)uVar2);
					}
					MapTransfer.MapTransferReady = true;
					return;
				}
			}
		}
	label_059a0b2a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001A51")]
	[Address(RVA = "0x58A0CD0", Offset = "0x589FCD0", VA = "0x58A0CD0")]
	public static void UseBuiltin(string category, string mapName)
	{
		// Lifted from source/cpp/Map/MapTransfer.c (Map.MapTransfer$$UseBuiltin): clean
		ContentTransferChangeTracker __this;
		String identity;

		__this = MapTransfer._changeTracker;
		identity = String.Concat(category, "/", mapName);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Update(identity, (String)**(ulong*)(g_data_07556758 + 0xb8));
		MapTransfer.MapHash = (String)**(ulong*)(g_data_07556758 + 0xb8);
		return;
	}

	[Token(Token = "0x6001A52")]
	[Address(RVA = "0x58A1850", Offset = "0x58A0850", VA = "0x58A1850")]
	public static void Transfer(Player player)
	{
		// Lifted from source/cpp/Map/MapTransfer.c (Map.MapTransfer$$Transfer): clean
		uint uVar1;
		MapTransfer __this;
		MapTransfer.d__26<TransferMapData> __this_00;

		if (Il2CppMethodInitialized_07545ac1 == false) {
			Il2CppMethodInitialized_07545ac1 = true;
			uVar1 = (typeof(MapTransfer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapTransfer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = MapTransfer._instance;
		}
		else {
			__this = *(MapTransfer*)((long)(typeof(MapTransfer)).static_fields + 0x18);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this_00 = new MapTransfer.d__26<TransferMapData>();
		__this_00.__1__state = 0;
		__this_00.player = player;
		__this.StartCoroutine((IEnumerator)__this_00);
		return;
	}

	[Token(Token = "0x6001A53")]
	[Address(RVA = "0x58A67A0", Offset = "0x58A57A0", VA = "0x58A67A0")]
	private static void CreateTransferData()
	{
		// Lifted from source/cpp/Map/MapTransfer.c (Map.MapTransfer$$CreateTransferData): 14 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		int deltaRows;
		uint uVar3;
		MapScript pMVar4;
		MapScriptObjects pMVar5;
		String __this;
		object pIVar6;
		MapScriptOptions pMVar7;
		CompressionAlgorithm pUVar8;
		MapScriptCustomAssets pMVar9;
		WeatherSet pSVar10;
		JSONNode pSVar11;
		System_Byte_array_array_array pSVar12;
		JSONNode pSVar14;
		int iVar16;
		bool bVar17;
		String pSVar18;
		Object[] pSVar19;
		List<byte> pSVar20;
		object collection;
		List<byte[][]> pSVar21;
		System_Byte_array_array pSVar22;
		Byte[] pSVar23;
		List<byte[]> pSVar24;
		List<T> pSVar25;
		Encoding pSVar26;
		int iVar27;
		int iVar28;
		Map_MapTransfer_StaticFields pMVar29;
		int iVar30;

		if (Il2CppMethodInitialized_07545ac2 == false) {
			Il2CppMethodInitialized_07545ac2 = true;
			if ((typeof(MapManager)._2).cctor_finished_or_no_cctor == 0) goto label_059a68f2;
	label_059a67cb: ;
			pMVar4 = MapManager.MapScript;
		}
		else {
			if ((typeof(MapManager)._2).cctor_finished_or_no_cctor != 0) goto label_059a67cb;
	label_059a68f2: ;
			pMVar4 = MapManager.MapScript;
		}
		if ((pMVar4 == null) ||(pMVar5 = pMVar4.Objects, pMVar5 == null)) goto label_059a7625;
		pSVar18 = pMVar5.Serialize();
		pMVar4 = MapManager.MapScript;
		if (pMVar4 == null) goto label_059a7625;
		__this = pMVar4.Logic;
		deltaRows = MapTransfer.CompressDeltaRows;
		pSVar19 = CSVCompression.Compress(pSVar18, deltaRows, 0x3b, 0x2c);
		if (pSVar19 == null) goto label_059a7625;
		if ((int)pSVar19.Length == 0) goto label_059a7587;
		pIVar6 = pSVar19[0];
		if (pIVar6 == null) {
			collection = null;
		}
		else {
			collection = (pIVar6 as byte[]);
			if (collection == null) {
				throw new InvalidCastException();
			}
		}
		pSVar20 = new List<byte>((IEnumerable<T>)collection);
		pMVar29 = typeof(MapTransfer).static_fields;
		pMVar29._mapScriptCompressed = pSVar20;
		pSVar14 = typeof(JSONNode);
		if ((pSVar19.Length & 0xfffffffe) == 0) goto label_059a7587;
		pIVar6 = pSVar19[1];
		if (pIVar6 == null) {
			pMVar29 = typeof(MapTransfer).static_fields;
			pMVar29._mapScriptSymbolTable = null;
		}
		else {
			bVar2 = (typeof(JSONNode)._2).typeHierarchyDepth;
			if (((pIVar6.klass._2).typeHierarchyDepth < bVar2) ||((pIVar6.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(JSONNode))) {
	label_059a6a9a: ;
				throw new InvalidCastException();
			}
			pMVar29 = typeof(MapTransfer).static_fields;
			pMVar29._mapScriptSymbolTable = (JSONNode)pIVar6;
			if (((pIVar6.klass._2).typeHierarchyDepth < bVar2) ||((pIVar6.klass._2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass)pSVar14)) goto label_059a6a9a;
		}
		pSVar21 = new List<byte[][]>();
		pMVar29 = typeof(MapTransfer).static_fields;
		pMVar29._mapTransferData = pSVar21;
		pSVar21 = MapTransfer._mapTransferData;
		pSVar22 = (System_Byte_array_array)new byte[][5];
		pSVar23 = (Byte[])new byte[1];
		if (pSVar23 == null) goto label_059a7625;
		if ((int)pSVar23.Length == 0) goto label_059a7587;
		pSVar23[0] = MapTransfer.MsgMapStart;
		if (pSVar22 == null) goto label_059a7625;
		if ((int)pSVar22.Length == 0) goto label_059a7587;
		pSVar22[0] = pSVar23;
		pMVar4 = MapManager.MapScript;
		if ((pMVar4 == null) ||(pMVar7 = pMVar4.Options, pMVar7 == null)) goto label_059a7625;
		pUVar8 = (CompressionAlgorithm)DataCompressors.Brotli;
		pSVar18 = pMVar7.Serialize();
		if (pUVar8 == null) goto label_059a7625;
		pSVar23 = pUVar8.CompressString(pSVar18, 1);
		if ((pSVar22.Length & 0xfffffffe) == 0) goto label_059a7587;
		pSVar22[1] = pSVar23;
		pMVar4 = MapManager.MapScript;
		if ((pMVar4 == null) ||(pMVar9 = pMVar4.CustomAssets, pMVar9 == null)) goto label_059a7625;
		pUVar8 = (CompressionAlgorithm)DataCompressors.Brotli;
		pSVar18 = pMVar9.Serialize();
		if (pUVar8 == null) goto label_059a7625;
		pSVar23 = pUVar8.CompressString(pSVar18, 1);
		if ((uint)pSVar22.Length < 3) goto label_059a7587;
		pSVar22[2] = pSVar23;
		pMVar4 = MapManager.MapScript;
		if ((pMVar4 == null) ||(pSVar10 = pMVar4.Weather, pSVar10 == null)) goto label_059a7625;
		pUVar8 = (CompressionAlgorithm)DataCompressors.Brotli;
		pSVar18 = pSVar10.SerializeToJsonString();
		if (pUVar8 == null) goto label_059a7625;
		pSVar23 = pUVar8.CompressString(pSVar18, 1);
		if ((pSVar22.Length & 0xfffffffc) == 0) goto label_059a7587;
		pSVar22[3] = pSVar23;
		pSVar11 = MapTransfer._mapScriptSymbolTable;
		if (pSVar11 == null) goto label_059a7625;
		pUVar8 = (CompressionAlgorithm)DataCompressors.Brotli;
		pSVar18 = pSVar11.ToString();
		if (pUVar8 == null) goto label_059a7625;
		pSVar23 = pUVar8.CompressString(pSVar18, 1);
		if ((uint)pSVar22.Length < 5) goto label_059a7587;
		pSVar22[4] = pSVar23;
		if (pSVar21 == null) goto label_059a7625;
		piVar1 = &pSVar21._version;
		*piVar1 = *piVar1 + 1;
		pSVar12 = pSVar21._items;
		if (pSVar12 == null) goto label_059a7625;
		uVar3 = pSVar21._size;
		if (uVar3 < (uint)pSVar12.Length) {
			pSVar21._size = uVar3 + 1;
			pSVar12[(int)uVar3] = pSVar22;
		}
		else {
			pSVar21.AddWithResize((object)pSVar22);
		}
		pSVar20 = MapTransfer._mapScriptCompressed;
		if (pSVar20 == null) goto label_059a7625;
		iVar30 = pSVar20._size;
		pSVar24 = new List<byte[]>();
		if (iVar30 < 1) {
			if (pSVar24 == null) goto label_059a7625;
	label_059a6f27: ;
			if (0 < pSVar24._size) {
				iVar30 = 0;
				do {
					while(true) {
						pSVar21 = MapTransfer._mapTransferData;
						pSVar22 = (System_Byte_array_array)new byte[][2];
						pSVar23 = (Byte[])new byte[1];
						if (pSVar23 == null) goto label_059a7625;
						if ((int)pSVar23.Length == 0) goto label_059a7587;
						pSVar23[0] = MapTransfer.MsgMapBody;
						if (pSVar22 == null) goto label_059a7625;
						if ((int)pSVar22.Length == 0) goto label_059a7587;
						pSVar22[0] = pSVar23;
						pSVar23 = (Byte[])pSVar24.get_Item(iVar30);
						if ((pSVar22.Length & 0xfffffffe) == 0) goto label_059a7587;
						pSVar22[1] = pSVar23;
						if (pSVar21 == null) goto label_059a7625;
						piVar1 = &pSVar21._version;
						*piVar1 = *piVar1 + 1;
						pSVar12 = pSVar21._items;
						if (pSVar12 == null) goto label_059a7625;
						uVar3 = pSVar21._size;
						if ((uint)pSVar12.Length <= uVar3) break;
						pSVar21._size = uVar3 + 1;
						pSVar12[(int)uVar3] = pSVar22;
						iVar30 = iVar30 + 1;
						if (pSVar24._size <= iVar30) goto label_059a7091;
					}
					pSVar21.AddWithResize((object)pSVar22);
					iVar30 = iVar30 + 1;
				} while (iVar30 < pSVar24._size);
			}
	label_059a7091: ;
			if (__this == null) goto label_059a7625;
			pSVar18 = __this.Trim();
			bVar17 = (pSVar18 != (String)**(ulong*)(g_data_07556758 + 0xb8));
			if (bVar17) {
				pUVar8 = (CompressionAlgorithm)DataCompressors.Brotli;
				if (pUVar8 == null) goto label_059a7625;
				pSVar23 = pUVar8.CompressString(__this, 1);
				pSVar20 = new List<byte>((IEnumerable<T>)pSVar23);
				pMVar29 = typeof(MapTransfer).static_fields;
				pMVar29._logicScriptCompressed = pSVar20;
				pSVar20 = MapTransfer._logicScriptCompressed;
				if (pSVar20 == null) goto label_059a7625;
				iVar30 = pSVar20._size;
				pSVar24 = new List<byte[]>();
				if (iVar30 < 1) {
					if (pSVar24 == null) goto label_059a7625;
				}
				else {
					if (pSVar24 == null) {
						iVar27 = 10000;
						if (iVar30 < 10000) {
							iVar27 = iVar30;
						}
						pSVar20 = MapTransfer._logicScriptCompressed;
						goto label_059a7608;
					}
					iVar28 = 0;
					iVar27 = 10000;
					do {
						while(true) {
							iVar16 = iVar30 - iVar28;
							if (iVar27 + iVar28 <= iVar30) {
								iVar16 = iVar27;
							}
							iVar27 = iVar16;
							pSVar20 = MapTransfer._logicScriptCompressed;
							if ((pSVar20 == null) ||(pSVar25 = pSVar20.GetRange(iVar28, iVar27), pSVar25 == null)) goto label_059a7625;
							pSVar23 = pSVar25.ToArray();
							piVar1 = &pSVar24._version;
							*piVar1 = *piVar1 + 1;
							pSVar22 = pSVar24._items;
							if (pSVar22 == null) goto label_059a7625;
							uVar3 = pSVar24._size;
							if ((uint)pSVar22.Length <= uVar3) break;
							pSVar24._size = uVar3 + 1;
							pSVar22[(int)uVar3] = pSVar23;
							iVar28 = iVar28 + iVar27;
							if (iVar30 <= iVar28) goto label_059a72b8;
						}
						pSVar24.AddWithResize(ref pSVar23.obj);
						iVar28 = iVar28 + iVar27;
					} while (iVar28 < iVar30);
				}
	label_059a72b8: ;
				if (0 < pSVar24._size) {
					iVar30 = 0;
					do {
						while(true) {
							pSVar21 = MapTransfer._mapTransferData;
							pSVar22 = (System_Byte_array_array)new byte[][2];
							pSVar23 = (Byte[])new byte[1];
							if (pSVar23 == null) goto label_059a7625;
							if ((int)pSVar23.Length == 0) goto label_059a7587;
							pSVar23[0] = MapTransfer.MsgLogicBody;
							if (pSVar22 == null) goto label_059a7625;
							if ((int)pSVar22.Length == 0) goto label_059a7587;
							pSVar22[0] = pSVar23;
							pSVar23 = (Byte[])pSVar24.get_Item(iVar30);
							if ((pSVar22.Length & 0xfffffffe) == 0) goto label_059a7587;
							pSVar22[1] = pSVar23;
							if (pSVar21 == null) goto label_059a7625;
							piVar1 = &pSVar21._version;
							*piVar1 = *piVar1 + 1;
							pSVar12 = pSVar21._items;
							if (pSVar12 == null) goto label_059a7625;
							uVar3 = pSVar21._size;
							if ((uint)pSVar12.Length <= uVar3) break;
							pSVar21._size = uVar3 + 1;
							pSVar12[(int)uVar3] = pSVar22;
							iVar30 = iVar30 + 1;
							if (pSVar24._size <= iVar30) goto label_059a7422;
						}
						pSVar21.AddWithResize((object)pSVar22);
						iVar30 = iVar30 + 1;
					} while (iVar30 < pSVar24._size);
				}
			}
	label_059a7422: ;
			pSVar21 = MapTransfer._mapTransferData;
			pSVar22 = (System_Byte_array_array)new byte[][2];
			pSVar23 = (Byte[])new byte[1];
			if (pSVar23 != null) {
				if ((int)pSVar23.Length == 0) {
	label_059a7587: ;
					throw new IndexOutOfRangeException();
				}
				pSVar23[0] = MapTransfer.MsgMapEnd;
				if (pSVar22 != null) {
					if ((int)pSVar22.Length == 0) goto label_059a7587;
					pSVar22[0] = pSVar23;
					pSVar26 = Encoding.UTF8;
					if (pSVar26 != null) {
						pSVar23 = pSVar26.GetBytes(MapTransfer.MapHash);
						if ((pSVar22.Length & 0xfffffffe) == 0) goto label_059a7587;
						pSVar22[1] = pSVar23;
						if (pSVar21 != null) {
							piVar1 = &pSVar21._version;
							*piVar1 = *piVar1 + 1;
							pSVar12 = pSVar21._items;
							if (pSVar12 != null) {
								uVar3 = pSVar21._size;
								if (uVar3 < (uint)pSVar12.Length) {
									pSVar21._size = uVar3 + 1;
									pSVar12[(int)uVar3] = pSVar22;
									return;
								}
								pSVar21.AddWithResize((object)pSVar22);
								return;
							}
						}
					}
				}
			}
		}
		else {
			if (pSVar24 != null) {
				iVar28 = 0;
				iVar27 = 10000;
				do {
					while(true) {
						iVar16 = iVar30 - iVar28;
						if (iVar27 + iVar28 <= iVar30) {
							iVar16 = iVar27;
						}
						iVar27 = iVar16;
						pSVar20 = MapTransfer._mapScriptCompressed;
						if ((pSVar20 == null) ||(pSVar25 = pSVar20.GetRange(iVar28, iVar27), pSVar25 == null)) goto label_059a7625;
						pSVar23 = pSVar25.ToArray();
						piVar1 = &pSVar24._version;
						*piVar1 = *piVar1 + 1;
						pSVar22 = pSVar24._items;
						if (pSVar22 == null) goto label_059a7625;
						uVar3 = pSVar24._size;
						if ((uint)pSVar22.Length <= uVar3) break;
						pSVar24._size = uVar3 + 1;
						pSVar22[(int)uVar3] = pSVar23;
						iVar28 = iVar28 + iVar27;
						if (iVar30 <= iVar28) goto label_059a6f27;
					}
					pSVar24.AddWithResize(ref pSVar23.obj);
					iVar28 = iVar28 + iVar27;
				} while (iVar28 < iVar30);
				goto label_059a6f27;
			}
			iVar27 = 10000;
			if (iVar30 < 10000) {
				iVar27 = iVar30;
			}
			pSVar20 = MapTransfer._mapScriptCompressed;
	label_059a7608: ;
			if ((pSVar20 != null) &&(pSVar25 = pSVar20.GetRange(0, iVar27), pSVar25 != null)) {
				pSVar25.ToArray();
				throw new NullReferenceException();
			}
		}
	label_059a7625: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001A54")]
	[Address(RVA = "0x58A76C0", Offset = "0x58A66C0", VA = "0x58A76C0")]
	public static void OnTransferMapRPC(byte[][] byteArr, int msgNumber, int msgTotal, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Map/MapTransfer.c (Map.MapTransfer$$OnTransferMapRPC): 3 lines keep C-only constructs
		int messageTotal;
		OrderedTransferReceiver __this;
		bool bVar1;
		MapTransfer.c__DisplayClass22_0 __this_00;
		Func<T1, T2, T3, TResult> __this_01;
		Action<T1, T2> __this_02;
		Action __this_03;

		__this_00 = new MapTransfer.c__DisplayClass22_0();
		if ((__this_00 == null) ||(__this_00.msgTotal = msgTotal, info.Sender == null)) {
	label_059a7869: ;
			throw new NullReferenceException();
		}
		bVar1 = info.Sender.IsMasterClient;
		if (bVar1) {
			__this = MapTransfer._receiver;
			messageTotal = __this_00.msgTotal;
			__this_01 = new Func<byte[][], int, int, bool>(null, (intptr_t)MethodInfo_Map_MapTransfer_ValidateMessage);
			__this_02 = new Action<byte[][], int>((object)__this_00, (intptr_t)MethodInfo_Map_MapTransfer_c__DisplayClass22_0_OnTransferMapRPC_b__0);
			__this_03 = new Action(null, (intptr_t)MethodInfo_Map_MapTransfer_ResetReceiveState);
			if (__this == null) goto label_059a7869;
			__this.TryReceive(byteArr, msgNumber, messageTotal, (Func<byte[][], int, int, bool>)__this_01, (Action<byte[][], int>)__this_02, __this_03);
		}
		return;
	}

	[Token(Token = "0x6001A55")]
	[Address(RVA = "0x58A7880", Offset = "0x58A6880", VA = "0x58A7880")]
	private static bool ValidateMessage(byte[][] message, int messageIndex, int messageTotal)
	{
		// Lifted from source/cpp/Map/MapTransfer.c (Map.MapTransfer$$ValidateMessage): clean
		byte uVar1;
		byte uVar2;
		Byte[] pSVar3;
		int iVar4;
		Map_MapTransfer_StaticFields pMVar5;
		bool bVar6;

		if (message == null) {
	label_059a79f5: ;
			throw new NullReferenceException();
		}
		if ((int)message.Length < 2) {
			return false;
		}
		pSVar3 = message[0];
		if (pSVar3 == null) goto label_059a79f5;
		if ((int)pSVar3.Length == 1) {
			uVar1 = pSVar3[0];
			if ((typeof(MapTransfer)._2).cctor_finished_or_no_cctor == 0) {
				pMVar5 = typeof(MapTransfer).static_fields;
				uVar2 = pMVar5.MsgMapStart;
			}
			else {
				pMVar5 = typeof(MapTransfer).static_fields;
				uVar2 = pMVar5.MsgMapStart;
			}
			if (uVar1 == uVar2) {
				if (messageIndex == 0) {
					return (int)message.Length == 5;
				}
				return false;
			}
			if (((typeof(MapTransfer))._2).cctor_finished_or_no_cctor == 0) {
				pMVar5 = typeof(MapTransfer).static_fields;
				uVar2 = pMVar5.MsgMapBody;
			}
			else {
				uVar2 = pMVar5.MsgMapBody;
			}
			if (uVar1 != uVar2) {
				if (((typeof(MapTransfer))._2).cctor_finished_or_no_cctor == 0) {
					pMVar5 = typeof(MapTransfer).static_fields;
				}
				if (uVar1 != pMVar5.MsgLogicBody) {
					if ((typeof(MapTransfer)._2).cctor_finished_or_no_cctor == 0) {
						pMVar5 = typeof(MapTransfer).static_fields;
					}
					if (messageTotal + -1 != messageIndex) {
						return false;
					}
					if (uVar1 != pMVar5.MsgMapEnd) {
						return false;
					}
					if ((int)message.Length != 2) {
						return false;
					}
					if (message[1] == null) goto label_059a79f5;
					iVar4 = (int)message[1].Length;
					bVar6 = SBORROW4(iVar4, 0x401);
					iVar4 = iVar4 + -0x401;
					goto label_059a79e5;
				}
			}
			if (messageIndex < 1) {
				return false;
			}
			if (messageTotal + -1 <= messageIndex) {
				return false;
			}
			if ((int)message.Length == 2) {
				if (message[1] != null) {
					iVar4 = (int)message[1].Length;
					bVar6 = SBORROW4(iVar4, 0x2711);
					iVar4 = iVar4 + -0x2711;
	label_059a79e5: ;
					return bVar6 != iVar4 < 0;
				}
				goto label_059a79f5;
			}
		}
		return false;
	}

	[Token(Token = "0x6001A56")]
	[Address(RVA = "0x58A7A00", Offset = "0x58A6A00", VA = "0x58A7A00")]
	private static void ProcessMessage(byte[][] message, int messageIndex, int messageTotal)
	{
		// Lifted from source/cpp/Map/MapTransfer.c (Map.MapTransfer$$ProcessMessage): 6 lines keep C-only constructs
		byte uVar1;
		byte uVar2;
		uint uVar3;
		int deltaRows;
		LoadingMenu __this;
		MapScriptOptions pMVar5;
		MapScriptCustomAssets pMVar6;
		WeatherSet pSVar7;
		MapScriptObjects __this_00;
		Player player;
		MapScript pMVar8;
		String pSVar9;
		JSONNode pSVar10;
		List<byte> pSVar11;
		Map_MapTransfer_StaticFields pMVar12;
		Byte[] pSVar13;
		Encoding pSVar14;
		Il2CppClass klass;
		InvalidOperationException __this_01;
		MethodInfo pMVar15;
		CompressionAlgorithm pUVar16;

		if (Il2CppMethodInitialized_07545ac5 == false) {
			Il2CppMethodInitialized_07545ac5 = true;
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) goto label_059a7b08;
	label_059a7a34: ;
			__this = UIManager.LoadingMenu;
		}
		else {
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor != 0) goto label_059a7a34;
	label_059a7b08: ;
			__this = UIManager.LoadingMenu;
		}
		if ((__this == null) ||(__this.UpdateLoading(((float)messageIndex / (float)messageTotal) * 0.5, false, false), message == null)) goto label_059a82d9;
		if ((int)message.Length == 0) goto label_059a82de;
		pSVar13 = message[0];
		if (pSVar13 == null) goto label_059a82d9;
		if ((int)pSVar13.Length == 0) goto label_059a82de;
		uVar1 = pSVar13[0];
		if ((typeof(MapTransfer)._2).cctor_finished_or_no_cctor == 0) {
			pMVar12 = typeof(MapTransfer).static_fields;
			uVar2 = pMVar12.MsgMapStart;
		}
		else {
			pMVar12 = typeof(MapTransfer).static_fields;
			uVar2 = pMVar12.MsgMapStart;
		}
		if (uVar1 == uVar2) {
			pSVar9 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			if (((typeof(MapTransfer))._2).cctor_finished_or_no_cctor == 0) {
				pMVar12 = typeof(MapTransfer).static_fields;
			}
			pMVar12.MapHash = pSVar9;
			player = PhotonNetwork.LocalPlayer;
			pMVar15 = (MethodInfo)PlayerProperty.CustomMapHash;
			PhotonExtensions.SetCustomProperty(player, (String)pMVar15, (object)**(ulong*)(g_data_07556758 + 0xb8));
			pMVar8 = new MapScript();
			MapManager.MapScript = pMVar8;
			pMVar8 = MapManager.MapScript;
			if (pMVar8 != null) {
				pMVar5 = pMVar8.Options;
				if ((message.Length & 0xfffffffe) == 0) goto label_059a82de;
				pUVar16 = (CompressionAlgorithm)DataCompressors.Brotli;
				if ((pUVar16 != null) &&(pSVar9 = pUVar16.DecompressString(message[1], 0x1000, 0xa00000), pMVar5 != null)) {
					pMVar5.Deserialize(pSVar9);
					pMVar8 = MapManager.MapScript;
					if (pMVar8 != null) {
						if ((uint)message.Length < 3) goto label_059a82de;
						pUVar16 = (CompressionAlgorithm)DataCompressors.Brotli;
						if (pUVar16 != null) {
							pMVar6 = pMVar8.CustomAssets;
							pSVar9 = pUVar16.DecompressString(message[2], 0x1000, 0xa00000);
							if (pMVar6 != null) {
								pMVar6.Deserialize(pSVar9);
								pMVar8 = MapManager.MapScript;
								if (pMVar8 != null) {
									if ((message.Length & 0xfffffffc) == 0) goto label_059a82de;
									pUVar16 = (CompressionAlgorithm)DataCompressors.Brotli;
									if (pUVar16 != null) {
										pSVar7 = pMVar8.Weather;
										pSVar9 = pUVar16.DecompressString(message[3], 0x1000, 0xa00000);
										if (pSVar7 != null) {
											pSVar7.DeserializeFromJsonString(pSVar9);
											if ((uint)message.Length < 5) goto label_059a82de;
											pUVar16 = (CompressionAlgorithm)DataCompressors.Brotli;
											if (pUVar16 != null) {
												pSVar9 = pUVar16.DecompressString(message[4], 0x1000, 0xa00000);
												pSVar10 = JSON.Parse(pSVar9);
												pMVar12 = typeof(MapTransfer).static_fields;
												pMVar12._mapScriptSymbolTable = pSVar10;
												pSVar11 = new List<byte>();
												pMVar12 = typeof(MapTransfer).static_fields;
												pMVar12._mapScriptCompressed = pSVar11;
												pSVar11 = new List<byte>();
												pMVar12 = typeof(MapTransfer).static_fields;
												pMVar12._logicScriptCompressed = pSVar11;
												MapTransfer._receivingLogic = false;
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
			goto label_059a82d9;
		}
		if (((typeof(MapTransfer))._2).cctor_finished_or_no_cctor == 0) {
			pMVar12 = typeof(MapTransfer).static_fields;
			uVar3 = (typeof(MapTransfer)._2).cctor_finished_or_no_cctor;
			uVar2 = pMVar12.MsgMapBody;
		}
		else {
			uVar3 = ((typeof(MapTransfer))._2).cctor_finished_or_no_cctor;
			uVar2 = pMVar12.MsgMapBody;
		}
		if (uVar1 == uVar2) {
			if (uVar3 == 0) {
				pMVar12 = typeof(MapTransfer).static_fields;
			}
			if (pMVar12._receivingLogic != false) {
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(InvalidOperationException));
				__this_01 = (InvalidOperationException)il2cpp_codegen_object_new(klass);
				pSVar9 = il2cpp_codegen_get_runtime_metadata(&"Map data received after map logic data.");
				__this_01 = new InvalidOperationException(pSVar9);
				pMVar15 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Map_MapTransfer_ProcessMessage);
				throw (object)__this_01;
			}
			if ((typeof(MapTransfer)._2).cctor_finished_or_no_cctor == 0) {
				pMVar12 = typeof(MapTransfer).static_fields;
			}
			if ((message.Length & 0xfffffffe) == 0) goto label_059a82de;
			pSVar11 = pMVar12._mapScriptCompressed;
		}
		else {
			if (uVar3 == 0) {
				pMVar12 = typeof(MapTransfer).static_fields;
				uVar3 = (typeof(MapTransfer)._2).cctor_finished_or_no_cctor;
				uVar2 = pMVar12.MsgLogicBody;
			}
			else {
				uVar3 = ((typeof(MapTransfer))._2).cctor_finished_or_no_cctor;
				uVar2 = pMVar12.MsgLogicBody;
			}
			if (uVar1 != uVar2) {
				if (uVar3 == 0) {
					pMVar12 = typeof(MapTransfer).static_fields;
				}
				if (uVar1 != pMVar12.MsgMapEnd) {
					return;
				}
				if ((typeof(MapTransfer)._2).cctor_finished_or_no_cctor == 0) {
					pMVar12 = typeof(MapTransfer).static_fields;
				}
				pSVar11 = pMVar12._mapScriptCompressed;
				if (pSVar11 == null) goto label_059a82d9;
				if (0 < pSVar11._size) {
					if ((typeof(MapTransfer)._2).cctor_finished_or_no_cctor == 0) {
						pSVar11 = MapTransfer._mapScriptCompressed;
						if (pSVar11 == null) goto label_059a82d9;
					}
					pSVar13 = pSVar11.ToArray();
					pSVar10 = MapTransfer._mapScriptSymbolTable;
					deltaRows = MapTransfer.CompressDeltaRows;
					pMVar15 = (MethodInfo)&g_data_0000003b;
					pSVar9 = CSVCompression.Decompress(pSVar13, pSVar10, deltaRows, 0x3b, 0x2c);
					pMVar8 = MapManager.MapScript;
					if ((pMVar8 == null) ||(__this_00 = pMVar8.Objects, __this_00 == null)) goto label_059a82d9;
					__this_00.DeserializeSkippingErrors(pSVar9, pMVar8.Errors);
				}
				pSVar11 = MapTransfer._logicScriptCompressed;
				if (pSVar11 == null) goto label_059a82d9;
				if (0 < pSVar11._size) {
					if ((typeof(DataCompressors)._2).cctor_finished_or_no_cctor == 0) {
						pUVar16 = (CompressionAlgorithm)DataCompressors.Brotli;
						if ((typeof(MapTransfer)._2).cctor_finished_or_no_cctor == 0) goto label_059a81b7;
	label_059a8180: ;
						pSVar11 = MapTransfer._logicScriptCompressed;
					}
					else {
						pUVar16 = (CompressionAlgorithm)DataCompressors.Brotli;
						if ((typeof(MapTransfer)._2).cctor_finished_or_no_cctor != 0) goto label_059a8180;
	label_059a81b7: ;
						pSVar11 = MapTransfer._logicScriptCompressed;
					}
					if ((pSVar11 == null) ||(pSVar13 = pSVar11.ToArray(), pUVar16 == null)) goto label_059a82d9;
					pSVar9 = pUVar16.DecompressString(pSVar13, 0x1000, 0xa00000);
					pMVar8 = MapManager.MapScript;
					if (pMVar8 == null) goto label_059a82d9;
					pMVar8.Logic = pSVar9;
				}
				pSVar14 = Encoding.UTF8;
				if ((message.Length & 0xfffffffe) == 0) {
	label_059a82de: ;
					throw new IndexOutOfRangeException();
				}
				if (pSVar14 != null) {
					pMVar15 = (MethodInfo)pSVar14.GetString(message[1]);
					pMVar12 = typeof(MapTransfer).static_fields;
					pMVar12.MapHash = (String)pMVar15;
					MapManager.LoadMap(true);
					return;
				}
				goto label_059a82d9;
			}
			if (uVar3 == 0) {
				pMVar12 = typeof(MapTransfer).static_fields;
			}
			pMVar12._receivingLogic = true;
			if ((message.Length & 0xfffffffe) == 0) goto label_059a82de;
			pSVar11 = pMVar12._logicScriptCompressed;
		}
		if (pSVar11 != null) {
			pSVar11.AddRange((IEnumerable<T>)message[1]);
			return;
		}
	label_059a82d9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001A57")]
	[Address(RVA = "0x58A66A0", Offset = "0x58A56A0", VA = "0x58A66A0")]
	private static void ResetReceiveState()
	{
		// Lifted from source/cpp/Map/MapTransfer.c (Map.MapTransfer$$ResetReceiveState): clean
		Map_MapTransfer_StaticFields pMVar1;
		List<byte> pSVar2;

		pMVar1 = typeof(MapTransfer).static_fields;
		pMVar1._mapScriptSymbolTable = null;
		pSVar2 = new List<byte>();
		pMVar1 = typeof(MapTransfer).static_fields;
		pMVar1._mapScriptCompressed = pSVar2;
		pSVar2 = new List<byte>();
		pMVar1 = typeof(MapTransfer).static_fields;
		pMVar1._logicScriptCompressed = pSVar2;
		MapTransfer._receivingLogic = false;
		return;
	}

	[Token(Token = "0x6001A58")]
	[Address(RVA = "0x58A7650", Offset = "0x58A6650", VA = "0x58A7650")]
	[IteratorStateMachine(typeof(_003CTransferMapData_003Ed__26))]
	private IEnumerator TransferMapData(Player player)
	{
		// Lifted from source/cpp/Map/MapTransfer.c (Map.MapTransfer$$TransferMapData): clean
		MapTransfer.d__26<TransferMapData> __this_00;

		__this_00 = new MapTransfer.d__26<TransferMapData>();
		__this_00.__1__state = 0;
		__this_00.player = player;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6001A59")]
	[Address(RVA = "0x58A8350", Offset = "0x58A7350", VA = "0x58A8350")]
	public MapTransfer()
	{
		// Lifted from source/cpp/Map/MapTransfer.c (Map.MapTransfer$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Map/MapTransfer.c.

	// Map.MapTransfer.<>c__DisplayClass22_0$$.ctor: clean
	private void c__DisplayClass22_0__ctor()
	{
		base();
		return;
	}

	// Map.MapTransfer$$.cctor: clean
	static MapTransfer()
	{
		Map_MapTransfer_StaticFields pMVar1;
		ContentTransferChangeTracker __this;
		OrderedTransferReceiver __this_00;

		pMVar1 = typeof(MapTransfer).static_fields;
		pMVar1.MsgMapStart = 0;
		pMVar1.MsgMapBody = 1;
		pMVar1.MsgLogicBody = 2;
		pMVar1.MsgMapEnd = 3;
		pMVar1.CompressDeltaRows = 0x16;
		__this = new ContentTransferChangeTracker();
		pMVar1 = typeof(MapTransfer).static_fields;
		pMVar1._changeTracker = __this;
		__this_00 = new OrderedTransferReceiver(0x80000000);
		pMVar1 = typeof(MapTransfer).static_fields;
		pMVar1._receiver = __this_00;
		return;
	}

	// Map.MapTransfer.<>c__DisplayClass22_0$$<OnTransferMapRPC>b__0: 6 lines keep C-only constructs
	private void c__DisplayClass22_0__OnTransferMapRPC_b__0(System_Byte_array_array message, int messageIndex)
	{
		byte uVar1;
		byte uVar2;
		uint uVar3;
		int deltaRows;
		int iVar4;
		LoadingMenu __this_00;
		MapScriptOptions pMVar6;
		MapScriptCustomAssets pMVar7;
		WeatherSet pSVar8;
		MapScriptObjects __this_01;
		Player player;
		MapScript pMVar9;
		String pSVar10;
		JSONNode pSVar11;
		List<byte> pSVar12;
		Map_MapTransfer_StaticFields pMVar13;
		Byte[] pSVar14;
		Encoding pSVar15;
		Il2CppClass klass;
		InvalidOperationException __this_02;
		MethodInfo pMVar16;
		CompressionAlgorithm pUVar17;

		iVar4 = this.msgTotal;
		if (Il2CppMethodInitialized_07545ac5 == false) {
			Il2CppMethodInitialized_07545ac5 = true;
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) goto label_059a7b08;
	label_059a7a34: ;
			__this_00 = UIManager.LoadingMenu;
		}
		else {
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor != 0) goto label_059a7a34;
	label_059a7b08: ;
			__this_00 = UIManager.LoadingMenu;
		}
		if ((__this_00 == null) ||(__this_00.UpdateLoading(((float)messageIndex / (float)iVar4) * 0.5, false, false), message == null)) goto label_059a82d9;
		if ((int)message.Length == 0) goto label_059a82de;
		pSVar14 = message[0];
		if (pSVar14 == null) goto label_059a82d9;
		if ((int)pSVar14.Length == 0) goto label_059a82de;
		uVar1 = pSVar14[0];
		if ((typeof(MapTransfer)._2).cctor_finished_or_no_cctor == 0) {
			pMVar13 = typeof(MapTransfer).static_fields;
			uVar2 = pMVar13.MsgMapStart;
		}
		else {
			pMVar13 = typeof(MapTransfer).static_fields;
			uVar2 = pMVar13.MsgMapStart;
		}
		if (uVar1 == uVar2) {
			pSVar10 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			if (((typeof(MapTransfer))._2).cctor_finished_or_no_cctor == 0) {
				pMVar13 = typeof(MapTransfer).static_fields;
			}
			pMVar13.MapHash = pSVar10;
			player = PhotonNetwork.LocalPlayer;
			pMVar16 = (MethodInfo)PlayerProperty.CustomMapHash;
			PhotonExtensions.SetCustomProperty(player, (String)pMVar16, (object)**(ulong*)(g_data_07556758 + 0xb8));
			pMVar9 = new MapScript();
			MapManager.MapScript = pMVar9;
			pMVar9 = MapManager.MapScript;
			if (pMVar9 != null) {
				pMVar6 = pMVar9.Options;
				if ((message.Length & 0xfffffffe) == 0) goto label_059a82de;
				pUVar17 = (CompressionAlgorithm)DataCompressors.Brotli;
				if ((pUVar17 != null) &&(pSVar10 = pUVar17.DecompressString(message[1], 0x1000, 0xa00000), pMVar6 != null)) {
					pMVar6.Deserialize(pSVar10);
					pMVar9 = MapManager.MapScript;
					if (pMVar9 != null) {
						if ((uint)message.Length < 3) goto label_059a82de;
						pUVar17 = (CompressionAlgorithm)DataCompressors.Brotli;
						if (pUVar17 != null) {
							pMVar7 = pMVar9.CustomAssets;
							pSVar10 = pUVar17.DecompressString(message[2], 0x1000, 0xa00000);
							if (pMVar7 != null) {
								pMVar7.Deserialize(pSVar10);
								pMVar9 = MapManager.MapScript;
								if (pMVar9 != null) {
									if ((message.Length & 0xfffffffc) == 0) goto label_059a82de;
									pUVar17 = (CompressionAlgorithm)DataCompressors.Brotli;
									if (pUVar17 != null) {
										pSVar8 = pMVar9.Weather;
										pSVar10 = pUVar17.DecompressString(message[3], 0x1000, 0xa00000);
										if (pSVar8 != null) {
											pSVar8.DeserializeFromJsonString(pSVar10);
											if ((uint)message.Length < 5) goto label_059a82de;
											pUVar17 = (CompressionAlgorithm)DataCompressors.Brotli;
											if (pUVar17 != null) {
												pSVar10 = pUVar17.DecompressString(message[4], 0x1000, 0xa00000);
												pSVar11 = JSON.Parse(pSVar10);
												pMVar13 = typeof(MapTransfer).static_fields;
												pMVar13._mapScriptSymbolTable = pSVar11;
												pSVar12 = new List<byte>();
												pMVar13 = typeof(MapTransfer).static_fields;
												pMVar13._mapScriptCompressed = pSVar12;
												pSVar12 = new List<byte>();
												pMVar13 = typeof(MapTransfer).static_fields;
												pMVar13._logicScriptCompressed = pSVar12;
												MapTransfer._receivingLogic = false;
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
			goto label_059a82d9;
		}
		if (((typeof(MapTransfer))._2).cctor_finished_or_no_cctor == 0) {
			pMVar13 = typeof(MapTransfer).static_fields;
			uVar3 = (typeof(MapTransfer)._2).cctor_finished_or_no_cctor;
			uVar2 = pMVar13.MsgMapBody;
		}
		else {
			uVar3 = ((typeof(MapTransfer))._2).cctor_finished_or_no_cctor;
			uVar2 = pMVar13.MsgMapBody;
		}
		if (uVar1 == uVar2) {
			if (uVar3 == 0) {
				pMVar13 = typeof(MapTransfer).static_fields;
			}
			if (pMVar13._receivingLogic != false) {
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(InvalidOperationException));
				__this_02 = (InvalidOperationException)il2cpp_codegen_object_new(klass);
				pSVar10 = il2cpp_codegen_get_runtime_metadata(&"Map data received after map logic data.");
				__this_02 = new InvalidOperationException(pSVar10);
				pMVar16 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Map_MapTransfer_ProcessMessage);
				throw (object)__this_02;
			}
			if ((typeof(MapTransfer)._2).cctor_finished_or_no_cctor == 0) {
				pMVar13 = typeof(MapTransfer).static_fields;
			}
			if ((message.Length & 0xfffffffe) == 0) goto label_059a82de;
			pSVar12 = pMVar13._mapScriptCompressed;
		}
		else {
			if (uVar3 == 0) {
				pMVar13 = typeof(MapTransfer).static_fields;
				uVar3 = (typeof(MapTransfer)._2).cctor_finished_or_no_cctor;
				uVar2 = pMVar13.MsgLogicBody;
			}
			else {
				uVar3 = ((typeof(MapTransfer))._2).cctor_finished_or_no_cctor;
				uVar2 = pMVar13.MsgLogicBody;
			}
			if (uVar1 != uVar2) {
				if (uVar3 == 0) {
					pMVar13 = typeof(MapTransfer).static_fields;
				}
				if (uVar1 != pMVar13.MsgMapEnd) {
					return;
				}
				if ((typeof(MapTransfer)._2).cctor_finished_or_no_cctor == 0) {
					pMVar13 = typeof(MapTransfer).static_fields;
				}
				pSVar12 = pMVar13._mapScriptCompressed;
				if (pSVar12 == null) goto label_059a82d9;
				if (0 < pSVar12._size) {
					if ((typeof(MapTransfer)._2).cctor_finished_or_no_cctor == 0) {
						pSVar12 = MapTransfer._mapScriptCompressed;
						if (pSVar12 == null) goto label_059a82d9;
					}
					pSVar14 = pSVar12.ToArray();
					pSVar11 = MapTransfer._mapScriptSymbolTable;
					deltaRows = MapTransfer.CompressDeltaRows;
					pMVar16 = (MethodInfo)&g_data_0000003b;
					pSVar10 = CSVCompression.Decompress(pSVar14, pSVar11, deltaRows, 0x3b, 0x2c);
					pMVar9 = MapManager.MapScript;
					if ((pMVar9 == null) ||(__this_01 = pMVar9.Objects, __this_01 == null)) goto label_059a82d9;
					__this_01.DeserializeSkippingErrors(pSVar10, pMVar9.Errors);
				}
				pSVar12 = MapTransfer._logicScriptCompressed;
				if (pSVar12 == null) goto label_059a82d9;
				if (0 < pSVar12._size) {
					if ((typeof(DataCompressors)._2).cctor_finished_or_no_cctor == 0) {
						pUVar17 = (CompressionAlgorithm)DataCompressors.Brotli;
						if ((typeof(MapTransfer)._2).cctor_finished_or_no_cctor == 0) goto label_059a81b7;
	label_059a8180: ;
						pSVar12 = MapTransfer._logicScriptCompressed;
					}
					else {
						pUVar17 = (CompressionAlgorithm)DataCompressors.Brotli;
						if ((typeof(MapTransfer)._2).cctor_finished_or_no_cctor != 0) goto label_059a8180;
	label_059a81b7: ;
						pSVar12 = MapTransfer._logicScriptCompressed;
					}
					if ((pSVar12 == null) ||(pSVar14 = pSVar12.ToArray(), pUVar17 == null)) goto label_059a82d9;
					pSVar10 = pUVar17.DecompressString(pSVar14, 0x1000, 0xa00000);
					pMVar9 = MapManager.MapScript;
					if (pMVar9 == null) goto label_059a82d9;
					pMVar9.Logic = pSVar10;
				}
				pSVar15 = Encoding.UTF8;
				if ((message.Length & 0xfffffffe) == 0) {
	label_059a82de: ;
					throw new IndexOutOfRangeException();
				}
				if (pSVar15 != null) {
					pMVar16 = (MethodInfo)pSVar15.GetString(message[1]);
					pMVar13 = typeof(MapTransfer).static_fields;
					pMVar13.MapHash = (String)pMVar16;
					MapManager.LoadMap(true);
					return;
				}
				goto label_059a82d9;
			}
			if (uVar3 == 0) {
				pMVar13 = typeof(MapTransfer).static_fields;
			}
			pMVar13._receivingLogic = true;
			if ((message.Length & 0xfffffffe) == 0) goto label_059a82de;
			pSVar12 = pMVar13._logicScriptCompressed;
		}
		if (pSVar12 != null) {
			pSVar12.AddRange((IEnumerable<T>)message[1]);
			return;
		}
	label_059a82d9: ;
		throw new NullReferenceException();
	}
}
