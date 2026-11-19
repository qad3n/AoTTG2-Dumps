// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapLoader
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Map/MapLoader.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapLoader.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using ApplicationManagers;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.AI;

namespace Map;

[Token(Token = "0x2000400")]
internal class MapLoader : MonoBehaviour
{
	[Token(Token = "0x2000401")]
	private readonly struct NavMeshBuild
	{
		[Token(Token = "0x40014AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly NavMeshData Data;

		[Token(Token = "0x40014AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly NavMeshBuildSettings Settings;

		[Token(Token = "0x40014AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public readonly Bounds Bounds;

		[Token(Token = "0x60019B3")]
		[Address(RVA = "0x589AEF0", Offset = "0x5899EF0", VA = "0x589AEF0")]
		public NavMeshBuild(NavMeshData data, NavMeshBuildSettings settings, Bounds bounds)
		{
			// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader.NavMeshBuild$$.ctor): 4 lines keep C-only constructs
			Bounds pUVar1;

			this.Data = data;
			this.Settings.m_BuildHeightMesh = settings.m_BuildHeightMesh;
			this.Settings.m_MaxJobWorkers = settings.m_MaxJobWorkers;
			this.Settings.m_PreserveTilesOutsideBounds = settings.m_PreserveTilesOutsideBounds ;
			this.Settings.m_Debug =(NavMeshBuildDebugSettings)settings.m_Debug.m_Flags;
			*(undefined3)&this.Settings.field_0x3d = settings._61_3_;
			this.Settings.m_OverrideVoxelSize = settings.m_OverrideVoxelSize;
			this.Settings.m_VoxelSize = settings.m_VoxelSize;
			this.Settings.m_OverrideTileSize = settings.m_OverrideTileSize;
			this.Settings.m_TileSize = settings.m_TileSize;
			this.Settings.m_AgentClimb = settings.m_AgentClimb;
			this.Settings.m_LedgeDropHeight = settings.m_LedgeDropHeight;
			this.Settings.m_MaxJumpAcrossDistance = settings.m_MaxJumpAcrossDistance;
			this.Settings.m_MinRegionArea = settings.m_MinRegionArea;
			this.Settings.m_AgentTypeID = settings.m_AgentTypeID;
			this.Settings.m_AgentRadius = settings.m_AgentRadius;
			this.Settings.m_AgentHeight = settings.m_AgentHeight;
			this.Settings.m_AgentSlope = settings.m_AgentSlope;
			pUVar1 = &this.Bounds;
			pUVar1.m_Center.x = bounds.m_Center.x;
			pUVar1.m_Center.y = bounds.m_Center.y;
			*(ulong)&this.Bounds.m_Center.z = bounds._8_8_;
			pUVar1 = &this.Bounds;
			pUVar1.m_Extents.y = bounds.m_Extents.y;
			pUVar1.m_Extents.z = bounds.m_Extents.z;
			return;
		}
	}

	[Token(Token = "0x2000403")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass50_0
	{
		[Token(Token = "0x40014B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public MapLoader _003C_003E4__this;

		[Token(Token = "0x40014B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public List<AsyncOperation> operations;

		[Token(Token = "0x60019B7")]
		[Address(RVA = "0x589B160", Offset = "0x589A160", VA = "0x589B160")]
		public _003C_003Ec__DisplayClass50_0()
		{
			// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader.<>c__DisplayClass50_0$$.ctor): clean
			base();
			return;
		}

		[Token(Token = "0x60019B8")]
		[Address(RVA = "0x589B170", Offset = "0x589A170", VA = "0x589B170")]
		internal void _003CLoadObjectsCoroutine_003Eb__1()
		{
			// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader.<>c__DisplayClass50_0$$<LoadObjectsCoroutine>b__1): 19 lines keep C-only constructs
			int piVar1;
			uint uVar2;
			MapLoader __this_00;
			List<Bounds> __this_01;
			List<AsyncOperation> __this_02;
			AsyncOperation[] pUVar3;
			Bounds bounds;
			uint agentID;
			bool bVar5;
			List<int> __this_03;
			AsyncOperation item;
			byte[] auStack_c8 = new byte[32];
			System_Collections_Generic_List_Enumerator_T__o SStack_a8;
			int iStack_90;
			int iStack_8c;
			List<T> pSStack_88;
			System_Collections_Generic_List_Enumerator_T__o pSStack_70;
			System_Collections_Generic_List_Enumerator_T__o SStack_58;
			ulong uStack_40;
			List<T> pSStack_38;

			if (Il2CppMethodInitialized_07545a65 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_AsyncOperation_Add) ;
				Il2CppMethodInitialized_07545a65 = true;
			}
			SStack_58._current = null;
			uStack_40._0_4_ = 0;
			uStack_40._4_4_ = 0;
			SStack_58._list = null;
			SStack_58._index = 0;
			SStack_58._version = 0;
			pSStack_38 = null;
			__this_00 = this.__4__this;
			if (__this_00 != null) {
				__this_00.ResetSources();
				__this_03 = Util.GetAllTitanAgentIds();
				if (__this_03 != null) {
					SStack_a8 = __this_03.GetEnumerator();
					auStack_c8._16_8_ = SStack_a8._current;
					auStack_c8._0_8_ = SStack_a8._list;
					auStack_c8._8_4_ = SStack_a8._index;
					auStack_c8._12_4_ = SStack_a8._version;
					do {
						bVar5 = auStack_c8.MoveNext();
						if (!bVar5) {
							auStack_c8.Dispose();
							return;
						}
						agentID = auStack_c8._16_4_;
						__this_01 = MapLoader._navMeshBounds;
						if (__this_01 == null) {
							throw new NullReferenceException();
						}
						SStack_a8 = __this_01.GetEnumerator();
						pSStack_38 = pSStack_88;
						SStack_58._current = SStack_a8._current;
						uStack_40._0_4_ = iStack_90;
						uStack_40._4_4_ = iStack_8c;
						SStack_58._list = SStack_a8._list;
						SStack_58._index = SStack_a8._index;
						SStack_58._version = SStack_a8._version;
						pSStack_70 = &SStack_58;
						while (bVar5 = SStack_58.MoveNext()) {
							__this_02 = this.operations;
							SStack_a8._current = (object)pSStack_38;
							SStack_a8._list = (List<T>)SStack_58._current;
							SStack_a8._index = (int32_t)uStack_40;
							SStack_a8._version = uStack_40._4_4_;
							bounds.m_Center.z = (float)SStack_a8._index;
							bounds.m_Extents.x = (float)SStack_a8._version;
							bounds.m_Center._0_8_ = SStack_a8._list;
							bounds.m_Extents._4_8_ = SStack_a8._current;
							item = MapLoader.CreateNavMeshSurface(agentID, bounds, 3);
							if (__this_02 == null) {
		label_0599b46f: ;
								throw new NullReferenceException();
							}
							piVar1 = &__this_02._version;
							*piVar1 = *piVar1 + 1;
							pUVar3 = __this_02._items;
							if (pUVar3 == null) goto label_0599b46f;
							uVar2 = __this_02._size;
							if (uVar2 < (uint)pUVar3.Length) {
								__this_02._size = uVar2 + 1;
								pUVar3[(int)uVar2] = item;
							}
							else {
								__this_02.AddWithResize((object)item);
							}
						}
						SStack_58.Dispose() ;
					} while(true);
				}
			}
			throw new NullReferenceException();
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000407")]
	[CompilerGenerated]
	private struct _003CGenerateNavMesh_003Ed__63 : IAsyncStateMachine
	{
		[Token(Token = "0x40014B6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40014B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40014B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MapLoader _003C_003E4__this;

		[Token(Token = "0x40014B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private List<AsyncOperation>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x40014BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private Awaitable.Awaiter _003C_003Eu__1;

		[Token(Token = "0x60019BF")]
		[Address(RVA = "0x589B6C0", Offset = "0x589A6C0", VA = "0x589B6C0", Slot = "4")]
		private void MoveNext()
		{
			// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader.<GenerateNavMesh>d__63$$MoveNext): 56 lines keep C-only constructs
			int piVar1;
			uint uVar2;
			uint uVar3;
			MapLoader __this_00;
			List<Bounds> __this_01;
			AsyncOperation[] pUVar4;
			Bounds bounds;
			Bounds bounds_00;
			Il2CppClass_1 pIVar5;
			Il2CppClass pIVar7;
			long lVar8;
			uint agentID;
			bool bVar9;
			List<int> __this_02;
			List<AsyncOperation> __this_03;
			AsyncOperation pUVar10;
			Awaitable __this_04;
			int iVar11;
			int local_fc;
			object local_f8;
			byte[] local_e8 = new byte[16];
			AsyncOperation local_d8;
			ulong uStack_d0;
			ulong local_c8;
			int local_b4;
			long local_b0;
			object local_a8;
			ulong uStack_a0;
			ulong local_98;
			byte[] local_88 = new byte[32];
			int piStack_68;
			AsyncOperation local_60;
			object local_58;
			object local_48;
			ulong uStack_40;
			ulong local_38;

			local_f8.klass = (Il2CppClass)this;
			if (Il2CppMethodInitialized_07545a69 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_AsyncOperation_Add) ;
				Il2CppMethodInitialized_07545a69 = true;
			}
			local_88._0_8_ = null;
			local_88._8_8_ = null;
			local_88._16_8_ = null;
			local_48 = null;
			uStack_40 = 0;
			local_58.klass = null;
			local_58.monitor = null;
			local_38 = 0;
			local_f8.monitor = null;
			local_fc = this.__1__state;
			if (local_fc != 0) {
				__this_00 = this.__4__this;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.ResetSources();
				__this_02 = Util.GetAllTitanAgentIds();
				__this_03 = new List<AsyncOperation>();
				if (__this_02 == null) {
					throw new NullReferenceException();
				}
				local_e8.GetEnumerator(__this_02);
				local_88._16_8_ = local_d8;
				local_88._0_8_ = local_e8._0_8_;
				local_88._8_8_ = local_e8._8_8_;
				local_88._24_8_ = null;
				piStack_68 = &local_fc;
				local_60 = (AsyncOperation)local_88;
				local_b0 = 0;
				do {
					bVar9 = local_88.MoveNext();
					if (!bVar9) {
						iVar11 = 7;
						break;
					}
					agentID = local_88._16_4_;
					__this_01 = MapLoader._navMeshBounds;
					if (__this_01 == null) {
						throw new NullReferenceException();
					}
					local_e8.GetEnumerator(__this_01);
					local_38 = local_c8;
					local_48 = (object)local_d8;
					uStack_40 = uStack_d0;
					local_58.klass = (Il2CppClass)local_e8._0_8_;
					local_58.monitor = (IntPtr)local_e8._8_8_;
					local_e8._0_8_ = null;
					local_e8._8_8_ = &local_fc;
					local_d8 = (AsyncOperation)&local_58;
					if (__this_03 == null) {
						bVar9 = local_58.MoveNext();
						if (bVar9) {
							local_98 = local_38;
							local_a8 = local_48;
							uStack_a0 = uStack_40;
							bounds_00.m_Center.z = (float)(undefined4)uStack_a0;
							bounds_00.m_Extents.x = (float)uStack_a0._4_4_;
							bounds_00.m_Center._0_8_ = local_a8;
							bounds_00.m_Extents.y = (float)(undefined4)local_98;
							bounds_00.m_Extents.z = (float)local_98._4_4_;
							MapLoader.CreateNavMeshSurface(agentID, bounds_00, 6);
		label_0599bb12: ;
							throw new NullReferenceException();
						}
					}
					else {
						while (bVar9 = local_58.MoveNext()) {
							local_98 = local_38;
							local_a8 = local_48;
							uStack_a0 = uStack_40;
							bounds.m_Center.z = (float)(undefined4)uStack_a0;
							bounds.m_Extents.x = (float)uStack_a0._4_4_;
							bounds.m_Center._0_8_ = local_a8;
							bounds.m_Extents.y = (float)(undefined4)local_98;
							bounds.m_Extents.z = (float)local_98._4_4_;
							pUVar10 = MapLoader.CreateNavMeshSurface(agentID, bounds, 6);
							piVar1 = &__this_03._version;
							*piVar1 = *piVar1 + 1;
							pUVar4 = __this_03._items;
							if (pUVar4 == null) goto label_0599bb12;
							uVar2 = __this_03._size;
							if (uVar2 < (uint)pUVar4.Length) {
								__this_03._size = uVar2 + 1;
								pUVar4[(int)uVar2] = pUVar10;
							}
							else {
								__this_03.AddWithResize((object)pUVar10);
							}
						}
					}
					iVar11 = 3;
					if (local_fc < 0) {
						local_b4 = 3;
						local_58.Dispose() ;
						iVar11 = local_b4;
					}
				} while ((iVar11 == 3) || (iVar11 == 0));
				lVar8 = local_b0;
				if (local_fc < 0) {
					local_88.Dispose();
				}
				if (lVar8 != 0) {
					throw;
				}
				if ((iVar11 != 7) && (iVar11 != 0)) {
					return;
				}
				if (__this_03 == null) {
					throw new NullReferenceException();
				}
				((local_88 + 0x18)).GetEnumerator((List<object>)__this_03);
				local_d8 = local_60;
				local_e8._0_8_ = local_88._24_8_;
				local_e8._8_8_ = piStack_68;
				*(AsyncOperation*)&((local_f8.klass)._1).this_arg.bits = local_60;
				(((System_Collections_Generic_List_Enumerator_AsyncOperation__o)&((local_f8.klass)._1).byval_arg.bits) .fields)._list = (List<T>)local_88._24_8_;
				((local_f8.klass)._1).this_arg.data = piStack_68;
				local_e8._0_8_ = null;
				local_e8._8_8_ = &local_fc;
				local_d8 = (AsyncOperation)&local_f8;
				if (local_fc != 0) goto label_0599bd9f;
			}
			local_d8 = (AsyncOperation)&local_f8;
			local_e8._8_8_ = &local_fc;
			local_e8._0_8_ = null;
			local_f8.monitor =(((Awaitable.Awaiter)&((local_f8.klass)._1).element_class).fields)._awaited;
			(((Awaitable.Awaiter)&((local_f8.klass)._1).element_class).fields)._awaited =null;
			local_fc = -1;
			*(int)&((local_f8.klass)._1).image = -1;
			do {
				if (local_f8.monitor == null) {
					throw new NullReferenceException();
				}
				local_f8.monitor.PropagateExceptionAndRelease();
		label_0599bd9f: ;
				bVar9 = (((local_f8.klass)._1).byval_arg.bits).MoveNext();
				if (!bVar9) {
					iVar11 = 0xd;
					goto label_0599be32;
				}
				pUVar10 = *(AsyncOperation*)&((local_f8.klass)._1).this_arg.bits;
				if (Il2CppMethodInitialized_07545bc3 == false) {
					Il2CppMethodInitialized_07545bc3 = true;
					uVar3 = (typeof(Awaitable)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar3 = (typeof(Awaitable)._2).cctor_finished_or_no_cctor;
				}
				if (uVar3 == 0) {
				}
				__this_04 = (Awaitable)il2cpp_runtime_helper_059bbd70(pUVar10, 0, 0);
				if (__this_04 == null) {
					throw new NullReferenceException();
				}
				local_f8.monitor = (IntPtr)__this_04.GetAwaiter();
				bVar9 = local_f8.monitor.IsCompleted;
			} while (bVar9);
			local_fc = 0;
			*(int)&((local_f8.klass)._1).image = 0;
			(((Awaitable.Awaiter)&((local_f8.klass)._1).element_class).fields)._awaited = local_f8.monitor;
			pIVar7 = local_f8.klass;
			((pIVar7._1).gc_desc).AwaitOnCompleted<Awaitable.Awaiter, MapLoader._GenerateNavMesh_d__63>(ref local_f8.monitor, (MapLoader.d__63<GenerateNavMesh>)local_f8.klass);
			iVar11 = 0xc;
		label_0599be32: ;
			if (local_fc < 0) {
				(((local_f8.klass)._1).byval_arg.bits).Dispose();
			}
			if ((iVar11 == 0xd) || (iVar11 == 0)) {
				(((System_Collections_Generic_List_Enumerator_AsyncOperation__o)&((local_f8.klass)._1).byval_arg.bits) .fields)._list = null;
				((local_f8.klass)._1).this_arg.data = null;
				*(AsyncOperation*)&((local_f8.klass)._1).this_arg.bits =null;
				*(int)&((local_f8.klass)._1).image = -2;
				pIVar5 = &(local_f8.klass)._1;
				(pIVar5.gc_desc).SetResult() ;
			}
			return;
		}

		[Token(Token = "0x60019C0")]
		[Address(RVA = "0x589BFC0", Offset = "0x589AFC0", VA = "0x589BFC0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
			// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader.<GenerateNavMesh>d__63$$SetStateMachine): clean
			(this.__t__builder).SetStateMachine(stateMachine);
			return;
		}
	}

	[Token(Token = "0x2000408")]
	[CompilerGenerated]
	private sealed class _003CLoadObjectsCoroutine_003Ed__50 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40014BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40014BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40014BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MapLoader _003C_003E4__this;

		[Token(Token = "0x40014BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public List<string> customAssets;

		[Token(Token = "0x40014BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool editor;

		[Token(Token = "0x40014C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public List<MapScriptBaseObject> objects;

		[Token(Token = "0x40014C1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private _003C_003Ec__DisplayClass50_0 _003C_003E8__1;

		[Token(Token = "0x40014C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool _003CgamemodeNeedsNav_003E5__2;

		[Token(Token = "0x40014C3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		private bool _003CrebuildNavMesh_003E5__3;

		[Token(Token = "0x40014C4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		private int _003Ccount_003E5__4;

		[Token(Token = "0x40014C5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private float _003Cmultiplier_003E5__5;

		[Token(Token = "0x40014C6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private List<string>.Enumerator _003C_003E7__wrap5;

		[Token(Token = "0x40014C7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private string _003CcustomAsset_003E5__7;

		[Token(Token = "0x40014C8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private string _003Cbundle_003E5__8;

		[Token(Token = "0x40014C9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private List<MapScriptBaseObject>.Enumerator _003C_003E7__wrap8;

		[Token(Token = "0x40014CA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		private bool _003CnavMeshStarted_003E5__10;

		[Token(Token = "0x170002AF")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60019C6")]
			[Address(RVA = "0x589DA50", Offset = "0x589CA50", VA = "0x589DA50", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader.<LoadObjectsCoroutine>d__50$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170002B0")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60019C8")]
			[Address(RVA = "0x589DAA0", Offset = "0x589CAA0", VA = "0x589DAA0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader.<LoadObjectsCoroutine>d__50$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60019C1")]
		[Address(RVA = "0x589C020", Offset = "0x589B020", VA = "0x589C020")]
		[DebuggerHidden]
		public _003CLoadObjectsCoroutine_003Ed__50(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader.<LoadObjectsCoroutine>d__50$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60019C2")]
		[Address(RVA = "0x589C040", Offset = "0x589B040", VA = "0x589C040", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader.<LoadObjectsCoroutine>d__50$$System.IDisposable.Dispose): clean
			switch(this.__1__state) {
			case -4:
			case 2:
				break;
			case -3:
			case 1:
				this.__1__state = -1;
				(this.__7__wrap5).Dispose();
				return;
			default: ;
				return;
			}
			this.__1__state = -1;
			(this.__7__wrap8).Dispose();
			return;
		}

		[Token(Token = "0x60019C3")]
		[Address(RVA = "0x589C0E0", Offset = "0x589B0E0", VA = "0x589C0E0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader.<LoadObjectsCoroutine>d__50$$MoveNext): 10 lines keep C-only constructs
			int __this_00;
			byte uVar1;
			uint uVar2;
			MapLoader pMVar3;
			InGameGeneralSettings pSVar4;
			StringSetting pSVar5;
			List<string> pSVar6;
			LoadingMenu pUVar7;
			MapScriptBaseObject scriptObject;
			Dictionary<int, object> __this_01;
			InGameSet pSVar8;
			InGameTitanSettings pSVar9;
			BoolSetting pSVar10;
			List<MapScriptBaseObject> pSVar11;
			MapLoader.d__50<LoadObjectsCoroutine> pMVar12;
			bool bVar13;
			MapLoader.c__DisplayClass50_0 pMVar14;
			AsyncOperation pUVar15;
			CustomAssetEntry __this_02;
			String url;
			IEnumerator routine;
			Coroutine pUVar16;
			object pIVar17;
			Map_MapLoader_StaticFields pMVar18;
			String pSVar19;
			List<AsyncOperation> pSVar20;
			Action pSVar21;
			Map_MapLoader___c_StaticFields pMVar22;
			byte bVar23;
			int iVar24;
			MethodInfo pMVar25;
			bool bVar26;
			float fVar27;
			MapLoader.d__50<LoadObjectsCoroutine> pMStack_80;
			float fStack_74;
			System_Collections_Generic_List_Enumerator_T__o SStack_70;
			MapLoader.d__50<LoadObjectsCoroutine>* ppMStack_50;

			pMStack_80 = this;
			ppMStack_50 = &pMStack_80;
			uVar2 = this.__1__state;
			if (3 < uVar2) {
				return false;
			}
			pMVar3 = this.__4__this;
			switch(uVar2) {
			case 0:
				this.__1__state = -1;
				pMVar14 = new MapLoader.c__DisplayClass50_0();
				pMStack_80.__8__1 = pMVar14;
				pMVar14 = pMStack_80.__8__1;
				if (pMVar14 == null) {
					throw new NullReferenceException();
				}
				pMVar14.__4__this = pMStack_80.__4__this;
				pSVar6 = pMStack_80.customAssets;
				if (pSVar6 == null) {
					throw new NullReferenceException();
				}
				SStack_70 = pSVar6.GetEnumerator();
				pMStack_80.__7__wrap5._current = (String)SStack_70._current;
				pMStack_80.__7__wrap5._list = SStack_70._list;
				pMStack_80.__7__wrap5._index = SStack_70._index;
				pMStack_80.__7__wrap5._version = SStack_70._version;
				pMStack_80.__1__state = -3;
				break;
			case 1:
				this.__1__state = -3;
				pSVar19 = this._bundle_5__8;
				bVar13 = AssetBundleManager.LoadedBundle(pSVar19);
				if (!bVar13) {
					pSVar19 = String.Concat("Failed to load bundle: ", pMStack_80._customAsset_5__7);
					MapLoader.ReportError(pSVar19);
				}
				pMStack_80._bundle_5__8 = null;
				pMStack_80._customAsset_5__7 = null;
				break;
			case 2:
				this.__1__state = -4;
				iVar24 = this._count_5__4;
				goto label_0599cf4b;
			case 3:
				this.__1__state = -1;
				pMVar14 = this.__8__1;
				goto joined_r0x0599c459;
			}
			while(true) {
				bVar13 = (pMStack_80.__7__wrap5).MoveNext();
				pMVar12 = pMStack_80;
				if (!bVar13) break;
				pMVar25 = (MethodInfo)pMStack_80.__7__wrap5._current;
				pMStack_80._customAsset_5__7 = (String)pMVar25;
				pSVar19 = pMStack_80._customAsset_5__7;
				__this_02 = CustomAssetEntry.Parse(pSVar19);
				if (__this_02 == null) {
					throw new NullReferenceException();
				}
				pMStack_80._bundle_5__8 = __this_02.Bundle;
				pMVar25 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
				bVar13 = (pMStack_80._bundle_5__8 == (String)pMVar25);
				if (!bVar13) {
					pMVar3 = MapLoader._instance;
					pSVar19 = pMStack_80._bundle_5__8;
					url = __this_02.GetUrl();
					bVar13 = pMStack_80.editor;
					routine = AssetBundleManager.LoadBundle(pSVar19, url, bVar13);
					if (pMVar3 == null) {
						throw new NullReferenceException();
					}
					pUVar16 = pMVar3.StartCoroutine(routine);
					pMStack_80.__2__current = (object)pUVar16;
					pMStack_80.__1__state = 1;
					return true;
				}
			}
			pMVar12.__1__state = -1;
			(pMVar12.__7__wrap5).Dispose();
			pMStack_80.__7__wrap5._list = null;
			pMStack_80.__7__wrap5._index = 0;
			pMStack_80.__7__wrap5._version = 0;
			pMStack_80.__7__wrap5._current = null;
			pSVar8 = SettingsManager.InGameCurrent;
			if (pSVar8 == null) {
				throw new NullReferenceException();
			}
			pSVar4 = pSVar8.General;
			if (pSVar4 == null) {
				throw new NullReferenceException();
			}
			pSVar5 = pSVar4.GameMode;
			if (pSVar5 == null) {
				throw new NullReferenceException();
			}
			bVar13 = (pSVar5._value != "Racing");
			pMVar12 = pMStack_80;
			bVar26 = false;
			if (bVar13) {
				pSVar8 = SettingsManager.InGameCurrent;
				if (pSVar8 == null) {
					throw new NullReferenceException();
				}
				pSVar4 = pSVar8.General;
				if (pSVar4 == null) {
					throw new NullReferenceException();
				}
				pSVar5 = pSVar4.GameMode;
				if (pSVar5 == null) {
					throw new NullReferenceException();
				}
				bVar13 = (pSVar5._value != "Thunderspear PVP");
				bVar26 = false;
				if (bVar13) {
					pSVar8 = SettingsManager.InGameCurrent;
					if (pSVar8 == null) {
						throw new NullReferenceException();
					}
					pSVar4 = pSVar8.General;
					if (pSVar4 == null) {
						throw new NullReferenceException();
					}
					pSVar5 = pSVar4.GameMode;
					if (pSVar5 == null) {
						throw new NullReferenceException();
					}
					bVar13 = (pSVar5._value != "Blade PVP");
					bVar26 = false;
					if (bVar13) {
						pSVar8 = SettingsManager.InGameCurrent;
						if (pSVar8 == null) {
							throw new NullReferenceException();
						}
						pSVar4 = pSVar8.General;
						if (pSVar4 == null) {
							throw new NullReferenceException();
						}
						pSVar5 = pSVar4.GameMode;
						if (pSVar5 == null) {
							throw new NullReferenceException();
						}
						bVar13 = (pSVar5._value != "APG PVP") ;
						bVar26 = false;
						if (bVar13) {
							pSVar8 = SettingsManager.InGameCurrent;
							if (pSVar8 == null) {
								throw new NullReferenceException();
							}
							pSVar4 = pSVar8.General;
							if (pSVar4 == null) {
								throw new NullReferenceException();
							}
							pSVar5 = pSVar4.GameMode;
							if (pSVar5 == null) {
								throw new NullReferenceException();
							}
							bVar13 = (pSVar5._value != "AHSS PVP");
							bVar26 = false;
							if (bVar13) {
								pSVar8 = SettingsManager.InGameCurrent;
								if (pSVar8 == null) {
									throw new NullReferenceException();
								}
								pSVar4 = pSVar8.General;
								if (pSVar4 == null) {
									throw new NullReferenceException();
								}
								pSVar5 = pSVar4.GameMode;
								if (pSVar5 == null) {
									throw new NullReferenceException();
								}
								bVar13 = (pSVar5._value != "None");
								if (bVar13) {
									pSVar6 = pMStack_80.customAssets;
									if (pSVar6 == null) {
										throw new NullReferenceException();
									}
									bVar26 = true;
									if (pSVar6._size == 0) {
										pSVar11 = pMStack_80.objects;
										if (pSVar11 == null) {
											throw new NullReferenceException();
										}
										bVar26 = pSVar11._size != 0;
									}
								}
								else {
									bVar26 = false;
								}
							}
						}
					}
				}
			}
			if (pMVar12 != null) {
				pMVar12._gamemodeNeedsNav_5__2 = bVar26;
				pMVar12 = pMStack_80;
				bVar13 = true;
				if (MapManager.NeedsNavMeshUpdate == false) {
					pMVar18 = typeof(MapLoader).static_fields;
					if (pMVar18._hasNavMeshData != false) {
						if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
							pMVar18 = typeof(MapLoader).static_fields;
						}
						bVar13 = pMVar18._navMeshModified;
					}
				}
				if (pMVar12 != null) {
					pMVar12._rebuildNavMesh_5__3 = bVar13;
					if (pMStack_80._rebuildNavMesh_5__3 == false) {
						bVar23 = 0;
					}
					else {
						bVar23 = 0;
						bVar13 = PhotonNetwork.IsMasterClient;
						if (bVar13) {
							pSVar8 = SettingsManager.InGameCurrent;
							if (pSVar8 == null) {
								throw new NullReferenceException();
							}
							pSVar9 = pSVar8.Titan;
							if (pSVar9 == null) {
								throw new NullReferenceException();
							}
							pSVar10 = pSVar9.TitanSmartMovement;
							if (pSVar10 == null) {
								throw new NullReferenceException();
							}
							bVar23 = pSVar10._value;
						}
					}
					pMStack_80._count_5__4 = 0;
					pMStack_80._multiplier_5__5 = *(float)(&g_data_0100aaf8 + (ulong)((bVar23 & pMStack_80._gamemodeNeedsNav_5__2) == 0) * 4 );
					pSVar11 = pMStack_80.objects;
					if (pSVar11 == null) {
						throw new NullReferenceException();
					}
					SStack_70 = pSVar11.GetEnumerator();
					pMStack_80.__7__wrap8._current = (MapScriptBaseObject)SStack_70._current ;
					pMStack_80.__7__wrap8._list = SStack_70._list;
					pMStack_80.__7__wrap8._index = SStack_70._index;
					pMStack_80.__7__wrap8._version = SStack_70._version;
					pMStack_80.__1__state = -4;
					this = pMStack_80;
					while(true) {
						bVar13 = (this.__7__wrap8).MoveNext();
						pMVar12 = pMStack_80;
						if (!bVar13) break;
						scriptObject = pMStack_80.__7__wrap8._current;
						if (scriptObject == null) {
							throw new NullReferenceException();
						}
						__this_01 = (Dictionary<int, object>)MapLoader.IdToMapObject;
						if (__this_01 == null) {
							throw new NullReferenceException();
						}
						__this_00 = &scriptObject.Id;
						bVar13 = __this_01.ContainsKey(*__this_00);
						if (bVar13) {
							pSVar19 = __this_00.ToString();
							pSVar19 = String.Concat("Failed to load map object ", pSVar19, ": duplicate ID");
							MapLoader.ReportError(pSVar19);
						}
						else {
							bVar13 = pMStack_80.editor;
							MapLoader.LoadObject(scriptObject, bVar13);
						}
						iVar24 = pMStack_80._count_5__4;
						this = pMStack_80;
						if (((iVar24 * -0x3d70a3d7 + 0x51eb850U >> 2 | iVar24 * 0x40000000) < 0x28f5c29) &&(SceneLoader.SceneName == 2)) {
							if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
								iVar24 = pMStack_80._count_5__4;
							}
							pSVar11 = pMStack_80.objects;
							if (pSVar11 == null) {
								throw new NullReferenceException();
							}
							pUVar7 = UIManager.LoadingMenu;
							if (pUVar7 == null) {
								throw new NullReferenceException();
							}
							pUVar7.UpdateLoading(((float)iVar24 / (float)pSVar11._size) *pMStack_80._multiplier_5__5 + 0.5, false, false);
							pIVar17 = new WaitForEndOfFrame();
							pMStack_80.__2__current = pIVar17;
							pMStack_80.__1__state = 2;
							return true;
						}
		label_0599cf4b: ;
						this._count_5__4 = iVar24 + 1;
					}
					pMVar12.__1__state = -1;
					(pMVar12.__7__wrap8).Dispose();
					pMStack_80.__7__wrap8._list = null;
					pMStack_80.__7__wrap8._index = 0;
					pMStack_80.__7__wrap8._version = 0;
					pMStack_80.__7__wrap8._current = null;
					if (pMStack_80.editor == false) {
						pSVar19 = "parent map objects";
						pMVar22 = typeof(MapLoader.c).static_fields;
						pSVar21 = pMVar22.__9__50_0;
						if (pSVar21 == null) {
							if ((typeof(MapLoader.c)._2).cctor_finished_or_no_cctor == 0) {
								pMVar22 = typeof(MapLoader.c).static_fields;
							}
							pIVar17 = (object)pMVar22.__9;
							pSVar21 = new Action(pIVar17, (intptr_t)MethodInfo_Map_MapLoader_c_LoadObjectsCoroutine_b__50_0);
							pMVar22 = typeof(MapLoader.c).static_fields;
							pMVar22.__9__50_0 = pSVar21;
						}
						MapLoader.RunLoadStep(pSVar19, pSVar21);
						pSVar21 = new Action((object)pMVar3, (intptr_t)MethodInfo_Map_MapLoader_Batch);
						MapLoader.RunLoadStep("batch map objects", pSVar21);
						pSVar21 = new Action(null, (intptr_t)MethodInfo_Map_MapDestruction_Build);
						MapLoader.RunLoadStep("build map destruction", pSVar21);
						uVar1 = pMStack_80._rebuildNavMesh_5__3;
					}
					else {
						uVar1 = pMStack_80._rebuildNavMesh_5__3;
					}
					if ((bool)uVar1 == false) {
						if (*(uint)((long)typeof(MapLoader) + 0xe4) == 0) {
						}
						bVar13 = MapLoader.HasNavMesh;
						if (bVar13) {
							bVar13 = MapDestruction.IsActive;
							if (bVar13) {
								pSVar21 = new Action(null, (intptr_t)MethodInfo_Map_MapLoader_CollectNavMeshSources);
								MapLoader.RunLoadStep("collect navmesh sources", pSVar21);
							}
						}
					}
					else {
						NavMesh.RemoveAllNavMeshData();
						pMVar18 = typeof(MapLoader).static_fields;
						pMVar18._hasNavMeshData = false;
						pMVar18._navMeshModified = false;
						bVar23 = 0;
						bVar13 = PhotonNetwork.IsMasterClient;
						if (bVar13) {
							pSVar8 = SettingsManager.InGameCurrent;
							if (pSVar8 == null) {
								throw new NullReferenceException();
							}
							pSVar9 = pSVar8.Titan;
							if (pSVar9 == null) {
								throw new NullReferenceException();
							}
							pSVar10 = pSVar9.TitanSmartMovement;
							if (pSVar10 == null) {
								throw new NullReferenceException();
							}
							bVar23 = pSVar10._value;
						}
						if ((bVar23 & pMStack_80._gamemodeNeedsNav_5__2) != 0) {
							pMVar14 = pMStack_80.__8__1;
							pSVar20 = new List<AsyncOperation>();
							if (pMVar14 == null) {
								throw new NullReferenceException();
							}
							pMVar14.operations = pSVar20;
							pMVar14 = pMStack_80.__8__1;
							pSVar21 = new Action((object)pMVar14, (intptr_t)MethodInfo_Map_MapLoader_c__DisplayClass50_0_LoadObjectsCoroutine_b__1);
							bVar13 = MapLoader.RunLoadStep("build navmesh", pSVar21);
							pMStack_80._navMeshStarted_5__10 = bVar13;
							pMVar14 = pMStack_80.__8__1;
							this = pMStack_80;
		joined_r0x0599c459: ;
							if (pMVar14 == null) {
								throw new NullReferenceException();
							}
							pSVar20 = pMVar14.operations;
							if (pSVar20 == null) {
								throw new NullReferenceException();
							}
							if (0 < pSVar20._size) {
								iVar24 = 0;
								fStack_74 = 1.0;
								do {
									pSVar20 = pMVar14.operations;
									if (pSVar20 == null) {
										throw new NullReferenceException();
									}
									if (pSVar20._size <= iVar24) {
										pUVar7 = UIManager.LoadingMenu;
										if (pUVar7 == null) {
											throw new NullReferenceException();
										}
										pUVar7.UpdateLoading(fStack_74 * 0.25 + 0.75, false, false);
										pIVar17 = new WaitForEndOfFrame();
										pMStack_80.__2__current = pIVar17;
										pMStack_80.__1__state = 3;
										return true;
									}
									pUVar15 = pSVar20.get_Item(iVar24);
									if (pUVar15 == null) {
										throw new NullReferenceException();
									}
									bVar13 = pUVar15.isDone;
									pMVar14 = pMStack_80.__8__1;
									if (bVar13) {
										if (pMVar14 == null) {
											throw new NullReferenceException();
										}
										pSVar20 = pMVar14.operations;
										if (pSVar20 == null) {
											throw new NullReferenceException();
										}
										pSVar20.RemoveAt(iVar24);
										iVar24 = iVar24 + -1;
									}
									else {
										if (pMVar14 == null) {
											throw new NullReferenceException();
										}
										pSVar20 = pMVar14.operations;
										if (pSVar20 == null) {
											throw new NullReferenceException();
										}
										pUVar15 = pSVar20.get_Item(iVar24);
										if (pUVar15 == null) {
											throw new NullReferenceException();
										}
										fVar27 = pUVar15.progress;
										if (fVar27 <= fStack_74) {
											fStack_74 = fVar27;
										}
									}
									iVar24 = iVar24 + 1;
									pMVar14 = pMStack_80.__8__1;
									if (pMVar14 == null) {
										throw new NullReferenceException();
									}
								} while(true);
							}
							bVar13 = this._navMeshStarted_5__10;
							if (((typeof(MapLoader))._2).cctor_finished_or_no_cctor == 0) {
							}
							MapLoader._hasNavMeshData = bVar13;
						}
					}
					MapManager.MapLoaded = true;
					return false;
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x60019C4")]
		[Address(RVA = "0x589D9D0", Offset = "0x589C9D0", VA = "0x589D9D0")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader.<LoadObjectsCoroutine>d__50$$<>m__Finally1): clean
			this.__1__state = -1;
			(this.__7__wrap5).Dispose();
			return;
		}

		[Token(Token = "0x60019C5")]
		[Address(RVA = "0x589DA10", Offset = "0x589CA10", VA = "0x589DA10")]
		private void _003C_003Em__Finally2()
		{
			// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader.<LoadObjectsCoroutine>d__50$$<>m__Finally2): clean
			this.__1__state = -1;
			(this.__7__wrap8).Dispose();
			return;
		}

		[Token(Token = "0x60019C7")]
		[Address(RVA = "0x589DA60", Offset = "0x589CA60", VA = "0x589DA60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader.<LoadObjectsCoroutine>d__50$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Map_MapLoader_LoadObjectsCoroutine_d__50_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000409")]
	[CompilerGenerated]
	private sealed class _003CRefreshNavMesh_003Ed__58 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40014CB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40014CC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40014CD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private WaitForSecondsRealtime _003Cdelay_003E5__2;

		[Token(Token = "0x40014CE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private List<AsyncOperation> _003Coperations_003E5__3;

		[Token(Token = "0x40014CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private List<AsyncOperation>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x170002B1")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60019CD")]
			[Address(RVA = "0x589E360", Offset = "0x589D360", VA = "0x589E360", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader.<RefreshNavMesh>d__58$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170002B2")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60019CF")]
			[Address(RVA = "0x589E3B0", Offset = "0x589D3B0", VA = "0x589E3B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader.<RefreshNavMesh>d__58$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60019C9")]
		[Address(RVA = "0x589DAB0", Offset = "0x589CAB0", VA = "0x589DAB0")]
		[DebuggerHidden]
		public _003CRefreshNavMesh_003Ed__58(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader.<RefreshNavMesh>d__58$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60019CA")]
		[Address(RVA = "0x589DAD0", Offset = "0x589CAD0", VA = "0x589DAD0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader.<RefreshNavMesh>d__58$$System.IDisposable.Dispose): clean
			int iVar1;

			iVar1 = this.__1__state;
			if ((iVar1 != 2) && (iVar1 != -3)) {
				return;
			}
			this.__1__state = -1;
			(this.__7__wrap3).Dispose();
			return;
		}

		[Token(Token = "0x60019CB")]
		[Address(RVA = "0x589DB20", Offset = "0x589CB20", VA = "0x589DB20", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader.<RefreshNavMesh>d__58$$MoveNext): 59 lines keep C-only constructs
			int piVar1;
			sbyte cVar2;
			int iVar3;
			uint uVar4;
			AsyncOperation[] pUVar5;
			NavMeshBuildSettings buildSettings;
			Bounds localBounds;
			MapLoader.d__58<RefreshNavMesh> pMVar7;
			object data;
			bool bVar8;
			WaitForSecondsRealtime __this_00;
			List<AsyncOperation> pSVar9;
			Map_MapLoader_StaticFields pMVar10;
			AsyncOperation item;
			int iVar11;
			MapLoader.d__58<RefreshNavMesh> pMStack_1e8;
			long lStack_1e0;
			System_Collections_Generic_List_Enumerator_T__o pSStack_1d0;
			MapLoader.d__58<RefreshNavMesh>* ppMStack_1c0;
			List<T> pSStack_1b8;
			ulong uStack_1b0;
			AsyncOperation pUStack_1a8;
			List<T> pSStack_1a0;
			ulong uStack_198;
			AsyncOperation pUStack_190;
			List<T> pSStack_188;
			ulong uStack_180;
			AsyncOperation pUStack_178;
			List<T> pSStack_170;
			ulong uStack_168;
			System_Collections_Generic_List_Enumerator_T__o SStack_158;
			List<T> pSStack_140;
			int iStack_138;
			int iStack_134;
			AsyncOperation pUStack_130;
			List<T> pSStack_128;
			System_Collections_Generic_List_Enumerator_T__o SStack_118;
			List<T> pSStack_100;
			int iStack_f8;
			int iStack_f4;
			AsyncOperation pUStack_f0;
			List<T> pSStack_e8;
			int iStack_e0;
			int iStack_dc;
			AsyncOperation pUStack_d8;
			List<T> pSStack_d0;
			int iStack_c8;
			int iStack_c4;
			AsyncOperation pUStack_c0;
			List<T> pSStack_b8;
			int iStack_b0;
			int iStack_ac;
			System_Collections_Generic_List_Enumerator_T__o SStack_a8;
			List<T> pSStack_90;
			ulong uStack_88;
			AsyncOperation pUStack_80;
			List<T> pSStack_78;
			ulong uStack_70;
			AsyncOperation pUStack_68;
			List<T> pSStack_60;
			ulong uStack_58;
			AsyncOperation pUStack_50;
			List<T> pSStack_48;
			ulong uStack_40;

			pMStack_1e8 = this;
			if (Il2CppMethodInitialized_07545a6e == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_AsyncOperation_Add) ;
				Il2CppMethodInitialized_07545a6e = true;
			}
			pSStack_48 = null;
			uStack_40._0_4_ = 0;
			uStack_40._4_4_ = 0;
			uStack_58._0_4_ = 0;
			uStack_58._4_4_ = 0;
			pUStack_50 = null;
			pUStack_68 = null;
			pSStack_60 = null;
			pSStack_78 = null;
			uStack_70._0_4_ = 0;
			uStack_70._4_4_ = 0;
			uStack_88._0_4_ = 0;
			uStack_88._4_4_ = 0;
			pUStack_80 = null;
			SStack_a8._current = null;
			pSStack_90 = null;
			SStack_a8._list = null;
			SStack_a8._index = 0;
			SStack_a8._version = 0;
			pUStack_178 = null;
			pSStack_170 = null;
			pSStack_188 = null;
			uStack_180._0_4_ = 0;
			uStack_180._4_4_ = 0;
			uStack_198._0_4_ = 0;
			uStack_198._4_4_ = 0;
			pUStack_190 = null;
			pUStack_1a8 = null;
			pSStack_1a0 = null;
			pSStack_1b8 = null;
			uStack_1b0._0_4_ = 0;
			uStack_1b0._4_4_ = 0;
			uStack_168._0_4_ = 0;
			uStack_168._4_4_ = 0;
			ppMStack_1c0 = &pMStack_1e8;
			iVar3 = this.__1__state;
			if (iVar3 == 2) {
		label_0599e125: ;
				this.__1__state = -3;
				bVar8 = (this.__7__wrap3).MoveNext();
				pMVar7 = pMStack_1e8;
				if (bVar8) {
					pMStack_1e8.__2__current = (object)pMStack_1e8.__7__wrap3._current;
					iVar11 = 2;
					goto label_0599e164;
				}
				pMVar7.__1__state = -1;
				(pMVar7.__7__wrap3).Dispose();
				pMStack_1e8.__7__wrap3._list = null;
				pMStack_1e8.__7__wrap3._index = 0;
				pMStack_1e8.__7__wrap3._version = 0;
				pMStack_1e8.__7__wrap3._current = null;
				if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) goto label_0599e1d7;
		label_0599dd1e: ;
				pMVar10 = typeof(MapLoader).static_fields;
				cVar2 = pMVar10._navMeshRefreshPending;
			}
			else {
				if (iVar3 == 1) {
					this.__1__state = -1;
					if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
						this = pMStack_1e8;
					}
					pMVar10 = typeof(MapLoader).static_fields;
					pMVar10._navMeshRefreshPending = false;
					pSVar9 = this._operations_5__3;
					if (pSVar9 == null) {
						throw new NullReferenceException();
					}
					piVar1 = &pSVar9._version;
					*piVar1 = *piVar1 + 1;
					iVar11 = pSVar9._size;
					pSVar9._size = 0;
					if (0 < iVar11) {
						Array.Clear((Array)pSVar9._items, 0, iVar11);
						pMVar10 = typeof(MapLoader).static_fields;
					}
					if (pMVar10._navMeshBuilds == null) {
						throw new NullReferenceException();
					}
					SStack_118 = (pMVar10._navMeshBuilds).GetEnumerator();
					pSStack_48 = pSStack_b8;
					uStack_40._0_4_ = iStack_b0;
					uStack_40._4_4_ = iStack_ac;
					uStack_58._0_4_ = iStack_c8;
					uStack_58._4_4_ = iStack_c4;
					pUStack_50 = pUStack_c0;
					pUStack_68 = pUStack_d8;
					pSStack_60 = pSStack_d0;
					pSStack_78 = pSStack_e8;
					uStack_70._0_4_ = iStack_e0;
					uStack_70._4_4_ = iStack_dc;
					uStack_88._0_4_ = iStack_f8;
					uStack_88._4_4_ = iStack_f4;
					pUStack_80 = pUStack_f0;
					SStack_a8._current = SStack_118._current;
					pSStack_90 = pSStack_100;
					SStack_a8._list = SStack_118._list;
					SStack_a8._index = SStack_118._index;
					SStack_a8._version = SStack_118._version;
					lStack_1e0 = 0;
					pSStack_1d0 = &SStack_a8;
					while (true) {
						bVar8 = SStack_a8.MoveNext();
						data = SStack_a8._current;
						if (!(bVar8)) break;
						pSStack_1b8 = pSStack_90;
						uStack_1b0._0_4_ = (int32_t)uStack_88;
						uStack_1b0._4_4_ = uStack_88._4_4_;
						pUStack_1a8 = pUStack_80;
						pSStack_1a0 = pSStack_78;
						uStack_198._0_4_ = (int32_t)uStack_70;
						uStack_198._4_4_ = uStack_70._4_4_;
						pUStack_190 = pUStack_68;
						pSStack_188 = pSStack_60;
						uStack_180._0_4_ = (int32_t)uStack_58;
						uStack_180._4_4_ = uStack_58._4_4_;
						pUStack_178 = pUStack_50;
						pSStack_170 = pSStack_48;
						uStack_168._0_4_ = (int32_t)uStack_40;
						uStack_168._4_4_ = uStack_40._4_4_;
						pSVar9 = pMStack_1e8._operations_5__3;
						pSStack_128 = pSStack_60;
						iStack_138 = (int32_t)uStack_70;
						iStack_134 = uStack_70._4_4_;
						pUStack_130 = pUStack_68;
						SStack_158._current = (object)pUStack_80;
						pSStack_140 = pSStack_78;
						SStack_158._list = pSStack_90;
						SStack_158._index = (int32_t)uStack_88;
						SStack_158._version = uStack_88._4_4_;
						iStack_c8 = (int32_t)uStack_168;
						iStack_c4 = uStack_168._4_4_;
						pUStack_d8 = pUStack_178;
						pSStack_d0 = pSStack_170;
						pSStack_e8 = pSStack_188;
						iStack_e0 = (int32_t)uStack_180;
						iStack_dc = uStack_180._4_4_;
						iStack_f8 = (int32_t)uStack_198;
						iStack_f4 = uStack_198._4_4_;
						pUStack_f0 = pUStack_190;
						SStack_118._current = (object)pUStack_1a8;
						pSStack_100 = pSStack_1a0;
						SStack_118._list = pSStack_1b8;
						SStack_118._index = (int32_t)uStack_1b0;
						SStack_118._version = uStack_1b0._4_4_;
						buildSettings.m_AgentHeight = (float)SStack_158._index;
						buildSettings.m_AgentSlope = (float)SStack_158._version;
						buildSettings._0_8_ = SStack_158._list;
						buildSettings._16_8_ = SStack_158._current;
						buildSettings._24_8_ = pSStack_140;
						buildSettings.m_OverrideVoxelSize = iStack_138;
						buildSettings.m_VoxelSize = (float)iStack_134;
						buildSettings._40_8_ = pUStack_130;
						buildSettings._48_8_ = pSStack_128;
						buildSettings._56_8_ = _iStack_120;
						localBounds._8_8_ = pSStack_170;
						localBounds.m_Center._0_8_ = pUStack_178;
						localBounds.m_Extents.y = (float)(int32_t)uStack_168;
						localBounds.m_Extents.z = (float)uStack_168._4_4_;
						item = NavMeshBuilder.UpdateNavMeshDataAsync((NavMeshData)data, buildSettings, MapLoader._navMeshSources, localBounds);
						if (pSVar9 == null) {
		label_0599e22d: ;
							throw new NullReferenceException();
						}
						piVar1 = &pSVar9._version;
						*piVar1 = *piVar1 + 1;
						pUVar5 = pSVar9._items;
						if (pUVar5 == null) goto label_0599e22d;
						uVar4 = pSVar9._size;
						if (uVar4 < (uint)pUVar5.Length) {
							pSVar9._size = uVar4 + 1;
							pUVar5[(int)uVar4] = item;
						}
						else {
							pSVar9.AddWithResize((object)item);
						}
					}
					SStack_a8.Dispose();
					if (lStack_1e0 != 0) {
						throw;
					}
					pSVar9 = pMStack_1e8._operations_5__3;
					if (pSVar9 == null) {
						throw new NullReferenceException();
					}
					SStack_158 = pSVar9.GetEnumerator();
					SStack_118._current = SStack_158._current;
					SStack_118._list = SStack_158._list;
					SStack_118._index = SStack_158._index;
					SStack_118._version = SStack_158._version;
					pMStack_1e8.__7__wrap3._current =(AsyncOperation)SStack_158._current;
					pMStack_1e8.__7__wrap3._list = SStack_158._list;
					pMStack_1e8.__7__wrap3._index = SStack_158._index;
					pMStack_1e8.__7__wrap3._version = SStack_158._version;
					this = pMStack_1e8;
					goto label_0599e125;
				}
				if (iVar3 != 0) {
					return false;
				}
				this.__1__state = -1;
				__this_00 = new WaitForSecondsRealtime(1.0);
				pMStack_1e8._delay_5__2 = __this_00;
				pSVar9 = il2cpp_codegen_object_new(typeof(List<AsyncOperation>)) ;
				pSVar9 = new List<object>();
				pMStack_1e8._operations_5__3 = pSVar9;
				if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor != 0) goto label_0599dd1e;
		label_0599e1d7: ;
				pMVar10 = typeof(MapLoader).static_fields;
				cVar2 = pMVar10._navMeshRefreshPending;
			}
			if (cVar2 == false) {
				if (((typeof(MapLoader))._2).cctor_finished_or_no_cctor == 0) {
					pMVar10 = typeof(MapLoader).static_fields;
				}
				pMVar10._navMeshRefresh = null;
				return false;
			}
			pMStack_1e8.__2__current = (object)pMStack_1e8._delay_5__2;
			iVar11 = 1;
		label_0599e164: ;
			pMStack_1e8.__1__state = iVar11;
			return true;
		}

		[Token(Token = "0x60019CC")]
		[Address(RVA = "0x589E320", Offset = "0x589D320", VA = "0x589E320")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader.<RefreshNavMesh>d__58$$<>m__Finally1): clean
			this.__1__state = -1;
			(this.__7__wrap3).Dispose();
			return;
		}

		[Token(Token = "0x60019CE")]
		[Address(RVA = "0x589E370", Offset = "0x589D370", VA = "0x589E370", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader.<RefreshNavMesh>d__58$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Map_MapLoader_RefreshNavMesh_d__58_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200040A")]
	[CompilerGenerated]
	private struct _003CUpdateAllNavMeshes_003Ed__62 : IAsyncStateMachine
	{
		[Token(Token = "0x40014D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40014D1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40014D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MapLoader _003C_003E4__this;

		[Token(Token = "0x40014D3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private TaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60019D0")]
		[Address(RVA = "0x589E3C0", Offset = "0x589D3C0", VA = "0x589E3C0", Slot = "4")]
		private void MoveNext()
		{
			// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader.<UpdateAllNavMeshes>d__62$$MoveNext): clean
			MapLoader __this_00;
			bool bVar1;
			Task __this_01;
			TaskAwaiter local_20;

			local_20.m_task =(TaskAwaiter)null;
			if (this.__1__state == 0) {
				local_20.m_task =(TaskAwaiter)this.__u__1.m_task;
				this.__u__1.m_task = null;
				this.__1__state = -1;
			}
			else {
				__this_00 = this.__4__this;
				NavMesh.RemoveAllNavMeshData();
				MapLoader._hasNavMeshData = false;
				bVar1 = PhotonNetwork.IsMasterClient;
				if (!bVar1) goto label_0599e552;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_01 = __this_00.GenerateNavMesh();
				if (__this_01 == null) {
					throw new NullReferenceException();
				}
				local_20 = __this_01.GetAwaiter();
				bVar1 = local_20.IsCompleted;
				if (!bVar1) {
					this.__1__state = 0;
					this.__u__1.m_task = (Task)local_20.m_task;
					(this.__t__builder).AwaitUnsafeOnCompleted<TaskAwaiter, MapLoader._UpdateAllNavMeshes_d__62>(ref local_20, this);
					return;
				}
			}
			local_20.GetResult();
			MapLoader._hasNavMeshData = true;
		label_0599e552: ;
			this.__1__state = -2;
			(this.__t__builder).SetResult();
			return;
		}

		[Token(Token = "0x60019D1")]
		[Address(RVA = "0x589E660", Offset = "0x589D660", VA = "0x589E660", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
			// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader.<UpdateAllNavMeshes>d__62$$SetStateMachine): clean
			(this.__t__builder).SetStateMachine(stateMachine);
			return;
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200040B")]
	[CompilerGenerated]
	private struct _003CUpdateNavMesh_003Ed__61 : IAsyncStateMachine
	{
		[Token(Token = "0x40014D4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40014D5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40014D6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private TaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60019D2")]
		[Address(RVA = "0x589E6C0", Offset = "0x589D6C0", VA = "0x589E6C0", Slot = "4")]
		private void MoveNext()
		{
			// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader.<UpdateNavMesh>d__61$$MoveNext): clean
			MapLoader __this_00;
			bool bVar1;
			Task __this_01;
			TaskAwaiter local_18;

			local_18.m_task =(TaskAwaiter)null;
			if (this.__1__state == 0) {
				local_18.m_task =(TaskAwaiter)this.__u__1.m_task;
				this.__u__1.m_task = null;
				this.__1__state = -1;
			}
			else {
				__this_00 = MapLoader._instance;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_01 = __this_00.UpdateAllNavMeshes();
				if (__this_01 == null) {
					throw new NullReferenceException();
				}
				local_18 = __this_01.GetAwaiter();
				bVar1 = local_18.IsCompleted;
				if (!bVar1) {
					this.__1__state = 0;
					this.__u__1.m_task = (Task)local_18.m_task;
					(this.__t__builder).AwaitUnsafeOnCompleted<TaskAwaiter, MapLoader._UpdateNavMesh_d__61>(ref local_18, this);
					return;
				}
			}
			local_18.GetResult();
			this.__1__state = -2;
			(this.__t__builder).SetResult();
			return;
		}

		[Token(Token = "0x60019D3")]
		[Address(RVA = "0x589E8E0", Offset = "0x589D8E0", VA = "0x589E8E0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
			// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader.<UpdateNavMesh>d__61$$SetStateMachine): clean
			(this.__t__builder).SetStateMachine(stateMachine);
			return;
		}
	}

	[Token(Token = "0x400148E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static Dictionary<int, MapObject> IdToMapObject;

	[Token(Token = "0x400148F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static Dictionary<int, HashSet<int>> IdToChildren;

	[Token(Token = "0x4001490")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static List<int> ObjectOrder;

	[Token(Token = "0x4001491")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static Dictionary<GameObject, MapObject> GoToMapObject;

	[Token(Token = "0x4001492")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static Dictionary<string, List<MapObject>> Tags;

	[Token(Token = "0x4001493")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static Dictionary<MapObject, HashSet<string>> MapObjectToTags;

	[Token(Token = "0x4001494")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public static List<Light> Daylight;

	[Token(Token = "0x4001495")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public static List<MapLight> MapLights;

	[Token(Token = "0x4001496")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public static List<MapTargetable> MapTargetables;

	[Token(Token = "0x4001497")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static Dictionary<string, UnityEngine.Object> _assetCache;

	[Token(Token = "0x4001498")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private static Dictionary<string, List<Material>> _assetMaterialCache;

	[Token(Token = "0x4001499")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private static Dictionary<string, List<Material>> _defaultMaterialCache;

	[Token(Token = "0x400149A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private static Dictionary<string, Material> _customMaterialCache;

	[Token(Token = "0x400149B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private static MapLoader _instance;

	[Token(Token = "0x400149C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	public static int HighestObjectId;

	[Token(Token = "0x400149D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private static MapScriptBasicMaterial _invisibleMaterial;

	[Token(Token = "0x400149E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public static List<string> Errors;

	[Token(Token = "0x400149F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	public static bool HasWeather;

	[Token(Token = "0x40014A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	public static WeatherSet Weather;

	[Token(Token = "0x40014A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private static GameObject _background;

	[Token(Token = "0x40014A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private static bool _hasNavMeshData;

	[Token(Token = "0x40014A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private static List<NavMeshBuildSource> _navMeshSources;

	[Token(Token = "0x40014A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private static List<Bounds> _navMeshBounds;

	[Token(Token = "0x40014A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private static List<NavMeshBuild> _navMeshBuilds;

	[Token(Token = "0x40014A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private static bool _navMeshModified;

	[Token(Token = "0x40014A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC1")]
	private static bool _navMeshRefreshPending;

	[Token(Token = "0x40014A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private static Coroutine _navMeshRefresh;

	[Token(Token = "0x40014A9")]
	private const float NavMeshRefreshDelay = 1f;

	[Token(Token = "0x40014AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	public static int ROOT_OBJECT_ID;

	[Token(Token = "0x40014AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD4")]
	public static int NETWORK_OFFSET;

	[Token(Token = "0x170002AE")]
	public static bool HasNavMesh
	{
		[Token(Token = "0x600197A")]
		[Address(RVA = "0x588F960", Offset = "0x588E960", VA = "0x588F960")]
		get
		{
			// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$get_HasNavMesh): clean
			sbyte cVar1;
			uint uVar2;
			Map_MapLoader_StaticFields pMVar3;

			if (Il2CppMethodInitialized_07545a2d == false) {
				Il2CppMethodInitialized_07545a2d = true;
				uVar2 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
				pMVar3 = typeof(MapLoader).static_fields;
				cVar1 = pMVar3._hasNavMeshData;
			}
			else {
				pMVar3 = (typeof(MapLoader)).static_fields;
				cVar1 = pMVar3._hasNavMeshData;
			}
			if (cVar1 == false) {
				return false;
			}
			if (((typeof(MapLoader))._2).cctor_finished_or_no_cctor == 0) {
				pMVar3 = typeof(MapLoader).static_fields;
			}
			if (pMVar3._navMeshBounds == null) {
				throw new NullReferenceException();
			}
			return 0 < pMVar3._navMeshBounds._size;
		}
	}

	[Token(Token = "0x600197B")]
	[Address(RVA = "0x588FA10", Offset = "0x588EA10", VA = "0x588FA10")]
	public static void Init()
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$Init): 2 lines keep C-only constructs
		Map_MapLoader_StaticFields pMVar1;
		MapLoader pMVar2;
		OnPreLoadScene __this;
		MapScriptBasicMaterial __this_00;
		Color255 __this_01;

		if (Il2CppMethodInitialized_07545a2e == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_SingletonFactory_CreateSingleton_MapLoader) ;
			Il2CppMethodInitialized_07545a2e = true;
		}
		pMVar2 = SingletonFactory.CreateSingleton<MapLoader>((object)MapLoader._instance);
		pMVar1 = typeof(MapLoader).static_fields;
		pMVar1._instance = pMVar2;
		__this = new OnPreLoadScene(null, (intptr_t)MethodInfo_Map_MapLoader_OnPreLoadScene);
		EventManager.add_OnPreLoadScene(__this);
		__this_00 = new MapScriptBasicMaterial();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Shader = "Transparent";
		__this_01 = new Color255(0x7e, 0xff, 0xff, 0x50);
		__this_00.Color = __this_01;
		pMVar1 = typeof(MapLoader).static_fields;
		pMVar1._invisibleMaterial = __this_00;
		return;
	}

	[Token(Token = "0x600197C")]
	[Address(RVA = "0x588FBA0", Offset = "0x588EBA0", VA = "0x588FBA0")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$OnPreLoadScene): clean
		MapLoader __this;

		CameraOcclusion.Reset();
		MapDestruction.Reset();
		__this = MapLoader._instance;
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.StopAllCoroutines();
		MapLoader.HasWeather = false;
		MapLoader.Weather = null;
		return;
	}

	[Token(Token = "0x600197D")]
	[Address(RVA = "0x588FC80", Offset = "0x588EC80", VA = "0x588FC80")]
	public static int GetNextObjectId()
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$GetNextObjectId): clean
		int iVar1;

		iVar1 = MapLoader.HighestObjectId + 1;
		MapLoader.HighestObjectId = iVar1;
		return iVar1;
	}

	[Token(Token = "0x600197E")]
	[Address(RVA = "0x588FCD0", Offset = "0x588ECD0", VA = "0x588FCD0")]
	public static void ReportError(string message)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$ReportError): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<string> __this;
		String[] pSVar3;

		DebugConsole.Log(message, true);
		__this = MapLoader.Errors;
		if (__this != null) {
			piVar1 = &__this._version;
			*piVar1 = *piVar1 + 1;
			pSVar3 = __this._items;
			if (pSVar3 != null) {
				uVar2 = __this._size;
				if (uVar2 < (uint)pSVar3.Length) {
					__this._size = uVar2 + 1;
					pSVar3[(int)uVar2] = message;
					return;
				}
				__this.AddWithResize((object)message);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600197F")]
	[Address(RVA = "0x588FDD0", Offset = "0x588EDD0", VA = "0x588FDD0")]
	private static bool RunLoadStep(string step, Action action)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$RunLoadStep): clean
		if (action == null) {
			throw new NullReferenceException();
		}
		(*(code)action.invoke_impl)(action.method_code,action.method);
		return true;
	}

	[Token(Token = "0x6001980")]
	[Address(RVA = "0x588FF00", Offset = "0x588EF00", VA = "0x588FF00")]
	public static void StartLoadObjects(List<string> customAssets, List<MapScriptBaseObject> objects, MapScriptOptions options, WeatherSet weather, [Optional][DefaultParameterValue(false)] bool editor, [Optional] List<string> parseErrors)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$StartLoadObjects): 15 lines keep C-only constructs
		int piVar1;
		int iVar2;
		List<string> pSVar3;
		Dictionary<object, object> pSVar4;
		Dictionary<int, object> pSVar5;
		List<int> pSVar6;
		List<Light> pSVar7;
		List<MapLight> pSVar8;
		List<MapTargetable> pSVar9;
		MapLoader __this;
		String message;
		bool bVar10;
		Map_MapLoader_StaticFields pMVar11;
		IEnumerator routine;
		MapLoader pMVar12;
		undefined3 in_register_00000081;
		uint uVar13;
		byte[] local_78 = new byte[8];
		String local_68;
		byte[] local_60 = new byte[16];
		String local_50;
		WeatherSet local_48;
		List<string> local_40;
		MapScriptOptions local_38;

		uVar13 = CONCAT31(in_register_00000081, editor);
		local_38 = options;
		local_78 = (byte[])0x0;
		local_68 = null;
		CameraOcclusion.Reset();
		MapDestruction.Reset();
		pMVar12 = typeof(MapLoader);
		MapLoader.StopNavMeshRefresh();
		pSVar3 = MapLoader.Errors;
		if (pSVar3 != null) {
			piVar1 = &pSVar3._version;
			*piVar1 = *piVar1 + 1;
			iVar2 = pSVar3._size;
			pSVar3._size = 0;
			if (0 < iVar2) {
				Array.Clear((Array)pSVar3._items, 0, iVar2);
			}
			if (parseErrors != null) {
				local_48 = weather;
				local_40 = customAssets;
				local_60.GetEnumerator((List<object>)parseErrors);
				local_68 = local_50;
				local_78 = (byte[])local_60._0_8_;
				local_60._0_8_ = null;
				local_60._8_8_ = local_78;
				while(true) {
					bVar10 = local_78.MoveNext();
					message = local_68;
					if (!bVar10) break;
					MapLoader.ReportError(message);
				}
				local_78.Dispose();
				weather = local_48;
				customAssets = local_40;
			}
			pSVar4 = (Dictionary<object, object>)MapLoader._customMaterialCache;
			if (pSVar4 != null) {
				pSVar4.Clear();
				pSVar4 = (Dictionary<object, object>)MapLoader._defaultMaterialCache;
				if (pSVar4 != null) {
					pSVar4.Clear();
					pSVar4 = (Dictionary<object, object>)MapLoader._assetMaterialCache;
					if (pSVar4 != null) {
						pSVar4.Clear();
						pSVar5 = (Dictionary<int, object>)MapLoader.IdToChildren;
						if (pSVar5 != null) {
							pSVar5.Clear();
							pSVar5 = (Dictionary<int, object>)MapLoader.IdToMapObject;
							if (pSVar5 != null) {
								pSVar5.Clear();
								pSVar4 = (Dictionary<object, object>)MapLoader.GoToMapObject;
								if (pSVar4 != null) {
									pSVar4.Clear() ;
									pMVar11 = typeof(MapLoader).static_fields;
									pSVar6 = pMVar11.ObjectOrder;
									if (pSVar6 != null) {
										piVar1 = &pSVar6._version;
										*piVar1 = *piVar1 + 1;
										pSVar6._size = 0;
										pSVar7 = pMVar11.Daylight;
										if (pSVar7 != null) {
											piVar1 = &pSVar7._version;
											*piVar1 = *piVar1 + 1;
											iVar2 = pSVar7._size;
											pSVar7._size = 0;
											if (0 < iVar2) {
												Array.Clear((Array)pSVar7._items, 0, iVar2) ;
												pMVar11 = typeof(MapLoader).static_fields;
											}
											pSVar8 = pMVar11.MapLights;
											if (pSVar8 != null) {
												piVar1 = &pSVar8._version;
												*piVar1 = *piVar1 + 1;
												iVar2 = pSVar8._size;
												pSVar8._size = 0;
												if (0 < iVar2) {
													Array.Clear((Array)pSVar8._items, 0, iVar2);
													pMVar11 = typeof(MapLoader).static_fields;
												}
												pSVar9 = pMVar11.MapTargetables;
												if (pSVar9 != null) {
													piVar1 = &pSVar9._version;
													*piVar1 = *piVar1 + 1;
													iVar2 = pSVar9._size;
													pSVar9._size = 0;
													if (0 < iVar2) {
														Array.Clear((Array)pSVar9._items, 0, iVar2);
														pMVar11 = typeof(MapLoader).static_fields;
													}
													if ((Dictionary<object, object>)pMVar11._assetCache !=null) {
														(pMVar11._assetCache).Clear();
														pSVar4 = (Dictionary<object, object>)MapLoader.Tags;
														if (pSVar4 != null) {
															pSVar4.Clear();
															pSVar4 = (Dictionary<object, object>)MapLoader.MapObjectToTags;
															if (pSVar4 != null) {
																pSVar4.Clear();
																pMVar12 = typeof(MapLoader);
																pMVar11 = typeof(MapLoader).static_fields;
																pMVar11.HighestObjectId = 1;
																bVar10 = false;
																if ((local_38 != null) && (!editor)) {
																	bVar10 = local_38.HasWeather;
																}
																if ((pMVar12._2).cctor_finished_or_no_cctor == 0) {
																	pMVar11 = typeof(MapLoader).static_fields;
																}
																pMVar11.HasWeather = bVar10;
																pMVar11.Weather = weather;
																__this = MapLoader._instance;
																if (__this != null) {
																	routine = __this.LoadObjectsCoroutine(customAssets, objects, editor);
																	__this.StartCoroutine(routine);
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
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001981")]
	[Address(RVA = "0x5890640", Offset = "0x588F640", VA = "0x5890640")]
	public static MapLight RegisterMapLight(Light light, bool isDaylight)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$RegisterMapLight): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<MapLight> __this;
		MapLight[] pMVar3;
		MapLight __this_00;
		Transform pUVar5;
		float fVar6;

		__this_00 = new MapLight();
		__this_00.Light = light;
		if (light != null) {
			fVar6 = light.intensity;
			__this_00.MaxIntensity = fVar6;
			pUVar5 = light.transform;
			__this_00._transform = pUVar5;
			__this_00._isDaylight = isDaylight;
			__this = MapLoader.MapLights;
			if (__this != null) {
				piVar1 = &__this._version;
				*piVar1 = *piVar1 + 1;
				pMVar3 = __this._items;
				if (pMVar3 != null) {
					uVar2 = __this._size;
					if (uVar2 < (uint)pMVar3.Length) {
						__this._size = uVar2 + 1;
						pMVar3[(int)uVar2] = __this_00;
					}
					else {
						__this.AddWithResize((object)__this_00);
					}
					return __this_00;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001982")]
	[Address(RVA = "0x587E9B0", Offset = "0x587D9B0", VA = "0x587E9B0")]
	public static MapObject FindObjectFromCollider(Collider collider)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$FindObjectFromCollider): clean
		MapObject pMVar1;

		if (collider == null) {
			throw new NullReferenceException();
		}
		if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
			return pMVar1;
		}
		return pMVar1;
	}

	[Token(Token = "0x6001983")]
	[Address(RVA = "0x5878DA0", Offset = "0x5877DA0", VA = "0x5878DA0")]
	public static MapObject FindObjectFromTransform(Transform current)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$FindObjectFromTransform): clean
		Dictionary<object, object> pSVar1;
		bool bVar2;
		GameObject key;
		Transform x;
		MapObject pMVar3;

		do {
			if (current == null) {
	label_05978ef5: ;
				throw new NullReferenceException();
			}
			key = current.gameObject;
			pSVar1 = (Dictionary<object, object>)MapLoader.GoToMapObject;
			if (pSVar1 == null) goto label_05978ef5;
			bVar2 = pSVar1.ContainsKey((object)key);
			if (bVar2) {
				pSVar1 = (Dictionary<object, object>)MapLoader.GoToMapObject;
				if (pSVar1 != null) {
					pMVar3 = pSVar1.get_Item((object)key);
					return pMVar3;
				}
				goto label_05978ef5;
			}
			x = current.parent;
			bVar2 = ((Object)x == null);
			if (bVar2) {
				return null;
			}
			current = current.parent;
		} while(true);
	}

	[Token(Token = "0x6001984")]
	[Address(RVA = "0x5890770", Offset = "0x588F770", VA = "0x5890770")]
	public static MapObject LoadObject(MapScriptBaseObject scriptObject, bool editor)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$LoadObject): 12 lines keep C-only constructs
		int piVar1;
		int __this;
		byte bVar2;
		byte bVar3;
		int parent;
		int iVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		MapScriptBaseObject pMVar8;
		Dictionary<int, object> pSVar10;
		Dictionary<object, object> __this_00;
		List<int> pSVar11;
		Int32[] pSVar12;
		Collider[] colliders;
		bool bVar14;
		MapObject __this_01;
		String pSVar15;
		HashSet<int> pSVar16;
		MapScriptBaseObject pMVar17;
		GameObject pUVar18;
		Transform transform;
		int iVar19;
		MethodInfo method_00;

		if (scriptObject == null) goto label_05990d74;
		pMVar17 = scriptObject.klass;
		bVar2 = (pMVar17._2).typeHierarchyDepth;
		bVar3 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
		if ((bVar2 < bVar3) ||((pMVar17._2).typeHierarchy[(ulong)bVar3 - 1] != typeof(MapScriptSceneObject))) {
			pUVar18 = null;
		}
		else {
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
				pMVar17 = scriptObject.klass;
				bVar2 = (pMVar17._2).typeHierarchyDepth;
				bVar3 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
			}
			if ((bVar2 < bVar3) ||((pMVar17._2).typeHierarchy[(ulong)bVar3 - 1] != typeof(MapScriptSceneObject))) {
				throw new InvalidCastException();
			}
			pUVar18 = MapLoader.LoadSceneObject((MapScriptSceneObject)scriptObject, editor);
		}
		parent = scriptObject.Parent;
		__this_01 = new MapObject(parent, pUVar18, scriptObject);
		if ((__this_01 == null) ||(pMVar8 = __this_01.ScriptObject, pMVar8 == null)) goto label_05990d74;
		iVar4 = pMVar8.Id;
		iVar19 = MapLoader.HighestObjectId;
		if (MapLoader.HighestObjectId < iVar4) {
			iVar19 = iVar4;
		}
		MapLoader.HighestObjectId = iVar19;
		if ((Dictionary<int, object>)MapLoader.IdToMapObject ==null) goto label_05990d74;
		__this = &scriptObject.Id;
		bVar14 = (MapLoader.IdToMapObject).ContainsKey(*__this);
		if (bVar14) {
			pSVar15 = __this.ToString();
			pSVar15 = String.Concat("Map load error: map object with duplicate ID found (", pSVar15, ")");
			DebugConsole.Log(pSVar15, true);
			return __this_01;
		}
		pSVar10 = (Dictionary<int, object>)MapLoader.IdToMapObject;
		if (pSVar10 == null) goto label_05990d74;
		pSVar10.Add(*__this, (object)__this_01);
		__this_00 = (Dictionary<object, object>)MapLoader.GoToMapObject;
		if (__this_00 == null) goto label_05990d74;
		__this_00.Add((object)pUVar18, (object)__this_01);
		pSVar11 = MapLoader.ObjectOrder;
		if (pSVar11 == null) goto label_05990d74;
		method_00 = (MethodInfo)(ulong)(uint)*__this;
		bVar14 = pSVar11.Contains(*__this);
		if (bVar14) {
	label_05990ab0: ;
			iVar4 = scriptObject.Parent;
		}
		else {
			pSVar11 = MapLoader.ObjectOrder;
			if (pSVar11 == null) goto label_05990d74;
			uVar5 = *__this;
			piVar1 = &pSVar11._version;
			*piVar1 = *piVar1 + 1;
			pSVar12 = pSVar11._items;
			if (pSVar12 == null) goto label_05990d74;
			uVar6 = pSVar11._size;
			if (uVar6 < (uint)pSVar12.Length) {
				pSVar11._size = uVar6 + 1;
				pSVar12[(int)uVar6] = uVar5;
				goto label_05990ab0;
			}
			pSVar11.AddWithResize(uVar5);
			iVar4 = scriptObject.Parent;
		}
		if (-1 < iVar4) {
			if (((typeof(MapLoader))._2).cctor_finished_or_no_cctor == 0) {
			}
			pSVar10 = (Dictionary<int, object>)MapLoader.IdToChildren;
			if (pSVar10 == null) goto label_05990d74;
			bVar14 = pSVar10.ContainsKey(scriptObject.Parent);
			uVar7 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
			if (bVar14) {
				if (uVar7 == 0) {
				}
				pSVar10 = (Dictionary<int, object>)MapLoader.IdToChildren;
				if ((pSVar10 == null) ||(pSVar16 = (HashSet<int>)pSVar10.get_Item(scriptObject.Parent), pSVar16 == null)) goto label_05990d74;
				method_00 = (MethodInfo)(ulong)(uint)*__this;
				pSVar16.Add(*__this);
			}
			else {
				if (uVar7 == 0) {
				}
				pSVar10 = (Dictionary<int, object>)MapLoader.IdToChildren;
				uVar5 = scriptObject.Parent;
				pSVar16 = new HashSet<int>();
				if ((pSVar16 == null) ||(pSVar16.Add(*__this), pSVar10 == null)) goto label_05990d74;
				pSVar10.Add(uVar5, (object)pSVar16);
			}
		}
		if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
			MapLoader.SetTransform(__this_01);
		}
		else {
			MapLoader.SetTransform(__this_01);
		}
		if (!editor) {
			if (scriptObject.Static == false) {
				bVar14 = false;
			}
			else {
				bVar14 = SUB41((uint)scriptObject.Parent >> 0x1f, 0);
			}
			colliders = __this_01.colliderCache;
			if (((typeof(CameraOcclusion))._2).cctor_finished_or_no_cctor == 0) {
			}
			CameraOcclusion.RegisterObject(pUVar18, colliders, bVar14);
			if (scriptObject.Active == false) {
				pUVar18 = __this_01.GameObject;
				if (pUVar18 == null) goto label_05990d74;
				pUVar18.SetActive(false);
			}
			pSVar15 = scriptObject.Asset;
			if (pSVar15 == null) {
	label_05990d74: ;
				throw new NullReferenceException();
			}
			bVar14 = pSVar15.StartsWith("Interact/Supply");
			if (bVar14) {
				pUVar18 = __this_01.GameObject;
				if (pUVar18 == null) goto label_05990d74;
				transform = pUVar18.transform;
				MinimapHandler.CreateMinimapIcon(transform, "Supply");
			}
		}
		return __this_01;
	}

	[Token(Token = "0x6001985")]
	[Address(RVA = "0x5891190", Offset = "0x5890190", VA = "0x5891190")]
	public static void UnregisterObject(MapObject mapObject)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$UnregisterObject): 1 lines keep C-only constructs
		int key;
		MapScriptBaseObject pMVar1;
		Dictionary<int, object> pSVar2;
		Dictionary<object, object> __this;
		List<int> pSVar3;
		bool bVar4;
		int index;
		HashSet<int> local_28;

		local_28 = null;
		if ((mapObject != null) &&(pMVar1 = mapObject.ScriptObject, pMVar1 != null)) {
			key = pMVar1.Id;
			pSVar2 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			if (pSVar2 != null) {
				pSVar2.Remove(key);
				__this = (Dictionary<object, object>)MapLoader.GoToMapObject;
				if (__this != null) {
					__this.Remove((object)mapObject.GameObject);
					pSVar3 = MapLoader.ObjectOrder;
					if (pSVar3 != null) {
						index = pSVar3.LastIndexOf(key) ;
						if (-1 < index) {
							pSVar3 = MapLoader.ObjectOrder;
							if (pSVar3 == null) goto label_0599135a;
							pSVar3.RemoveAt(index);
						}
						pMVar1 = mapObject.ScriptObject;
						if ((pMVar1 != null) &&(pSVar2 = (Dictionary<int, object>)MapLoader.IdToChildren, pSVar2 != null)) {
							bVar4 = pSVar2.TryGetValue(pMVar1.Parent, (object*)&local_28);
							if (bVar4) {
								if (local_28 == null) goto label_0599135a;
								local_28.Remove(key);
							}
							return;
						}
					}
				}
			}
		}
	label_0599135a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001986")]
	[Address(RVA = "0x5891360", Offset = "0x5890360", VA = "0x5891360")]
	public static void MoveInOrder(int id, int anchorId, bool insertAfter)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$MoveInOrder): clean
		uint uVar1;
		List<int> pSVar2;
		int iVar3;

		if (Il2CppMethodInitialized_07545a38 == false) {
			Il2CppMethodInitialized_07545a38 = true;
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) goto label_059913f6;
	label_0599138b: ;
			pSVar2 = MapLoader.ObjectOrder;
		}
		else {
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor != 0) goto label_0599138b;
	label_059913f6: ;
			pSVar2 = MapLoader.ObjectOrder;
		}
		if (pSVar2 != null) {
			pSVar2.Remove(id);
			pSVar2 = MapLoader.ObjectOrder;
			if (pSVar2 != null) {
				iVar3 = pSVar2.IndexOf(anchorId);
				if (iVar3 < 0) {
					pSVar2 = MapLoader.ObjectOrder;
					if (pSVar2 == null) goto label_059914cc;
					iVar3 = pSVar2._size;
					uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
				}
				else {
					iVar3 = iVar3 + (uint)insertAfter;
					uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				pSVar2 = MapLoader.ObjectOrder;
				if (pSVar2 != null) {
					pSVar2.Insert(iVar3, id);
					return;
				}
			}
		}
	label_059914cc: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001987")]
	[Address(RVA = "0x58914E0", Offset = "0x58904E0", VA = "0x58914E0")]
	public static void SetParent(MapObject obj, MapObject parent)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$SetParent): clean
		uint uVar1;
		int key;
		Dictionary<int, object> pSVar2;
		MapScriptBaseObject pMVar3;
		GameObject pUVar4;
		bool bVar5;
		HashSet<int> pSVar6;
		Transform pUVar7;
		Transform p;

		if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar5 = MapLoader.WouldCreateParentCycle(obj, parent);
		if (bVar5) {
			return;
		}
		if ((obj == null) ||(pSVar2 = (Dictionary<int, object>)MapLoader.IdToChildren, pSVar2 == null)) goto label_05991892;
		bVar5 = pSVar2.ContainsKey(obj.Parent);
		if (bVar5) {
			pSVar2 = (Dictionary<int, object>)MapLoader.IdToChildren;
			if (pSVar2 == null) goto label_05991892;
			pSVar6 = (HashSet<int>)pSVar2.get_Item(obj.Parent);
			pMVar3 = obj.ScriptObject;
			if ((pMVar3 == null) ||(pSVar6 == null)) goto label_05991892;
			bVar5 = pSVar6.Contains(pMVar3.Id);
			if (bVar5) {
				pSVar2 = (Dictionary<int, object>)MapLoader.IdToChildren;
				if (pSVar2 == null) goto label_05991892;
				pSVar6 = (HashSet<int>)pSVar2.get_Item(obj.Parent);
				pMVar3 = obj.ScriptObject;
				if ((pMVar3 == null) ||(pSVar6 == null)) goto label_05991892;
				pSVar6.Remove(pMVar3.Id);
			}
		}
		if (parent == null) {
			obj.Parent = MapLoader.ROOT_OBJECT_ID;
			pUVar4 = obj.GameObject;
			if (pUVar4 != null) {
				pUVar7 = pUVar4.transform;
				if (pUVar7 != null) {
					pUVar7.SetParent(null);
					return;
				}
			}
		}
		else {
			pMVar3 = parent.ScriptObject;
			if (pMVar3 != null) {
				obj.Parent = pMVar3.Id;
				pUVar4 = obj.GameObject;
				if (pUVar4 != null) {
					pUVar7 = pUVar4.transform;
					pUVar4 = parent.GameObject;
					if (pUVar4 != null) {
						p = pUVar4.transform;
						if (pUVar7 != null) {
							pUVar7.SetParent(p);
							pSVar2 = (Dictionary<int, object>)MapLoader.IdToChildren;
							if (pSVar2 != null) {
								bVar5 = pSVar2.ContainsKey(obj.Parent) ;
								uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
								if (bVar5) {
									if (uVar1 == 0) {
									}
									pSVar2 = (Dictionary<int, object>)MapLoader.IdToChildren;
									if (pSVar2 != null) {
										pSVar6 = (HashSet<int>)pSVar2.get_Item(obj.Parent);
										pMVar3 = obj.ScriptObject;
										if ((pMVar3 != null) &&(pSVar6 != null)) {
											pSVar6.Add(pMVar3.Id);
											return;
										}
									}
								}
								else {
									if (uVar1 == 0) {
									}
									pSVar2 = (Dictionary<int, object>)MapLoader.IdToChildren;
									key = obj.Parent;
									pSVar6 = new HashSet<int>();
									pMVar3 = obj.ScriptObject;
									if ((pMVar3 != null) &&(pSVar6 != null)) {
										pSVar6.Add(pMVar3.Id);
										if (pSVar2 != null) {
											pSVar2.Add(key, (object)pSVar6);
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
	label_05991892: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001988")]
	[Address(RVA = "0x5891AA0", Offset = "0x5890AA0", VA = "0x5891AA0")]
	public static void SetParentLogical(MapObject obj, MapObject parent)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$SetParentLogical): 1 lines keep C-only constructs
		uint uVar1;
		int key;
		Dictionary<int, object> pSVar2;
		MapScriptBaseObject pMVar3;
		bool bVar4;
		HashSet<int> pSVar5;

		if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar4 = MapLoader.WouldCreateParentCycle(obj, parent);
		if (!bVar4) {
			if ((obj == null) ||(pSVar2 = (Dictionary<int, object>)MapLoader.IdToChildren, pSVar2 == null)) goto label_05991df0;
			bVar4 = pSVar2.ContainsKey(obj.Parent);
			if (bVar4) {
				pSVar2 = (Dictionary<int, object>)MapLoader.IdToChildren;
				if (pSVar2 == null) goto label_05991df0;
				pSVar5 = (HashSet<int>)pSVar2.get_Item(obj.Parent);
				pMVar3 = obj.ScriptObject;
				if ((pMVar3 == null) ||(pSVar5 == null)) goto label_05991df0;
				bVar4 = pSVar5.Contains(pMVar3.Id);
				if (bVar4) {
					pSVar2 = (Dictionary<int, object>)MapLoader.IdToChildren;
					if (pSVar2 == null) goto label_05991df0;
					pSVar5 = (HashSet<int>)pSVar2.get_Item(obj.Parent);
					pMVar3 = obj.ScriptObject;
					if ((pMVar3 == null) ||(pSVar5 == null)) goto label_05991df0;
					pSVar5.Remove(pMVar3.Id);
				}
			}
			if (parent != null) {
				pMVar3 = parent.ScriptObject;
				if (pMVar3 != null) {
					obj.Parent = pMVar3.Id;
					pSVar2 = (Dictionary<int, object>)MapLoader.IdToChildren;
					if (pSVar2 != null) {
						bVar4 = pSVar2.ContainsKey(obj.Parent);
						uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
						if (bVar4) {
							if (uVar1 == 0) {
							}
							pSVar2 = (Dictionary<int, object>)MapLoader.IdToChildren;
							if (pSVar2 != null) {
								pSVar5 = (HashSet<int>)pSVar2.get_Item(obj.Parent);
								pMVar3 = obj.ScriptObject;
								if ((pMVar3 != null) &&(pSVar5 != null)) {
									pSVar5.Add(pMVar3.Id);
									return;
								}
							}
						}
						else {
							if (uVar1 == 0) {
							}
							pSVar2 = (Dictionary<int, object>)MapLoader.IdToChildren;
							key = obj.Parent;
							pSVar5 = il2cpp_codegen_object_new(typeof(HashSet<int>)) ;
							pSVar5 = new HashSet<int>();
							pMVar3 = obj.ScriptObject;
							if ((pMVar3 != null) &&(pSVar5 != null)) {
								pSVar5.Add(pMVar3.Id);
								if (pSVar2 != null) {
									pSVar2.Add(key, (object)pSVar5);
									return;
								}
							}
						}
					}
				}
	label_05991df0: ;
				throw new NullReferenceException();
			}
			obj.Parent = MapLoader.ROOT_OBJECT_ID;
		}
		return;
	}

	[Token(Token = "0x6001989")]
	[Address(RVA = "0x5891E00", Offset = "0x5890E00", VA = "0x5891E00")]
	public static int GetLogicalParentId(MapObject obj)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$GetLogicalParentId): clean
		if (obj != null) {
			return obj.Parent;
		}
		return MapLoader.ROOT_OBJECT_ID;
	}

	[Token(Token = "0x600198A")]
	[Address(RVA = "0x58918A0", Offset = "0x58908A0", VA = "0x58918A0")]
	private static bool WouldCreateParentCycle(MapObject obj, MapObject parent)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$WouldCreateParentCycle): 1 lines keep C-only constructs
		int iVar1;
		MapScriptBaseObject pMVar2;
		MapScriptBaseObject pMVar3;
		Dictionary<int, object> __this;
		object pIVar4;
		bool bVar5;
		HashSet<int> __this_00;
		int item;
		object local_38;

		local_38 = null;
		bVar5 = false;
		if ((obj != null) && (parent != null)) {
			pMVar2 = obj.ScriptObject;
			if ((pMVar2 == null) ||(pMVar3 = parent.ScriptObject, pMVar3 == null)) {
	label_05991a8c: ;
				throw new NullReferenceException();
			}
			iVar1 = pMVar2.Id;
			item = pMVar3.Id;
			__this_00 = new HashSet<int>();
			if (-1 < item) {
				if (__this_00 == null) goto label_05991a8c;
				do {
					while(true) {
						bVar5 = __this_00.Add(item);
						if (!bVar5) goto label_05991a76;
						if (item == iVar1) {
							return true;
						}
						__this = (Dictionary<int, object>)MapLoader.IdToMapObject;
						if (__this == null) goto label_05991a8c;
						bVar5 = __this.TryGetValue(item, ref local_38);
						pIVar4 = local_38;
						if (!bVar5) {
							return false;
						}
						if (pIVar4 == null) break;
						item = *(int)&pIVar4[1].klass;
						if (item < 0) goto label_05991a76;
					}
					item = MapLoader.ROOT_OBJECT_ID;
				} while (-1 < item);
			}
	label_05991a76: ;
			bVar5 = -1 < item;
		}
		return bVar5;
	}

	[Token(Token = "0x600198B")]
	[Address(RVA = "0x5891E60", Offset = "0x5890E60", VA = "0x5891E60")]
	public static void DeleteObject(MapObject obj)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$DeleteObject): clean
		uint uVar1;
		uint key;
		int id;
		MapScriptBaseObject pMVar2;
		Object obj_00;
		bool bVar3;

		if (Il2CppMethodInitialized_07545a3d == false) {
			Il2CppMethodInitialized_07545a3d = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (((obj != null) &&(pMVar2 = obj.ScriptObject, pMVar2 != null)) &&(*(Dictionary<int, object>*)(typeof(MapLoader)).static_fields !=null)) {
			key = pMVar2.Id;
			bVar3 = (*(Dictionary<int, object>*)(typeof(MapLoader)).static_fields).ContainsKey(key);
			if (!bVar3) {
				obj_00 = (Object)obj.GameObject;
				Object.Destroy(obj_00);
				return;
			}
			pMVar2 = obj.ScriptObject;
			if (pMVar2 != null) {
				id = pMVar2.Id;
				MapLoader.DeleteObject(id);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600198C")]
	[Address(RVA = "0x5891F70", Offset = "0x5890F70", VA = "0x5891F70")]
	public static void DeleteObject(int id)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$DeleteObject): 3 lines keep C-only constructs
		Dictionary<int, object> pSVar1;
		Dictionary<object, object> __this;
		Object obj;
		int key;
		bool bVar2;
		MapObject pMVar3;
		object collection;
		List<int> pSVar4;
		byte[] local_68 = new byte[8];
		object local_58;
		byte[] local_50 = new byte[16];
		object local_40;
		MapObject local_38;

		local_68 = (byte[])0x0;
		local_58 = null;
		pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
		if (pSVar1 != null) {
			pMVar3 = pSVar1.get_Item(id);
			pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			if (pSVar1 != null) {
				pSVar1.Remove(id);
				if ((pMVar3 != null) &&(__this = (Dictionary<object, object>)MapLoader.GoToMapObject, __this != null)) {
					__this.Remove((object)pMVar3.GameObject);
					pSVar4 = MapLoader.ObjectOrder;
					if (pSVar4 != null) {
						pSVar4.Remove(id);
						MapDestruction.Remove(id);
						pSVar1 = (Dictionary<int, object>)MapLoader.IdToChildren;
						if (pSVar1 != null) {
							bVar2 = pSVar1.ContainsKey(id);
							if (!bVar2) {
	label_059922dd: ;
								obj = (Object)pMVar3.GameObject;
								Object.Destroy(obj);
								return;
							}
							pSVar1 = (Dictionary<int, object>)MapLoader.IdToChildren;
							if (pSVar1 != null) {
								local_38 = pMVar3;
								collection = pSVar1.get_Item(id);
								pSVar4 = new List<int>((IEnumerable<T>)collection);
								if (pSVar4 != null) {
									local_50.GetEnumerator(pSVar4) ;
									local_58 = local_40;
									local_68 = (byte[])local_50._0_8_;
									local_50._0_8_ = null;
									local_50._8_8_ = local_68;
									while(true) {
										bVar2 = local_68.MoveNext();
										if (!bVar2) break;
										key = (int32_t)local_58;
										pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
										if (pSVar1 == null) {
											throw new NullReferenceException();
										}
										bVar2 = pSVar1.ContainsKey(key);
										if (bVar2) {
											pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
											if (pSVar1 == null) {
												throw new NullReferenceException();
											}
											pMVar3 = pSVar1.get_Item(key);
											MapLoader.SetParent(pMVar3, null);
										}
									}
									local_68.Dispose();
									pMVar3 = local_38;
									goto label_059922dd;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600198D")]
	[Address(RVA = "0x58905A0", Offset = "0x588F5A0", VA = "0x58905A0")]
	[IteratorStateMachine(typeof(_003CLoadObjectsCoroutine_003Ed__50))]
	private IEnumerator LoadObjectsCoroutine(List<string> customAssets, List<MapScriptBaseObject> objects, bool editor)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$LoadObjectsCoroutine): clean
		MapLoader.d__50<LoadObjectsCoroutine> __this_00;

		__this_00 = new MapLoader.d__50<LoadObjectsCoroutine>(0);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		__this_00.customAssets = customAssets;
		__this_00.objects = objects;
		__this_00.editor = editor;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600198E")]
	[Address(RVA = "0x5892390", Offset = "0x5891390", VA = "0x5892390")]
	private Matrix4x4 GetNavMeshWorldToLocal()
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$GetNavMeshWorldToLocal): 21 lines keep C-only constructs
		Transform pUVar2;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		Quaternion UVar3;
		Vector3 UVar4;
		Vector3 local_118;
		byte[] local_108 = new byte[16];
		byte[] local_f8 = new byte[16];
		byte[] local_e8 = new byte[16];
		Matrix4x4 local_d8;
		Matrix4x4 local_98;
		Matrix4x4 local_50;

		pUVar2 = this.transform;
		if (pUVar2 != null) {
			UVar4 = pUVar2.position;
			local_e8._8_4_ = extraout_XMM0_Dc;
			local_e8._0_8_ = UVar4._0_8_;
			local_e8._12_4_ = extraout_XMM0_Dd;
			pUVar2 = this.transform;
			if (pUVar2 != null) {
				UVar3 = pUVar2.rotation;
				local_98.m00 = UVar3.x;
				local_98.m10 = UVar3.y;
				local_98.m20 = UVar3.z;
				local_98.m30 = UVar3.w;
				if (g_data_0753e4b7 == false) {
					local_f8._8_4_ = extraout_XMM0_Dc_00;
					local_f8._0_8_ = UVar3._0_8_;
					local_f8._12_4_ = extraout_XMM0_Dd_00;
					local_108._8_4_ = in_XMM1_Dc;
					local_108._0_8_ = UVar3._8_8_;
					local_108._12_4_ = in_XMM1_Dd;
					g_data_0753e4b7 = true;
					local_98.m00 = (float)local_f8._0_4_;
					local_98.m10 = (float)local_f8._4_4_;
					local_98.m20 = (float)local_108._0_4_;
					local_98.m30 = (float)local_108._4_4_;
				}
				local_118.x = (Vector3.oneVector).x;
				local_118.y = (Vector3.oneVector).y;
				local_118.z = (Vector3.oneVector).z;
				local_d8.m00 = (float)local_e8._0_4_;
				local_d8.m10 = (float)local_e8._4_4_;
				local_d8.m20 = UVar4.z;
				local_50 = Matrix4x4.Internal_TRS((Vector3)(local_e8 + 0x10), ref local_98, ref local_118);
				local_98.m00 = local_50.m00;
				local_98.m10 = local_50.m10;
				local_98.m20 = local_50.m20;
				local_98.m30 = local_50.m30;
				local_98.m01 = local_50.m01;
				local_98.m11 = local_50.m11;
				local_98.m21 = local_50.m21;
				local_98.m31 = local_50.m31;
				local_98.m02 = local_50.m02;
				local_98.m12 = local_50.m12;
				local_98.m22 = local_50.m22;
				local_98.m32 = local_50.m32;
				local_98.m03 = local_50.m03;
				local_98.m13 = local_50.m13;
				local_98.m23 = local_50.m23;
				local_98.m33 = local_50.m33;
				Matrix4x4.Internal_Inverse((Matrix4x4)(local_e8 + 0x10), ref local_98);
				__return_storage_ptr__.m03 = local_d8.m03;
				__return_storage_ptr__.m13 = local_d8.m13;
				__return_storage_ptr__.m23 = local_d8.m23;
				__return_storage_ptr__.m33 = local_d8.m33;
				__return_storage_ptr__.m02 = local_d8.m02;
				__return_storage_ptr__.m12 = local_d8.m12;
				__return_storage_ptr__.m22 = local_d8.m22;
				__return_storage_ptr__.m32 = local_d8.m32;
				__return_storage_ptr__.m01 = local_d8.m01;
				__return_storage_ptr__.m11 = local_d8.m11;
				__return_storage_ptr__.m21 = local_d8.m21;
				__return_storage_ptr__.m31 = local_d8.m31;
				__return_storage_ptr__.m00 = local_d8.m00;
				__return_storage_ptr__.m10 = local_d8.m10;
				__return_storage_ptr__.m20 = local_d8.m20;
				__return_storage_ptr__.m30 = local_d8.m30;
				return __return_storage_ptr__;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600198F")]
	[Address(RVA = "0x5892510", Offset = "0x5891510", VA = "0x5892510")]
	private void ResetSources()
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$ResetSources): 15 lines keep C-only constructs
		int piVar1;
		Bounds pUVar2;
		uint uVar3;
		List<MapLoader.NavMeshBuild> pSVar4;
		List<Bounds> pSVar5;
		Dictionary<int, object> __this_00;
		GameObject pUVar6;
		Bounds[] pUVar7;
		Bounds item;
		Matrix4x4 worldToLocal;
		object mapObject;
		bool bVar8;
		Map_MapLoader_StaticFields pMVar9;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_01;
		MethodInfo pMVar10;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_c8;
		Bounds local_a8;
		byte[] local_90 = new byte[16];
		MapObject local_80;
		Matrix4x4 local_78;

		local_78.m03 = 0.0;
		local_78.m13 = 0.0;
		local_78.m23 = 0.0;
		local_78.m33 = 0.0;
		local_78.m02 = 0.0;
		local_78.m12 = 0.0;
		local_78.m22 = 0.0;
		local_78.m32 = 0.0;
		local_78.m01 = 0.0;
		local_78.m11 = 0.0;
		local_78.m21 = 0.0;
		local_78.m31 = 0.0;
		local_78.m00 = 0.0;
		local_78.m10 = 0.0;
		local_78.m20 = 0.0;
		local_78.m30 = 0.0;
		local_c8._dictionary = null;
		local_c8._index = 0;
		local_c8._version = 0;
		local_c8._currentValue = null;
		local_a8.m_Center.x = 0.0;
		local_a8.m_Center.y = 0.0;
		local_a8.m_Center.z = 0.0;
		local_a8.m_Extents.x = 0.0;
		local_a8.m_Extents.y = 0.0;
		local_a8.m_Extents.z = 0.0;
		pMVar9 = typeof(MapLoader).static_fields;
		pSVar4 = pMVar9._navMeshBuilds;
		if (pSVar4 != null) {
			piVar1 = &pSVar4._version;
			*piVar1 = *piVar1 + 1;
			uVar3 = pSVar4._size;
			pSVar4._size = 0;
			if (0 < (int)uVar3) {
				Array.Clear((Array)pSVar4._items, 0, uVar3);
				pMVar9 = typeof(MapLoader).static_fields;
			}
			pSVar5 = pMVar9._navMeshBounds;
			if (pSVar5 != null) {
				piVar1 = &pSVar5._version;
				*piVar1 = *piVar1 + 1;
				pSVar5._size = 0;
				local_78 = this.GetNavMeshWorldToLocal();
				__this_00 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (__this_00 != null) {
					__this_01 = __this_00.Values;
					if (__this_01 != null) {
						local_90.GetEnumerator(__this_01);
						local_c8._currentValue = (object)local_80;
						local_c8._dictionary =(Dictionary<TKey, TValue>)local_90._0_8_;
						local_c8._index = local_90._8_4_;
						local_c8._version = local_90._12_4_;
						local_90._0_8_ = null;
						local_90._8_8_ = &local_c8;
						while(true) {
							do {
								do {
									do {
										pMVar10 = MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext ;
										bVar8 = local_c8.MoveNext();
										mapObject = local_c8._currentValue;
										if (!bVar8) {
											local_c8.Dispose();
											MapLoader.CollectNavMeshSources();
											return;
										}
										bVar8 = MapLoader.IsNavMeshRegion((MapObject)mapObject);
									} while (!bVar8);
									if ((MapObject)mapObject == null) {
										throw new NullReferenceException();
									}
									pUVar6 = ((MapObject)((long)mapObject + 0x10)).GameObject;
									if (pUVar6 == null) {
										throw new NullReferenceException();
									}
									bVar8 = pUVar6.activeInHierarchy;
								} while (!bVar8);
								pUVar6 = ((MapObject)((long)mapObject + 0x10)).GameObject;
								if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
								}
								worldToLocal.m20 = local_78.m20;
								worldToLocal.m30 = local_78.m30;
								worldToLocal.m00 = local_78.m00;
								worldToLocal.m10 = local_78.m10;
								worldToLocal.m01 = local_78.m01;
								worldToLocal.m11 = local_78.m11;
								worldToLocal.m21 = local_78.m21;
								worldToLocal.m31 = local_78.m31;
								worldToLocal.m02 = local_78.m02;
								worldToLocal.m12 = local_78.m12;
								worldToLocal.m22 = local_78.m22;
								worldToLocal.m32 = local_78.m32;
								worldToLocal.m03 = local_78.m03;
								worldToLocal.m13 = local_78.m13;
								worldToLocal.m23 = local_78.m23;
								worldToLocal.m33 = local_78.m33;
								bVar8 = MapLoader.TryGetRenderBounds(pUVar6, worldToLocal, ref local_a8);
							} while (!bVar8);
							pSVar5 = MapLoader._navMeshBounds;
							if (pSVar5 == null) break;
							piVar1 = &pSVar5._version;
							*piVar1 = *piVar1 + 1;
							pUVar7 = pSVar5._items;
							if (pUVar7 == null) break;
							uVar3 = pSVar5._size;
							if (uVar3 < (uint)pUVar7.Length) {
								pSVar5._size = uVar3 + 1;
								pUVar7[(int)uVar3].m_Extents.y = local_a8.m_Extents.y;
								pUVar7[(int)uVar3].m_Extents.z = local_a8.m_Extents.z;
								pUVar2 = pUVar7.m_Items + (int)uVar3;
								pUVar2.m_Center.x = local_a8.m_Center.x;
								pUVar2.m_Center.y = local_a8.m_Center.y;
								*(ulong)&pUVar2.m_Center.z = local_a8._8_8_;
							}
							else {
								item.m_Center.z = local_a8.m_Center.z;
								item.m_Extents.x = local_a8.m_Extents.x;
								item.m_Center.x = local_a8.m_Center.x;
								item.m_Center.y = local_a8.m_Center.y;
								item.m_Extents.y = local_a8.m_Extents.y;
								item.m_Extents.z = local_a8.m_Extents.z;
								pSVar5.AddWithResize(item);
							}
						}
						throw new NullReferenceException();
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001990")]
	[Address(RVA = "0x5892910", Offset = "0x5891910", VA = "0x5892910")]
	private static bool IsNavMeshRegion(MapObject mapObject)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$IsNavMeshRegion): 1 lines keep C-only constructs
		byte bVar1;
		MapScriptBaseObject pMVar2;
		String a;
		bool bVar3;

		if (mapObject == null) {
			throw new NullReferenceException();
		}
		pMVar2 = mapObject.ScriptObject;
		if (pMVar2 != null) {
			bVar1 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
			if ((bVar1 <= (pMVar2.klass._2).typeHierarchyDepth) &&((pMVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(MapScriptSceneObject))) {
				a = pMVar2.Asset;
				bVar3 = (a == MapAssets.NavMeshRegion);
				return bVar3;
			}
		}
		return false;
	}

	[Token(Token = "0x6001991")]
	[Address(RVA = "0x5892F80", Offset = "0x5891F80", VA = "0x5892F80")]
	private static void CollectNavMeshSources()
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$CollectNavMeshSources): 14 lines keep C-only constructs
		int piVar1;
		Map_MapLoader_StaticFields pMVar2;
		List<Bounds> pSVar3;
		Dictionary<int, object> __this;
		MapScriptBaseObject pMVar4;
		HashSet<object> pSVar5;
		MapObject mapObject;
		bool bVar7;
		uint uVar8;
		LayerMask mask;
		int includedLayerMask;
		MapLoader.c__DisplayClass54_0 __this_00;
		HashSet<GameObject> __this_01;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_02;
		Object[] pSVar9;
		GameObject pUVar10;
		Int32[] layers;
		List<NavMeshBuildMarkup> __this_03;
		Func<NavMeshBuildSource, bool> __this_04;
		System_Collections_Generic_IEnumerable_TSource__o source;
		List<NavMeshBuildSource> pSVar11;
		MethodInfo method_00;
		uint uVar12;
		byte[] local_68 = new byte[8];
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o pSStack_60;
		MapObject local_58;
		byte[] local_48 = new byte[16];
		MapObject local_38;

		if (Il2CppMethodInitialized_07545a42 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_GameObject_ctor) ;
			Il2CppMethodInitialized_07545a42 = true;
		}
		local_68 = (byte[])0x0;
		local_58 = null;
		__this_00 = new MapLoader.c__DisplayClass54_0();
		pMVar2 = typeof(MapLoader).static_fields;
		pSVar11 = pMVar2._navMeshSources;
		if (pSVar11 != null) {
			piVar1 = &pSVar11._version;
			*piVar1 = *piVar1 + 1;
			pSVar11._size = 0;
			pSVar3 = pMVar2._navMeshBounds;
			if (pSVar3 != null) {
				if (pSVar3._size == 0) {
					return;
				}
				__this_01 = new HashSet<GameObject>();
				if (__this_00 != null) {
					__this_00.staticObjects = __this_01;
					__this = (Dictionary<int, object>)MapLoader.IdToMapObject;
					if ((__this != null) &&(__this_02 = __this.Values, __this_02 != null)) {
						local_48.GetEnumerator(__this_02);
						local_58 = local_38;
						local_68 = (byte[])local_48._0_8_;
						pSStack_60 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o)local_48._8_8_;
						local_48._0_8_ = null;
						local_48._8_8_ =(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o)local_68;
						while (true) {
							method_00 = MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext;
							bVar7 = local_68.MoveNext();
							mapObject = local_58;
							if (!(bVar7)) break;
							bVar7 = MapLoader.IsNavMeshRegion(mapObject);
							if (!bVar7) {
								if (mapObject == null) {
									throw new NullReferenceException();
								}
								pMVar4 = mapObject.ScriptObject;
								if (pMVar4 == null) {
									throw new NullReferenceException();
								}
								if (pMVar4.Static != false) {
									pUVar10 = mapObject.GameObject;
									if (pUVar10 == null) {
										throw new NullReferenceException();
									}
									pSVar9 = pUVar10.GetComponentsInChildren<Transform>();
									if (pSVar9 == null) {
										throw new NullReferenceException();
									}
									uVar8 = (uint)pSVar9.Length;
									if (0 < (int)uVar8) {
										uVar12 = 0;
										do {
											if (uVar8 <= uVar12) {
												throw new IndexOutOfRangeException();
											}
											if ((Component)pSVar9[(int)uVar12] ==null) {
												throw new NullReferenceException();
											}
											pSVar5 = (HashSet<object>)__this_00.staticObjects ;
											pUVar10 = (pSVar9[(int)uVar12]).gameObject;
											if (pSVar5 == null) {
												throw new NullReferenceException();
											}
											pSVar5.Add((object)pUVar10);
											uVar12 = uVar12 + 1;
											uVar8 = (uint)pSVar9.Length;
										} while ((int)uVar12 < (int)uVar8);
									}
								}
							}
						}
						local_68.Dispose();
						layers = (Int32[])new int[4];
						if (layers != null) {
							uVar8 = (uint)layers.Length;
							if (uVar8 != 0) {
								layers[0] = PhysicsLayer.MapObjectEntities;
								if (((uVar8 != 1) && (layers[1] = PhysicsLayer.MapObjectAll, 2 < uVar8)) &&(layers[2] = PhysicsLayer.MapObjectCharacters, uVar8 != 3)) {
									layers[3] = PhysicsLayer.MapObjectTitans;
									mask = PhysicsLayer.GetMask(layers);
									__this_03 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<NavMeshBuildMarkup>));
									__this_03 = new List<NavMeshBuildMarkup>();
									includedLayerMask = ((LayerMask)mask);
									NavMeshBuilder.CollectSources(null, includedLayerMask, 1, 0, __this_03, MapLoader._navMeshSources);
									pSVar11 = MapLoader._navMeshSources;
									__this_04 = new Func<NavMeshBuildSource, bool>((object)__this_00, (intptr_t)MethodInfo_Map_MapLoader_c__DisplayClass54_0_CollectNavMeshSources_b__0);
									source = Enumerable.Where<NavMeshBuildSource>((System_Collections_Generic_IEnumerable_TSource__o)pSVar11, (System_Func_TSource__bool__o)__this_04);
									pSVar11 = (List<NavMeshBuildSource>)Enumerable.ToList<NavMeshBuildSource>(source);
									pMVar2 = typeof(MapLoader).static_fields;
									pMVar2._navMeshSources = pSVar11;
									pSVar5 = (HashSet<object>)__this_00.staticObjects;
									if (pSVar5 != null) {
										pSVar5.Clear();
										return;
									}
									goto label_059934d2;
								}
							}
							throw new IndexOutOfRangeException();
						}
					}
				}
			}
		}
	label_059934d2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001992")]
	[Address(RVA = "0x58929D0", Offset = "0x58919D0", VA = "0x58929D0")]
	private static bool TryGetRenderBounds(GameObject go, Matrix4x4 worldToLocal, out Bounds bounds)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$TryGetRenderBounds): 56 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		MeshFilter __this;
		Bounds bounds_00;
		Matrix4x4 matrix;
		bool bVar5;
		bool bVar6;
		uint uVar7;
		Object[] pSVar8;
		Object x;
		Mesh __this_00;
		Transform __this_01;
		uint uVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		byte[] auVar14 = new byte[16];
		byte[] auVar15 = new byte[16];
		float fVar16;
		float fVar17;
		byte[] auVar18 = new byte[16];
		byte[] auVar19 = new byte[16];
		float fVar20;
		float fVar21;
		float fVar22;
		float fVar23;
		float fVar27;
		float fVar28;
		byte[] auVar24 = new byte[16];
		byte[] auVar25 = new byte[16];
		float fVar29;
		byte[] auVar26 = new byte[16];
		float fVar30;
		Matrix4x4 local_208;
		float local_1c8;
		float fStack_1c4;
		float fStack_1c0;
		float fStack_1bc;
		Matrix4x4 local_1b8;
		float local_178;
		float local_168;
		float local_158;
		float local_148;
		float local_138;
		byte[] local_128 = new byte[16];
		byte[] local_118 = new byte[16];
		byte[] local_108 = new byte[16];
		float local_f8;
		float local_e8;
		float local_d8;
		float local_c8;
		float fStack_c4;
		float fStack_c0;
		float fStack_bc;
		float local_b8;
		float fStack_b4;
		float fStack_b0;
		float fStack_ac;
		float local_a8;
		float local_98;
		float local_88;
		float fStack_84;
		float fStack_80;
		float fStack_7c;
		float local_78;
		float fStack_74;
		float fStack_70;
		float fStack_6c;
		float local_68;
		float fStack_64;
		float fStack_60;
		float fStack_5c;
		float local_58;
		float fStack_54;
		float fStack_50;
		float fStack_4c;
		Bounds local_48;

		bounds.m_Center.x = 0.0;
		bounds.m_Center.y = 0.0;
		*(ulong)&bounds.m_Center.z = 0;
		bounds.m_Extents.y = 0.0;
		bounds.m_Extents.z = 0.0;
		if (go != null) {
			pSVar8 = go.GetComponentsInChildren<MeshFilter>();
			if (pSVar8 != null) {
				uVar7 = (uint)pSVar8.Length;
				uVar9 = 0;
				if ((int)uVar7 < 1) {
					bVar5 = false;
				}
				else {
					local_1b8.m00 = worldToLocal.m00;
					local_1b8.m10 = worldToLocal.m10;
					local_1b8.m20 = worldToLocal.m20;
					local_1b8.m30 = worldToLocal.m30;
					local_b8 = worldToLocal.m01;
					fStack_b4 = worldToLocal.m11;
					fStack_b0 = worldToLocal.m21;
					fStack_ac = worldToLocal.m31;
					local_1c8 = worldToLocal.m02;
					fStack_1c4 = worldToLocal.m12;
					fStack_1c0 = worldToLocal.m22;
					fStack_1bc = worldToLocal.m32;
					local_c8 = worldToLocal.m03;
					fStack_c4 = worldToLocal.m13;
					fStack_c0 = worldToLocal.m23;
					fStack_bc = worldToLocal.m33;
					bVar5 = false;
					do {
						if (uVar7 <= uVar9) {
							throw new IndexOutOfRangeException();
						}
						__this = (MeshFilter)pSVar8[(int)uVar9];
						if (__this == null) goto label_05992f6e;
						x = (Object)__this.sharedMesh;
						bVar6 = (x == null);
						if (!bVar6) {
							__this_00 = __this.sharedMesh;
							if (__this_00 == null) goto label_05992f6e;
							local_48 = __this_00.bounds;
							__this_01 = __this.transform;
							if (__this_01 == null) goto label_05992f6e;
							local_208 = __this_01.localToWorldMatrix;
							local_a8 = local_208.m01;
							local_98 = local_208.m03;
							fVar21 = local_208.m10;
							fVar12 = local_208.m20;
							fVar10 = local_208.m21;
							fVar11 = local_208.m13;
							fVar20 = local_208.m33;
							fVar16 = local_208.m02;
							fVar23 = local_208.m23;
							fVar27 = local_208.m30;
							fVar28 = local_208.m22;
							fVar29 = local_208.m31;
							fVar30 = local_208.m32;
							fVar13 = local_208.m12;
							fVar17 = local_208.m00;
							fVar22 = local_208.m11;
							if ((typeof(Util)._2).cctor_finished_or_no_cctor == 0) {
								local_d8 = local_208.m30;
								local_e8 = local_208.m31;
								local_f8 = local_208.m32;
								local_108 = ZEXT416((uint)local_208.m33);
								local_118 = ZEXT416((uint)local_208.m23);
								local_128 = ZEXT416((uint)local_208.m13);
								local_138 = local_208.m22;
								local_148 = local_208.m12;
								local_158 = local_208.m02;
								local_168 = local_208.m21;
								local_178 = local_208.m11;
								local_1b8.m03 = local_208.m20;
								local_1b8.m13 = local_208.m30;
								local_1b8.m23 = local_208.m01;
								local_1b8.m33 = local_208.m11;
								local_1b8.m02 = local_208.m10;
								local_1b8.m12 = local_208.m20;
								local_1b8.m22 = local_208.m30;
								local_1b8.m32 = local_208.m01;
								local_1b8.m01 = local_208.m00;
								local_1b8.m11 = local_208.m10;
								local_1b8.m21 = local_208.m20;
								local_1b8.m31 = local_208.m30;
								fVar21 = local_1b8.m02;
								fVar12 = local_1b8.m03;
								fVar10 = local_168;
								fVar11 = (float)local_128._0_4_;
								fVar20 = (float)local_108._0_4_;
								fVar16 = local_158;
								fVar23 = (float)local_118._0_4_;
								fVar27 = local_d8;
								fVar28 = local_138;
								fVar29 = local_e8;
								fVar30 = local_f8;
								fVar13 = local_148;
								fVar17 = local_1b8.m01;
								fVar22 = local_178;
							}
							local_88 = fVar27 * local_c8 + fVar12 * local_1c8 + fVar21 * local_b8 + fVar17 * local_1b8.m00;
							fStack_84 = fVar27 * fStack_c4 + fVar12 * fStack_1c4 + fVar21 * fStack_b4 + fVar17 * local_1b8.m10 ;
							fStack_80 = fVar27 * fStack_c0 + fVar12 * fStack_1c0 + fVar21 * fStack_b0 + fVar17 * local_1b8.m20 ;
							fStack_7c = fVar27 * fStack_bc + fVar12 * fStack_1bc + fVar21 * fStack_ac + fVar17 * local_1b8.m30 ;
							local_78 = fVar29 * local_c8 + fVar10 * local_1c8 + fVar22 * local_b8 + local_a8 * local_1b8.m00;
							fStack_74 = fVar29 * fStack_c4 + fVar10 * fStack_1c4 + fVar22 * fStack_b4 + local_a8 * local_1b8.m10;
							fStack_70 = fVar29 * fStack_c0 + fVar10 * fStack_1c0 + fVar22 * fStack_b0 + local_a8 * local_1b8.m20;
							fStack_6c = fVar29 * fStack_bc + fVar10 * fStack_1bc + fVar22 * fStack_ac + local_a8 * local_1b8.m30;
							local_68 = fVar30 * local_c8 + fVar28 * local_1c8 + fVar13 * local_b8 + fVar16 * local_1b8.m00;
							fStack_64 = fVar30 * fStack_c4 + fVar28 * fStack_1c4 + fVar13 * fStack_b4 + fVar16 * local_1b8.m10 ;
							fStack_60 = fVar30 * fStack_c0 + fVar28 * fStack_1c0 + fVar13 * fStack_b0 + fVar16 * local_1b8.m20 ;
							fStack_5c = fVar30 * fStack_bc + fVar28 * fStack_1bc + fVar13 * fStack_ac + fVar16 * local_1b8.m30 ;
							local_58 = fVar20 * local_c8 + fVar23 * local_1c8 + fVar11 * local_b8 + local_98 * local_1b8.m00;
							fStack_54 = fVar20 * fStack_c4 + fVar23 * fStack_1c4 + fVar11 * fStack_b4 + local_98 * local_1b8.m10;
							fStack_50 = fVar20 * fStack_c0 + fVar23 * fStack_1c0 + fVar11 * fStack_b0 + local_98 * local_1b8.m20;
							fStack_4c = fVar20 * fStack_bc + fVar23 * fStack_1bc + fVar11 * fStack_ac + local_98 * local_1b8.m30;
							matrix.m10 = fStack_84;
							matrix.m00 = local_88;
							matrix.m30 = fStack_7c;
							matrix.m20 = fStack_80;
							matrix.m11 = fStack_74;
							matrix.m01 = local_78;
							matrix.m31 = fStack_6c;
							matrix.m21 = fStack_70;
							matrix.m12 = fStack_64;
							matrix.m02 = local_68;
							matrix.m32 = fStack_5c;
							matrix.m22 = fStack_60;
							matrix.m13 = fStack_54;
							matrix.m03 = local_58;
							matrix.m33 = fStack_4c;
							matrix.m23 = fStack_50;
							bounds_00.m_Center.z = local_48.m_Center.z;
							bounds_00.m_Extents.x = local_48.m_Extents.x;
							bounds_00.m_Center.x = local_48.m_Center.x;
							bounds_00.m_Center.y = local_48.m_Center.y;
							bounds_00.m_Extents.y = local_48.m_Extents.y;
							bounds_00.m_Extents.z = local_48.m_Extents.z;
							local_208 = Util.TransformBounds(bounds_00, matrix);
							if (bVar5) {
								fVar11 = local_208.m20 - local_208.m11;
								fVar20 = local_208.m11 + local_208.m20;
								fVar21 = bounds.m_Center.z;
								fVar12 = bounds.m_Extents.z;
								fVar10 = fVar21 - fVar12;
								if (fVar11 <= fVar10) {
									fVar10 = fVar11;
								}
								fVar21 = fVar21 + fVar12;
								if (fVar21 <= fVar11) {
									fVar21 = fVar11;
								}
								fVar21 = (fVar21 - fVar10) * 0.5;
								fVar12 = (fVar10 + fVar21) - fVar21;
								if (fVar20 <= fVar12) {
									fVar12 = fVar20;
								}
								fVar21 = fVar10 + fVar21 + fVar21;
								if (fVar21 <= fVar20) {
									fVar21 = fVar20;
								}
								fVar21 = (fVar21 - fVar12) * 0.5;
								bounds.m_Extents.z = fVar21;
								auVar18._0_4_ = local_208.m00 - local_208.m30;
								auVar18._4_4_ = local_208.m10 - local_208.m01;
								auVar18._8_4_ = local_208.m20 - local_208.m30;
								auVar18._12_4_ = local_208.m30 - local_208.m11;
								uVar1 = bounds.m_Center.x;
								uVar3 = bounds.m_Center.y;
								uVar2 = bounds.m_Extents.x;
								uVar4 = bounds.m_Extents.y;
								auVar24._0_4_ = (float)uVar1 - (float)uVar2;
								auVar24._4_4_ = (float)uVar3 - (float)uVar4;
								auVar24._8_8_ = 0;
								auVar25 = minps(auVar24, auVar18);
								auVar14._0_4_ = (float)uVar1 + (float)uVar2;
								auVar14._4_4_ = (float)uVar3 + (float)uVar4;
								auVar14._8_8_ = 0;
								auVar15 = maxps(auVar14, auVar18);
								fVar10 = (auVar15._0_4_ - auVar25._0_4_) * 0.5;
								fVar11 = (auVar15._4_4_ - auVar25._4_4_) * 0.5;
								fVar20 = (auVar15._8_4_ - auVar25._8_4_) * 0.0;
								fVar16 = (auVar15._12_4_ - auVar25._12_4_) * 0.0;
								fVar23 = auVar25._0_4_ + fVar10;
								fVar27 = auVar25._4_4_ + fVar11;
								fVar28 = auVar25._8_4_ + fVar20;
								fVar29 = auVar25._12_4_ + fVar16;
								auVar19._0_4_ = fVar23 - fVar10;
								auVar19._4_4_ = fVar27 - fVar11;
								auVar19._8_4_ = fVar28 - fVar20;
								auVar19._12_4_ = fVar29 - fVar16;
								auVar15._4_4_ = local_208.m01 + local_208.m10;
								auVar15._0_4_ = local_208.m30 + local_208.m00;
								auVar15._8_4_ = local_208.m30 + local_208.m20;
								auVar15._12_4_ = local_208.m11 + local_208.m30;
								auVar15 = minps(auVar19, auVar15);
								auVar26._0_4_ = fVar23 + fVar10;
								auVar26._4_4_ = fVar27 + fVar11;
								auVar26._8_4_ = fVar28 + fVar20;
								auVar26._12_4_ = fVar29 + fVar16;
								auVar25._4_4_ = local_208.m01 + local_208.m10;
								auVar25._0_4_ = local_208.m30 + local_208.m00;
								auVar25._8_4_ = local_208.m30 + local_208.m20;
								auVar25._12_4_ = local_208.m11 + local_208.m30;
								auVar25 = maxps(auVar26, auVar25);
								fVar10 = (auVar25._0_4_ - auVar15._0_4_) * 0.5;
								fVar11 = (auVar25._4_4_ - auVar15._4_4_) * 0.5;
								bounds.m_Extents.x = fVar10;
								bounds.m_Extents.y = fVar11;
								bounds.m_Center.x = fVar10 + auVar15._0_4_;
								bounds.m_Center.y = fVar11 + auVar15._4_4_;
								bounds.m_Center.z = fVar21 + fVar12;
							}
							else {
								bounds.m_Center.x = local_208.m00;
								bounds.m_Center.y = local_208.m10;
								bounds.m_Center.z = local_208.m20;
								bounds.m_Extents.x = local_208.m30;
								bounds.m_Extents.y = local_208.m01;
								bounds.m_Extents.z = local_208.m11;
								bVar5 = true;
							}
						}
						uVar9 = uVar9 + 1;
						uVar7 = (uint)pSVar8.Length;
					} while ((int)uVar9 < (int)uVar7);
				}
				return bVar5;
			}
		}
	label_05992f6e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001993")]
	[Address(RVA = "0x5893560", Offset = "0x5892560", VA = "0x5893560")]
	private static AsyncOperation CreateNavMeshSurface(int agentID, Bounds bounds, uint maxJobWorkers)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$CreateNavMeshSurface): 17 lines keep C-only constructs
		int piVar1;
		MapLoader.NavMeshBuild pMVar2;
		uint uVar3;
		List<MapLoader.NavMeshBuild> __this;
		MapLoader.NavMeshBuild[] pMVar4;
		NavMeshBuildSettings settings;
		NavMeshBuildSettings buildSettings;
		MapLoader.NavMeshBuild item;
		MapLoader.NavMeshBuild pMVar5;
		NavMeshData __this_00;
		AsyncOperation pUVar7;
		NavMeshBuildSettings local_168;
		NavMeshBuildSettings UStack_120;
		Vector3[] aUStack_e0 = new Vector3[2];
		MapLoader.NavMeshBuild local_c8;
		NavMeshBuildSettings local_60;

		__this_00 = new NavMeshData();
		local_60 = NavMesh.GetSettingsByID(agentID);
		local_168.m_BuildHeightMesh = local_60.m_BuildHeightMesh;
		local_168.m_MaxJobWorkers = local_60.m_MaxJobWorkers;
		local_168.m_PreserveTilesOutsideBounds = local_60.m_PreserveTilesOutsideBounds;
		local_168.m_Debug.m_Flags = local_60.m_Debug.m_Flags;
		local_168._61_3_ = local_60._61_3_;
		local_168.m_OverrideVoxelSize = local_60.m_OverrideVoxelSize;
		local_168.m_VoxelSize = local_60.m_VoxelSize;
		local_168.m_OverrideTileSize = local_60.m_OverrideTileSize;
		local_168.m_TileSize = local_60.m_TileSize;
		local_168.m_AgentClimb = local_60.m_AgentClimb;
		local_168.m_LedgeDropHeight = local_60.m_LedgeDropHeight;
		local_168.m_MaxJumpAcrossDistance = local_60.m_MaxJumpAcrossDistance;
		local_168.m_MinRegionArea = local_60.m_MinRegionArea;
		local_168.m_AgentTypeID = local_60.m_AgentTypeID;
		local_168.m_AgentRadius = local_60.m_AgentRadius;
		local_168.m_AgentHeight = local_60.m_AgentHeight;
		local_168.m_AgentSlope = local_60.m_AgentSlope;
		local_168.maxJobWorkers = maxJobWorkers;
		local_168.overrideTileSize = true;
		local_168.tileSize = 0x100;
		local_168.overrideVoxelSize = true;
		local_168.voxelSize = 4.0;
		local_168.minRegionArea = 100.0;
		local_168.buildHeightMesh = true;
		__this = MapLoader._navMeshBuilds;
		local_c8.Bounds.m_Center.z = 0.0;
		local_c8.Bounds.m_Extents.x = 0.0;
		local_c8.Bounds.m_Extents.y = 0.0;
		local_c8.Bounds.m_Extents.z = 0.0;
		local_c8.Settings.m_PreserveTilesOutsideBounds = 0;
		local_c8.Settings.m_Debug.m_Flags =(NavMeshBuildDebugSettings)0x0;
		local_c8.Settings._61_3_ = 0;
		local_c8.Bounds.m_Center.x = 0.0;
		local_c8.Bounds.m_Center.y = 0.0;
		local_c8.Settings.m_OverrideTileSize = 0;
		local_c8.Settings.m_TileSize = 0;
		local_c8.Settings.m_BuildHeightMesh = 0;
		local_c8.Settings.m_MaxJobWorkers = 0;
		local_c8.Settings.m_MaxJumpAcrossDistance = 0.0;
		local_c8.Settings.m_MinRegionArea = 0.0;
		local_c8.Settings.m_OverrideVoxelSize = 0;
		local_c8.Settings.m_VoxelSize = 0.0;
		local_c8.Settings.m_AgentHeight = 0.0;
		local_c8.Settings.m_AgentSlope = 0.0;
		local_c8.Settings.m_AgentClimb = 0.0;
		local_c8.Settings.m_LedgeDropHeight = 0.0;
		local_c8.Data = null;
		local_c8.Settings.m_AgentTypeID = 0;
		local_c8.Settings.m_AgentRadius = 0.0;
		settings.m_AgentHeight = local_168.m_AgentHeight;
		settings.m_AgentSlope = local_168.m_AgentSlope;
		settings.m_AgentTypeID = local_168.m_AgentTypeID;
		settings.m_AgentRadius = local_168.m_AgentRadius;
		settings.m_AgentClimb = local_168.m_AgentClimb;
		settings.m_LedgeDropHeight = local_168.m_LedgeDropHeight;
		settings.m_MaxJumpAcrossDistance = local_168.m_MaxJumpAcrossDistance;
		settings.m_MinRegionArea = local_168.m_MinRegionArea;
		settings.m_OverrideVoxelSize = local_168.m_OverrideVoxelSize;
		settings.m_VoxelSize = local_168.m_VoxelSize;
		settings.m_OverrideTileSize = local_168.m_OverrideTileSize;
		settings.m_TileSize = local_168.m_TileSize;
		settings.m_BuildHeightMesh = local_168.m_BuildHeightMesh;
		settings.m_MaxJobWorkers = local_168.m_MaxJobWorkers;
		settings.m_PreserveTilesOutsideBounds = local_168.m_PreserveTilesOutsideBounds;
		settings.m_Debug.m_Flags = local_168.m_Debug.m_Flags;
		settings._61_3_ = local_168._61_3_;
		local_c8 = new MapLoader.NavMeshBuild(__this_00, settings, bounds);
		if (__this != null) {
			aUStack_e0[0].z = local_c8.Bounds.m_Center.z;
			aUStack_e0[1].x = local_c8.Bounds.m_Extents.x;
			aUStack_e0[1].y = local_c8.Bounds.m_Extents.y;
			aUStack_e0[1].z = local_c8.Bounds.m_Extents.z;
			UStack_120.m_PreserveTilesOutsideBounds = local_c8.Settings.m_PreserveTilesOutsideBounds;
			UStack_120.m_Debug.m_Flags = local_c8.Settings.m_Debug.m_Flags;
			UStack_120._61_3_ = local_c8.Settings._61_3_;
			aUStack_e0[0].x = local_c8.Bounds.m_Center.x;
			aUStack_e0[0].y = local_c8.Bounds.m_Center.y;
			UStack_120.m_OverrideTileSize = local_c8.Settings.m_OverrideTileSize;
			UStack_120.m_TileSize = local_c8.Settings.m_TileSize;
			UStack_120.m_BuildHeightMesh = local_c8.Settings.m_BuildHeightMesh;
			UStack_120.m_MaxJobWorkers = local_c8.Settings.m_MaxJobWorkers;
			UStack_120.m_MaxJumpAcrossDistance = local_c8.Settings.m_MaxJumpAcrossDistance;
			UStack_120.m_MinRegionArea = local_c8.Settings.m_MinRegionArea;
			UStack_120.m_OverrideVoxelSize = local_c8.Settings.m_OverrideVoxelSize;
			UStack_120.m_VoxelSize = local_c8.Settings.m_VoxelSize;
			UStack_120.m_AgentHeight = local_c8.Settings.m_AgentHeight;
			UStack_120.m_AgentSlope = local_c8.Settings.m_AgentSlope;
			UStack_120.m_AgentClimb = local_c8.Settings.m_AgentClimb;
			UStack_120.m_LedgeDropHeight = local_c8.Settings.m_LedgeDropHeight;
			UStack_120.m_AgentTypeID = local_c8.Settings.m_AgentTypeID;
			UStack_120.m_AgentRadius = local_c8.Settings.m_AgentRadius;
			piVar1 = &__this._version;
			*piVar1 = *piVar1 + 1;
			pMVar4 = __this._items;
			if (pMVar4 != null) {
				uVar3 = __this._size;
				if (uVar3 < (uint)pMVar4.Length) {
					__this._size = uVar3 + 1;
					pMVar5 = &pMVar4[(int)uVar3];
					*(ulong)((long)&(pMVar5.Bounds).m_Center + 8) = local_c8.Bounds._8_8_;
					*(ulong)((long)&(pMVar5.Bounds).m_Extents + 4) = local_c8.Bounds.m_Extents._4_8_;
					pMVar5 = &pMVar4[(int)uVar3];
					(pMVar5.Settings).m_PreserveTilesOutsideBounds = local_c8.Settings.m_PreserveTilesOutsideBounds;
					(pMVar5.Settings).m_Debug =(NavMeshBuildDebugSettings)local_c8.Settings.m_Debug.m_Flags;
					*(undefined3)&(pMVar5.Settings).field_0x3d = local_c8.Settings._61_3_;
					*(ulong)&(pMVar5.Bounds).m_Center = local_c8.Bounds.m_Center._0_8_;
					pMVar5 = &pMVar4[(int)uVar3];
					(pMVar5.Settings).m_OverrideTileSize = local_c8.Settings.m_OverrideTileSize;
					(pMVar5.Settings).m_TileSize = local_c8.Settings.m_TileSize;
					(pMVar5.Settings).m_BuildHeightMesh = local_c8.Settings.m_BuildHeightMesh;
					(pMVar5.Settings).m_MaxJobWorkers = local_c8.Settings.m_MaxJobWorkers;
					pMVar5 = &pMVar4[(int)uVar3];
					(pMVar5.Settings).m_MaxJumpAcrossDistance = local_c8.Settings.m_MaxJumpAcrossDistance;
					(pMVar5.Settings).m_MinRegionArea = local_c8.Settings.m_MinRegionArea;
					(pMVar5.Settings).m_OverrideVoxelSize = local_c8.Settings.m_OverrideVoxelSize;
					(pMVar5.Settings).m_VoxelSize = local_c8.Settings.m_VoxelSize;
					pMVar5 = &pMVar4[(int)uVar3];
					(pMVar5.Settings).m_AgentHeight = local_c8.Settings.m_AgentHeight;
					(pMVar5.Settings).m_AgentSlope = local_c8.Settings.m_AgentSlope;
					(pMVar5.Settings).m_AgentClimb = local_c8.Settings.m_AgentClimb;
					(pMVar5.Settings).m_LedgeDropHeight = local_c8.Settings.m_LedgeDropHeight;
					pMVar2 = pMVar4.m_Items + (int)uVar3;
					pMVar2.Data = local_c8.Data;
					pMVar2.Settings.m_AgentTypeID = local_c8.Settings.m_AgentTypeID;
					pMVar2.Settings.m_AgentRadius = local_c8.Settings.m_AgentRadius;
				}
				else {
					item.Settings.m_AgentTypeID = local_c8.Settings.m_AgentTypeID;
					item.Settings.m_AgentRadius = local_c8.Settings.m_AgentRadius;
					item.Data = local_c8.Data;
					item.Settings.m_AgentHeight = local_c8.Settings.m_AgentHeight;
					item.Settings.m_AgentSlope = local_c8.Settings.m_AgentSlope;
					item.Settings.m_AgentClimb = local_c8.Settings.m_AgentClimb;
					item.Settings.m_LedgeDropHeight = local_c8.Settings.m_LedgeDropHeight;
					item.Settings.m_MaxJumpAcrossDistance = local_c8.Settings.m_MaxJumpAcrossDistance;
					item.Settings.m_MinRegionArea = local_c8.Settings.m_MinRegionArea;
					item.Settings.m_OverrideVoxelSize = local_c8.Settings.m_OverrideVoxelSize;
					item.Settings.m_VoxelSize = local_c8.Settings.m_VoxelSize;
					item.Settings.m_OverrideTileSize = local_c8.Settings.m_OverrideTileSize;
					item.Settings.m_TileSize = local_c8.Settings.m_TileSize;
					item.Settings.m_BuildHeightMesh = local_c8.Settings.m_BuildHeightMesh;
					item.Settings.m_MaxJobWorkers = local_c8.Settings.m_MaxJobWorkers;
					item.Settings.m_PreserveTilesOutsideBounds = local_c8.Settings.m_PreserveTilesOutsideBounds;
					item.Settings.m_Debug.m_Flags = local_c8.Settings.m_Debug.m_Flags;
					item.Settings._61_3_ = local_c8.Settings._61_3_;
					item.Bounds.m_Center.x = local_c8.Bounds.m_Center.x;
					item.Bounds.m_Center.y = local_c8.Bounds.m_Center.y;
					item.Bounds.m_Center.z = local_c8.Bounds.m_Center.z;
					item.Bounds.m_Extents.x = local_c8.Bounds.m_Extents.x;
					item.Bounds.m_Extents.y = local_c8.Bounds.m_Extents.y;
					item.Bounds.m_Extents.z = local_c8.Bounds.m_Extents.z;
					__this.AddWithResize(item);
				}
				NavMesh.AddNavMeshData(__this_00);
				buildSettings.m_AgentHeight = local_168.m_AgentHeight;
				buildSettings.m_AgentSlope = local_168.m_AgentSlope;
				buildSettings.m_AgentTypeID = local_168.m_AgentTypeID;
				buildSettings.m_AgentRadius = local_168.m_AgentRadius;
				buildSettings.m_AgentClimb = local_168.m_AgentClimb;
				buildSettings.m_LedgeDropHeight = local_168.m_LedgeDropHeight;
				buildSettings.m_MaxJumpAcrossDistance = local_168.m_MaxJumpAcrossDistance;
				buildSettings.m_MinRegionArea = local_168.m_MinRegionArea;
				buildSettings.m_OverrideVoxelSize = local_168.m_OverrideVoxelSize;
				buildSettings.m_VoxelSize = local_168.m_VoxelSize;
				buildSettings.m_OverrideTileSize = local_168.m_OverrideTileSize;
				buildSettings.m_TileSize = local_168.m_TileSize;
				buildSettings.m_BuildHeightMesh = local_168.m_BuildHeightMesh;
				buildSettings.m_MaxJobWorkers = local_168.m_MaxJobWorkers;
				buildSettings.m_PreserveTilesOutsideBounds = local_168.m_PreserveTilesOutsideBounds;
				buildSettings.m_Debug.m_Flags = local_168.m_Debug.m_Flags;
				buildSettings._61_3_ = local_168._61_3_;
				pUVar7 = NavMeshBuilder.UpdateNavMeshDataAsync(__this_00, buildSettings, MapLoader._navMeshSources, bounds);
				return pUVar7;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001994")]
	[Address(RVA = "0x58808F0", Offset = "0x587F8F0", VA = "0x58808F0")]
	public static void RemoveNavMeshSources(HashSet<Component> components)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$RemoveNavMeshSources): 5 lines keep C-only constructs
		sbyte cVar1;
		List<NavMeshBuildSource> __this;
		MapLoader __this_00;
		Il2CppClass klass;
		int iVar2;
		MapLoader.c__DisplayClass57_0 __this_01;
		Predicate<T> match;
		Map_MapLoader_StaticFields pMVar3;
		MapLoader.d__58<RefreshNavMesh> __this_02;
		Coroutine pUVar4;

		__this_01 = new MapLoader.c__DisplayClass57_0();
		if (__this_01 == null) goto label_05980b9e;
		__this_01.components = components;
		if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07545a2d != false) goto label_0598099c;
	label_059809cc: ;
			Il2CppMethodInitialized_07545a2d = true;
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor != 0) goto label_059809a9;
	label_059809f8: ;
			pMVar3 = typeof(MapLoader).static_fields;
			cVar1 = pMVar3._hasNavMeshData;
		}
		else {
			if (Il2CppMethodInitialized_07545a2d == false) goto label_059809cc;
	label_0598099c: ;
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) goto label_059809f8;
	label_059809a9: ;
			pMVar3 = typeof(MapLoader).static_fields;
			cVar1 = pMVar3._hasNavMeshData;
		}
		if (cVar1 != false) {
			if (((typeof(MapLoader))._2).cctor_finished_or_no_cctor == 0) {
				pMVar3 = typeof(MapLoader).static_fields;
			}
			if (pMVar3._navMeshBounds == null) {
	label_05980b9e: ;
				throw new NullReferenceException();
			}
			if (0 < pMVar3._navMeshBounds._size) {
				__this = MapLoader._navMeshSources;
				match = new Predicate<NavMeshBuildSource>((object)__this_01, (intptr_t)MethodInfo_Map_MapLoader_c__DisplayClass57_0_RemoveNavMeshSources_b__0);
				if (__this == null) goto label_05980b9e;
				iVar2 = __this.RemoveAll(match);
				klass = typeof(MapLoader);
				if (iVar2 != 0) {
					if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
						klass = typeof(MapLoader);
						pMVar3 = typeof(MapLoader).static_fields;
						pMVar3._navMeshModified = true;
						pMVar3._navMeshRefreshPending = true;
						pUVar4 = pMVar3._navMeshRefresh;
					}
					else {
						pMVar3 = typeof(MapLoader).static_fields;
						pMVar3._navMeshModified = true;
						pMVar3._navMeshRefreshPending = true;
						pUVar4 = pMVar3._navMeshRefresh;
					}
					if (pUVar4 == null) {
						if ((klass._2).cctor_finished_or_no_cctor == 0) {
							pMVar3 = typeof(MapLoader).static_fields;
						}
						__this_00 = pMVar3._instance;
						__this_02 = new MapLoader.d__58<RefreshNavMesh>(0);
						if (__this_00 != null) {
							pUVar4 = __this_00.StartCoroutine((IEnumerator)__this_02);
							pMVar3 = typeof(MapLoader).static_fields;
							pMVar3._navMeshRefresh = pUVar4;
							return;
						}
						goto label_05980b9e;
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x6001995")]
	[Address(RVA = "0x5893910", Offset = "0x5892910", VA = "0x5893910")]
	[IteratorStateMachine(typeof(_003CRefreshNavMesh_003Ed__58))]
	private static IEnumerator RefreshNavMesh()
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$RefreshNavMesh): clean
		MapLoader.d__58<RefreshNavMesh> __this;

		__this = new MapLoader.d__58<RefreshNavMesh>(0);
		return (IEnumerator)__this;
	}

	[Token(Token = "0x6001996")]
	[Address(RVA = "0x58904A0", Offset = "0x588F4A0", VA = "0x58904A0")]
	private static void StopNavMeshRefresh()
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$StopNavMeshRefresh): clean
		uint uVar1;
		Coroutine pUVar2;
		Map_MapLoader_StaticFields pMVar3;

		if (Il2CppMethodInitialized_07545a47 == false) {
			Il2CppMethodInitialized_07545a47 = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pMVar3 = typeof(MapLoader).static_fields;
			pUVar2 = pMVar3._navMeshRefresh;
		}
		else {
			pMVar3 = (typeof(MapLoader)).static_fields;
			pUVar2 = pMVar3._navMeshRefresh;
		}
		if (pUVar2 == null) {
			uVar1 = ((typeof(MapLoader))._2).cctor_finished_or_no_cctor;
		}
		else {
			if (((typeof(MapLoader))._2).cctor_finished_or_no_cctor == 0) {
				pMVar3 = typeof(MapLoader).static_fields;
			}
			if (pMVar3._instance == null) {
				throw new NullReferenceException();
			}
			(pMVar3._instance).StopCoroutine(pMVar3._navMeshRefresh);
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pMVar3 = typeof(MapLoader).static_fields;
		pMVar3._navMeshRefresh = null;
		MapLoader._navMeshRefreshPending = false;
		return;
	}

	[Token(Token = "0x6001997")]
	[Address(RVA = "0x5893950", Offset = "0x5892950", VA = "0x5893950")]
	[AsyncStateMachine(typeof(_003CUpdateNavMesh_003Ed__61))]
	public static Task UpdateNavMesh()
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$UpdateNavMesh): 2 lines keep C-only constructs
		AsyncTaskMethodBuilder __this;
		Task pSVar1;
		MapLoader.d__61<UpdateNavMesh> local_48;
		AsyncTaskMethodBuilder local_20;

		local_48.__t__builder.m_builder.m_coreState.m_defaultContextAction =null;
		local_48.__t__builder.m_builder.m_task = null;
		local_48.__1__state = 0;
		local_48._4_4_ = 0;
		local_48.__t__builder.m_builder.m_coreState.m_stateMachine =null;
		local_48.__u__1.m_task =(TaskAwaiter)null;
		local_20 = AsyncTaskMethodBuilder.Create();
		__this = &local_48.__t__builder;
		local_48.__t__builder.m_builder.m_task = local_20.m_builder.m_task;
		local_48.__t__builder.m_builder.m_coreState.m_stateMachine = local_20.m_builder.m_coreState.m_stateMachine;
		local_48.__t__builder.m_builder.m_coreState.m_defaultContextAction = local_20.m_builder.m_coreState.m_defaultContextAction;
		local_48.__1__state = -1;
		__this.Start<MapLoader._UpdateNavMesh_d__61>(ref local_48);
		return pSVar1;
	}

	[Token(Token = "0x6001998")]
	[Address(RVA = "0x5893A10", Offset = "0x5892A10", VA = "0x5893A10")]
	[AsyncStateMachine(typeof(_003CUpdateAllNavMeshes_003Ed__62))]
	public Task UpdateAllNavMeshes()
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$UpdateAllNavMeshes): 2 lines keep C-only constructs
		AsyncTaskMethodBuilder __this_00;
		Task pSVar1;
		MapLoader.d__62<UpdateAllNavMeshes> local_58;
		AsyncTaskMethodBuilder local_28;

		local_58.__4__this = null;
		local_58.__u__1.m_task =(TaskAwaiter)null;
		local_58.__t__builder.m_builder.m_coreState.m_defaultContextAction =null;
		local_58.__t__builder.m_builder.m_task = null;
		local_58.__1__state = 0;
		local_58._4_4_ = 0;
		local_58.__t__builder.m_builder.m_coreState.m_stateMachine =null;
		local_28 = AsyncTaskMethodBuilder.Create();
		__this_00 = &local_58.__t__builder;
		local_58.__t__builder.m_builder.m_task = local_28.m_builder.m_task;
		local_58.__t__builder.m_builder.m_coreState.m_stateMachine = local_28.m_builder.m_coreState.m_stateMachine;
		local_58.__t__builder.m_builder.m_coreState.m_defaultContextAction = local_28.m_builder.m_coreState.m_defaultContextAction;
		local_58.__4__this = this;
		local_58.__1__state = -1;
		__this_00.Start<MapLoader._UpdateAllNavMeshes_d__62>(ref local_58);
		return pSVar1;
	}

	[Token(Token = "0x6001999")]
	[Address(RVA = "0x5893AE0", Offset = "0x5892AE0", VA = "0x5893AE0")]
	[AsyncStateMachine(typeof(_003CGenerateNavMesh_003Ed__63))]
	private Task GenerateNavMesh()
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$GenerateNavMesh): 2 lines keep C-only constructs
		AsyncTaskMethodBuilder __this_00;
		Task pSVar1;
		MapLoader.d__63<GenerateNavMesh> local_78;
		AsyncTaskMethodBuilder local_28;

		local_78.__7__wrap1._index = 0;
		local_78.__7__wrap1._version = 0;
		local_78.__7__wrap1._current = null;
		local_78.__4__this = null;
		local_78.__7__wrap1._list = null;
		local_78.__t__builder.m_builder.m_coreState.m_defaultContextAction =null;
		local_78.__t__builder.m_builder.m_task = null;
		local_78.__1__state = 0;
		local_78._4_4_ = 0;
		local_78.__t__builder.m_builder.m_coreState.m_stateMachine =null;
		local_78.__u__1._awaited = (Awaitable.Awaiter)null;
		local_28 = AsyncTaskMethodBuilder.Create();
		__this_00 = &local_78.__t__builder;
		local_78.__t__builder.m_builder.m_task = local_28.m_builder.m_task;
		local_78.__t__builder.m_builder.m_coreState.m_stateMachine = local_28.m_builder.m_coreState.m_stateMachine;
		local_78.__t__builder.m_builder.m_coreState.m_defaultContextAction = local_28.m_builder.m_coreState.m_defaultContextAction;
		local_78.__4__this = this;
		local_78.__1__state = -1;
		__this_00.Start<MapLoader._GenerateNavMesh_d__63>(ref local_78);
		return pSVar1;
	}

	[Token(Token = "0x600199A")]
	[Address(RVA = "0x5893BC0", Offset = "0x5892BC0", VA = "0x5893BC0")]
	private void Batch()
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$Batch): 46 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		Dictionary<int, object> pSVar4;
		MapScriptBaseObject pMVar5;
		String shader;
		Component __this_00;
		List<string> __this_01;
		Object[] pSVar6;
		Dictionary<GameObject, Transform> __this_02;
		bool bVar8;
		int iVar9;
		int iVar10;
		Dictionary<string, GameObject> __this_03;
		Dictionary<string, int> pSVar11;
		GameObject pUVar12;
		GameObject pUVar13;
		Transform pUVar14;
		Transform pUVar15;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o pSVar16;
		MapObject pMVar17;
		String[] pSVar18;
		String pSVar19;
		Object[] pSVar20;
		Object pUVar21;
		Material[] pUVar22;
		Object pUVar23;
		Mesh pUVar24;
		Material pUVar25;
		String pSVar26;
		List<GameObject> pSVar27;
		List<object> pSVar28;
		Dictionary<object, object> pSVar29;
		Dictionary<string, List<GameObject>> __this_04;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		Vector3 UVar30;
		uint uStack_128;
		int iStack_124;
		byte[] auStack_120 = new byte[16];
		Object pUStack_110;
		byte[] auStack_108 = new byte[16];
		Dictionary<string, GameObject> pSStack_f8;
		Dictionary<string, List<GameObject>> pSStack_f0;
		byte[] auStack_e8 = new byte[8];
		Object pUStack_d8;
		Dictionary<string, int> pSStack_c8;
		String pSStack_c0;
		byte[] auStack_b8 = new byte[8];
		Object pUStack_a8;
		byte[] auStack_98 = new byte[8];
		Object pUStack_88;
		byte[] auStack_78 = new byte[8];
		Object pUStack_68;
		Dictionary<GameObject, Transform> pSStack_58;
		GameObject pUStack_50;
		GameObject pUStack_48;

		auStack_78 = (byte[])0x0;
		pUStack_68 = null;
		uStack_128 = 0;
		iStack_124 = 0;
		auStack_b8 = (byte[])0x0;
		pUStack_a8 = null;
		auStack_98 = (byte[])0x0;
		pUStack_88 = null;
		auStack_e8 = (byte[])0x0;
		pUStack_d8 = null;
		__this_03 = new Dictionary<string, GameObject>();
		pSStack_f0 = il2cpp_codegen_object_new(typeof(Dictionary<string, List<GameObject>>));
		pSStack_f0 = new Dictionary<object, object>();
		pSStack_58 = new Dictionary<GameObject, Transform>() ;
		pSVar11 = new Dictionary<string, int>();
		pUVar12 = new GameObject("Batched Scene");
		pUVar13 = new GameObject("Original Objects");
		if (pUVar13 != null) {
			pUStack_48 = pUVar13;
			pUVar14 = pUVar13.transform;
			if ((pUVar12 != null) &&(pUVar15 = pUVar12.transform, pUVar14 != null)) {
				pUVar14.SetParent(pUVar15);
				pUVar13 = new GameObject("Combined Meshes");
				if (pUVar13 != null) {
					pUVar14 = pUVar13.transform;
					pUVar15 = pUVar12.transform;
					if (pUVar14 != null) {
						pUVar14.SetParent(pUVar15);
						__this_04 = pSStack_f0;
						pSVar4 = (Dictionary<int, object>)MapLoader.IdToMapObject;
						if (pSVar4 != null) {
							pSStack_c8 = pSVar11;
							pUStack_50 = pUVar13;
							pSVar16 = pSVar4.Keys;
							if (pSVar16 != null) {
								auStack_120.GetEnumerator(pSVar16);
								pUStack_68 = pUStack_110;
								auStack_78 = (byte[])auStack_120._0_8_;
								auStack_120._0_8_ = null;
								auStack_120._8_8_ = auStack_78;
								pSStack_f8 = __this_03;
								while (bVar8 = auStack_78.MoveNext()) {
									iVar9 = (int32_t)pUStack_68;
									pSVar4 = (Dictionary<int, object>)MapLoader.IdToMapObject;
									if (pSVar4 == null) {
										throw new NullReferenceException();
									}
									pMVar17 = pSVar4.get_Item(iVar9);
									if (pMVar17 == null) {
										throw new NullReferenceException();
									}
									pMVar5 = pMVar17.ScriptObject;
									if (pMVar5 == null) {
										throw new NullReferenceException();
									}
									if ((pMVar5.Parent < 0) && (pMVar5.Static != false)) {
										bVar2 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
										if (((pMVar5.klass._2).typeHierarchyDepth < bVar2) ||((pMVar5.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(MapScriptSceneObject))) {
											throw new InvalidCastException();
										}
										pSVar19 = (*(ulong)((sbyte)pMVar5 + 0x78));
										if (pSVar19 == null) {
											throw new NullReferenceException();
										}
										shader = pSVar19.fields;
										bVar8 = MapObjectShader.IsLegacyShader((String)shader);
										if (!bVar8) {
											bVar8 = ((String)shader == MapObjectShader.Transparent);
											if (!bVar8) {
												pUVar12 = pMVar17.GameObject;
												if (pUVar12 == null) {
													throw new NullReferenceException();
												}
												pUVar14 = pUVar12.transform;
												if (pUVar14 == null) {
													throw new NullReferenceException();
												}
												UVar30 = pUVar14.position;
												auStack_108._8_4_ = extraout_XMM0_Dc;
												auStack_108._0_8_ = UVar30._0_8_;
												auStack_108._12_4_ = extraout_XMM0_Dd;
												pSStack_c0 = (String)CONCAT44(pSStack_c0._4_4_, UVar30.z);
												pSVar18 = (String[])new string[5];
												uStack_128 = (uint)((float)auStack_108._0_4_ / 1000.0);
												pSVar19 = uStack_128.ToString();
												if (pSVar18 == null) {
													throw new NullReferenceException();
												}
												if ((int)pSVar18.Length == 0) {
													throw new IndexOutOfRangeException();
												}
												pSVar18[0] = pSVar19;
												if ((pSVar18.Length & 0xfffffffe) == 0) {
													throw new IndexOutOfRangeException();
												}
												pSVar18[1] = "-";
												uStack_128 = (uint)((float)auStack_108._4_4_ / 1000.0);
												pSVar19 = uStack_128.ToString();
												if ((uint)pSVar18.Length < 3) {
													throw new IndexOutOfRangeException();
												}
												pSVar18[2] = pSVar19;
												if ((pSVar18.Length & 0xfffffffc) == 0) {
													throw new IndexOutOfRangeException();
												}
												pSVar18[3] = "-";
												uStack_128 = (uint)(pSStack_c0._0_4_ / 1000.0);
												pSVar19 = uStack_128.ToString();
												if ((uint)pSVar18.Length < 5) {
													throw new IndexOutOfRangeException();
												}
												pSVar18[4] = pSVar19;
												pSStack_c0 = String.Concat(pSVar18);
												pUVar12 = pMVar17.GameObject;
												if (pUVar12 == null) {
													throw new NullReferenceException();
												}
												pSVar20 = pUVar12.GetComponentsInChildren<MeshFilter>();
												uStack_128 = 0;
												if (pSVar20 == null) {
													throw new NullReferenceException();
												}
												uVar3 = (uint)pSVar20.Length;
												if (0 < (int)uVar3) {
													do {
														if (uVar3 <= uStack_128) {
															throw new IndexOutOfRangeException();
														}
														__this_00 = (Component)pSVar20[(int)uStack_128];
														if (__this_00 == null) {
															throw new NullReferenceException();
														}
														pUVar21 = (Object)__this_00.GetComponent<Renderer>();
														bVar8 = (pUVar21 == null);
														if (!bVar8) {
															if (pUVar21 == null) {
																throw new NullReferenceException();
															}
															pUVar22 = pUVar21.sharedMaterials;
															if (pUVar22 == null) {
																throw new NullReferenceException();
															}
															if (((int)pUVar22.Length < 2) &&(bVar8 = pUVar21.HasPropertyBlock(), !bVar8)) {
																pUVar23 = (Object)__this_00.sharedMesh;
																bVar8 = (pUVar23 == null);
																if (bVar8) {
																	pMVar5 = pMVar17.ScriptObject;
																	if (pMVar5 == null) {
																		throw new NullReferenceException();
																	}
																	pSVar19 = String.Concat("Map load error: object ", pMVar5.Name, " with missing mesh");
																	DebugConsole.Log(pSVar19, true);
																	pMVar5 = pMVar17.ScriptObject;
																	if (pMVar5 == null) {
																		throw new NullReferenceException();
																	}
																	__this_01 = MapLoader.Errors;
																	pSVar19 = String.Concat("Failed to load static object with no MeshFilter or SharedMesh: ", pMVar5.Name);
																	if (__this_01 == null) {
	label_05995060: ;
																		throw new NullReferenceException();
																	}
																	piVar1 = &__this_01._version;
																	*piVar1 = *piVar1 + 1;
																	pSVar18 = __this_01._items;
																	if (pSVar18 == null) goto label_05995060;
																	uVar3 = __this_01._size;
																	if (uVar3 < (uint)pSVar18.Length) {
																		__this_01._size = uVar3 + 1;
																		pSVar18[(int)uVar3] = pSVar19;
																	}
																	else {
																		__this_01.AddWithResize((object)pSVar19);
																	}
																}
																else {
																	pUVar24 = __this_00.sharedMesh;
																	if (pUVar24 == null) {
																		throw new NullReferenceException();
																	}
																	iVar9 = pUVar24.vertexCount;
																	if (iVar9 != 0) {
																		bVar8 = pUVar21.enabled;
																		if (bVar8) {
																			pUVar25 = pUVar21.sharedMaterial;
																			bVar8 = ((Object)pUVar25 == null);
																			if (bVar8) goto label_05994450;
																		}
																		pUVar25 = pUVar21.sharedMaterial;
																		bVar8 = ((Object)pUVar25 != null);
																		if (bVar8) {
																			pUVar25 = pUVar21.sharedMaterial;
																			if (pUVar25 == null) {
																				throw new NullReferenceException();
																			}
																			bVar8 = pUVar25.enableInstancing;
																			if (bVar8) goto label_05994450;
																		}
																		pUVar23 = (Object)__this_00.sharedMesh;
																		if (pUVar23 == null) {
																			throw new NullReferenceException();
																		}
																		iStack_124 = pUVar23.GetInstanceID();
																		pSVar19 = iStack_124.ToString();
																		pSVar19 = String.Concat(pSVar19, pSStack_c0);
																		bVar8 = pUVar21.enabled;
																		if (bVar8) {
																			pUVar25 = pUVar21.sharedMaterial;
																			if (pUVar25 == null) {
																				throw new NullReferenceException();
																			}
																			iStack_124 = pUVar25.GetInstanceID() ;
																			pSVar26 = iStack_124.ToString();
																			pSVar19 = String.Concat(pSVar19, pSVar26) ;
																		}
																		else {
																			pSVar19 = String.Concat(pSVar19, "disabled");
																		}
																		if (pSStack_c8 ==null) {
																			throw new NullReferenceException();
																		}
																		bVar8 = pSStack_c8.ContainsKey((object)pSVar19);
																		if (!bVar8) {
																			pSStack_c8.Add((object)pSVar19, 0);
																		}
																		pUVar24 = __this_00.sharedMesh;
																		if (pUVar24 == null) {
																			throw new NullReferenceException();
																		}
																		iVar9 = pUVar24.vertexCount;
																		pSVar11 = pSStack_c8;
																		iVar10 = (int)(65000 / (long)iVar9);
																		if (iVar10 < 2) {
																			iVar10 = 1;
																		}
																		iVar9 = pSStack_c8.get_Item((object)pSVar19);
																		pSVar11.set_Item((object)pSVar19, iVar9 + 1);
																		iVar9 = pSVar11.get_Item((object)pSVar19);
																		iStack_124 = iVar9 / iVar10;
																		pSVar26 = iStack_124.ToString();
																		__this_04 = pSStack_f0;
																		pSVar19 = String.Concat(pSVar19, pSVar26);
																		auStack_108._0_8_ = pSVar19;
																		if (pSStack_f8 ==null) {
																			throw new NullReferenceException();
																		}
																		bVar8 = pSStack_f8.ContainsKey((object)pSVar19);
																		if (bVar8) {
																			if (__this_04 ==(Dictionary<string, List<GameObject>>)0x0) {
																				throw new NullReferenceException();
																			}
																		}
																		else {
																			pUVar21 = new GameObject();
																			pMVar5 = pMVar17.ScriptObject;
																			if (pMVar5 == null) {
																				throw new NullReferenceException();
																			}
																			pSVar19 = String.Concat(pMVar5.Name, " (Batched) ", (String)auStack_108._0_8_);
																			if (pUVar21 == null) {
																				throw new NullReferenceException();
																			}
																			pUVar21.name = pSVar19;
																			pUVar21.layer = PhysicsLayer.MapObjectEntities;
																			pUVar14 = pUVar21.transform;
																			pUVar15 = pUStack_50.transform;
																			if (pUVar14 == null) {
																				throw new NullReferenceException();
																			}
																			pUVar14.SetParent(pUVar15);
																			pSStack_f8.Add((object)auStack_108._0_8_, (object)pUVar21);
																			pSVar27 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<GameObject>));
																			pSVar27 = new List<GameObject>();
																			if (__this_04 ==(Dictionary<string, List<GameObject>>)0x0) {
																				throw new NullReferenceException();
																			}
																			__this_04.Add((object)auStack_108._0_8_, (object)pSVar27);
																		}
																		pSVar28 = (List<object>)__this_04.get_Item((object)auStack_108._0_8_);
																		pUVar12 = __this_00.gameObject ;
																		if (pSVar28 == null) {
	label_059950b0: ;
																			throw new NullReferenceException();
																		}
																		piVar1 = &pSVar28._version;
																		*piVar1 = *piVar1 + 1;
																		pSVar6 = pSVar28._items;
																		if (pSVar6 == null) goto label_059950b0;
																		uVar3 = pSVar28._size;
																		if (uVar3 < (uint)pSVar6.Length) {
																			pSVar28._size = uVar3 + 1;
																			pSVar6[(int)uVar3] = (object)pUVar12;
																		}
																		else {
																			pSVar28.AddWithResize((object)pUVar12);
																		}
																		pUVar12 = __this_00.gameObject ;
																		pUVar14 = __this_00.transform;
																		if (pUVar14 == null) {
																			throw new NullReferenceException();
																		}
																		pUVar14 = pUVar14.parent;
																		if (pSStack_58 ==null) {
																			throw new NullReferenceException();
																		}
																		pSStack_58.Add((object)pUVar12, (object)pUVar14);
																		pUVar14 = __this_00.transform;
																		pUVar12 = pSStack_f8.get_Item((object)auStack_108._0_8_);
																		if (pUVar12 == null) {
																			throw new NullReferenceException();
																		}
																		pUVar15 = pUVar12.transform;
																		if (pUVar14 == null) {
																			throw new NullReferenceException();
																		}
																		pUVar14.SetParent(pUVar15);
																	}
																}
															}
														}
	label_05994450: ;
														uStack_128 = uStack_128 + 1;
														uVar3 = (uint)pSVar20.Length;
													} while ((int)uStack_128 < (int)uVar3);
												}
												__this_03 = pSStack_f8;
												pUVar12 = pMVar17.GameObject;
												if (pUVar12 == null) {
													throw new NullReferenceException();
												}
												pUVar14 = pUVar12.transform;
												pUVar15 = pUStack_48.transform;
												if (pUVar14 == null) {
													throw new NullReferenceException();
												}
												pUVar14.SetParent(pUVar15);
											}
										}
									}
								}
								auStack_78.Dispose();
								auStack_108._0_8_ = pSVar27;
								pSVar27 = new List<GameObject>();
								if ((__this_03 != null) &&(pSVar16 = __this_03.Keys, pSVar16 != null)) {
									auStack_120.GetEnumerator(pSVar16);
									pUStack_a8 = pUStack_110;
									auStack_b8 = (byte[])auStack_120._0_8_;
									auStack_120._0_8_ = null;
									auStack_120._8_8_ = auStack_b8;
									if (auStack_108._0_8_ == 0) {
										do {
											bVar8 = auStack_b8.MoveNext();
											pUVar21 = pUStack_a8;
											if (!bVar8) goto label_05994cf6;
											pSVar29 = (Dictionary<object, object>)__this_03;
											pUVar12 = __this_03.get_Item((object)pUStack_a8);
											bVar8 = pSVar29.CombineMeshes(pUVar12);
										} while (bVar8);
										__this_03.get_Item((object)pUVar21);
	label_05994cf1: ;
										throw new NullReferenceException();
									}
									while(true) {
										bVar8 = auStack_b8.MoveNext();
										pUVar21 = pUStack_a8;
										if (!bVar8) break;
										pSVar29 = (Dictionary<object, object>)__this_03;
										pUVar12 = __this_03.get_Item((object)pUStack_a8);
										bVar8 = pSVar29.CombineMeshes(pUVar12);
										if (!bVar8) {
											pUVar12 = __this_03.get_Item((object)pUVar21);
											piVar1 = &((List<object>)(auStack_108._0_8_ + 0x10)). _version;
											*piVar1 = *piVar1 + 1;
											pSVar20 = ((List<object>)(auStack_108._0_8_ + 0x10)). _items;
											if (pSVar20 == null) goto label_05994cf1;
											uVar3 = ((List<object>)(auStack_108._0_8_ + 0x10)). _size;
											if (uVar3 < (uint)pSVar20.Length) {
												((List<object>)(auStack_108._0_8_ + 0x10))._size = uVar3 + 1;
												pSVar20[(int)uVar3] = (object)pUVar12;
											}
											else {
												auStack_108._0_8_.AddWithResize((object)pUVar12);
											}
										}
									}
	label_05994cf6: ;
									auStack_b8.Dispose();
									if ((__this_04 != null) &&(pSVar16 = __this_04.Keys, pSVar16 != null)) {
										auStack_120.GetEnumerator(pSVar16);
										pUStack_88 = pUStack_110;
										auStack_98 = (byte[])auStack_120._0_8_;
										while(true) {
											bVar8 = auStack_98.MoveNext();
											__this_02 = pSStack_58;
											if (!bVar8) break;
											pSVar28 = (List<object>)pSStack_f0.get_Item((object)pUStack_88);
											if (pSVar28 == null) {
												throw new NullReferenceException();
											}
											auStack_120.GetEnumerator(pSVar28);
											pUStack_d8 = pUStack_110;
											auStack_e8 = (byte[])auStack_120._0_8_;
											auStack_120._0_8_ = null;
											auStack_120._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_e8;
											if (__this_02 == null) {
												bVar8 = auStack_e8.MoveNext();
												if (bVar8) {
													if (pUStack_d8 != null) {
														pUStack_d8.transform;
														throw new NullReferenceException();
													}
	label_05994ee1: ;
													throw new NullReferenceException();
												}
											}
											else {
												while(true) {
													bVar8 = auStack_e8.MoveNext();
													pUVar21 = pUStack_d8;
													if (!bVar8) break;
													if (pUStack_d8 == null) goto label_05994ee1;
													pUVar14 = pUStack_d8.transform;
													pUVar15 = __this_02.get_Item((object)pUVar21);
													if (pUVar14 == null) {
														throw new NullReferenceException();
													}
													pUVar14.SetParent(pUVar15);
												}
											}
											auStack_e8.Dispose();
										}
										auStack_98.Dispose();
										if ((List<object>)auStack_108._0_8_ !=null) {
											auStack_120.GetEnumerator((List<object>)auStack_108._0_8_);
											pUStack_d8 = pUStack_110;
											auStack_e8 = (byte[])auStack_120._0_8_;
											auStack_120._0_8_ = null;
											auStack_120._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_e8;
											while(true) {
												bVar8 = auStack_e8.MoveNext();
												pUVar21 = pUStack_d8;
												if (!bVar8) break;
												Object.Destroy(pUVar21);
											}
											auStack_e8.Dispose();
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

	[Token(Token = "0x600199B")]
	[Address(RVA = "0x58954C0", Offset = "0x58944C0", VA = "0x58954C0")]
	private bool CombineMeshes(GameObject obj)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$CombineMeshes): 13 lines keep C-only constructs
		int piVar1;
		Component __this_00;
		MeshFilter[] pUVar2;
		Matrix4x4 value;
		object __this_01;
		GameObject __this_02;
		bool bVar3;
		uint uVar4;
		uint uVar5;
		Object[] pSVar6;
		List<MeshFilter> __this_03;
		Object pUVar7;
		MeshFilter pUVar8;
		Renderer pUVar9;
		CombineInstance[] combine;
		Mesh pUVar10;
		Transform __this_04;
		MeshRenderer __this_05;
		MeshFilter __this_06;
		Material value_00;
		int index;
		uint uVar11;
		ulong uVar12;
		CombineInstance __this_07;
		int start;
		System_Collections_Generic_List_Enumerator_object__o local_98;
		GameObject local_78;
		byte[] local_70 = new byte[16];
		Component local_60;
		float fStack_58;
		float fStack_54;
		float local_50;
		float fStack_4c;
		float fStack_48;
		float fStack_44;
		float local_40;
		float fStack_3c;
		float fStack_38;
		float fStack_34;

		local_98._list = null;
		local_98._index = 0;
		local_98._version = 0;
		local_98._current = null;
		if ((obj != null) &&(pSVar6 = obj.GetComponentsInChildren<MeshFilter>(), pSVar6 != null)) {
			if (pSVar6.Length == 0) {
				return false;
			}
			local_78 = obj;
			__this_03 = new List<MeshFilter>();
			uVar4 = (uint)pSVar6.Length;
			if (0 < (int)uVar4) {
				uVar12 = 0;
				if (__this_03 == null) {
					do {
						uVar11 = (uint)uVar12;
						if (uVar4 <= uVar11) goto label_05995c5b;
						if ((Component)pSVar6[(int)uVar11] == null) goto label_05995c56;
						pUVar7 = (Object)(pSVar6[(int)uVar11]).GetComponent<Renderer>();
						bVar3 = (pUVar7 != null);
						if (bVar3) goto label_05995c56;
						uVar12 = (ulong)(uVar11 + 1);
						uVar4 = (uint)pSVar6.Length;
					} while ((int)(uVar11 + 1) < (int)uVar4);
				}
				else {
					do {
						if (uVar4 <= (uint)uVar12) goto label_05995c5b;
						__this_00 = (Component)pSVar6[uVar12];
						if (__this_00 == null) goto label_05995c56;
						pUVar7 = (Object)__this_00.GetComponent<Renderer>();
						bVar3 = (pUVar7 != null);
						if (bVar3) {
							piVar1 = &__this_03._version;
							*piVar1 = *piVar1 + 1;
							pUVar2 = __this_03._items;
							if (pUVar2 == null) goto label_05995c56;
							uVar4 = __this_03._size;
							if (uVar4 < (uint)pUVar2.Length) {
								__this_03._size = uVar4 + 1;
								pUVar2[(int)uVar4] = (MeshFilter)__this_00;
							}
							else {
								__this_03.AddWithResize((object)__this_00);
							}
						}
						uVar4 = (uint)pSVar6.Length;
						uVar12 = uVar12 + 1;
					} while ((int)uVar12 < (int)uVar4);
				}
			}
			if (__this_03 != null) {
				uVar5 = __this_03._size;
				if (uVar5 == 0) {
					return false;
				}
				if (uVar5 == 1) {
					pUVar8 = __this_03.get_Item(0);
					if ((pUVar8 != null) &&(pUVar9 = pUVar8.GetComponent<Renderer>(), pUVar9 != null)) {
						pUVar9.staticShadowCaster = true;
						return false;
					}
				}
				else {
					combine = (CombineInstance[])new CombineInstance[uVar5];
					pUVar8 = __this_03.get_Item(0);
					if ((pUVar8 != null) &&(pUVar9 = pUVar8.GetComponent<Renderer>(), pUVar9 != null)) {
						bVar3 = pUVar9.enabled;
						if (0 < __this_03._size) {
							if (combine == null) goto label_05995c56;
							__this_07 = combine.m_Items;
							uVar12 = 0;
							do {
								index = (int32_t)uVar12;
								pUVar8 = __this_03.get_Item(index);
								if (pUVar8 == null) goto label_05995c56;
								pUVar10 = pUVar8.sharedMesh;
								if ((uint)combine.Length <= uVar12) {
	label_05995c5b: ;
									throw new IndexOutOfRangeException();
								}
								__this_07.mesh = pUVar10;
								pUVar8 = __this_03.get_Item(index);
								if ((pUVar8 == null) ||(__this_04 = pUVar8.transform, __this_04 == null)) goto label_05995c56;
								local_70.get_localToWorldMatrix(__this_04);
								if ((uint)combine.Length <= uVar12) goto label_05995c5b;
								value.m20 = (float)local_70._8_4_;
								value.m30 = (float)local_70._12_4_;
								value.m00 = (float)local_70._0_4_;
								value.m10 = (float)local_70._4_4_;
								value._16_8_ = local_60;
								value.m21 = fStack_58;
								value.m31 = fStack_54;
								value.m02 = local_50;
								value.m12 = fStack_4c;
								value.m22 = fStack_48;
								value.m32 = fStack_44;
								value.m03 = local_40;
								value.m13 = fStack_3c;
								value.m23 = fStack_38;
								value.m33 = fStack_34;
								__this_07.transform = value;
								pUVar8 = __this_03.get_Item(index);
								if ((pUVar8 == null) ||(pUVar9 = pUVar8.GetComponent<Renderer>(), pUVar9 == null)) goto label_05995c56;
								pUVar9.enabled = false;
								uVar12 = uVar12 + 1;
								__this_07 = __this_07 + 1;
							} while ((long)uVar12 < (long)__this_03._size);
						}
						__this_02 = local_78;
						pUVar8 = local_78.AddComponent<MeshFilter>();
						__this_05 = __this_02.AddComponent<MeshRenderer>();
						pUVar10 = new Mesh();
						if (pUVar8 != null) {
							pUVar8.mesh = pUVar10;
							pUVar10 = pUVar8.mesh;
							if (pUVar10 != null) {
								pUVar10.indexFormat = 1;
								pUVar10 = pUVar8.mesh;
								if (pUVar10 != null) {
									pUVar10.CombineMeshes(combine, true, true);
									if (__this_05 != null) {
										__this_05.staticShadowCaster = true;
										if (bVar3) {
											__this_06 = __this_03.get_Item(0);
											if ((__this_06 == null) ||(pUVar9 = __this_06.GetComponent<Renderer>(), pUVar9 == null)) goto label_05995c56;
											value_00 = pUVar9.sharedMaterial;
											__this_05.material = value_00;
										}
										else {
											__this_05.enabled = false;
										}
										bVar3 = MapDestruction.IsActive;
										local_70.GetEnumerator((List<object>)__this_03);
										local_98._current = (object)local_60;
										local_98._list = (List<T>)local_70._0_8_;
										local_98._index = local_70._8_4_;
										local_98._version = local_70._12_4_;
										local_70._0_8_ = null;
										local_70._8_8_ = &local_98;
										if (bVar3) {
											start = 0;
											while (true) {
												bVar3 = local_98.MoveNext();
												__this_01 = local_98._current;
												if (!(bVar3)) break;
												if ((Component)local_98._current ==null) {
	label_05995c60: ;
													throw new NullReferenceException();
												}
												pUVar9 = local_98._current.GetComponent<Renderer>();
												CameraOcclusion.RegisterCombinedRenderer(pUVar9, (Renderer)__this_05);
												pUVar10 = __this_01.sharedMesh;
												if (pUVar10 == null) {
													throw new NullReferenceException();
												}
												uVar5 = pUVar10.GetIndexCount(0);
												pUVar10 = pUVar8.sharedMesh;
												MapDestruction.RegisterBatchSlice(pUVar9, pUVar10, start, uVar5);
												start = start + uVar5;
											}
										}
										else {
											while (bVar3 = local_98.MoveNext()) {
												if ((Component)local_98._current ==null) goto label_05995c60;
												pUVar9 = local_98._current.GetComponent<Renderer>();
												CameraOcclusion.RegisterCombinedRenderer(pUVar9, (Renderer)__this_05);
											}
										}
										local_98.Dispose();
										return true;
									}
								}
							}
						}
					}
				}
			}
		}
	label_05995c56: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600199C")]
	[Address(RVA = "0x5895CE0", Offset = "0x5894CE0", VA = "0x5895CE0")]
	public static void RegisterTag(string tag, MapObject obj)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$RegisterTag): 3 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<object, object> pSVar3;
		Object[] pSVar4;
		MethodInfo pMVar5;
		bool bVar6;
		List<MapObject> __this;
		HashSet<string> __this_00;
		List<object> __this_01;
		HashSet<object> __this_02;

		if (Il2CppMethodInitialized_07545a4d == false) {
			Il2CppMethodInitialized_07545a4d = true;
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) goto label_05995de4;
	label_05995d10: ;
			pSVar3 = (Dictionary<object, object>)MapLoader.Tags;
		}
		else {
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor != 0) goto label_05995d10;
	label_05995de4: ;
			pSVar3 = (Dictionary<object, object>)MapLoader.Tags;
		}
		if (pSVar3 != null) {
			bVar6 = pSVar3.ContainsKey((object)tag);
			if (!bVar6) {
				pSVar3 = (Dictionary<object, object>)MapLoader.Tags;
				__this = new List<MapObject>();
				if (pSVar3 == null) goto label_0599600b;
				pSVar3.Add((object)tag, (object)__this);
			}
			pSVar3 = (Dictionary<object, object>)MapLoader.MapObjectToTags;
			if (pSVar3 != null) {
				bVar6 = pSVar3.ContainsKey((object)obj);
				if (!bVar6) {
					pSVar3 = (Dictionary<object, object>)MapLoader.MapObjectToTags;
					__this_00 = new HashSet<string>();
					if (pSVar3 == null) goto label_0599600b;
					pSVar3.Add((object)obj, (object)__this_00);
				}
				pSVar3 = (Dictionary<object, object>)MapLoader.Tags;
				if ((pSVar3 != null) &&(__this_01 = (List<object>)pSVar3.get_Item((object)tag), pMVar5 = MethodInfo_System_Collections_Generic_List_MapObject_Add, __this_01 != null)) {
					piVar1 = &__this_01._version;
					*piVar1 = *piVar1 + 1;
					pSVar4 = __this_01._items;
					if (pSVar4 != null) {
						uVar2 = __this_01._size;
						if (uVar2 < (uint)pSVar4.Length) {
							__this_01._size = uVar2 + 1;
							pSVar4[(int)uVar2] = (object)obj;
						}
						else {
							__this_01.AddWithResize((object)obj);
						}
						pSVar3 = (Dictionary<object, object>)MapLoader.MapObjectToTags;
						if ((pSVar3 != null) &&(__this_02 = (HashSet<object>)pSVar3.get_Item((object)obj), __this_02 != null)) {
							__this_02.Add((object)tag);
							return;
						}
					}
				}
			}
		}
	label_0599600b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600199D")]
	[Address(RVA = "0x5896010", Offset = "0x5895010", VA = "0x5896010")]
	public static bool HasTag(MapObject obj, string tag)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$HasTag): 1 lines keep C-only constructs
		uint uVar1;
		Dictionary<object, object> pSVar2;
		bool bVar3;
		HashSet<object> __this;

		if (Il2CppMethodInitialized_07545a4e == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_07545a4e = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = (Dictionary<object, object>)MapLoader.MapObjectToTags;
		}
		else {
			pSVar2 = *(Dictionary<object, object>*)((long)(typeof(MapLoader)).static_fields + 0x28);
		}
		if (pSVar2 != null) {
			bVar3 = pSVar2.ContainsKey((object)obj);
			if (!bVar3) {
				return false;
			}
			pSVar2 = (Dictionary<object, object>)MapLoader.MapObjectToTags;
			if ((pSVar2 != null) &&(__this = (HashSet<object>)pSVar2.get_Item((object)obj), __this != null)) {
				bVar3 = __this.Contains((object)tag);
				return bVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600199E")]
	[Address(RVA = "0x5896130", Offset = "0x5895130", VA = "0x5896130")]
	public static MapObject GetMapObject(GameObject obj)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$GetMapObject): clean
		uint uVar1;
		Dictionary<object, object> pSVar2;
		bool bVar3;
		Transform pUVar4;
		MapObject pMVar5;

		bVar3 = ((Object)obj == null);
		if (bVar3) {
			return null;
		}
		uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		while(true) {
			if (uVar1 == 0) {
			}
			pSVar2 = (Dictionary<object, object>)MapLoader.GoToMapObject;
			if (pSVar2 == null) goto label_05996317;
			bVar3 = pSVar2.ContainsKey((object)obj);
			if (bVar3) break;
			bVar3 = ((Object)obj == null);
			if (bVar3) break;
			if (((Object)obj == null) ||(pUVar4 = obj.transform, pUVar4 == null)) goto label_05996317;
			pUVar4 = pUVar4.parent;
			bVar3 = ((Object)pUVar4 == null);
			if (bVar3) break;
			if (pUVar4 == null) goto label_05996317;
			obj = pUVar4.gameObject;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		pSVar2 = (Dictionary<object, object>)MapLoader.GoToMapObject;
		if (pSVar2 != null) {
			bVar3 = pSVar2.ContainsKey((object)obj);
			if (!bVar3) {
				return null;
			}
			pSVar2 = (Dictionary<object, object>)MapLoader.GoToMapObject;
			if (pSVar2 != null) {
				pMVar5 = pSVar2.get_Item((object)obj);
				return pMVar5;
			}
		}
	label_05996317: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600199F")]
	[Address(RVA = "0x5890D90", Offset = "0x588FD90", VA = "0x5890D90")]
	private static GameObject LoadSceneObject(MapScriptSceneObject obj, bool editor)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$LoadSceneObject): 1 lines keep C-only constructs
		String pSVar1;
		String pSVar2;
		String physicsMaterial;
		MapScriptBaseMaterial material;
		bool bVar3;
		int iVar4;
		GameObject __this;
		SphereCollider __this_00;
		MethodInfo pMVar5;

		if (Il2CppMethodInitialized_07545a50 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_SphereCollider) ;
			Il2CppMethodInitialized_07545a50 = true;
		}
		if (obj == null) {
			throw new NullReferenceException();
		}
		pMVar5 = (MethodInfo *)"None";
		bVar3 = (obj.Asset == "None");
		if (bVar3) {
			__this = new GameObject();
		}
		else {
			pSVar1 = obj.Asset;
			__this = MapLoader.LoadPrefabCached(pSVar1);
		}
		if (editor) {
			if (((typeof(MapObjectCollideMode))._2).cctor_finished_or_no_cctor == 0) {
			}
			pMVar5 = (MethodInfo)MapObjectCollideMode.Physical;
			pSVar1 = MapObjectCollideWith.MapEditor;
			pSVar2 = obj.PhysicsMaterial;
			iVar4 = MapLoader.SetPhysics(__this, (String)pMVar5, pSVar1, pSVar2);
			if (iVar4 == 0) {
				bVar3 = MapLoader.TryAddEditorCollider(__this);
				if (!bVar3) {
					if (__this == null) {
						throw new NullReferenceException();
					}
					__this_00 = __this.AddComponent<SphereCollider>();
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					__this_00.radius = 0.5;
				}
			}
		}
		else {
			pSVar1 = obj.CollideMode;
			pSVar2 = obj.CollideWith;
			physicsMaterial = obj.PhysicsMaterial;
			if (((typeof(MapLoader))._2).cctor_finished_or_no_cctor == 0) {
			}
			MapLoader.SetPhysics(__this, pSVar1, pSVar2, physicsMaterial);
		}
		pSVar1 = obj.Asset;
		material = obj.Material;
		bVar3 = obj.Visible;
		MapLoader.SetMaterial(__this, pSVar1, material, bVar3, editor);
		return __this;
	}

	[Token(Token = "0x60019A0")]
	[Address(RVA = "0x5896B50", Offset = "0x5895B50", VA = "0x5896B50")]
	private static bool TryAddEditorCollider(GameObject go)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$TryAddEditorCollider): 181 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		MeshFilter __this;
		Renderer __this_00;
		UnityEngine_Vector3_StaticFields pUVar10;
		float fVar11;
		Bounds bounds;
		bool bVar12;
		bool bVar13;
		int iVar14;
		ParticleSystem x;
		EditorGizmoIcon __this_01;
		Object[] pSVar15;
		Object x_00;
		Mesh pUVar16;
		GameObject __this_02;
		MeshCollider __this_03;
		il2cpp_array_size_t iVar17;
		Transform pUVar18;
		BoxCollider __this_04;
		uint uVar19;
		uint uVar20;
		float fVar21;
		float fVar24;
		float fVar25;
		float fVar26;
		float fVar27;
		float fVar28;
		byte[] auVar22 = new byte[16];
		byte[] auVar23 = new byte[16];
		float fVar29;
		uint uVar32;
		uint uVar33;
		byte[] auVar30 = new byte[16];
		uint uVar34;
		byte[] auVar31 = new byte[16];
		ulong uVar35;
		byte[] auVar37 = new byte[16];
		ulong uVar36;
		byte[] auVar38 = new byte[16];
		byte[] auVar39 = new byte[16];
		byte[] auVar40 = new byte[16];
		byte[] auVar41 = new byte[16];
		float fVar42;
		byte[] auVar43 = new byte[16];
		float fVar44;
		float fVar45;
		float fVar46;
		float fVar47;
		float fVar48;
		float fVar49;
		float fVar50;
		float fVar51;
		float fVar52;
		float fVar53;
		float fVar54;
		float fVar55;
		float fVar56;
		float fVar57;
		float fVar58;
		byte[] auVar59 = new byte[16];
		byte[] auVar60 = new byte[16];
		byte[] auVar61 = new byte[16];
		float fVar62;
		float fVar63;
		float fVar64;
		float fVar65;
		float fVar66;
		Vector3 value;
		Vector3 value_00;
		byte[] local_208 = new byte[8];
		float fStack_200;
		float fStack_1fc;
		ulong local_1d8;
		Matrix4x4 local_198;
		ulong local_158;
		byte[] local_148 = new byte[8];
		float fStack_140;
		float fStack_13c;
		byte[] local_138 = new byte[16];
		ulong local_128;
		ulong uStack_120;
		byte[] local_118 = new byte[16];
		byte[] local_108 = new byte[16];
		ulong local_f8;
		ulong uStack_f0;
		byte[] local_e8 = new byte[8];
		float fStack_e0;
		float fStack_dc;
		float local_d8;
		float fStack_d4;
		float fStack_d0;
		float fStack_cc;
		float local_c8;
		float fStack_c4;
		float fStack_c0;
		float fStack_bc;
		byte[] local_b8 = new byte[16];
		byte[] local_a8 = new byte[16];
		Object[] local_98;
		uint uStack_84;
		uint uStack_80;
		byte[] local_78 = new byte[16];
		byte[] local_68 = new byte[16];
		byte[] local_58 = new byte[16];
		float local_48;
		float fStack_44;
		float fStack_40;
		float fStack_3c;

		if (go == null) goto label_05997b69;
		x = go.GetComponentInChildren<ParticleSystem>();
		bVar12 = ((Object)x != null);
		if (bVar12) {
			__this_01 = go.AddComponent<EditorGizmoIcon>();
		}
		else {
			pSVar15 = go.GetComponentsInChildren<MeshFilter>();
			if (pSVar15 == null) goto label_05997b69;
			uVar20 = (uint)pSVar15.Length;
			if (0 < (int)uVar20) {
				uVar19 = 0;
				do {
					if (uVar20 <= uVar19) goto label_05997b6e;
					__this = (MeshFilter)pSVar15[(int)uVar19];
					if (__this == null) goto label_05997b69;
					x_00 = (Object)__this.sharedMesh;
					bVar12 = (x_00 != null);
					if (bVar12) {
						pUVar16 = __this.sharedMesh;
						if (pUVar16 == null) goto label_05997b69;
						iVar14 = pUVar16.vertexCount;
						if (0 < iVar14) {
							__this_02 = __this.gameObject;
							if (__this_02 != null) {
								__this_03 = __this_02.AddComponent<MeshCollider>();
								pUVar16 = __this.sharedMesh;
								if (__this_03 != null) {
									__this_03.sharedMesh = pUVar16;
									return true;
								}
							}
							goto label_05997b69;
						}
					}
					uVar19 = uVar19 + 1;
					uVar20 = (uint)pSVar15.Length;
				} while ((int)uVar19 < (int)uVar20);
			}
			pSVar15 = go.GetComponentsInChildren<Renderer>();
			if (pSVar15 == null) goto label_05997b69;
			iVar17 = pSVar15.Length;
			if ((iVar17 != 0) && (0 < (int)iVar17)) {
				fVar51 = 0.0;
				bVar12 = false;
				uVar20 = 0;
				fVar44 = 0.0;
				fVar26 = 0.0;
				fVar28 = 0.0;
				fVar45 = 0.0;
				fVar29 = 0.0;
				auVar60 = ZEXT816(0);
				local_98 = pSVar15;
				do {
					if ((uint)iVar17 <= uVar20) {
	label_05997b6e: ;
						throw new IndexOutOfRangeException();
					}
					__this_00 = (Renderer)pSVar15[(int)uVar20];
					if (__this_00 == null) goto label_05997b69;
					auVar38 = auVar60;
					if ((__this_00.klass != (Renderer)typeof(TrailRenderer)) &&(__this_00.klass != (Renderer)typeof(LineRenderer))) {
						local_198 = __this_00.localBounds;
						fVar53 = local_198.m20;
						local_158 = CONCAT44(local_198.m10, local_198.m00);
						local_a8._8_8_ = 0;
						local_a8._0_8_ = CONCAT44(local_198.m01, local_198.m30);
						local_108._0_4_ = local_198.m11;
						fVar42 = local_198.m11;
						uVar35 = CONCAT44(local_198.m01, local_198.m30);
						if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
							fVar42 = (float)local_108._0_4_;
							uVar35 = local_a8._0_8_;
						}
						uStack_84 = (undefined4)uVar35;
						uStack_80 = (undefined4)(uVar35 >> 0x20);
						bounds.m_Extents.z = fVar42;
						bounds.m_Extents.y = (float)uStack_80;
						bounds.m_Extents.x = (float)uStack_84;
						bounds.m_Center.z = fVar53;
						bounds.m_Center.x = (float)local_158;
						bounds.m_Center.y = local_158._4_4_;
						bVar13 = MapLoader.IsFiniteBounds(bounds);
						if (bVar13) {
							pUVar18 = go.transform;
							if (pUVar18 == null) goto label_05997b69;
							local_198 = pUVar18.worldToLocalMatrix;
							fVar54 = local_198.m23;
							fVar24 = local_198.m13;
							fVar42 = local_198.m03;
							local_118._0_4_ = local_198.m20;
							local_c8 = local_198.m21;
							local_f8 = CONCAT44(local_198.m10, local_198.m00);
							uStack_f0 = 0;
							local_128 = CONCAT44(local_198.m11, local_198.m01);
							uStack_120 = 0;
							local_e8._4_4_ = local_198.m12;
							local_e8._0_4_ = local_198.m02;
							local_d8 = local_198.m22;
							pUVar18 = __this_00.transform;
							if (pUVar18 == null) goto label_05997b69;
							local_198 = pUVar18.localToWorldMatrix;
							pSVar15 = local_98;
							local_58 = ZEXT416((uint)local_198.m10);
							local_68 = ZEXT416((uint)local_198.m20);
							local_48 = local_198.m30 * fVar42 + local_198.m20 * (float)local_e8._0_4_ + local_198.m10 * (float)local_128 + local_198.m00 * (float)local_f8;
							fStack_44 = local_198.m30 * fVar24 + local_198.m20 * (float)local_e8._4_4_ + local_198.m10 * local_128._4_4_ + local_198.m00 * local_f8._4_4_;
							fStack_40 = local_198.m30 * 0.0 + local_198.m20 * fStack_e0 + local_198.m10 * (float)uStack_120 + local_198.m00 * (float)uStack_f0;
							fStack_3c = local_198.m30 * 0.0 + local_198.m20 * fStack_dc + local_198.m10 * uStack_120._4_4_ + local_198.m00 * uStack_f0._4_4_;
							fVar57 = local_198.m31 * fVar42 + local_198.m21 * (float)local_e8._0_4_ + local_198.m11 * (float)local_128 + local_198.m01 * (float)local_f8;
							fStack_c4 = local_198.m31 * fVar24 + local_198.m21 * (float)local_e8._4_4_ + local_198.m11 * local_128._4_4_ + local_198.m01 * local_f8._4_4_;
							fStack_c0 = local_198.m31 * 0.0 + local_198.m21 * fStack_e0 + local_198.m11 * (float)uStack_120 + local_198.m01 * (float)uStack_f0;
							fVar58 = local_198.m31 * 0.0 + local_198.m21 * fStack_dc + local_198.m11 * uStack_120._4_4_ + local_198.m01 * uStack_f0._4_4_;
							fVar47 = local_198.m32 * fVar42 + local_198.m22 * (float)local_e8._0_4_ + local_198.m12 * (float)local_128 + local_198.m02 * (float)local_f8;
							fVar48 = local_198.m32 * fVar24 + local_198.m22 * (float)local_e8._4_4_ + local_198.m12 * local_128._4_4_ + local_198.m02 * local_f8._4_4_;
							fVar49 = local_198.m32 * 0.0 + local_198.m22 * fStack_e0 + local_198.m12 * (float)uStack_120 + local_198.m02 * (float)uStack_f0;
							fVar50 = local_198.m32 * 0.0 + local_198.m22 * fStack_dc + local_198.m12 * uStack_120._4_4_ + local_198.m02 * uStack_f0._4_4_;
							local_78 = ZEXT416((uint)(local_198.m00 * (float)local_118._0_4_));
							fVar21 = local_198.m33 * fVar42 + local_198.m23 * (float)local_e8._0_4_ + local_198.m13 * (float)local_128 + local_198.m03 * (float)local_f8;
							fVar24 = local_198.m33 * fVar24 + local_198.m23 * (float)local_e8._4_4_ + local_198.m13 * local_128._4_4_ + local_198.m03 * local_f8._4_4_;
							fVar25 = local_198.m33 * 0.0 + local_198.m23 * fStack_e0 + local_198.m13 * (float)uStack_120 + local_198.m03 * (float)uStack_f0;
							fVar27 = local_198.m33 * 0.0 + local_198.m23 * fStack_dc + local_198.m13 * uStack_120._4_4_ + local_198.m03 * uStack_f0._4_4_;
							local_b8 = ZEXT416((uint)(local_198.m30 * fVar54 + local_198.m20 * local_d8 + local_198.m10 * local_c8 + local_198.m00 * (float)local_118._0_4_));
							fVar52 = local_198.m31 * fVar54 + local_198.m21 * local_d8 + local_198.m11 * local_c8 + local_198.m01 * (float)local_118._0_4_;
							fVar62 = local_198.m32 * fVar54 + local_198.m22 * local_d8 + local_198.m12 * local_c8 + local_198.m02 * (float)local_118._0_4_;
							fVar56 = fVar54 * local_198.m33 + local_d8 * local_198.m23 + local_c8 * local_198.m13 + (float)local_118._0_4_ * local_198.m03;
							fVar42 = fVar53 - (float)local_108._0_4_;
							fVar53 = fVar53 + (float)local_108._0_4_;
							local_108 = ZEXT416((uint)(fVar62 * fVar42));
							local_138 = ZEXT416((uint)(fVar62 * fVar53));
							fVar54 = fVar53 * fVar47;
							fVar62 = fVar53 * fVar48;
							fVar55 = fVar53 * fVar49;
							fVar53 = fVar53 * fVar50;
							fStack_cc = local_158._4_4_ - (float)local_a8._4_4_;
							fStack_bc = local_158._4_4_ + (float)local_a8._4_4_;
							_local_e8 = ZEXT416((uint)(fVar52 * fStack_cc));
							local_d8 = fStack_cc * fVar57;
							fStack_d4 = fStack_cc * fStack_c4;
							fStack_d0 = fStack_cc * fStack_c0;
							fStack_cc = fStack_cc * fVar58;
							local_118 = ZEXT416((uint)(fVar52 * fStack_bc));
							local_c8 = fStack_bc * fVar57;
							fStack_c4 = fStack_bc * fStack_c4;
							fStack_c0 = fStack_bc * fStack_c0;
							fStack_bc = fStack_bc * fVar58;
							uVar19 = 0xfffffffd;
							local_148._4_4_ = fVar42 * fVar48;
							local_148._0_4_ = fVar42 * fVar47;
							fStack_140 = fVar42 * fVar49;
							fStack_13c = fVar42 * fVar50;
							fVar42 = (float)local_158;
							do {
								while(true) {
									uVar19 = uVar19 + 2;
									fVar63 = (float)(int)uVar19 * (float)local_a8._0_4_ + fVar42;
									fVar58 = (float)local_b8._0_4_ * fVar63;
									fVar64 = fVar63 * local_48;
									fVar65 = fVar63 * fStack_44;
									fVar66 = fVar63 * fStack_40;
									fVar63 = fVar63 * fStack_3c;
									fVar49 = fVar64 + local_d8;
									fVar50 = fVar65 + fStack_d4;
									fVar52 = fVar66 + fStack_d0;
									fVar57 = fVar63 + fStack_cc;
									fVar48 = fVar58 + (float)local_e8._0_4_;
									local_208._0_4_ = fVar49 + (float)local_148._0_4_ + fVar21;
									local_208._4_4_ = fVar50 + (float)local_148._4_4_ + fVar24;
									fStack_200 = fVar52 + fStack_140 + fVar25;
									fStack_1fc = fVar57 + fStack_13c + fVar27;
									fVar47 = fVar48 + (float)local_108._0_4_ + fVar56;
									uVar32 = local_b8._4_4_;
									uVar33 = local_b8._8_4_;
									uVar34 = local_b8._12_4_;
									if (bVar12) {
										fVar11 = fVar51 - fVar44;
										if (fVar47 <= fVar51 - fVar44) {
											fVar11 = fVar47;
										}
										fVar46 = fVar44 + fVar51;
										if (fVar44 + fVar51 <= fVar47) {
											fVar46 = fVar47;
										}
										auVar30._0_4_ = auVar60._0_4_ - fVar26;
										auVar30._4_4_ = auVar60._4_4_ - fVar28;
										auVar30._8_4_ = auVar60._8_4_ - fVar45;
										auVar30._12_4_ = auVar60._12_4_ - fVar29;
										auVar38 = minps(auVar30, _local_208);
										auVar22._0_4_ = auVar60._0_4_ + fVar26;
										auVar22._4_4_ = auVar60._4_4_ + fVar28;
										auVar22._8_4_ = auVar60._8_4_ + fVar45;
										auVar22._12_4_ = auVar60._12_4_ + fVar29;
										auVar60 = maxps(auVar22, _local_208);
										fVar51 = (auVar60._0_4_ - auVar38._0_4_) * 0.5;
										fVar44 = (auVar60._4_4_ - auVar38._4_4_) * 0.5;
										fVar26 = (auVar60._8_4_ - auVar38._8_4_) * 0.0;
										fVar28 = (auVar60._12_4_ - auVar38._12_4_) * 0.0;
										fVar45 = (fVar46 - fVar11) * 0.5;
										fVar47 = fVar11 + fVar45;
										local_208._4_4_ = auVar38._4_4_ + fVar44;
										local_208._0_4_ = auVar38._0_4_ + fVar51;
										fStack_200 = auVar38._8_4_ + fVar26;
										fStack_1fc = auVar38._12_4_ + fVar28;
									}
									else {
										if (Il2CppMethodInitialized_0753e4b6 == false) {
											local_128 = CONCAT44(local_b8._4_4_, fVar48);
											uStack_120 = local_b8._8_8_;
											local_f8 = CONCAT44(local_b8._4_4_, fVar47);
											uStack_f0 = uStack_120;
											Il2CppMethodInitialized_0753e4b6 = true;
											fVar47 = (float)local_f8;
											fVar42 = (float)local_158;
											fVar48 = (float)local_128;
											uVar32 = local_128._4_4_;
											uVar33 = (float)uStack_120;
											uVar34 = uStack_120._4_4_;
										}
										pUVar10 = typeof(Vector3).static_fields;
										uVar1 = (pUVar10.zeroVector).x;
										uVar5 = (pUVar10.zeroVector).y;
										fVar51 = (float)uVar1 * 0.5;
										fVar44 = (float)uVar5 * 0.5;
										fVar26 = 0.0;
										fVar28 = 0.0;
										fVar45 = (pUVar10.zeroVector).z * 0.5;
										bVar12 = true;
									}
									auVar39._0_8_ = CONCAT44(fVar50 + fVar62 + fVar24, fVar49 + fVar54 + fVar21);
									auVar39._8_4_ = fVar52 + fVar55 + fVar25;
									auVar39._12_4_ = fVar57 + fVar53 + fVar27;
									fVar29 = fVar48 + (float)local_138._0_4_ + fVar56;
									if (bVar12) {
										fVar48 = fVar47 - fVar45;
										if (fVar29 <= fVar47 - fVar45) {
											fVar48 = fVar29;
										}
										fVar49 = fVar45 + fVar47;
										if (fVar45 + fVar47 <= fVar29) {
											fVar49 = fVar29;
										}
										auVar31._8_4_ = auVar39._8_4_;
										auVar31._0_8_ = auVar39._0_8_;
										auVar31._12_4_ = auVar39._12_4_;
										auVar40._0_4_ = (float)local_208._0_4_ - fVar51;
										auVar40._4_4_ = (float)local_208._4_4_ - fVar44;
										auVar40._8_4_ = fStack_200 - fVar26;
										auVar40._12_4_ = fStack_1fc - fVar28;
										auVar60 = minps(auVar40, auVar31);
										auVar43._0_4_ = (float)local_208._0_4_ + fVar51;
										auVar43._4_4_ = (float)local_208._4_4_ + fVar44;
										auVar43._8_4_ = fStack_200 + fVar26;
										auVar43._12_4_ = fStack_1fc + fVar28;
										auVar38 = maxps(auVar43, auVar31);
										fVar51 = (auVar38._0_4_ - auVar60._0_4_) * 0.5;
										fVar44 = (auVar38._4_4_ - auVar60._4_4_) * 0.5;
										fVar26 = (auVar38._8_4_ - auVar60._8_4_) * 0.0;
										fVar28 = (auVar38._12_4_ - auVar60._12_4_) * 0.0;
										fVar45 = (fVar49 - fVar48) * 0.5;
										auVar39._0_4_ = auVar60._0_4_ + fVar51;
										auVar39._4_4_ = auVar60._4_4_ + fVar44;
										auVar39._8_4_ = auVar60._8_4_ + fVar26;
										auVar39._12_4_ = auVar60._12_4_ + fVar28;
										fVar29 = fVar48 + fVar45;
									}
									else {
										if (Il2CppMethodInitialized_0753e4b6 == false) {
											local_128 = CONCAT44(uVar32, fVar29);
											uStack_120 = CONCAT44(uVar34, uVar33);
											Il2CppMethodInitialized_0753e4b6 = true;
											fVar42 = (float)local_158;
											fVar29 = (float)local_128;
										}
										pUVar10 = typeof(Vector3).static_fields;
										uVar2 = (pUVar10.zeroVector).x;
										uVar6 = (pUVar10.zeroVector).y;
										fVar51 = (float)uVar2 * 0.5;
										fVar44 = (float)uVar6 * 0.5;
										fVar26 = 0.0;
										fVar28 = 0.0;
										fVar45 = (pUVar10.zeroVector).z * 0.5;
										bVar12 = true;
									}
									fVar64 = fVar64 + local_c8;
									fVar65 = fVar65 + fStack_c4;
									fVar66 = fVar66 + fStack_c0;
									fVar63 = fVar63 + fStack_bc;
									fVar58 = fVar58 + (float)local_118._0_4_;
									auVar61._0_4_ = fVar64 + (float)local_148._0_4_ + fVar21;
									auVar61._4_4_ = fVar65 + (float)local_148._4_4_ + fVar24;
									auVar61._8_4_ = fVar66 + fStack_140 + fVar25;
									auVar61._12_4_ = fVar63 + fStack_13c + fVar27;
									fVar47 = fVar58 + (float)local_108._0_4_ + fVar56;
									if (bVar12) {
										fVar48 = fVar29 - fVar45;
										if (fVar47 <= fVar29 - fVar45) {
											fVar48 = fVar47;
										}
										auVar23._0_4_ = auVar39._0_4_ + fVar51;
										auVar23._4_4_ = auVar39._4_4_ + fVar44;
										auVar23._8_4_ = auVar39._8_4_ + fVar26;
										auVar23._12_4_ = auVar39._12_4_ + fVar28;
										auVar60 = maxps(auVar23, auVar61);
										fVar49 = fVar45 + fVar29;
										if (fVar45 + fVar29 <= fVar47) {
											fVar49 = fVar47;
										}
										fVar29 = (fVar49 - fVar48) * 0.5;
										auVar41._0_4_ = auVar39._0_4_ - fVar51;
										auVar41._4_4_ = auVar39._4_4_ - fVar44;
										auVar41._8_4_ = auVar39._8_4_ - fVar26;
										auVar41._12_4_ = auVar39._12_4_ - fVar28;
										auVar38 = minps(auVar41, auVar61);
										fVar44 = (auVar60._0_4_ - auVar38._0_4_) * 0.5;
										fVar26 = (auVar60._4_4_ - auVar38._4_4_) * 0.5;
										fVar28 = (auVar60._8_4_ - auVar38._8_4_) * 0.0;
										fVar45 = (auVar60._12_4_ - auVar38._12_4_) * 0.0;
										auVar61._4_4_ = auVar38._4_4_ + fVar26;
										auVar61._0_4_ = auVar38._0_4_ + fVar44;
										fVar47 = fVar48 + fVar29;
										auVar61._8_4_ = auVar38._8_4_ + fVar28;
										auVar61._12_4_ = auVar38._12_4_ + fVar45;
									}
									else {
										if (Il2CppMethodInitialized_0753e4b6 == false) {
											Il2CppMethodInitialized_0753e4b6 = true;
											fVar42 = (float)local_158;
										}
										pUVar10 = typeof(Vector3).static_fields;
										uVar3 = (pUVar10.zeroVector).x;
										uVar7 = (pUVar10.zeroVector).y;
										fVar44 = (float)uVar3 * 0.5;
										fVar26 = (float)uVar7 * 0.5;
										fVar28 = 0.0;
										fVar45 = 0.0;
										fVar29 = (pUVar10.zeroVector).z * 0.5;
										bVar12 = true;
									}
									auVar60._0_4_ = fVar64 + fVar54 + fVar21;
									auVar60._4_4_ = fVar65 + fVar62 + fVar24;
									auVar60._8_4_ = fVar66 + fVar55 + fVar25;
									auVar60._12_4_ = fVar63 + fVar53 + fVar27;
									fVar51 = fVar58 + (float)local_138._0_4_ + fVar56;
									if (bVar12) break;
									if (Il2CppMethodInitialized_0753e4b6 == false) {
										Il2CppMethodInitialized_0753e4b6 = true;
										fVar42 = (float)local_158;
									}
									pUVar10 = typeof(Vector3).static_fields;
									uVar4 = (pUVar10.zeroVector).x;
									uVar8 = (pUVar10.zeroVector).y;
									fVar26 = (float)uVar4 * 0.5;
									fVar28 = (float)uVar8 * 0.5;
									fVar45 = 0.0;
									fVar29 = 0.0;
									fVar44 = (pUVar10.zeroVector).z * 0.5;
									bVar12 = true;
									auVar38 = auVar60;
									if (uVar19 < 0x7ffffffe) goto label_05996dda;
								}
								fVar48 = fVar47 - fVar29;
								if (fVar51 <= fVar47 - fVar29) {
									fVar48 = fVar51;
								}
								fVar49 = fVar29 + fVar47;
								if (fVar29 + fVar47 <= fVar51) {
									fVar49 = fVar51;
								}
								auVar37._0_4_ = auVar61._0_4_ - fVar44;
								auVar37._4_4_ = auVar61._4_4_ - fVar26;
								auVar37._8_4_ = auVar61._8_4_ - fVar28;
								auVar37._12_4_ = auVar61._12_4_ - fVar45;
								auVar38 = minps(auVar37, auVar60);
								auVar59._0_4_ = auVar61._0_4_ + fVar44;
								auVar59._4_4_ = auVar61._4_4_ + fVar26;
								auVar59._8_4_ = auVar61._8_4_ + fVar28;
								auVar59._12_4_ = auVar61._12_4_ + fVar45;
								auVar60 = maxps(auVar59, auVar60);
								fVar26 = (auVar60._0_4_ - auVar38._0_4_) * 0.5;
								fVar28 = (auVar60._4_4_ - auVar38._4_4_) * 0.5;
								fVar45 = (auVar60._8_4_ - auVar38._8_4_) * 0.0;
								fVar29 = (auVar60._12_4_ - auVar38._12_4_) * 0.0;
								fVar44 = (fVar49 - fVar48) * 0.5;
								uVar36 = CONCAT44(auVar38._4_4_ + fVar28, auVar38._0_4_ + fVar26);
								fVar47 = auVar38._8_4_ + fVar45;
								fVar49 = auVar38._12_4_ + fVar29;
								fVar51 = fVar48 + fVar44;
								auVar38._8_4_ = fVar47;
								auVar38._0_8_ = uVar36;
								auVar38._12_4_ = fVar49;
								auVar60._8_4_ = fVar47;
								auVar60._0_8_ = uVar36;
								auVar60._12_4_ = fVar49;
							} while (0x7ffffffd < uVar19);
						}
					}
	label_05996dda: ;
					uVar20 = uVar20 + 1;
					uVar19 = (uint)pSVar15.Length;
					iVar17 = (il2cpp_array_size_t)uVar19;
					auVar60 = auVar38;
				} while ((int)uVar20 < (int)uVar19);
				if (bVar12) {
					if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
						if (Il2CppMethodInitialized_07545a53 == false) goto label_05997920;
	label_059978d1: ;
						uVar9 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
					}
					else {
						if (Il2CppMethodInitialized_07545a53 != false) goto label_059978d1;
	label_05997920: ;
						Il2CppMethodInitialized_07545a53 = true;
						uVar9 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
					}
					if (uVar9 == 0) {
					}
					if ((~auVar38._0_4_ & 0x7f800000) == 0) {
						return false;
					}
					if (((typeof(MapLoader))._2).cctor_finished_or_no_cctor == 0) {
					}
					if ((~auVar38._4_4_ & 0x7f800000) == 0) {
						return false;
					}
					if ((~(uint)fVar51 & 0x7f800000) == 0) {
						return false;
					}
					if ((~(uint)(fVar26 + fVar26) & 0x7f800000) == 0) {
						return false;
					}
					if ((~(uint)(fVar28 + fVar28) & 0x7f800000) == 0) {
						return false;
					}
					if ((~(uint)(fVar44 + fVar44) & 0x7f800000) == 0) {
						return false;
					}
					__this_04 = go.AddComponent<BoxCollider>();
					if (__this_04 != null) {
						value.z = fVar51;
						local_1d8._0_4_ = auVar38._0_4_;
						local_1d8._4_4_ = auVar38._4_4_;
						value.x = (float)(undefined4)local_1d8;
						value.y = (float)local_1d8._4_4_;
						__this_04.center = value;
						value_00.z = fVar44 + fVar44;
						value_00.x = fVar26 + fVar26;
						value_00.y = fVar28 + fVar28;
						__this_04.size = value_00;
						return true;
					}
					goto label_05997b69;
				}
			}
			__this_01 = go.AddComponent<EditorGizmoIcon>();
		}
		if (__this_01 != null) {
			__this_01.Setup();
			return true;
		}
	label_05997b69: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60019A1")]
	[Address(RVA = "0x5899500", Offset = "0x5898500", VA = "0x5899500")]
	private static bool IsFiniteBounds(Bounds bounds)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$IsFiniteBounds): clean
		uint uVar1;
		float fVar2;
		float fVar3;
		float local_38;
		float fStack_34;

		if (Il2CppMethodInitialized_07545a53 == false) {
			Il2CppMethodInitialized_07545a53 = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = *(uint)((long)typeof(MapLoader) + 0xe4);
		}
		if (uVar1 == 0) {
		}
		local_38 = bounds.m_Center.x;
		if ((~(uint)local_38 & 0x7f800000) == 0) {
			return false;
		}
		fStack_34 = bounds.m_Center.y;
		if ((~(uint)fStack_34 & 0x7f800000) == 0) {
			return false;
		}
		if ((~(uint)bounds.m_Center.z & 0x7f800000) == 0) {
			return false;
		}
		fVar2 = bounds.m_Extents.x;
		if (((typeof(MapLoader))._2).cctor_finished_or_no_cctor == 0) {
		}
		if (Il2CppMethodInitialized_07545a53 == false) {
			Il2CppMethodInitialized_07545a53 = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = *(uint)((long)typeof(MapLoader) + 0xe4);
		}
		if (uVar1 == 0) {
		}
		if ((~(uint)fVar2 & 0x7f800000) != 0) {
			if (((typeof(MapLoader))._2).cctor_finished_or_no_cctor == 0) {
			}
			fVar3 = bounds.m_Extents.y;
			if ((~(uint)fVar3 & 0x7f800000) != 0) {
				if ((~(uint)bounds.m_Extents.z & 0x7f800000) != 0) {
					return 0.0 < bounds.m_Extents.z * bounds.m_Extents.z + fVar3 * fVar3 + fVar2 * fVar2;
				}
			}
		}
		return false;
	}

	[Token(Token = "0x60019A2")]
	[Address(RVA = "0x5899740", Offset = "0x5898740", VA = "0x5899740")]
	private static bool IsFiniteVector3(Vector3 v)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$IsFiniteVector3): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07545a53 == false) {
			Il2CppMethodInitialized_07545a53 = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if ((~(uint)v.x & 0x7f800000) != 0) {
			if (((typeof(MapLoader))._2).cctor_finished_or_no_cctor == 0) {
			}
			if ((~(uint)v.y & 0x7f800000) != 0) {
				return (~(uint)v.z & 0x7f800000) != 0;
			}
		}
		return false;
	}

	[Token(Token = "0x60019A3")]
	[Address(RVA = "0x5899820", Offset = "0x5898820", VA = "0x5899820")]
	private static bool IsFiniteFloat(float value)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$IsFiniteFloat): clean
		return (~(uint)value & 0x7f800000) != 0;
	}

	[Token(Token = "0x60019A4")]
	[Address(RVA = "0x5891080", Offset = "0x5890080", VA = "0x5891080")]
	private static void SetTransform(MapObject mapObject)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$SetTransform): clean
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		Object __this;
		MapScriptBaseObject pMVar7;
		Vector3 value;
		Transform __this_00;
		Quaternion value_00;
		Vector3 UVar8;
		Vector3 value_01;
		Vector3 local_30;

		if ((mapObject != null) &&(__this = (Object)mapObject.GameObject, __this != null)) {
			pMVar7 = mapObject.ScriptObject;
			__this_00 = __this.transform;
			if (pMVar7 != null) {
				__this.isStatic = pMVar7.Static;
				__this.name = pMVar7.Name;
				if (__this_00 != null) {
					UVar8 = (Vector3)__this_00.localScale ;
					mapObject.BaseScale = UVar8;
					value.x = pMVar7.PositionX;
					value.y = pMVar7.PositionY;
					value.z = pMVar7.PositionZ;
					__this_00.localPosition = value;
					uVar1 = pMVar7.RotationX;
					uVar4 = pMVar7.RotationY;
					local_30.x = (float)uVar1 * 0.017453292;
					local_30.y = (float)uVar4 * 0.017453292;
					local_30.z = pMVar7.RotationZ * 0.017453292;
					value_00 = Quaternion.Internal_FromEulerRad(ref local_30);
					__this_00.localRotation = value_00;
					uVar2 = mapObject.BaseScale.x;
					uVar5 = mapObject.BaseScale.y;
					uVar3 = pMVar7.ScaleX;
					uVar6 = pMVar7.ScaleY;
					value_01.x = (float)uVar3 * (float)uVar2;
					value_01.y = (float)uVar6 * (float)uVar5;
					value_01.z = mapObject.BaseScale.z * pMVar7.ScaleZ;
					__this_00.localScale = value_01;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60019A5")]
	[Address(RVA = "0x5899830", Offset = "0x5898830", VA = "0x5899830")]
	public static void ApplyLocalTransform(MapObject mapObject)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$ApplyLocalTransform): clean
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		GameObject __this;
		MapScriptBaseObject pMVar7;
		Vector3 value;
		Transform __this_00;
		Quaternion value_00;
		Vector3 value_01;
		Vector3 local_28;

		if ((mapObject != null) &&(__this = mapObject.GameObject, __this != null)) {
			pMVar7 = mapObject.ScriptObject;
			__this_00 = __this.transform;
			if ((pMVar7 != null) && (__this_00 != null)) {
				value.x = pMVar7.PositionX;
				value.y = pMVar7.PositionY;
				value.z = pMVar7.PositionZ;
				__this_00.localPosition = value;
				uVar1 = pMVar7.RotationX;
				uVar4 = pMVar7.RotationY;
				local_28.x = (float)uVar1 * 0.017453292;
				local_28.y = (float)uVar4 * 0.017453292;
				local_28.z = pMVar7.RotationZ * 0.017453292;
				value_00 = Quaternion.Internal_FromEulerRad(ref local_28);
				__this_00.localRotation = value_00;
				uVar2 = mapObject.BaseScale.x;
				uVar5 = mapObject.BaseScale.y;
				uVar3 = pMVar7.ScaleX;
				uVar6 = pMVar7.ScaleY;
				value_01.x = (float)uVar3 * (float)uVar2;
				value_01.y = (float)uVar6 * (float)uVar5;
				value_01.z = mapObject.BaseScale.z * pMVar7.ScaleZ;
				__this_00.localScale = value_01;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60019A6")]
	[Address(RVA = "0x58998F0", Offset = "0x58988F0", VA = "0x58998F0")]
	public static void SetParent(MapObject mapObject)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$SetParent): 3 lines keep C-only constructs
		GameObject pUVar1;
		MapScriptBaseObject pMVar2;
		Dictionary<int, object> pSVar3;
		bool bVar4;
		Transform __this;
		MapObject pMVar5;
		Transform p;
		String pSVar6;
		int __this_00;

		if ((mapObject != null) &&(pUVar1 = mapObject.GameObject, pUVar1 != null)) {
			pMVar2 = mapObject.ScriptObject;
			__this = pUVar1.transform;
			if (pMVar2 != null) {
				if (pMVar2.Parent < 0) {
					return;
				}
				pSVar3 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (pSVar3 != null) {
					__this_00 = &pMVar2.Parent;
					bVar4 = pSVar3.ContainsKey(*__this_00);
					if (!bVar4) {
						pSVar6 = __this_00.ToString();
						pSVar6 = String.Concat("Map load error: object parent id not found (", pSVar6, ")");
						DebugConsole.Log(pSVar6, true);
						return;
					}
					pSVar3 = (Dictionary<int, object>)MapLoader.IdToMapObject;
					if (pSVar3 != null) {
						pMVar5 = pSVar3.get_Item(*__this_00);
						if ((pMVar5 != null) &&(pUVar1 = pMVar5.GameObject, pUVar1 != null)) {
							p = pUVar1.transform;
							if (__this != null) {
								__this.SetParent(p);
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60019A7")]
	[Address(RVA = "0x5899AA0", Offset = "0x5898AA0", VA = "0x5899AA0")]
	private static bool IsParticleMaterial(Material mat)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$IsParticleMaterial): clean
		bool bVar1;
		Object __this;
		String __this_00;

		if (mat != null) {
			bVar1 = mat.HasProperty("_BaseColor");
			if (!bVar1) {
				return false;
			}
			__this = (Object)mat.shader;
			if (__this != null) {
				__this_00 = __this.name;
				if (__this_00 != null) {
					bVar1 = __this_00.Contains("Particles/");
					return bVar1;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60019A8")]
	[Address(RVA = "0x5899B30", Offset = "0x5898B30", VA = "0x5899B30")]
	public static void SetDefaultTiling(string asset, Material mat, Vector2 tiling)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$SetDefaultTiling): 7 lines keep C-only constructs
		bool bVar1;
		String* ppSVar2;
		String* ppSVar3;
		Vector4 value;
		Vector4 value_00;
		Vector4 value_01;

		bVar1 = (asset == "FX/WaterCube1");
		if (bVar1) {
			if (mat == null) {
	label_05999c53: ;
				throw new NullReferenceException();
			}
			ppSVar3 = &"_Tiling_1";
			ppSVar2 = &"_Tiling";
		}
		else {
			bVar1 = (asset == "FX/LavaCube1");
			if (!bVar1) {
				return;
			}
			if (mat == null) goto label_05999c53;
			value.z = 0.0;
			value.w = 0.0;
			value._0_8_ = tiling;
			mat.SetVector("_BaseColorTiling", value);
			ppSVar3 = &"_Normal_Tiling";
			ppSVar2 = &"_EmitColorTiling";
		}
		value_00.z = 0.0;
		value_00.w = 0.0;
		value_00._0_8_ = tiling;
		mat.SetVector(*ppSVar2, value_00);
		value_01.z = 0.0;
		value_01.w = 0.0;
		value_01._0_8_ = tiling;
		mat.SetVector(*ppSVar3, value_01);
		return;
	}

	[Token(Token = "0x60019A9")]
	[Address(RVA = "0x5899C60", Offset = "0x5898C60", VA = "0x5899C60")]
	private static bool RendererBelongsToMapObject(Renderer renderer, GameObject ownerGo)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$RendererBelongsToMapObject): clean
		uint uVar1;
		Dictionary<object, object> __this;
		bool bVar2;
		Transform __this_00;
		Object x;
		GameObject key;

		if (renderer == null) {
	label_05999dd5: ;
			throw new NullReferenceException();
		}
		__this_00 = renderer.transform;
		uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		do {
			if (uVar1 == 0) {
			}
			bVar2 = ((Object)__this_00 != null);
			if (!bVar2) {
	label_05999d98: ;
				bVar2 = ((Object)__this_00 != null);
				return bVar2;
			}
			if (__this_00 == null) goto label_05999dd5;
			x = (Object)__this_00.gameObject;
			bVar2 = (x != (Object)ownerGo);
			if (!bVar2) goto label_05999d98;
			__this = (Dictionary<object, object>)MapLoader.GoToMapObject;
			key = __this_00.gameObject;
			if (__this == null) goto label_05999dd5;
			bVar2 = __this.ContainsKey((object)key);
			if (bVar2) {
				return false;
			}
			__this_00 = __this_00.parent;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		} while(true);
	}

	[Token(Token = "0x60019AA")]
	[Address(RVA = "0x5897B80", Offset = "0x5896B80", VA = "0x5897B80")]
	public static void SetMaterial(GameObject go, string asset, MapScriptBaseMaterial material, bool visible, bool editor)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$SetMaterial): 102 lines keep C-only constructs
		int piVar1;
		Vector2 UVar2;
		byte bVar3;
		uint uVar4;
		GameObject __this;
		Renderer[] pUVar5;
		Dictionary<object, object> pSVar6;
		Material[] pUVar7;
		Color255 pUVar8;
		Il2CppClass asset_00;
		Vector2 value;
		Il2CppType handle;
		bool bVar9;
		bool bVar10;
		uint uVar11;
		MapLoader.c__DisplayClass80_0 __this_00;
		Object[] array;
		Predicate<T> match;
		List<Renderer> __this_01;
		String pSVar12;
		List<Material> pSVar13;
		Material pUVar14;
		MapScriptBasicMaterial key;
		List<object> pSVar15;
		Dictionary<Material, Material> __this_02;
		Material pUVar16;
		Renderer pUVar17;
		object pIVar18;
		Object pUVar19;
		Type pSVar20;
		Type pSVar21;
		String pSVar22;
		String[] pSVar23;
		String path;
		Texture value_00;
		int iVar24;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		MethodInfo extraout_RDX_03;
		MethodInfo extraout_RDX_04;
		String* ppSVar25;
		MethodInfo extraout_RDX_05;
		MethodInfo extraout_RDX_06;
		MethodInfo pMVar26;
		MethodInfo extraout_RDX_07;
		MethodInfo extraout_RDX_08;
		int index;
		long lVar27;
		object pIVar28;
		uint uVar29;
		Object[] pSVar30;
		ulong uVar31;
		uint extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		float fVar32;
		float fVar33;
		float in_XMM1_Dc;
		float in_XMM1_Dd;
		float fVar34;
		Color UVar35;
		Color value_01;
		bool local_e4;
		byte[] local_d8 = new byte[16];
		Material local_c8;
		Material local_c0;
		byte[] local_b8 = new byte[8];
		Material local_a8;
		Dictionary<Material, Material> local_98;
		MapScriptBasicMaterial local_90;
		byte[] local_88 = new byte[8];
		float fStack_80;
		float fStack_7c;
		byte[] local_78 = new byte[8];
		Material local_68;
		object local_60;
		byte[] local_58 = new byte[8];
		float fStack_50;
		float fStack_4c;
		Color local_48;

		if (Il2CppMethodInitialized_07545a58 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_get_Count) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapLoader_c__DisplayClass80_0_SetMaterial_b__0) ;
			Il2CppMethodInitialized_07545a58 = true;
		}
		local_b8 = (byte[])0x0;
		local_a8 = null;
		local_78 = (byte[])0x0;
		local_68 = null;
		local_c0 = null;
		local_48 = (Color)ZEXT816(0);
		local_60 = null;
		__this_00 = new MapLoader.c__DisplayClass80_0();
		if (__this_00 == null) goto label_05999326;
		__this_00.go = go;
		bVar9 = (asset == "None");
		if (bVar9) {
			return;
		}
		__this = __this_00.go;
		if (__this == null) goto label_05999326;
		array = __this.GetComponentsInChildren<Renderer>();
		if (editor) {
			match = new Predicate<Renderer>((object)__this_00, (intptr_t)MethodInfo_Map_MapLoader_c__DisplayClass80_0_SetMaterial_b__0);
			array = Array.FindAll<Renderer>(array, match);
		}
		__this_01 = new List<Renderer>();
		pSVar30 = null;
		if ((~visible & editor) != 0) {
			pSVar30 = array;
		}
		bVar9 = visible;
		if ((~visible & editor) == 1) {
			if (asset == null) goto label_05999326;
			bVar10 = asset.Contains("Editor");
			local_e4 = true;
			bVar9 = true;
			if (bVar10) goto label_05998055;
			if ((typeof(MapAssets)._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_075459db == false) goto label_05998b9d;
	label_05998027: ;
				uVar4 = (typeof(MapAssets)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (g_data_075459db != false) goto label_05998027;
	label_05998b9d: ;
				g_data_075459db = true;
				uVar4 = (typeof(MapAssets)._2).cctor_finished_or_no_cctor;
			}
			if (uVar4 == 0) {
			}
			bVar10 = (asset == MapAssets.NavMeshRegion);
			if (bVar10) goto label_05998055;
			bVar9 = (asset == MapAssets.NavMeshObstacle);
			if (!bVar9) {
				material = (MapScriptBaseMaterial)MapLoader._invisibleMaterial;
			}
		}
		else {
	label_05998055: ;
			local_e4 = bVar9;
			pSVar30 = array;
		}
		if (pSVar30 == null) goto label_05999326;
		uVar11 = (uint)pSVar30.Length;
		if (__this_01 == null) {
			if (0 < (int)uVar11) {
				lVar27 = 0;
				do {
					if (uVar11 <= (uint)lVar27) goto label_0599932b;
					if ((Object)pSVar30[lVar27] == null) goto label_05999326;
					pSVar12 = (pSVar30[lVar27]).name;
					bVar9 = (pSVar12 != "OutlineGizmo");
					if (bVar9) goto label_05999326;
					uVar11 = (uint)pSVar30.Length;
					lVar27 = lVar27 + 1;
				} while ((int)lVar27 < (int)uVar11);
			}
		}
		else if (0 < (int)uVar11) {
			uVar29 = 0;
			do {
				if (uVar11 <= uVar29) goto label_0599932b;
				pUVar19 = (Object)pSVar30[(int)uVar29];
				if (pUVar19 == null) goto label_05999326;
				pSVar12 = pUVar19.name;
				bVar9 = (pSVar12 != "OutlineGizmo");
				pMVar26 = MethodInfo_System_Collections_Generic_List_Renderer_Add;
				if (bVar9) {
					piVar1 = &__this_01._version;
					*piVar1 = *piVar1 + 1;
					pUVar5 = __this_01._items;
					if (pUVar5 == null) goto label_05999326;
					uVar11 = __this_01._size;
					if (uVar11 < (uint)pUVar5.Length) {
						__this_01._size = uVar11 + 1;
						pUVar5[(int)uVar11] = (Renderer)pUVar19;
					}
					else {
						__this_01.AddWithResize((object)pUVar19);
					}
				}
				uVar29 = uVar29 + 1;
				uVar11 = (uint)pSVar30.Length;
			} while ((int)uVar29 < (int)uVar11);
		}
		pSVar6 = (Dictionary<object, object>)MapLoader._assetMaterialCache;
		if (pSVar6 == null) goto label_05999326;
		bVar9 = pSVar6.ContainsKey((object)asset);
		if (!bVar9) {
			pSVar13 = new List<Material>();
			if (__this_01 == null) goto label_05999326;
			local_d8.GetEnumerator((List<object>)__this_01);
			local_a8 = local_c8;
			local_b8 = (byte[])local_d8._0_8_;
			local_d8._0_8_ = null;
			local_d8._8_8_ = local_b8;
			if (pSVar13 == null) {
				bVar9 = local_b8.MoveNext();
				if (bVar9) {
					if (local_a8 != null) {
						local_a8.sharedMaterial;
	label_0599937b: ;
						throw new NullReferenceException();
					}
	label_05999360: ;
					throw new NullReferenceException();
				}
			}
			else {
				while (bVar9 = local_b8.MoveNext()) {
					if (local_a8 == null) goto label_05999360;
					pUVar14 = local_a8.sharedMaterial;
					pMVar26 = MethodInfo_System_Collections_Generic_List_Material_Add;
					piVar1 = &pSVar13._version;
					*piVar1 = *piVar1 + 1;
					pUVar7 = pSVar13._items;
					if (pUVar7 == null) goto label_0599937b;
					uVar11 = pSVar13._size;
					if (uVar11 < (uint)pUVar7.Length) {
						pSVar13._size = uVar11 + 1;
						pUVar7[(int)uVar11] = pUVar14;
					}
					else {
						pSVar13.AddWithResize((object)pUVar14);
					}
				}
			}
			local_b8.Dispose();
			pSVar6 = (Dictionary<object, object>)MapLoader._assetMaterialCache;
			if (pSVar6 == null) goto label_05999326;
			pSVar6.Add((object)asset, (object)pSVar13);
		}
		if ((MapScriptBasicMaterial)material == null) goto label_05999326;
		pSVar12 = (((MapScriptBasicMaterial)material).fields).Shader;
		bVar9 = (pSVar12 == MapObjectShader.Default);
		if (!bVar9) {
			pSVar12 = (((MapScriptBasicMaterial)material).fields).Shader;
			bVar9 = (pSVar12 == MapObjectShader.DefaultNoTint);
			if (!bVar9) {
				pSVar12 = (((MapScriptBasicMaterial)material).fields).Shader;
				bVar9 = (pSVar12 == MapObjectShader.DefaultTiled);
				if (!bVar9) {
					pSVar12 = material.Serialize();
					pSVar6 = (Dictionary<object, object>)MapLoader._customMaterialCache;
					if (pSVar6 == null) goto label_05999326;
					bVar9 = pSVar6.ContainsKey((object)pSVar12);
					if (bVar9) {
						pSVar6 = (Dictionary<object, object>)MapLoader._customMaterialCache;
						if (pSVar6 == null) goto label_05999326;
						pUVar14 = pSVar6.get_Item((object)pSVar12);
					}
					else {
						pSVar22 = (((MapScriptBasicMaterial)material).fields).Shader;
						bVar9 = MapObjectShader.IsLegacyShader(pSVar22);
						handle = TypeRef_Map_MapScriptBasicMaterial;
						if (bVar9) {
							pIVar18 = il2cpp_codegen_is_inst_class((object)material, typeof(MapScriptLegacyMaterial)) ;
							if (pIVar18 == null) goto label_05999326;
							asset_00 = pIVar18[1].klass;
							pMVar26 = extraout_RDX_01;
							if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
								pMVar26 = extraout_RDX_02;
							}
							pUVar19 = MapLoader.LoadAssetCached("Map/Legacy/Materials", (String)asset_00);
							pUVar19 = Object.Instantiate(pUVar19);
							pUVar14 = (Material)il2cpp_codegen_is_inst_class((object)pUVar19, typeof(Material));
							if (pIVar18[1].monitor == null) goto label_05999326;
							local_48 = pIVar18[1].monitor.ToColor();
							fVar32 = local_48.b;
							fVar33 = local_48.a;
							uVar31 = il2cpp_runtime_helper_0599ae50(&local_48);
							fVar34 = (float)((ulong)uVar31 >> 0x20);
							fVar32 = fVar32 + fVar32;
							fVar33 = fVar33 + fVar33;
							local_48.g = fVar34 + fVar34;
							local_48.r = (float)uVar31 + (float)uVar31;
							local_48.b = fVar32;
							local_48.a = fVar33;
							uVar31 = il2cpp_runtime_helper_0599aea0(&local_48);
							if (pUVar14 == null) goto label_05999326;
							fVar34 = 1.0;
							if (fVar33 <= 1.0) {
								fVar34 = fVar33;
							}
							UVar35.a = (float)(-(uint)(0.0 <= fVar33) & (uint)fVar34);
							UVar35.b = fVar32;
							UVar35.r = (float)(int)uVar31;
							UVar35.g = (float)(int)((ulong)uVar31 >> 0x20);
							pUVar14.color = UVar35;
							pUVar14.mainTextureScale = (Vector2)pIVar18[2].klass;
						}
						else {
							pSVar20 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
							pSVar21 = material.GetType();
							if (pSVar20 == null) goto label_05999326;
							bVar9 = pSVar20.IsAssignableFrom(pSVar21);
							if (bVar9) {
								pIVar18 = il2cpp_codegen_is_inst_class((object)material, typeof(MapScriptBasicMaterial));
								if (pIVar18 == null) goto label_05999326;
								pSVar22 = String.Concat((String)pIVar18[1].klass, "Material");
								pMVar26 = extraout_RDX_03;
								if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
									pMVar26 = extraout_RDX_04;
								}
								pUVar19 = MapLoader.LoadAssetCached("Map/Materials", pSVar22);
								pUVar19 = Object.Instantiate(pUVar19);
								pUVar14 = (Material)il2cpp_codegen_is_inst_class((object)pUVar19, typeof(Material));
								bVar9 = ((String)pIVar18[2].klass != "Misc/None");
								if (bVar9) {
									pIVar28 = pIVar18 + 2;
									bVar9 = ((String)pIVar28.klass != "None");
									if (bVar9) {
										pSVar6 = (Dictionary<object, object>)BuiltinMapTextures.AllTextures;
										if (pSVar6 == null) goto label_05999326;
										bVar9 = pSVar6.TryGetValue((object)pIVar28.klass, ref local_60);
										if (bVar9) {
											if (local_60 == null) goto label_05999326;
											pIVar28 = local_60 + 2;
										}
										if ((pIVar28.klass == null) ||(pSVar23 = (pIVar28.klass).Split(0x2f, 0), pSVar23 == null)) goto label_05999326;
										iVar24 = (int)pSVar23.Length;
										if (iVar24 < 2) {
											if (iVar24 == 0) {
	label_0599932b: ;
												throw new IndexOutOfRangeException();
											}
											ppSVar25 = *(String**)(g_data_07556758 + 0xb8);
										}
										else {
											ppSVar25 = pSVar23.m_Items;
										}
										local_98 = (Dictionary<Material, Material>)*ppSVar25;
										pSVar22 = *(String*)((long)pSVar23.m_Items +((long)((pSVar23.Length << 0x20) + -0x100000000) >> 0x1d));
										bVar9 = ((String)local_98 == "Legacy");
										pSVar6 = (Dictionary<object, object>)BuiltinMapTextures.AllTextures;
										if (pSVar6 == null) goto label_05999326;
										bVar10 = pSVar6.ContainsKey((object)pSVar22);
										if (bVar10) {
											if (bVar9) {
												pSVar6 = (Dictionary<object, object>)BuiltinMapTextures.LegacyTexturePaths;
												if (pSVar6 == null) goto label_05999326;
												bVar10 = pSVar6.ContainsKey((object)pSVar22);
												if (!bVar10) goto label_0599916e;
											}
											pSVar6 = (Dictionary<object, object>)BuiltinMapTextures.AllTextures;
											if (pSVar6 == null) goto label_05999326;
											local_90 = pSVar6.get_Item((object)pSVar22);
											if (bVar9) {
												pSVar6 = (Dictionary<object, object>)BuiltinMapTextures.LegacyTexturePaths;
												if (pSVar6 == null) goto label_05999326;
												pSVar22 = pSVar6.get_Item((object)pSVar22);
												pMVar26 = extraout_RDX_05;
												if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
													pMVar26 = extraout_RDX_06;
												}
												path = "Map";
											}
											else {
												path = String.Concat("Map/Textures/", (String)local_98);
												pSVar22 = String.Concat(pSVar22, "Texture") ;
												pMVar26 = extraout_RDX_07;
												if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
													pMVar26 = extraout_RDX_08;
												}
											}
											value_00 = (Texture)MapLoader.LoadAssetCached(path, pSVar22);
											if (value_00 == null) {
												value_00 = null;
											}
											else if (value_00.klass != (Texture)typeof(Texture2D)) {
												throw new InvalidCastException();
											}
											if ((pUVar14 == null) ||(pUVar14.mainTexture = value_00, local_90 == null)) goto label_05999326;
											UVar2 = local_90.Tiling;
											value.y = UVar2.y * (float)((ulong)pIVar18[2].monitor >> 0x20);
											value.x = UVar2.x * SUB84(pIVar18[2].monitor, 0);
											pUVar14.mainTextureScale = value;
											pUVar14.mainTextureOffset = (Vector2)pIVar18[3].klass;
										}
									}
								}
	label_0599916e: ;
								if ((pIVar18[1].monitor == null) ||(UVar35 = pIVar18[1].monitor.ToColor(), pUVar14 == null)) goto label_05999326;
								pUVar14.color = UVar35;
								bVar3 = (typeof(MapScriptReflectiveMaterial)._2).typeHierarchyDepth;
								if ((bVar3 <= (((MapScriptBasicMaterial)material).klass._2).typeHierarchyDepth) &&((((MapScriptBasicMaterial)material).klass._2).typeHierarchy[(ulong)bVar3 - 1] ==typeof(MapScriptReflectiveMaterial))) {
									pIVar18 = il2cpp_codegen_is_inst_class((object)material, typeof(MapScriptReflectiveMaterial));
									if ((pIVar18 == null) || (pIVar18[3].monitor == null)) goto label_05999326;
									UVar35 = pIVar18[3].monitor.ToColor();
									pUVar14.SetColor("_SpecularMap", UVar35);
								}
							}
							else {
								pUVar14 = null;
							}
						}
						pSVar6 = (Dictionary<object, object>)MapLoader._customMaterialCache;
						if (pSVar6 == null) goto label_05999326;
						pSVar6.Add((object)pSVar12, (object)pUVar14);
					}
					if (__this_01 != null) {
						local_d8.GetEnumerator((List<object>)__this_01);
						local_a8 = local_c8;
						local_b8 = (byte[])local_d8._0_8_;
						local_d8._0_8_ = null;
						local_d8._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_b8;
						do {
							bVar9 = local_b8.MoveNext();
							pUVar16 = local_a8;
							if (!bVar9) {
								local_b8.Dispose();
								return;
							}
							bVar9 = ((Object)pUVar14 != null);
							if (bVar9) {
								if (pUVar16 == null) {
									throw new NullReferenceException();
								}
								pUVar16.sharedMaterial = pUVar14;
							}
							else if (pUVar16 == null) {
								throw new NullReferenceException();
							}
							pUVar16.enabled = local_e4;
						} while(true);
					}
					goto label_05999326;
				}
			}
		}
		pSVar12 = material.Serialize();
		key = (MapScriptBasicMaterial)String.Concat(asset, pSVar12);
		pSVar6 = (Dictionary<object, object>)MapLoader._defaultMaterialCache;
		if (pSVar6 != null) {
			bVar9 = pSVar6.ContainsKey((object)key);
			if (bVar9) {
	label_0599895a: ;
				pSVar6 = (Dictionary<object, object>)MapLoader._defaultMaterialCache;
				if ((pSVar6 != null) &&(pSVar15 = (List<object>)pSVar6.get_Item((object)key) , __this_01 != null)) {
					iVar24 = __this_01._size;
					if (pSVar15 == null) {
						if (0 < iVar24) goto label_05999326;
					}
					else if (0 < iVar24) {
						index = 0;
						do {
							if (index < pSVar15._size) {
								pUVar14 = pSVar15.get_Item(index);
								bVar9 = ((Object)pUVar14 != null);
								if (bVar9) {
									pUVar17 = __this_01.get_Item(index);
									pUVar14 = pSVar15.get_Item(index);
									if (pUVar17 == null) goto label_05999326;
									pUVar17.sharedMaterial = pUVar14;
								}
							}
							pUVar17 = __this_01.get_Item(index);
							if (pUVar17 == null) goto label_05999326;
							pUVar17.enabled = local_e4;
							index = index + 1;
						} while (index < __this_01._size);
					}
					return;
				}
			}
			else {
				pSVar6 = (Dictionary<object, object>)MapLoader._assetMaterialCache;
				if (pSVar6 != null) {
					local_90 = key;
					pSVar15 = (List<object>)pSVar6.get_Item((object)asset);
					pSVar13 = new List<Material>();
					__this_02 = il2cpp_codegen_object_new(typeof(Dictionary<Material, Material>));
					__this_02 = new Dictionary<object, object>();
					if (pSVar15 != null) {
						local_d8.GetEnumerator(pSVar15);
						local_68 = local_c8;
						local_78 = (byte[])local_d8._0_8_;
						local_d8._0_8_ = null;
						local_d8._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_78;
						local_98 = __this_02;
						do {
							if (pSVar13 == null) {
								bVar9 = local_78.MoveNext();
								pUVar14 = local_68;
								if (!bVar9) {
	label_059988f5: ;
									local_78.Dispose();
									key = local_90;
									pSVar6 = (Dictionary<object, object>)MapLoader._defaultMaterialCache;
									if (pSVar6 == null) break;
									pSVar6.Add((object)key, (object)pSVar13);
									goto label_0599895a;
								}
								bVar9 = ((Object)pUVar14 == null);
								if (bVar9) {
	label_05999330: ;
									throw new NullReferenceException();
								}
							}
							else {
								while(true) {
									bVar9 = local_78.MoveNext();
									pUVar14 = local_68;
									if (!bVar9) goto label_059988f5;
									bVar9 = ((Object)pUVar14 == null);
									pMVar26 = MethodInfo_System_Collections_Generic_List_Material_Add;
									if (!bVar9) break;
									piVar1 = &pSVar13._version;
									*piVar1 = *piVar1 + 1;
									pUVar7 = pSVar13._items;
									if (pUVar7 == null) goto label_05999330;
									uVar11 = pSVar13._size;
									if (uVar11 < (uint)pUVar7.Length) {
										pSVar13._size = uVar11 + 1;
										pUVar7[(int)uVar11] = null;
									}
									else {
										pSVar13.AddWithResize(null);
									}
								}
							}
							if (local_98 == null) {
								throw new NullReferenceException();
							}
							bVar9 = local_98.TryGetValue((object)pUVar14, (object*)&local_c0) ;
							if (!bVar9) {
								pUVar16 = new Material(pUVar14);
								pSVar12 = (((MapScriptBasicMaterial)material).fields).Shader;
								local_c0 = pUVar16;
								pMVar26 = (MethodInfo)MapObjectShader.DefaultNoTint;
								bVar9 = (pSVar12 != (String)pMVar26);
								pUVar16 = local_c0;
								if (bVar9) {
									bVar9 = MapLoader.IsParticleMaterial(pUVar14);
									if (bVar9) {
										if (pUVar14 == null) {
											throw new NullReferenceException();
										}
										UVar35 = pUVar14.color;
										fStack_80 = (float)extraout_XMM0_Dc;
										local_88 = (byte[])UVar35._0_8_;
										fStack_7c = (float)extraout_XMM0_Dd;
										fStack_50 = in_XMM1_Dc;
										local_58 = (byte[])UVar35._8_8_;
										fStack_4c = in_XMM1_Dd;
										pUVar8 = (((MapScriptBasicMaterial)material).fields).Color;
										if (pUVar8 == null) {
											throw new NullReferenceException();
										}
										UVar35 = pUVar8.ToColor();
										local_88._4_4_ = (float)local_88._4_4_ * UVar35.g;
										local_88._0_4_ = (float)local_88._0_4_ * UVar35.r;
										fStack_80 = fStack_80 * extraout_XMM0_Dc_00;
										fStack_7c = fStack_7c * extraout_XMM0_Dd_00;
										local_58._4_4_ = (float)local_58._4_4_ * UVar35.a;
										local_58._0_4_ = (float)local_58._0_4_ * UVar35.b;
										fStack_50 = fStack_50 * in_XMM1_Dc;
										fStack_4c = fStack_4c * in_XMM1_Dd;
									}
									else {
										pUVar8 = (((MapScriptBasicMaterial)material).fields).Color;
										if (pUVar8 == null) {
											throw new NullReferenceException();
										}
										UVar35 = pUVar8.ToColor();
										fStack_80 = (float)extraout_XMM0_Dc_01;
										local_88 = (byte[])UVar35._0_8_;
										fStack_7c = (float)extraout_XMM0_Dd_01;
										fStack_50 = in_XMM1_Dc;
										local_58 = (byte[])UVar35._8_8_;
										fStack_4c = in_XMM1_Dd;
									}
									if (pUVar16 == null) {
										throw new NullReferenceException();
									}
									in_XMM1_Dc = local_58._8_4_;
									in_XMM1_Dd = local_58._12_4_;
									value_01.b = (float)local_58._0_4_;
									value_01.a = (float)local_58._4_4_;
									value_01.r = (float)local_88._0_4_;
									value_01.g = (float)local_88._4_4_;
									pUVar16.color = value_01;
								}
								pSVar12 = (((MapScriptBasicMaterial)material).fields).Shader;
								bVar9 = (pSVar12 == MapObjectShader.DefaultTiled);
								pUVar16 = local_c0;
								if (bVar9) {
									bVar3 = (typeof(MapScriptDefaultTiledMaterial)._2).typeHierarchyDepth;
									if (((((MapScriptBasicMaterial)material).klass._2).typeHierarchyDepth < bVar3) ||((((MapScriptBasicMaterial)material).klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(MapScriptDefaultTiledMaterial))) {
										throw new InvalidCastException();
									}
									local_88 = (byte[])(((MapScriptBasicMaterial)material).fields).Texture;
									pMVar26 = extraout_RDX;
									if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
										pMVar26 = extraout_RDX_00;
									}
									MapLoader.SetDefaultTiling(asset, pUVar16, (Vector2)local_88);
								}
								local_98.Add((object)pUVar14, (object)local_c0);
							}
							pMVar26 = MethodInfo_System_Collections_Generic_List_Material_Add;
							if (pSVar13 == null) {
	label_0599933f: ;
								throw new NullReferenceException();
							}
							piVar1 = &pSVar13._version;
							*piVar1 = *piVar1 + 1;
							pUVar7 = pSVar13._items;
							if (pUVar7 == null) goto label_0599933f;
							uVar11 = pSVar13._size;
							if (uVar11 < (uint)pUVar7.Length) {
								pSVar13._size = uVar11 + 1;
								pUVar7[(int)uVar11] = local_c0;
							}
							else {
								pSVar13.AddWithResize((object)local_c0);
							}
						} while(true);
					}
				}
			}
		}
	label_05999326: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60019AB")]
	[Address(RVA = "0x58968B0", Offset = "0x58958B0", VA = "0x58968B0")]
	private static int SetPhysics(GameObject go, string collideMode, string collideWith, string physicsMaterial)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$SetPhysics): 2 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		Component __this;
		bool bVar3;
		int value;
		int iVar4;
		Object x;
		Object[] pSVar5;
		il2cpp_array_size_t iVar6;
		GameObject __this_00;
		uint uVar7;
		PhysicsMaterial pUVar8;

		x = null;
		pUVar8 = (UnityEngine_PhysicsMaterial_c *)"Default";
		bVar3 = (physicsMaterial != "Default");
		if (bVar3) {
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
			}
			x = MapLoader.LoadAssetCached("Physics", physicsMaterial);
			if (x == null) {
				x = null;
				uVar2 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
				goto joined_r0x059969c0;
			}
			bVar1 = (typeof(PhysicsMaterial)._2).typeHierarchyDepth;
			if (((x.klass._2).typeHierarchyDepth < bVar1) ||(pUVar8 = typeof(PhysicsMaterial),(x.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(PhysicsMaterial))) {
				throw new InvalidCastException();
			}
		}
		uVar2 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		physicsMaterial = (String)pUVar8;
	joined_r0x059969c0: ;
		if (uVar2 == 0) {
		}
		value = MapLoader.GetColliderLayer(collideWith);
		if (go != null) {
			pSVar5 = go.GetComponentsInChildren<Collider>();
			go.layer = value;
			if (pSVar5 != null) {
				iVar6 = pSVar5.Length;
				iVar4 = (int)iVar6;
				if (0 < iVar4) {
					uVar7 = 0;
					do {
						if ((uint)iVar6 <= uVar7) {
							throw new IndexOutOfRangeException();
						}
						__this = (Component)pSVar5[(int)uVar7];
						if ((__this == null) ||(__this_00 = __this.gameObject, __this_00 == null)) goto label_05996b30;
						__this_00.layer = value;
						bVar3 = (collideMode == MapObjectCollideMode.Region);
						__this.isTrigger = bVar3;
						bVar3 = (collideMode != MapObjectCollideMode.None);
						__this.enabled = bVar3;
						bVar3 = (x != null);
						if (bVar3) {
							__this.material = (PhysicsMaterial)x;
						}
						uVar7 = uVar7 + 1;
						iVar6 = pSVar5.Length;
						iVar4 = (int)iVar6;
					} while ((int)uVar7 < iVar4);
				}
				return iVar4;
			}
		}
	label_05996b30: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60019AC")]
	[Address(RVA = "0x589A2B0", Offset = "0x58992B0", VA = "0x589A2B0")]
	public static void SetCollider(Collider c, string collideMode, string collideWith)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$SetCollider): clean
		bool bVar1;
		int value;
		GameObject __this;

		bVar1 = (collideMode == MapObjectCollideMode.Region);
		if (c != null) {
			c.isTrigger = bVar1;
			bVar1 = (collideMode != MapObjectCollideMode.None);
			c.enabled = bVar1;
			__this = c.gameObject;
			value = MapLoader.GetColliderLayer(collideWith);
			if (__this != null) {
				__this.layer = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60019AD")]
	[Address(RVA = "0x589A3B0", Offset = "0x58993B0", VA = "0x589A3B0")]
	public static string GetColliderCollideWith(Collider c)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$GetColliderCollideWith): 8 lines keep C-only constructs
		uint uVar1;
		int iVar2;
		GameObject __this;
		Utility_PhysicsLayer_StaticFields pUVar3;
		Map_MapObjectCollideWith_StaticFields pMVar4;

		if (c == null) {
	label_0599a6c9: ;
			throw new NullReferenceException();
		}
		__this = c.gameObject;
		if (__this == null) goto label_0599a6c9;
		iVar2 = __this.layer;
		if ((typeof(PhysicsLayer)._2).cctor_finished_or_no_cctor == 0) {
			pUVar3 = typeof(PhysicsLayer).static_fields;
			if (iVar2 != pUVar3.MapObjectAll) goto label_0599a461;
	label_0599a426: ;
		}
		else {
			pUVar3 = typeof(PhysicsLayer).static_fields;
			if (iVar2 == pUVar3.MapObjectAll) goto label_0599a426;
	label_0599a461: ;
			if ((typeof(PhysicsLayer)._2).cctor_finished_or_no_cctor == 0) {
				pUVar3 = typeof(PhysicsLayer).static_fields;
				if (iVar2 != pUVar3.MapObjectMapObjects) goto label_0599a4ae;
	label_0599a46f: ;
				pMVar4 = (Map_MapObjectCollideWith_StaticFields)&MapObjectCollideWith.MapObjects;
				goto label_0599a6a9;
			}
			if (iVar2 == pUVar3.MapObjectMapObjects) goto label_0599a46f;
	label_0599a4ae: ;
			if ((typeof(PhysicsLayer)._2).cctor_finished_or_no_cctor == 0) {
				pUVar3 = typeof(PhysicsLayer).static_fields;
				if (iVar2 != pUVar3.MapObjectCharacters) goto label_0599a4fb;
	label_0599a4bc: ;
				pMVar4 = (Map_MapObjectCollideWith_StaticFields)&MapObjectCollideWith.Characters;
				goto label_0599a6a9;
			}
			if (iVar2 == pUVar3.MapObjectCharacters) goto label_0599a4bc;
	label_0599a4fb: ;
			if ((typeof(PhysicsLayer)._2).cctor_finished_or_no_cctor == 0) {
				pUVar3 = typeof(PhysicsLayer).static_fields;
				if (iVar2 != pUVar3.MapObjectTitans) goto label_0599a548;
	label_0599a509: ;
				pMVar4 = (Map_MapObjectCollideWith_StaticFields)&MapObjectCollideWith.Titans;
				goto label_0599a6a9;
			}
			if (iVar2 == pUVar3.MapObjectTitans) goto label_0599a509;
	label_0599a548: ;
			if ((typeof(PhysicsLayer)._2).cctor_finished_or_no_cctor == 0) {
				pUVar3 = typeof(PhysicsLayer).static_fields;
			}
			if (iVar2 == pUVar3.MapObjectHumans) {
				pMVar4 = (Map_MapObjectCollideWith_StaticFields)&MapObjectCollideWith.Humans;
				goto label_0599a6a9;
			}
			if ((typeof(PhysicsLayer)._2).cctor_finished_or_no_cctor == 0) {
				pUVar3 = typeof(PhysicsLayer).static_fields;
			}
			if (iVar2 == pUVar3.MapObjectProjectiles) {
				pMVar4 = (Map_MapObjectCollideWith_StaticFields)&MapObjectCollideWith.Projectiles;
				goto label_0599a6a9;
			}
			if ((typeof(PhysicsLayer)._2).cctor_finished_or_no_cctor == 0) {
				pUVar3 = typeof(PhysicsLayer).static_fields;
			}
			if (iVar2 == pUVar3.MapObjectEntities) {
				pMVar4 = (Map_MapObjectCollideWith_StaticFields)&MapObjectCollideWith.Entities;
				goto label_0599a6a9;
			}
			if ((typeof(PhysicsLayer)._2).cctor_finished_or_no_cctor == 0) {
				pUVar3 = typeof(PhysicsLayer).static_fields;
			}
			if (iVar2 == pUVar3.MapEditorObject) {
				pMVar4 = (Map_MapObjectCollideWith_StaticFields)&MapObjectCollideWith.MapEditor;
				goto label_0599a6a9;
			}
			if ((typeof(PhysicsLayer)._2).cctor_finished_or_no_cctor == 0) {
				pUVar3 = typeof(PhysicsLayer).static_fields;
			}
			uVar1 = (typeof(MapObjectCollideWith)._2).cctor_finished_or_no_cctor;
			if (iVar2 == pUVar3.Hurtbox) {
				if (uVar1 == 0) {
				}
				pMVar4 = (Map_MapObjectCollideWith_StaticFields)&MapObjectCollideWith.Hitboxes;
				goto label_0599a6a9;
			}
			if (uVar1 == 0) {
			}
		}
		pMVar4 = typeof(MapObjectCollideWith).static_fields;
	label_0599a6a9: ;
		return pMVar4.All;
	}

	[Token(Token = "0x60019AE")]
	[Address(RVA = "0x5899F60", Offset = "0x5898F60", VA = "0x5899F60")]
	public static int GetColliderLayer(string collideWith)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$GetColliderLayer): clean
		bool bVar1;
		int iVar2;

		bVar1 = (collideWith == MapObjectCollideWith.All);
		if (bVar1) {
		}
		else {
			bVar1 = (collideWith == MapObjectCollideWith.MapObjects);
			if (bVar1) {
			}
			else {
				bVar1 = (collideWith == MapObjectCollideWith.Characters);
				if (bVar1) {
				}
				else {
					bVar1 = (collideWith == MapObjectCollideWith.Titans);
					if (bVar1) {
					}
					else {
						bVar1 = (collideWith == MapObjectCollideWith.Humans);
						if (bVar1) {
						}
						else {
							bVar1 = (collideWith == MapObjectCollideWith.Projectiles);
							if (bVar1) {
							}
							else {
								bVar1 = (collideWith == MapObjectCollideWith.Entities);
								if (bVar1) {
								}
								else {
									bVar1 = (collideWith == MapObjectCollideWith.MapEditor);
									if (bVar1) {
									}
									else {
										bVar1 = (collideWith == MapObjectCollideWith.Hitboxes);
										if (bVar1) {
										}
									}
								}
							}
						}
					}
				}
			}
		}
		return iVar2;
	}

	[Token(Token = "0x60019AF")]
	[Address(RVA = "0x5899DE0", Offset = "0x5898DE0", VA = "0x5899DE0")]
	private static UnityEngine.Object LoadAssetCached(string path, string asset)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$LoadAssetCached): clean
		Dictionary<object, object> pSVar1;
		bool bVar2;
		String key;
		Object pUVar3;

		key = String.Concat(path, "/", asset);
		pSVar1 = (Dictionary<object, object>)MapLoader._assetCache;
		if (pSVar1 != null) {
			bVar2 = pSVar1.ContainsKey((object)key);
			if (!bVar2) {
				pSVar1 = (Dictionary<object, object>)MapLoader._assetCache;
				pUVar3 = ResourceManager.LoadAsset(path, asset, false, false);
				if (pSVar1 == null) goto label_05999f51;
				pSVar1.Add((object)key, (object)pUVar3);
			}
			pSVar1 = (Dictionary<object, object>)MapLoader._assetCache;
			if (pSVar1 != null) {
				pUVar3 = pSVar1.get_Item((object)key);
				return pUVar3;
			}
		}
	label_05999f51: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60019B0")]
	[Address(RVA = "0x5896320", Offset = "0x5895320", VA = "0x5896320")]
	private static GameObject LoadPrefabCached(string asset)
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$LoadPrefabCached): 1 lines keep C-only constructs
		int iVar1;
		Dictionary<object, object> pSVar2;
		bool bVar3;
		String[] pSVar4;
		String name;
		Object pUVar5;
		String pSVar6;

		pSVar2 = (Dictionary<object, object>)MapLoader._assetCache;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		bVar3 = pSVar2.ContainsKey((object)asset);
		if (!bVar3) {
			if (asset == null) {
				throw new NullReferenceException();
			}
			pSVar4 = asset.Split("/", 0);
			if (pSVar4 == null) {
				throw new NullReferenceException();
			}
			if ((int)pSVar4.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			bVar3 = (pSVar4[0] == "Custom");
			if (bVar3) {
				if ((pSVar4.Length & 0xfffffffe) == 0) {
					throw new IndexOutOfRangeException();
				}
				pSVar6 = pSVar4[1];
				if (pSVar6 == null) {
					throw new NullReferenceException();
				}
				name = asset.Substring(pSVar6._stringLength + 8);
				pSVar2 = (Dictionary<object, object>)MapLoader._assetCache;
				pUVar5 = AssetBundleManager.LoadAsset(pSVar6, name);
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				pSVar2.Add((object)asset, (object)pUVar5);
			}
			else {
				iVar1 = (int)pSVar4.Length;
				if (iVar1 == 1) {
					throw new IndexOutOfRangeException();
				}
				if (iVar1 == 0) {
					throw new IndexOutOfRangeException();
				}
				pSVar2 = (Dictionary<object, object>)MapLoader._assetCache;
				pSVar6 = String.Concat(pSVar4[0], "/Prefabs/", pSVar4[1]);
				pUVar5 = ResourceManager.LoadAsset("Map", pSVar6, false, false);
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				pSVar2.Add((object)asset, (object)pUVar5);
			}
			bVar3 = (asset == "Arenas/CaveMap1");
			if (bVar3) {
				WeatherManager.EnableCaveMap();
			}
		}
		pSVar2 = (Dictionary<object, object>)MapLoader._assetCache;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		pUVar5 = pSVar2.get_Item((object)asset);
		pUVar5 = Object.Instantiate(pUVar5);
		if (pUVar5 == null) {
			pUVar5 = null;
		}
		else if (pUVar5.klass != (Object)typeof(GameObject)) {
			throw new InvalidCastException();
		}
		return (GameObject)pUVar5;
	}

	[Token(Token = "0x60019B1")]
	[Address(RVA = "0x589A6D0", Offset = "0x58996D0", VA = "0x589A6D0")]
	public MapLoader()
	{
		// Lifted from source/cpp/Map/MapLoader.c (Map.MapLoader$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Map/MapLoader.c.

	// Map.MapLoader$$.cctor: 3 lines keep C-only constructs
	static MapLoader()
	{
		Map_MapLoader_StaticFields pMVar1;
		Dictionary<int, MapObject> __this;
		Dictionary<int, HashSet<int>> __this_00;
		List<int> __this_01;
		Dictionary<GameObject, MapObject> __this_02;
		Dictionary<string, List<MapObject>> __this_03;
		Dictionary<MapObject, HashSet<string>> __this_04;
		List<Light> __this_05;
		List<MapLight> __this_06;
		List<MapTargetable> __this_07;
		Dictionary<string, Object> __this_08;
		Dictionary<string, List<Material>> pSVar2;
		Dictionary<string, Material> __this_09;
		List<string> __this_10;
		List<NavMeshBuildSource> __this_11;
		List<Bounds> __this_12;
		List<MapLoader.NavMeshBuild> __this_13;

		if (Il2CppMethodInitialized_07545a5f == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapTargetable_ctor) ;
			Il2CppMethodInitialized_07545a5f = true;
		}
		__this = new Dictionary<int, MapObject>();
		MapLoader.IdToMapObject = __this;
		__this_00 = new Dictionary<int, HashSet<int>>();
		pMVar1 = typeof(MapLoader).static_fields;
		pMVar1.IdToChildren = __this_00;
		__this_01 = new List<int>();
		pMVar1 = typeof(MapLoader).static_fields;
		pMVar1.ObjectOrder = __this_01;
		__this_02 = new Dictionary<GameObject, MapObject>() ;
		pMVar1 = typeof(MapLoader).static_fields;
		pMVar1.GoToMapObject = __this_02;
		__this_03 = new Dictionary<string, List<MapObject>>();
		pMVar1 = typeof(MapLoader).static_fields;
		pMVar1.Tags = __this_03;
		__this_04 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<MapObject, HashSet<string>>));
		__this_04 = new Dictionary<object, object>();
		pMVar1 = typeof(MapLoader).static_fields;
		pMVar1.MapObjectToTags = __this_04;
		__this_05 = new List<Light>();
		pMVar1 = typeof(MapLoader).static_fields;
		pMVar1.Daylight = __this_05;
		__this_06 = new List<MapLight>();
		pMVar1 = typeof(MapLoader).static_fields;
		pMVar1.MapLights = __this_06;
		__this_07 = il2cpp_codegen_object_new(typeof(List<MapTargetable>)) ;
		__this_07 = new List<object>();
		pMVar1 = typeof(MapLoader).static_fields;
		pMVar1.MapTargetables = __this_07;
		__this_08 = new Dictionary<string, Object>();
		pMVar1 = typeof(MapLoader).static_fields;
		pMVar1._assetCache = __this_08;
		pSVar2 = new Dictionary<string, List<Material>>() ;
		pMVar1 = typeof(MapLoader).static_fields;
		pMVar1._assetMaterialCache = pSVar2;
		pSVar2 = new Dictionary<string, List<Material>>() ;
		pMVar1 = typeof(MapLoader).static_fields;
		pMVar1._defaultMaterialCache = pSVar2;
		__this_09 = new Dictionary<string, Material>();
		pMVar1 = typeof(MapLoader).static_fields;
		pMVar1._customMaterialCache = __this_09;
		__this_10 = new List<string>();
		pMVar1 = typeof(MapLoader).static_fields;
		pMVar1.Errors = __this_10;
		__this_11 = new List<NavMeshBuildSource>();
		pMVar1 = typeof(MapLoader).static_fields;
		pMVar1._navMeshSources = __this_11;
		__this_12 = new List<Bounds>();
		pMVar1 = typeof(MapLoader).static_fields;
		pMVar1._navMeshBounds = __this_12;
		__this_13 = new List<MapLoader.NavMeshBuild>();
		pMVar1 = typeof(MapLoader).static_fields;
		pMVar1._navMeshBuilds = __this_13;
		pMVar1 = typeof(MapLoader).static_fields;
		pMVar1.ROOT_OBJECT_ID = -1;
		pMVar1.NETWORK_OFFSET = 1000;
		return;
	}

	// Map.MapLoader.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new MapLoader.c();
		MapLoader.c.__9 = (MapLoader.c)__this;
		return;
	}

	// Map.MapLoader.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Map.MapLoader.<>c$$<LoadObjectsCoroutine>b__50_0: 3 lines keep C-only constructs
	private void c__LoadObjectsCoroutine_b__50_0()
	{
		Dictionary<int, object> __this_00;
		object mapObject;
		bool bVar1;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_01;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
		byte local_28;

		local_48._dictionary = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._currentValue = null;
		__this_00 = (Dictionary<int, object>)MapLoader.IdToMapObject;
		if (__this_00 != null) {
			__this_01 = __this_00.Values;
			if (__this_01 != null) {
				local_48 = __this_01.GetEnumerator() ;
				local_28 = (byte)&local_48;
				while(true) {
					bVar1 = local_48.MoveNext();
					mapObject = local_48._currentValue;
					if (!bVar1) break;
					MapLoader.SetParent((MapObject)mapObject);
				}
				local_48.Dispose();
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Map.MapLoader.<>c__DisplayClass54_0$$.ctor: clean
	private void c__DisplayClass54_0__ctor()
	{
		base();
		return;
	}

	// Map.MapLoader.<>c__DisplayClass54_0$$<CollectNavMeshSources>b__0: clean
	private bool c__DisplayClass54_0__CollectNavMeshSources_b__0(NavMeshBuildSource source)
	{
		HashSet<object> __this_00;
		bool bVar1;
		Component __this_01;
		GameObject item;

		__this_00 = (HashSet<object>)this.staticObjects;
		__this_01 = source.component;
		if (__this_01 != null) {
			item = __this_01.gameObject;
			if (__this_00 != null) {
				bVar1 = __this_00.Contains((object)item);
				return bVar1;
			}
		}
		throw new NullReferenceException();
	}

	// Map.MapLoader.<>c__DisplayClass57_0$$.ctor: clean
	private void c__DisplayClass57_0__ctor()
	{
		base();
		return;
	}

	// Map.MapLoader.<>c__DisplayClass57_0$$<RemoveNavMeshSources>b__0: clean
	private bool c__DisplayClass57_0__RemoveNavMeshSources_b__0(NavMeshBuildSource source)
	{
		HashSet<object> __this_00;
		bool bVar1;
		Component item;

		__this_00 = (HashSet<object>)this.components;
		item = source.component;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.Contains((object)item);
		return bVar1;
	}

	// Map.MapLoader.<>c__DisplayClass80_0$$.ctor: clean
	private void c__DisplayClass80_0__ctor()
	{
		base();
		return;
	}

	// Map.MapLoader.<>c__DisplayClass80_0$$<SetMaterial>b__0: clean
	private bool c__DisplayClass80_0__SetMaterial_b__0(Renderer r)
	{
		GameObject ownerGo;
		bool bVar1;

		ownerGo = this.go;
		bVar1 = MapLoader.RendererBelongsToMapObject(r, ownerGo);
		return bVar1;
	}
}
