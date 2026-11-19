// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapDestruction
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapDestruction.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Characters;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;

namespace Map;

[Token(Token = "0x20003F0")]
internal static class MapDestruction
{
	[Token(Token = "0x20003F1")]
	[CompilerGenerated]
	private sealed class _003CSweepHitbox_003Ed__31 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001434")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001435")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001436")]
		[FieldOffset(Offset = "0x20")]
		public BaseHitbox hitbox;

		[Token(Token = "0x4001437")]
		[FieldOffset(Offset = "0x28")]
		private HashSet<int> _003Chit_003E5__2;

		[Token(Token = "0x4001438")]
		[FieldOffset(Offset = "0x30")]
		private Collider _003Ccollider_003E5__3;

		[Token(Token = "0x4001439")]
		[FieldOffset(Offset = "0x38")]
		private Vector3 _003Cprevious_003E5__4;

		[Token(Token = "0x170002AC")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001930")]
			[Address(RVA = "0x5882D10", Offset = "0x5881D10", VA = "0x5882D10", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction.<SweepHitbox>d__31$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170002AD")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001932")]
			[Address(RVA = "0x5882D60", Offset = "0x5881D60", VA = "0x5882D60", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction.<SweepHitbox>d__31$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600192D")]
		[Address(RVA = "0x587E010", Offset = "0x587D010", VA = "0x587E010")]
		[DebuggerHidden]
		public _003CSweepHitbox_003Ed__31(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction.<SweepHitbox>d__31$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x600192E")]
		[Address(RVA = "0x58827B0", Offset = "0x58817B0", VA = "0x58827B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction.<SweepHitbox>d__31$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x600192F")]
		[Address(RVA = "0x58827C0", Offset = "0x58817C0", VA = "0x58827C0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction.<SweepHitbox>d__31$$MoveNext): 19 lines keep C-only constructs
			uint uVar1;
			uint uVar2;
			sbyte cVar3;
			byte bVar4;
			int iVar5;
			BaseHitbox pCVar6;
			Collider pUVar7;
			BoxCollider __this_00;
			Collider[] pUVar8;
			BaseCharacter attacker;
			Vector3 point0;
			bool bVar9;
			int iVar10;
			HashSet<int> pSVar11;
			Transform pUVar12;
			MethodInfo pMVar13;
			float hitSize;
			uint extraout_XMM0_Dc;
			uint extraout_XMM0_Dd;
			ulong uVar14;
			float fVar15;
			float fVar16;
			float fVar17;
			float fVar18;
			Quaternion UVar19;
			Vector3 center;
			Vector3 UVar20;
			Vector3 UVar21;
			Vector3 v;
			Vector3 direction;
			Vector3 halfExtents;
			ulong uStack_98;
			float fStack_78;
			float fStack_74;
			Bounds UStack_60;
			byte[] auStack_48 = new byte[16];
			byte[] auStack_38 = new byte[16];

			iVar5 = this.__1__state;
			if (iVar5 == 1) {
				this.__1__state = -1;
			}
			else {
				if (iVar5 != 0) {
					return false;
				}
				this.__1__state = -1;
				pSVar11 = new HashSet<int>();
				this._hit_5__2 = pSVar11;
				pCVar6 = this.hitbox;
				if (pCVar6 == null) goto label_05982d0a;
				this._collider_5__3 = pCVar6._collider;
				pUVar7 = this._collider_5__3;
				if (pUVar7 == null) goto label_05982d0a;
				UStack_60 = pUVar7.bounds;
				this._previous_5__4.x = UStack_60.m_Center.x;
				this._previous_5__4.y = UStack_60.m_Center.y;
				this._previous_5__4.z = UStack_60.m_Center.z;
			}
			pUVar7 = this._collider_5__3;
			if (pUVar7 == null) goto label_05982d0a;
			bVar9 = pUVar7.enabled;
			if (!bVar9) {
				return false;
			}
			if ((typeof(MapDestruction)._2).cctor_finished_or_no_cctor == 0) {
				if (Il2CppMethodInitialized_075459e5 != false) goto label_0598290a;
		label_05982933: ;
				Il2CppMethodInitialized_075459e5 = true;
				if ((typeof(MapDestruction)._2).cctor_finished_or_no_cctor != 0) goto label_05982917;
		label_0598295f: ;
				bVar9 = MapDestruction.IsActive;
			}
			else {
				if (Il2CppMethodInitialized_075459e5 == false) goto label_05982933;
		label_0598290a: ;
				if ((typeof(MapDestruction)._2).cctor_finished_or_no_cctor == 0) goto label_0598295f;
		label_05982917: ;
				bVar9 = MapDestruction.IsActive;
			}
			if (!bVar9) {
				return false;
			}
			if (((typeof(MapManager))._2).cctor_finished_or_no_cctor == 0) {
				cVar3 = MapManager.MapLoaded;
			}
			else {
				cVar3 = *(sbyte)(typeof(MapManager)).static_fields;
			}
			if (cVar3 == false) {
				return false;
			}
			pMVar13 = (MethodInfo)this._collider_5__3;
			if (pMVar13 == null) goto label_05982d0a;
			UStack_60 = pMVar13.bounds;
			pUVar7 = this._collider_5__3;
			hitSize = MapDestruction.GetHitSize(pUVar7);
			__this_00 = (BoxCollider)this._collider_5__3;
			if (__this_00 == null) {
		label_05982a24: ;
				point0 = this._previous_5__4;
				pUVar8 = MapDestruction.Overlaps;
				iVar10 = MapDestruction.MapMask;
				pMVar13 = null;
				UVar20.z = UStack_60.m_Center.z;
				UVar20.x = UStack_60.m_Center.x;
				UVar20.y = UStack_60.m_Center.y;
				iVar10 = Physics.OverlapCapsuleNonAlloc((Vector3)point0, UVar20, hitSize * 0.5, pUVar8, iVar10, 1);
				pCVar6 = this.hitbox;
			}
			else {
				bVar4 = (typeof(BoxCollider)._2).typeHierarchyDepth;
				if (((__this_00.klass._2).typeHierarchyDepth < bVar4) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar4 - 1] !=typeof(BoxCollider))) goto label_05982a24;
				UVar20 = __this_00.size;
				pUVar12 = __this_00.transform;
				if (pUVar12 == null) goto label_05982d0a;
				UVar21 = pUVar12.lossyScale;
				uStack_98._0_4_ = UVar20.x;
				uStack_98._4_4_ = UVar20.y;
				uVar14 = 0;
				v.y = uStack_98._4_4_ * UVar21.y;
				v.x = (float)uStack_98 * UVar21.x;
				v.z = UVar20.z * UVar21.z;
				UVar20 = Util.Abs(v);
				pUVar8 = MapDestruction.Overlaps;
				pUVar12 = __this_00.transform;
				if (pUVar12 == null) goto label_05982d0a;
				uStack_98._0_4_ = UVar20.x;
				uStack_98._4_4_ = UVar20.y;
				UVar19 = pUVar12.rotation;
				iVar10 = MapDestruction.MapMask;
				fVar15 = UVar19.x;
				fVar16 = UVar19.y;
				fVar17 = UVar19.z;
				fVar18 = UVar19.w;
				if ((typeof(Physics)._2).cctor_finished_or_no_cctor == 0) {
					auStack_38._8_4_ = extraout_XMM0_Dc;
					auStack_38._0_8_ = UVar19._0_8_;
					auStack_38._12_4_ = extraout_XMM0_Dd;
					auStack_48._8_4_ = (int)uVar14;
					auStack_48._0_8_ = UVar19._8_8_;
					auStack_48._12_4_ = (int)((ulong)uVar14 >> 0x20);
					fVar15 = (float)auStack_38._0_4_;
					fVar16 = (float)auStack_38._4_4_;
					fVar17 = (float)auStack_48._0_4_;
					fVar18 = (float)auStack_48._4_4_;
				}
				pMVar13 = null;
				UVar21.z = UStack_60.m_Center.z;
				UVar21.x = UStack_60.m_Center.x;
				UVar21.y = UStack_60.m_Center.y;
				halfExtents.z = UVar20.z * 0.5;
				halfExtents.x = (float)uStack_98 * 0.5;
				halfExtents.y = uStack_98._4_4_ * 0.5;
				UVar19.y = fVar16;
				UVar19.x = fVar15;
				UVar19.w = fVar18;
				UVar19.z = fVar17;
				iVar10 = Physics.OverlapBoxNonAlloc(UVar21, halfExtents, pUVar8, UVar19, iVar10, 1);
				pCVar6 = this.hitbox;
			}
			if (pCVar6 != null) {
				attacker = pCVar6.Owner;
				uVar1 = this._previous_5__4.x;
				uVar2 = this._previous_5__4.y;
				fStack_78 = UStack_60.m_Center.x;
				fStack_74 = UStack_60.m_Center.y;
				direction.x = fStack_78 - (float)uVar1;
				direction.y = fStack_74 - (float)uVar2;
				direction.z = UStack_60.m_Center.z - this._previous_5__4.z;
				pSVar11 = this._hit_5__2;
				if (((typeof(MapDestruction))._2).cctor_finished_or_no_cctor == 0) {
				}
				center.z = UStack_60.m_Center.z;
				center.x = UStack_60.m_Center.x;
				center.y = UStack_60.m_Center.y;
				MapDestruction.Request(attacker, iVar10, center, direction, hitSize, pSVar11);
				this._previous_5__4.x = UStack_60.m_Center.x;
				this._previous_5__4.y = UStack_60.m_Center.y;
				this._previous_5__4.z = UStack_60.m_Center.z;
				this.__2__current = (object)MapDestruction.FixedStep;
				this.__1__state = 1;
				return true;
			}
		label_05982d0a: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6001931")]
		[Address(RVA = "0x5882D20", Offset = "0x5881D20", VA = "0x5882D20", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction.<SweepHitbox>d__31$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Map_MapDestruction_SweepHitbox_d__31_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x400141F")]
	private const float MaxObjectToHitboxSize = 23f;

	[Token(Token = "0x4001420")]
	private const float MaxObjectToExplosionSize = 11f;

	[Token(Token = "0x4001421")]
	private const float MaxObjectSize = 1000f;

	[Token(Token = "0x4001422")]
	private const float MaxHitToHandSize = 4f;

	[Token(Token = "0x4001423")]
	private const float MaxExplosionSize = 150f;

	[Token(Token = "0x4001424")]
	private const float ExplosionReachToRadius = 0.5f;

	[Token(Token = "0x4001425")]
	private const float MaxAttackerDistance = 1000f;

	[Token(Token = "0x4001426")]
	private const int StateChunkSize = 256;

	[Token(Token = "0x4001427")]
	private const int MaxEffectsPerEvent = 4;

	[Token(Token = "0x4001428")]
	private const float AttachedSizeRatio = 0.5f;

	[Token(Token = "0x4001429")]
	private const float AttachedContainment = 0.6f;

	[Token(Token = "0x400142A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int MapMask;

	[Token(Token = "0x400142B")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<int, DestructibleMapObject> Objects;

	[Token(Token = "0x400142C")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Dictionary<Renderer, BatchSlice> BatchSlices;

	[Token(Token = "0x400142D")]
	[FieldOffset(Offset = "0x18")]
	private static readonly HashSet<int> Destroyed;

	[Token(Token = "0x400142E")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Collider[] Overlaps;

	[Token(Token = "0x400142F")]
	[FieldOffset(Offset = "0x28")]
	private static readonly List<int> Targets;

	[Token(Token = "0x4001430")]
	[FieldOffset(Offset = "0x30")]
	private static readonly List<DestructibleMapObject> Applied;

	[Token(Token = "0x4001431")]
	[FieldOffset(Offset = "0x38")]
	private static readonly Queue<int> Pending;

	[Token(Token = "0x4001432")]
	[FieldOffset(Offset = "0x40")]
	private static readonly HashSet<Component> NavMeshRemovals;

	[Token(Token = "0x4001433")]
	[FieldOffset(Offset = "0x48")]
	private static readonly WaitForFixedUpdate FixedStep;

	[Token(Token = "0x170002AA")]
	public static bool IsActive
	{
		[Token(Token = "0x6001910")]
		[Address(RVA = "0x587D0F0", Offset = "0x587C0F0", VA = "0x587D0F0")]
		get
		{
			// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$get_IsActive): clean
			InGameSet pSVar1;
			InGameMiscSettings pSVar2;
			BoolSetting pSVar3;

			pSVar1 = SettingsManager.InGameCurrent;
			if (((pSVar1 == null) ||(pSVar2 = pSVar1.Misc, pSVar2 == null)) ||(pSVar3 = pSVar2.DestructibleEnvironment, pSVar3 == null)) {
				throw new NullReferenceException();
			}
			if (pSVar3._value == false) {
				return false;
			}
			return SceneLoader.SceneName == 2;
		}
	}

	[Token(Token = "0x170002AB")]
	private static bool Enabled
	{
		[Token(Token = "0x6001911")]
		[Address(RVA = "0x587D180", Offset = "0x587C180", VA = "0x587D180")]
		get
		{
			// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$get_Enabled): 4 lines keep C-only constructs
			uint uVar1;
			bool bVar2;
			Il2CppClass klass;

			if (Il2CppMethodInitialized_075459e5 == false) {
				Il2CppMethodInitialized_075459e5 = true;
				uVar1 = (typeof(MapDestruction)._2).cctor_finished_or_no_cctor;
				klass = typeof(MapDestruction);
			}
			else {
				uVar1 = (typeof(MapDestruction)._2).cctor_finished_or_no_cctor;
				klass = typeof(MapDestruction);
			}
			typeof(MapDestruction) = (MapDestruction)klass;
			if (uVar1 == 0) {
				bVar2 = MapDestruction.IsActive;
			}
			else {
				bVar2 = MapDestruction.IsActive;
			}
			if (bVar2) {
				if (((typeof(MapManager))._2).cctor_finished_or_no_cctor == 0) {
				}
				return MapManager.MapLoaded != false;
			}
			return false;
		}
	}

	[Token(Token = "0x6001912")]
	[Address(RVA = "0x587D220", Offset = "0x587C220", VA = "0x587D220")]
	public static void Reset()
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$Reset): clean
		uint uVar1;
		Dictionary<int, object> __this;
		Dictionary<Renderer, BatchSlice> __this_00;
		HashSet<int> __this_01;

		if (Il2CppMethodInitialized_075459e6 == false) {
			Il2CppMethodInitialized_075459e6 = true;
			uVar1 = (typeof(MapDestruction)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapDestruction)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (Dictionary<int, object>)MapDestruction.Objects;
		}
		else {
			__this = *(Dictionary<int, object>*)((long)(typeof(MapDestruction)).static_fields + 8);
		}
		if (__this != null) {
			__this.Clear();
			__this_00 = MapDestruction.BatchSlices;
			if (__this_00 != null) {
				__this_00.Clear();
				__this_01 = MapDestruction.Destroyed;
				if (__this_01 != null) {
					__this_01.Clear();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001913")]
	[Address(RVA = "0x587D310", Offset = "0x587C310", VA = "0x587D310")]
	public static void RegisterBatchSlice(Renderer original, Mesh combined, int start, int count)
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$RegisterBatchSlice): clean
		Dictionary<Renderer, BatchSlice> __this;
		BatchSlice value;
		Mesh local_38;

		__this = MapDestruction.BatchSlices;
		local_38 = combined;
		if (__this == null) {
			throw new NullReferenceException();
		}
		value.Start = start;
		value.Mesh = local_38;
		value.Count = count;
		__this.set_Item((object)original, value);
		return;
	}

	[Token(Token = "0x6001914")]
	[Address(RVA = "0x587D3D0", Offset = "0x587C3D0", VA = "0x587D3D0")]
	public static void Build()
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$Build): 15 lines keep C-only constructs
		uint uVar1;
		Dictionary<int, object> pSVar2;
		Dictionary<Renderer, BatchSlice> batchSlices;
		MapObject mapObject;
		bool bVar3;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this;
		DestructibleMapObject value;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo pMVar4;
		Il2CppClass klass;
		byte[] auStack_60 = new byte[16];
		MapObject pMStack_50;
		byte[] auStack_48 = new byte[16];
		MapObject pMStack_38;

		if (Il2CppMethodInitialized_075459e8 == false) {
			Il2CppMethodInitialized_075459e8 = true;
			uVar1 = (typeof(MapDestruction)._2).cctor_finished_or_no_cctor;
			klass = typeof(MapDestruction);
		}
		else {
			uVar1 = (typeof(MapDestruction)._2).cctor_finished_or_no_cctor;
			klass = typeof(MapDestruction);
		}
		typeof(MapDestruction) = (MapDestruction)klass;
		if (uVar1 == 0) {
			bVar3 = MapDestruction.IsActive;
		}
		else {
			bVar3 = MapDestruction.IsActive;
		}
		if (!bVar3) {
			return;
		}
		if (((typeof(MapLoader))._2).cctor_finished_or_no_cctor == 0) {
		}
		pSVar2 = (Dictionary<int, object>)MapLoader.IdToMapObject;
		if ((pSVar2 != null) &&(__this = pSVar2.Values, __this != null)) {
			auStack_60.GetEnumerator(__this);
			pMStack_38 = pMStack_50;
			auStack_48._0_8_ = auStack_60._0_8_;
			auStack_48._8_8_ = auStack_60._8_8_;
			auStack_60._0_8_ = null;
			auStack_60._8_8_ =(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o)auStack_48;
			while (true) {
				bVar3 = auStack_48.MoveNext();
				mapObject = pMStack_38;
				if (!(bVar3)) break;
				pMVar4 = extraout_RDX;
				if ((typeof(MapDestruction)._2).cctor_finished_or_no_cctor == 0) {
					pMVar4 = extraout_RDX_00;
				}
				batchSlices = MapDestruction.BatchSlices;
				if ((typeof(DestructibleMapObject)._2).cctor_finished_or_no_cctor == 0) {
					pMVar4 = extraout_RDX_01;
				}
				value = DestructibleMapObject.Create(mapObject, batchSlices, 1000.0);
				if (value != null) {
					pSVar2 = (Dictionary<int, object>)MapDestruction.Objects;
					if (pSVar2 == null) {
						throw new NullReferenceException();
					}
					pSVar2.set_Item(value.Id, (object)value);
				}
			}
			auStack_48.Dispose();
			pMVar4 = (MethodInfo)MapDestruction.BatchSlices;
			if (pMVar4 != null) {
				pMVar4.Clear();
				MapDestruction.RemoveParentsOfIndestructible();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001915")]
	[Address(RVA = "0x587D6D0", Offset = "0x587C6D0", VA = "0x587D6D0")]
	private static void RemoveParentsOfIndestructible()
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$RemoveParentsOfIndestructible): 13 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<int, object> pSVar3;
		Int32[] pSVar4;
		int iVar6;
		int key;
		bool bVar7;
		List<int> __this;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_00;
		byte[] local_b8 = new byte[16];
		object local_a8;
		List<int> local_a0;
		byte[] local_98 = new byte[8];
		object local_88;
		HashSet<int> local_80;
		byte[] local_78 = new byte[8];
		object local_68;
		byte[] local_58 = new byte[8];
		object local_48;

		local_98 = (byte[])0x0;
		local_88 = null;
		local_80 = null;
		local_58 = (byte[])0x0;
		local_48 = null;
		local_78 = (byte[])0x0;
		local_68 = null;
		__this = new List<int>();
		if (__this != null) {
			local_a0 = __this;
			while(true) {
				piVar1 = &__this._version;
				*piVar1 = *piVar1 + 1;
				__this._size = 0;
				pSVar3 = (Dictionary<int, object>)MapDestruction.Objects;
				if ((pSVar3 == null) ||(__this_00 = pSVar3.Keys, __this_00 == null)) break;
				local_b8.GetEnumerator(__this_00);
				local_88 = local_a8;
				local_98 = (byte[])local_b8._0_8_;
				while (bVar7 = local_98.MoveNext()) {
					iVar6 = (int32_t)local_88;
					pSVar3 = (Dictionary<int, object>)MapLoader.IdToChildren;
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					bVar7 = pSVar3.TryGetValue(iVar6, (object*)&local_80);
					if (bVar7) {
						if (local_80 == null) {
							throw new NullReferenceException();
						}
						local_b8.GetEnumerator(local_80);
						local_48 = local_a8;
						local_58 = (byte[])local_b8._0_8_;
						local_b8._0_8_ = null;
						local_b8._8_8_ = (System_Collections_Generic_List_Enumerator_int__o)local_58;
						do {
							bVar7 = local_58.MoveNext();
							if (!bVar7) goto label_0597da72;
							key = (int32_t)local_48;
							pSVar3 = (Dictionary<int, object>)MapDestruction.Objects;
							if (pSVar3 == null) {
								throw new NullReferenceException();
							}
							bVar7 = pSVar3.ContainsKey(key);
						} while (bVar7);
						piVar1 = &local_a0._version;
						*piVar1 = *piVar1 + 1;
						pSVar4 = local_a0._items;
						if (pSVar4 == null) {
							throw new NullReferenceException();
						}
						uVar2 = local_a0._size;
						if (uVar2 < (uint)pSVar4.Length) {
							local_a0._size = uVar2 + 1;
							pSVar4[(int)uVar2] = iVar6;
						}
						else {
							local_a0.AddWithResize(iVar6);
						}
	label_0597da72: ;
						local_58.Dispose();
					}
				}
				local_98.Dispose();
				__this = local_a0;
				local_b8.GetEnumerator(local_a0);
				local_68 = local_a8;
				local_78 = (byte[])local_b8._0_8_;
				local_b8._0_8_ = null;
				local_b8._8_8_ = (System_Collections_Generic_List_Enumerator_int__o)local_78;
				while (bVar7 = local_78.MoveNext()) {
					iVar6 = (int32_t)local_68;
					pSVar3 = (Dictionary<int, object>)MapDestruction.Objects;
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					pSVar3.Remove(iVar6);
				}
				local_78.Dispose();
				if (__this._size < 1) {
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001916")]
	[Address(RVA = "0x587DD20", Offset = "0x587CD20", VA = "0x587DD20")]
	public static void Remove(int id)
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$Remove): clean
		uint uVar1;
		Dictionary<int, object> __this;
		HashSet<int> __this_00;

		if (Il2CppMethodInitialized_075459ea == false) {
			Il2CppMethodInitialized_075459ea = true;
			uVar1 = (typeof(MapDestruction)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapDestruction)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (Dictionary<int, object>)MapDestruction.Objects;
		}
		else {
			__this = *(Dictionary<int, object>*)((long)(typeof(MapDestruction)).static_fields + 8);
		}
		if (__this != null) {
			__this.Remove(id);
			__this_00 = MapDestruction.Destroyed;
			if (__this_00 != null) {
				__this_00.Remove(id);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001917")]
	[Address(RVA = "0x587DDF0", Offset = "0x587CDF0", VA = "0x587DDF0")]
	public static bool CanDestroyWith(BaseCharacter attacker)
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$CanDestroyWith): 4 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		Dictionary<int, object> __this;
		byte uVar3;
		bool bVar4;
		int iVar5;
		MapDestruction klass;

		if (Il2CppMethodInitialized_075459eb == false) {
			Il2CppMethodInitialized_075459eb = true;
			uVar2 = (typeof(MapDestruction)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(MapDestruction)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_075459e5 == false) {
			Il2CppMethodInitialized_075459e5 = true;
			uVar2 = (typeof(MapDestruction)._2).cctor_finished_or_no_cctor;
			klass = typeof(MapDestruction);
		}
		else {
			uVar2 = *(uint)((long)typeof(MapDestruction) + 0xe4);
			klass = typeof(MapDestruction);
		}
		typeof(MapDestruction) = klass;
		if (uVar2 == 0) {
			uVar3 = MapDestruction.IsActive;
		}
		else {
			uVar3 = MapDestruction.IsActive;
		}
		if ((bool)uVar3) {
			if ((typeof(MapManager)._2).cctor_finished_or_no_cctor == 0) {
				cVar1 = MapManager.MapLoaded;
			}
			else {
				cVar1 = MapManager.MapLoaded;
			}
			if (cVar1 != false) {
				if (((typeof(Object))._2).cctor_finished_or_no_cctor == 0) {
				}
				bVar4 = ((Object)attacker != null);
				if (!bVar4) {
					return false;
				}
				if (attacker != null) {
					bVar4 = attacker.IsMine();
					if (!bVar4) {
						return false;
					}
					__this = (Dictionary<int, object>)MapDestruction.Objects;
					if (__this != null) {
						return 0 < iVar5;
					}
				}
				throw new NullReferenceException();
			}
		}
		return false;
	}

	[Token(Token = "0x6001918")]
	[Address(RVA = "0x587DFA0", Offset = "0x587CFA0", VA = "0x587DFA0")]
	[IteratorStateMachine(typeof(_003CSweepHitbox_003Ed__31))]
	public static IEnumerator SweepHitbox(BaseHitbox hitbox)
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$SweepHitbox): clean
		MapDestruction.d__31<SweepHitbox> __this;

		__this = new MapDestruction.d__31<SweepHitbox>();
		__this.__1__state = 0;
		__this.hitbox = hitbox;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x6001919")]
	[Address(RVA = "0x587E030", Offset = "0x587D030", VA = "0x587E030")]
	public static void Explode(BaseCharacter attacker, Vector3 center, float radius)
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$Explode): clean
		uint uVar1;
		Collider[] results;
		bool bVar2;
		int iVar3;

		if (Il2CppMethodInitialized_075459ed == false) {
			Il2CppMethodInitialized_075459ed = true;
			uVar1 = (typeof(MapDestruction)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapDestruction)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar2 = MapDestruction.CanDestroyWith(attacker);
		}
		else {
			bVar2 = MapDestruction.CanDestroyWith(attacker);
		}
		if (bVar2) {
			if (((typeof(MapDestruction))._2).cctor_finished_or_no_cctor == 0) {
			}
			results = MapDestruction.Overlaps;
			iVar3 = MapDestruction.MapMask;
			iVar3 = Physics.OverlapSphereNonAlloc(center, radius * 0.5, results, iVar3, 1);
			MapDestruction.Request(attacker, iVar3, center, (Vector3)(Vector3.zeroVector), radius + radius, null);
			return;
		}
		return;
	}

	[Token(Token = "0x600191A")]
	[Address(RVA = "0x587E1B0", Offset = "0x587D1B0", VA = "0x587E1B0")]
	private static void Request(BaseCharacter attacker, int count, Vector3 center, Vector3 direction, float hitSize, HashSet<int> hit)
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$Request): 30 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		int iVar3;
		uint uVar4;
		Collider[] pUVar5;
		Component __this;
		MapScriptBaseObject pMVar6;
		BaseComponentCache pUVar7;
		PhotonView pPVar8;
		BaseCharacter pCVar9;
		bool bVar10;
		Transform current;
		MapObject pMVar11;
		List<int> pSVar12;
		Int32[] pSVar13;
		Player sender;
		Object[] parameters;
		object pIVar14;
		object pIVar15;
		MethodInfo* method_00;
		uint uVar17;
		long lVar18;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		uint in_XMM2_Dc;
		uint in_XMM2_Dd;
		Vector3 center_00;
		Vector3 direction_00;
		float local_a0;
		float local_90;
		int local_8c;
		HashSet<int> local_88;
		BaseCharacter local_80;
		ulong local_78;
		ulong local_68;
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[16];

		direction_00.z = direction.z;
		center_00.z = center.z;
		local_58._8_4_ = in_XMM2_Dc;
		local_58._0_8_ = direction._0_8_;
		local_58._12_4_ = in_XMM2_Dd;
		local_48._8_4_ = in_XMM0_Dc;
		local_48._0_8_ = center._0_8_;
		local_48._12_4_ = in_XMM0_Dd;
		local_88 = hit;
		if (Il2CppMethodInitialized_075459ee == false) {
			Il2CppMethodInitialized_075459ee = true;
			if ((typeof(MapDestruction)._2).cctor_finished_or_no_cctor == 0) goto label_0597e2da;
	label_0597e206: ;
			pSVar12 = MapDestruction.Targets;
		}
		else {
			if ((typeof(MapDestruction)._2).cctor_finished_or_no_cctor != 0) goto label_0597e206;
	label_0597e2da: ;
			pSVar12 = MapDestruction.Targets;
		}
		if (pSVar12 != null) {
			piVar1 = &pSVar12._version;
			*piVar1 = *piVar1 + 1;
			pSVar12._size = 0;
			local_a0 = 11.0;
			if (attacker != null) {
				bVar2 = (typeof(BaseTitan)._2).typeHierarchyDepth;
				if (bVar2 <= (attacker.klass._2).typeHierarchyDepth) {
					local_a0 = *(float)(&g_data_0100ab20 +(ulong)((attacker.klass._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(BaseTitan)) * 4);
				}
			}
			local_80 = attacker;
			if (0 < count) {
				uVar17 = 0;
				lVar18 = 0x20;
				do {
					pUVar5 = MapDestruction.Overlaps;
					if (pUVar5 == null) goto label_0597e8fc;
					if ((uint)pUVar5.Length <= uVar17) goto label_0597e901;
					__this = *(Component*)((long)pUVar5.m_Items + lVar18 + -0x20);
					if (__this == null) goto label_0597e8fc;
					current = __this.transform;
					pMVar11 = MapLoader.FindObjectFromTransform(current);
					pUVar5 = MapDestruction.Overlaps;
					if (pUVar5 == null) goto label_0597e8fc;
					if ((uint)pUVar5.Length <= uVar17) goto label_0597e901;
					*(ulong)((long)pUVar5.m_Items + lVar18 + -0x20) = 0;
					if (pMVar11 != null) {
						pMVar6 = pMVar11.ScriptObject;
						if (pMVar6 == null) goto label_0597e8fc;
						iVar3 = pMVar6.Id;
						bVar10 = MapDestruction.CanBreak(iVar3, local_a0 * hitSize);
						if (bVar10) {
							pSVar12 = MapDestruction.Targets;
							if (pSVar12 == null) goto label_0597e8fc;
							bVar10 = pSVar12.Contains(iVar3) ;
							if ((!bVar10) &&((local_88 == null ||(bVar10 = local_88.Add(iVar3))))) {
								pSVar12 = MapDestruction.Targets;
								if (pSVar12 == null) goto label_0597e8fc;
								piVar1 = &pSVar12._version;
								*piVar1 = *piVar1 + 1;
								pSVar13 = pSVar12._items;
								if (pSVar13 == null) goto label_0597e8fc;
								uVar4 = pSVar12._size;
								if (uVar4 < (uint)pSVar13.Length) {
									pSVar12._size = uVar4 + 1;
									pSVar13[(int)uVar4] = iVar3;
								}
								else {
									pSVar12.AddWithResize(iVar3);
								}
							}
						}
					}
					uVar17 = uVar17 + 1;
					lVar18 = lVar18 + 8;
				} while (count != uVar17);
			}
			pCVar9 = local_80;
			pSVar12 = MapDestruction.Targets;
			if (pSVar12 != null) {
				if (pSVar12._size == 0) {
					return;
				}
				if ((typeof(MapDestruction)._2).cctor_finished_or_no_cctor == 0) {
					pSVar12 = MapDestruction.Targets;
					if (pSVar12 == null) goto label_0597e8fc;
				}
				method_00 = &MethodInfo_System_Collections_Generic_List_int_ToArray;
				pSVar13 = pSVar12.ToArray();
				if (((pCVar9 != null) &&(pUVar7 = pCVar9.Cache, pUVar7 != null)) &&(pPVar8 = pUVar7.PhotonView, pPVar8 != null)) {
					iVar3 = pPVar8.viewIdField;
					if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
						bVar10 = PhotonNetwork.IsMasterClient;
						if (bVar10) goto label_0597e67b;
					}
					else {
						bVar10 = PhotonNetwork.IsMasterClient;
						if (bVar10) {
	label_0597e67b: ;
							sender = PhotonNetwork.LocalPlayer;
							center_00.x = (float)local_48._0_4_;
							center_00.y = (float)local_48._4_4_;
							direction_00.x = (float)local_58._0_4_;
							direction_00.y = (float)local_58._4_4_;
							MapDestruction.OnRequest(iVar3, pSVar13, center_00, direction_00, hitSize, sender);
							return;
						}
					}
					pPVar8 = RPCManager.PhotonView;
					parameters = (Object[])new object[5];
					local_8c = iVar3;
					pIVar14 = (object)local_8c;
					if (parameters != null) {
						if ((pIVar14 != null) &&(pIVar15 = il2cpp_vm_Object_IsInst(pIVar14, (((parameters.obj).klass)._1).element_class), pIVar15 == null)) {
	label_0597e906: ;
							pIVar14 = new ArrayTypeMismatchException();
							throw pIVar14;
						}
						if ((int)parameters.Length != 0) {
							parameters[0] = pIVar14;
							if ((pSVar13 != null) &&(pIVar14 = il2cpp_vm_Object_IsInst(&pSVar13.obj, (((parameters.obj).klass)._1).element_class) , pIVar14 == null)) goto label_0597e906;
							if ((parameters.Length & 0xfffffffe) != 0) {
								parameters[1] = &pSVar13.obj;
								local_68 = local_48._0_8_;
								pIVar14 = (object)local_68;
								if ((pIVar14 != null) &&(pIVar15 = il2cpp_vm_Object_IsInst(pIVar14, (((parameters.obj).klass)._1).element_class), pIVar15 == null)) goto label_0597e906;
								if (2 < (uint)parameters.Length) {
									parameters[2] = pIVar14;
									local_78 = local_58._0_8_;
									pIVar14 = (object)local_78;
									if ((pIVar14 != null) &&(pIVar15 = il2cpp_vm_Object_IsInst(pIVar14, (((parameters.obj).klass)._1).element_class), pIVar15 == null)) goto label_0597e906;
									if ((parameters.Length & 0xfffffffc) != 0) {
										parameters[3] = pIVar14;
										local_90 = hitSize;
										pIVar14 = (object)local_90;
										if ((pIVar14 != null) &&(pIVar15 = il2cpp_vm_Object_IsInst(pIVar14, (((parameters.obj).klass)._1).element_class) , pIVar15 == null)) goto label_0597e906;
										if (4 < (uint)parameters.Length) {
											parameters[4] = pIVar14;
											if (pPVar8 != null) {
												pPVar8.RPC("RequestMapDestructionRPC", 2, parameters);
												return;
											}
											goto label_0597e8fc;
										}
									}
								}
							}
						}
	label_0597e901: ;
						throw new IndexOutOfRangeException();
					}
				}
			}
		}
	label_0597e8fc: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600191B")]
	[Address(RVA = "0x587EB20", Offset = "0x587DB20", VA = "0x587EB20")]
	public static void OnRequest(int attackerId, int[] ids, Vector3 center, Vector3 direction, float hitSize, Player sender)
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$OnRequest): 51 lines keep C-only constructs
		byte bVar1;
		int id;
		Collider[] pUVar2;
		BaseComponentCache pUVar3;
		Transform __this;
		Dictionary<int, object> __this_00;
		BaseCharacter pCVar4;
		bool bVar5;
		uint uVar6;
		uint extraout_EAX;
		uint extraout_EAX_00;
		PhotonView pPVar7;
		List<int> __this_01;
		ulong uVar8;
		DestructibleMapObject pMVar9;
		Int32[] ids_00;
		Object[] parameters;
		object pIVar10;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo pMVar11;
		ulong uVar12;
		float fVar13;
		int iVar16;
		byte[] auVar14 = new byte[16];
		byte[] auVar15 = new byte[16];
		byte[] auVar17 = new byte[16];
		uint in_XMM2_Dc;
		uint in_XMM2_Dd;
		uint uVar18;
		Vector3 UVar19;
		Vector3 center_00;
		float fStack_88;
		BaseCharacter pCStack_80;
		Il2CppClass pIStack_78;
		float fStack_6c;
		byte[] auStack_68 = new byte[16];
		ulong uStack_58;
		_union_14 _Stack_40;
		_union_14 _Stack_38;

		uVar18 = direction.z;
		center_00.z = center.z;
		uStack_58 = center._0_8_;
		_Stack_40.genericMethod = direction._0_8_;
		auStack_68._8_4_ = in_XMM2_Dc;
		auStack_68._0_8_ = _Stack_40.genericMethod;
		auStack_68._12_4_ = in_XMM2_Dd;
		_Stack_38._0_4_ = uVar18;
		pCStack_80 = null;
		if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
			bVar5 = PhotonNetwork.IsMasterClient;
		}
		else {
			bVar5 = PhotonNetwork.IsMasterClient;
		}
		if (!bVar5) {
			return;
		}
		if (((typeof(MapDestruction))._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075459e5 != false) goto label_0597ec8e;
	label_0597ecb7: ;
			Il2CppMethodInitialized_075459e5 = true;
			if ((typeof(MapDestruction)._2).cctor_finished_or_no_cctor != 0) goto label_0597ec9b;
	label_0597ece3: ;
			bVar5 = MapDestruction.IsActive;
		}
		else {
			if (Il2CppMethodInitialized_075459e5 == false) goto label_0597ecb7;
	label_0597ec8e: ;
			if ((typeof(MapDestruction)._2).cctor_finished_or_no_cctor == 0) goto label_0597ece3;
	label_0597ec9b: ;
			bVar5 = MapDestruction.IsActive;
		}
		if (!bVar5) {
			return;
		}
		if (((typeof(MapManager))._2).cctor_finished_or_no_cctor == 0) {
		}
		if (ids == null) {
			return;
		}
		if (MapManager.MapLoaded == false) {
			return;
		}
		pUVar2 = MapDestruction.Overlaps;
		if (pUVar2 == null) goto label_0597f297;
		if ((int)pUVar2.Length < (int)ids.Length) {
			return;
		}
		if (hitSize <= 0.0) {
			return;
		}
		uVar6 = (uint)hitSize & 0x7f800000;
		if (uVar6 == 0x7f800000) {
			return;
		}
		if ((typeof(MapDestruction)._2).cctor_finished_or_no_cctor == 0) {
			uVar6 = extraout_EAX;
		}
		auVar14._0_4_ = -(uint)(((uint)uStack_58 & 0x7f800000) == 0x7f800000);
		iVar16 = -(uint)((uStack_58._4_4_ & 0x7f800000) == 0x7f800000);
		auVar14._4_4_ = auVar14._0_4_;
		auVar14._8_4_ = iVar16;
		auVar14._12_4_ = iVar16;
		iVar16 = movmskpd(uVar6, auVar14);
		if (iVar16 != 0) {
			return;
		}
		uVar6 = ~(uint)center_00.z;
		if ((uVar6 & 0x7f800000) == 0) {
			return;
		}
		if ((typeof(MapDestruction)._2).cctor_finished_or_no_cctor == 0) {
			uVar6 = extraout_EAX_00;
		}
		auVar15._0_4_ = -(uint)((auStack_68._0_4_ & 0x7f800000) == 0x7f800000);
		iVar16 = -(uint)((auStack_68._4_4_ & 0x7f800000) == 0x7f800000);
		auVar15._4_4_ = auVar15._0_4_;
		auVar15._8_4_ = iVar16;
		auVar15._12_4_ = iVar16;
		uVar6 = movmskpd(uVar6, auVar15);
		if ((uVar6 & 1) != 0) {
			return;
		}
		if ((byte)((byte)uVar6 >> 1) != 0) {
			return;
		}
		if ((uVar18 & 0x7f800000) == 0x7f800000) {
			return;
		}
		pPVar7 = PhotonView.Find(attackerId);
		bVar5 = ((Object)pPVar7 == null);
		if (bVar5) {
			return;
		}
		if (pPVar7 == null) goto label_0597f297;
		if (pPVar7._Owner_k__BackingField != sender) {
			return;
		}
		pMVar11 = (MethodInfo)&pCStack_80;
		bVar5 = pPVar7.TryGetComponent<BaseCharacter>((object*)pMVar11);
		pCVar4 = pCStack_80;
		if (!bVar5) {
			return;
		}
		fVar13 = MapDestruction.GetMaxHitSize(pCVar4, hitSize);
		pCVar4 = pCStack_80;
		auVar14 = ZEXT416((uint)hitSize);
		if (fVar13 < hitSize) {
			return;
		}
		fVar13 = MapDestruction.GetMaxObjectSize(pCVar4, hitSize);
		auStack_68._0_4_ = fVar13;
		if (((pCStack_80 == null) ||(pUVar3 = pCStack_80.Cache, pUVar3 == null)) ||(__this = pUVar3.Transform, __this == null)) goto label_0597f297;
		UVar19 = __this.position;
		auVar17._4_12_ = auVar14._4_12_;
		auVar17._0_4_ = UVar19.z;
		fVar13 = (float)il2cpp_runtime_helper_05956b50(UVar19._0_8_, auVar17._0_8_, (uint)uStack_58, center_00.z, 0);
		if ((float)auStack_68._0_4_ + 1000.0 < fVar13) {
			return;
		}
		if (pCStack_80 == null) {
	label_0597ef7d: ;
			fStack_88 = hitSize * 0.5 * 0.5;
		}
		else {
			bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
			if (((pCStack_80.klass._2).typeHierarchyDepth < bVar1) ||((pCStack_80.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(BaseTitan))) goto label_0597ef7d;
			fStack_88 = (float)il2cpp_runtime_helper_0599adc0(&_Stack_40, 0);
			fStack_88 = fStack_88 + hitSize;
		}
		uVar6 = (uint)ids.Length;
		pMVar11 = (MethodInfo)(ulong)uVar6;
		__this_01 = new List<int>(uVar6);
		if (0 < (int)ids.Length) {
			uVar8 = ids.Length & 0xffffffff;
			if (__this_01 == null) {
				uVar12 = 0;
				do {
					if (uVar8 <= uVar12) goto label_0597f29c;
					id = ids[uVar12];
					bVar5 = MapDestruction.CanBreak(id, (float)auStack_68._0_4_);
					if (bVar5) goto label_0597f297;
					uVar12 = uVar12 + 1;
					uVar6 = (uint)ids.Length;
					uVar8 = (ulong)uVar6;
				} while ((long)uVar12 < (long)(int)uVar6);
			}
			else {
				uVar12 = 0;
				do {
					if (uVar8 <= uVar12) {
	label_0597f29c: ;
						throw new IndexOutOfRangeException();
					}
					uVar6 = ids[uVar12];
					bVar5 = MapDestruction.CanBreak(uVar6, (float)auStack_68._0_4_);
					if (bVar5) {
						pMVar11 = (MethodInfo)(ulong)uVar6;
						bVar5 = __this_01.Contains(uVar6);
						if (!bVar5) {
							__this_00 = (Dictionary<int, object>)MapDestruction.Objects;
							if ((__this_00 == null) ||(pMVar9 = __this_00.get_Item(uVar6), pMVar9 == null)) goto label_0597f297;
							pIStack_78 = uStack_58;
							pMVar11 = (MethodInfo)&pIStack_78;
							fVar13 = (pMVar9.Bounds).Internal_SqrDistance((Vector3)pMVar11);
							if (fVar13 <= fStack_88 * fStack_88) {
								pMVar11 = (MethodInfo)(ulong)uVar6;
								il2cpp_runtime_helper_02fd40a0(__this_01, pMVar11, MethodInfo_System_Collections_Generic_List_int_Add);
							}
						}
					}
					uVar12 = uVar12 + 1;
					uVar6 = (uint)ids.Length;
					uVar8 = (ulong)uVar6;
				} while ((long)uVar12 < (long)(int)uVar6);
			}
		}
		if (__this_01 != null) {
			if (__this_01._size == 0) {
				return;
			}
			ids_00 = __this_01.ToArray();
			pMVar11 = extraout_RDX;
			if ((typeof(MapDestruction)._2).cctor_finished_or_no_cctor == 0) {
				pMVar11 = extraout_RDX_00;
			}
			center_00._0_8_ = uStack_58;
			MapDestruction.Apply(ids_00, center_00, hitSize, true);
			pPVar7 = RPCManager.PhotonView;
			parameters = (Object[])new object[3];
			if (parameters != null) {
				il2cpp_codegen_array_element_type_check((Array)parameters, &ids_00.obj);
				il2cpp_runtime_helper_02ac8d90(parameters, 0, ids_00);
				pIStack_78 = uStack_58;
				pIVar10 = (object)pIStack_78;
				il2cpp_codegen_array_element_type_check((Array)parameters, pIVar10);
				il2cpp_runtime_helper_02ac8d90(parameters, 1, pIVar10);
				fStack_6c = hitSize;
				pIVar10 = (object)fStack_6c;
				il2cpp_codegen_array_element_type_check((Array)parameters, pIVar10);
				il2cpp_runtime_helper_02ac8d90(parameters, 2, pIVar10);
				if (pPVar7 != null) {
					pPVar7.RPC("MapObjectsDestroyedRPC", 1, parameters);
					return;
				}
			}
		}
	label_0597f297: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600191C")]
	[Address(RVA = "0x587F8B0", Offset = "0x587E8B0", VA = "0x587F8B0")]
	public static void OnDestroyed(int[] ids, Vector3 center, float hitSize, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$OnDestroyed): clean
		bool bVar1;

		if (info.Sender != null) {
			bVar1 = info.Sender.IsMasterClient;
			if (((ids != null) && (bVar1)) && ((~(uint)hitSize & 0x7f800000) != 0)) {
				if ((typeof(MapDestruction)._2).cctor_finished_or_no_cctor == 0) {
				}
				MapDestruction.Apply(ids, center, hitSize, true);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600191D")]
	[Address(RVA = "0x587F960", Offset = "0x587E960", VA = "0x587F960")]
	public static void RequestState()
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$RequestState): 9 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		PhotonView __this;
		MethodInfo method_00;
		bool bVar3;
		Il2CppClass pIVar4;

		if (Il2CppMethodInitialized_075459f1 == false) {
			Il2CppMethodInitialized_075459f1 = true;
			uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			bVar3 = PhotonNetwork.IsMasterClient;
			if (bVar3) {
				return;
			}
		}
		else {
			bVar3 = PhotonNetwork.IsMasterClient;
			if (bVar3) {
				return;
			}
		}
		if ((typeof(MapDestruction)._2).cctor_finished_or_no_cctor == 0) {
			bVar3 = MapDestruction.IsActive;
			method_00 = MethodInfo_System_Array_Empty_object;
		}
		else {
			bVar3 = MapDestruction.IsActive;
			method_00 = MethodInfo_System_Array_Empty_object;
		}
		if (!bVar3) {
			MethodInfo_System_Array_Empty_object = method_00;
			return;
		}
		__this = RPCManager.PhotonView;
		MethodInfo_System_Array_Empty_object = method_00;
		if ((method_00.field7_0x38).methodMetadataHandle == null) {
			il2cpp_codegen_rgctx_method_init(method_00);
			pIVar4 = *(Il2CppClass*)((long)(method_00.field7_0x38).methodMetadataHandle + 0x10);
			bVar1 = (pIVar4._2).bitflags1;
		}
		else {
			pIVar4 = *(Il2CppClass*)((long)(method_00.field7_0x38).methodMetadataHandle + 0x10);
			bVar1 = (pIVar4._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
			uVar2 = (pIVar4._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (pIVar4._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pIVar4 = (method_00.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar4._2).bitflags1;
		}
		else {
			pIVar4 = (method_00.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar4._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.RPC("RequestMapDestructionStateRPC", 2, *(Object[]*)pIVar4.static_fields);
		return;
	}

	[Token(Token = "0x600191E")]
	[Address(RVA = "0x587FB30", Offset = "0x587EB30", VA = "0x587FB30")]
	public static void OnStateRequest(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$OnStateRequest): 11 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		HashSet<int> pSVar3;
		PhotonView pPVar4;
		bool bVar6;
		List<int> __this;
		Object[] pSVar7;
		Int32[] pSVar8;
		object pIVar9;
		byte[] auStack_68 = new byte[8];
		object pIStack_58;
		Player pPStack_50;
		byte[] auStack_48 = new byte[16];
		object pIStack_38;

		auStack_68 = (byte[])0x0;
		pIStack_58 = null;
		if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
			bVar6 = PhotonNetwork.IsMasterClient;
		}
		else {
			bVar6 = PhotonNetwork.IsMasterClient;
		}
		if ((!bVar6) || (pPStack_50 = info.Sender, info.Sender == null)) {
			return;
		}
		if (((typeof(MapDestruction))._2).cctor_finished_or_no_cctor == 0) {
		}
		pSVar3 = MapDestruction.Destroyed;
		if (pSVar3 != null) {
			if (pSVar3._count == 0) {
				return;
			}
			__this = new List<int>(0x100) ;
			pSVar3 = MapDestruction.Destroyed;
			if (pSVar3 != null) {
				auStack_48.GetEnumerator(pSVar3);
				pIStack_58 = pIStack_38;
				auStack_68 = (byte[])auStack_48._0_8_;
				auStack_48._0_8_ = null;
				auStack_48._8_8_ = auStack_68;
				if (__this != null) {
	label_0597fd60: ;
					do {
						bVar6 = auStack_68.MoveNext();
						if (!bVar6) goto label_0597fe99;
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pSVar8 = __this._items;
						if (pSVar8 == null) goto label_0597ff4a;
						uVar2 = __this._size;
						if (uVar2 < (uint)pSVar8.Length) {
							__this._size = uVar2 + 1;
							pSVar8[(int)uVar2] = (int32_t)pIStack_58;
						}
						else {
							__this.AddWithResize((int32_t)pIStack_58) ;
						}
						if (0xff < __this._size) {
							pPVar4 = RPCManager.PhotonView;
							pSVar7 = (Object[])new object[1];
							pSVar8 = __this.ToArray();
							if (pSVar7 != null) {
								if ((pSVar8 != null) &&(pIVar9 = il2cpp_vm_Object_IsInst(&pSVar8.obj, (((pSVar7.obj).klass)._1).element_class), pIVar9 == null)) {
									pIVar9 = new ArrayTypeMismatchException();
									throw pIVar9;
								}
								if ((int)pSVar7.Length == 0) {
									throw new IndexOutOfRangeException();
								}
								pSVar7[0] = &pSVar8.obj;
								if (pPVar4 != null) {
									pPVar4.RPC("MapDestructionStateRPC", pPStack_50, pSVar7);
									piVar1 = &__this._version;
									*piVar1 = *piVar1 + 1;
									__this._size = 0;
									goto label_0597fd60;
								}
							}
							throw new NullReferenceException();
						}
					} while(true);
				}
				bVar6 = auStack_68.MoveNext();
				if (bVar6) {
	label_0597ff4a: ;
					throw new NullReferenceException();
				}
	label_0597fe99: ;
				auStack_68.Dispose();
				if (__this != null) {
					if (__this._size < 1) {
						return;
					}
					pPVar4 = RPCManager.PhotonView;
					pSVar7 = (Object[])new object[1];
					pSVar8 = __this.ToArray();
					if (pSVar7 != null) {
						il2cpp_codegen_array_element_type_check((Array)pSVar7, &pSVar8.obj);
						il2cpp_runtime_helper_02ac8d90(pSVar7, 0, pSVar8);
						if (pPVar4 != null) {
							pPVar4.RPC("MapDestructionStateRPC", pPStack_50, pSVar7);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600191F")]
	[Address(RVA = "0x587FFF0", Offset = "0x587EFF0", VA = "0x587FFF0")]
	public static void OnState(int[] ids, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$OnState): clean
		Vector3 center;
		bool bVar1;

		if (info.Sender != null) {
			bVar1 = info.Sender.IsMasterClient;
			if ((ids != null) && (bVar1)) {
				center = (Vector3.zeroVector);
				if ((typeof(MapDestruction)._2).cctor_finished_or_no_cctor == 0) {
				}
				MapDestruction.Apply(ids, (Vector3)center, 0.0, false);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6001920")]
	[Address(RVA = "0x587F3B0", Offset = "0x587E3B0", VA = "0x587F3B0")]
	private static void Apply(int[] ids, Vector3 center, float hitSize, bool effects)
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$Apply): 19 lines keep C-only constructs
		int piVar1;
		int length;
		uint uVar2;
		Dictionary<int, object> __this;
		HashSet<int> __this_00;
		HashSet<object> pSVar3;
		DestructibleMapObject[] pMVar4;
		HashSet<Component> components;
		bool bVar6;
		uint uVar7;
		ulong uVar8;
		Queue<int> pSVar9;
		List<DestructibleMapObject> pSVar10;
		DestructibleMapObject target;
		Map_MapDestruction_StaticFields pMVar11;
		ulong uVar12;
		DestructibleMapObject pMVar13;
		undefined7 in_register_00000031;
		DestructibleMapObject pMVar14;
		Collider[] method_00;
		Il2CppClass klass;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		Vector3 center_00;
		DestructibleMapObject local_58;
		float local_50;
		float local_4c;
		byte[] local_48 = new byte[16];

		pMVar14 = (DestructibleMapObject)CONCAT71(in_register_00000031, effects);
		local_50 = center.z;
		local_48._8_4_ = in_XMM0_Dc;
		local_48._0_8_ = center._0_8_;
		local_48._12_4_ = in_XMM0_Dd;
		local_4c = hitSize;
		if (Il2CppMethodInitialized_075459f4 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Component_Clear) ;
			Il2CppMethodInitialized_075459f4 = true;
		}
		local_58 = null;
		if (ids != null) {
			if (0 < (int)ids.Length) {
				uVar8 = ids.Length & 0xffffffff;
				uVar12 = 0;
				do {
					if (uVar8 <= uVar12) {
						throw new IndexOutOfRangeException();
					}
					uVar7 = ids[uVar12];
					pSVar9 = MapDestruction.Pending;
					if (pSVar9 == null) goto label_0597f89d;
					pSVar9.Enqueue(uVar7) ;
					uVar12 = uVar12 + 1;
					uVar7 = (uint)ids.Length;
					uVar8 = (ulong)uVar7;
				} while ((long)uVar12 < (long)(int)uVar7);
			}
			while(true) {
				pMVar11 = typeof(MapDestruction).static_fields;
				pSVar9 = pMVar11.Pending;
				if (pSVar9 == null) goto label_0597f89d;
				if (pSVar9._size < 1) break;
				if ((typeof(MapDestruction)._2).cctor_finished_or_no_cctor == 0) {
					pSVar9 = MapDestruction.Pending;
					if (pSVar9 == null) goto label_0597f89d;
				}
				uVar7 = pSVar9.Dequeue() ;
				__this = (Dictionary<int, object>)MapDestruction.Objects;
				if (__this == null) goto label_0597f89d;
				bVar6 = __this.TryGetValue(uVar7, (object*)&local_58);
				if (bVar6) {
					__this_00 = MapDestruction.Destroyed;
					if (__this_00 == null) goto label_0597f89d;
					bVar6 = __this_00.Add(uVar7);
					if (bVar6) {
						if (local_58 == null) goto label_0597f89d;
						local_58.Destroy();
						pMVar13 = local_58;
						MapDestruction.ReleaseHooks(pMVar13);
						if ((local_58 == null) ||(pSVar3 = (HashSet<object>)MapDestruction.NavMeshRemovals, pSVar3 == null)) goto label_0597f89d;
						method_00 = local_58.Colliders;
						pSVar3.UnionWith((IEnumerable<T>)method_00);
						MapDestruction.EnqueueAttached(local_58);
						pSVar10 = MapDestruction.Applied;
						if (pSVar10 == null) goto label_0597f89d;
						piVar1 = &pSVar10._version;
						*piVar1 = *piVar1 + 1;
						pMVar4 = pSVar10._items;
						if (pMVar4 == null) goto label_0597f89d;
						uVar7 = pSVar10._size;
						if (uVar7 < (uint)pMVar4.Length) {
							pSVar10._size = uVar7 + 1;
							pMVar4[(int)uVar7] = local_58;
						}
						else {
							pSVar10.AddWithResize((object)local_58);
						}
					}
				}
			}
			if (effects) {
				pMVar13 = null;
				goto label_0597f73c;
			}
			if ((typeof(MapDestruction)._2).cctor_finished_or_no_cctor == 0) {
				pMVar11 = typeof(MapDestruction).static_fields;
			}
			if (pMVar11.Applied != null) goto label_0597f7b7;
		}
	label_0597f89d: ;
		throw new NullReferenceException();
	label_0597f73c: ;
		pSVar10 = MapDestruction.Applied;
		if (pSVar10 == null) goto label_0597f89d;
		uVar7 = (uint)pMVar13;
		if ((3 < uVar7) || (pSVar10._size <= (int)uVar7)) goto label_0597f7b7;
		if ((typeof(MapDestruction)._2).cctor_finished_or_no_cctor == 0) {
			pSVar10 = MapDestruction.Applied;
			if (pSVar10 == null) goto label_0597f89d;
		}
		target = pSVar10.get_Item(uVar7);
		center_00.z = local_50;
		center_00.x = (float)local_48._0_4_;
		center_00.y = (float)local_48._4_4_;
		MapDestruction.SpawnEffects(target, center_00, local_4c);
		pMVar13 = (DestructibleMapObject)(ulong)(uVar7 + 1);
		goto label_0597f73c;
	label_0597f7b7: ;
		klass = typeof(MapDestruction);
		pMVar11 = typeof(MapDestruction).static_fields;
		pSVar10 = pMVar11.Applied;
		if (pSVar10 != null) {
			piVar1 = &pSVar10._version;
			*piVar1 = *piVar1 + 1;
			length = pSVar10._size;
			pSVar10._size = 0;
			if (0 < length) {
				Array.Clear((Array)pSVar10._items, 0, length);
				pMVar11 = typeof(MapDestruction).static_fields;
				klass = typeof(MapDestruction);
			}
			components = pMVar11.NavMeshRemovals;
			if (components != null) {
				if (components._count != 0) {
					if ((klass._2).cctor_finished_or_no_cctor == 0) {
						components = MapDestruction.NavMeshRemovals;
						uVar2 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar2 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
					}
					if (uVar2 == 0) {
					}
					MapLoader.RemoveNavMeshSources(components);
					pSVar3 = (HashSet<object>)MapDestruction.NavMeshRemovals;
					if (pSVar3 == null) goto label_0597f89d;
					pSVar3.Clear() ;
				}
				return;
			}
		}
		goto label_0597f89d;
	}

	[Token(Token = "0x6001921")]
	[Address(RVA = "0x5880320", Offset = "0x587F320", VA = "0x5880320")]
	private static void EnqueueAttached(DestructibleMapObject target)
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$EnqueueAttached): 35 lines keep C-only constructs
		Bounds pUVar1;
		Dictionary<int, object> pSVar2;
		Queue<int> pSVar3;
		HashSet<int> __this;
		Bounds inner;
		Bounds outer;
		Bounds pUVar4;
		object pIVar5;
		int item;
		bool bVar6;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_00;
		float fVar7;
		byte[] local_b8 = new byte[16];
		Il2CppClass local_a8;
		HashSet<int> local_a0;
		byte[] local_98 = new byte[8];
		ulong uStack_90;
		object local_88;
		byte[] local_78 = new byte[8];
		Il2CppClass local_68;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_50;
		ulong local_48;
		ulong uStack_40;
		ulong local_38;

		local_a0 = null;
		local_78 = (byte[])0x0;
		local_68 = null;
		local_98 = (byte[])0x0;
		uStack_90._0_4_ = 0;
		uStack_90._4_4_ = 0;
		local_88 = null;
		if ((target != null) &&(pSVar2 = (Dictionary<int, object>)MapLoader.IdToChildren, pSVar2 != null)) {
			bVar6 = pSVar2.TryGetValue(target.Id, (object*)&local_a0);
			if (bVar6) {
				if (local_a0 == null) goto label_05980744;
				local_b8.GetEnumerator(local_a0);
				local_68 = local_a8;
				local_78 = (byte[])local_b8._0_8_;
				local_b8._0_8_ = null;
				local_b8._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_78;
				while(true) {
					bVar6 = local_78.MoveNext();
					if (!bVar6) break;
					item = (int32_t)local_68;
					pSVar3 = MapDestruction.Pending;
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					pSVar3.Enqueue(item);
				}
				local_78.Dispose();
			}
			pSVar2 = (Dictionary<int, object>)MapDestruction.Objects;
			if (pSVar2 != null) {
				__this_00 = pSVar2.Values;
				if (__this_00 != null) {
					local_b8.GetEnumerator(__this_00);
					local_88 = (object)local_a8;
					local_98 = (byte[])local_b8._0_8_;
					uStack_90 = (System_Collections_Generic_HashSet_Enumerator_T__o)local_b8._8_8_;
					pUVar1 = &target.Bounds;
					local_50 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o)local_98;
					while(true) {
						bVar6 = local_98.MoveNext();
						pIVar5 = local_88;
						if (!bVar6) {
							local_98.Dispose();
							return;
						}
						if (local_88 == null) break;
						if (*(float)&local_88[3].monitor <= target.Size * 0.5) {
							__this = MapDestruction.Destroyed;
							if (__this == null) {
								throw new NullReferenceException();
							}
							bVar6 = __this.Contains(*(int)&pIVar5[1].klass);
							if (!bVar6) {
								local_a8 = pIVar5[3].klass;
								local_b8._0_8_ = pIVar5[2].klass;
								local_b8._8_8_ = pIVar5[2].monitor;
								pUVar4 = &target.Bounds;
								local_38._0_4_ = pUVar4.m_Extents.y;
								local_38._4_4_ = pUVar4.m_Extents.z;
								local_48._0_4_ = pUVar1.m_Center.x;
								local_48._4_4_ = pUVar1.m_Center.y;
								uStack_40 = *(ulong)&target.Bounds.m_Center.z;
								inner.m_Center.z = (float)local_b8._8_4_;
								inner.m_Extents.x = (float)local_b8._12_4_;
								inner.m_Center.x = (float)local_b8._0_4_;
								inner.m_Center.y = (float)local_b8._4_4_;
								inner.m_Extents._4_8_ = local_a8;
								outer.m_Center.z = (float)(undefined4)uStack_40;
								outer.m_Extents.x = (float)uStack_40._4_4_;
								outer.m_Center.x = (float)(undefined4)local_48;
								outer.m_Center.y = (float)local_48._4_4_;
								outer.m_Extents.y = (float)(undefined4)local_38;
								outer.m_Extents.z = (float)local_38._4_4_;
								fVar7 = MapDestruction.ContainedFraction(inner, outer);
								if (0.6 <= fVar7) {
									pSVar3 = MapDestruction.Pending;
									if (pSVar3 == null) {
										throw new NullReferenceException();
									}
									pSVar3.Enqueue(*(int)&pIVar5[1].klass);
								}
							}
						}
					}
					throw new NullReferenceException();
				}
			}
		}
	label_05980744: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001922")]
	[Address(RVA = "0x5880BB0", Offset = "0x587FBB0", VA = "0x5880BB0")]
	private static float ContainedFraction(Bounds inner, Bounds outer)
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$ContainedFraction): 29 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		byte[] auVar6 = new byte[16];
		float fVar7;
		UnityEngine_Vector3_StaticFields pUVar8;
		byte[] auVar9 = new byte[16];
		byte[] auVar10 = new byte[16];
		byte[] auVar11 = new byte[16];
		byte[] auVar12 = new byte[16];
		byte[] auVar13 = new byte[16];
		float fVar14;

		pUVar8 = typeof(Vector3).static_fields;
		uVar2 = (pUVar8.zeroVector).x;
		uVar4 = (pUVar8.zeroVector).y;
		fVar1 = (pUVar8.zeroVector).z;
		if (Il2CppMethodInitialized_0753e4b7 == false) {
			Il2CppMethodInitialized_0753e4b7 = true;
			pUVar8 = typeof(Vector3).static_fields;
		}
		fVar7 = inner.m_Center.z + inner.m_Extents.z;
		if (outer.m_Center.z + outer.m_Extents.z <= inner.m_Center.z + inner.m_Extents.z) {
			fVar7 = outer.m_Center.z + outer.m_Extents.z;
		}
		fVar14 = inner.m_Center.z - inner.m_Extents.z;
		if (inner.m_Center.z - inner.m_Extents.z <= outer.m_Center.z - outer.m_Extents.z) {
			fVar14 = outer.m_Center.z - outer.m_Extents.z;
		}
		auVar10._0_4_ = fVar7 - fVar14;
		auVar10._4_4_ = inner.m_Extents.z + inner.m_Extents.z;
		auVar10._8_8_ = 0;
		fVar7 = inner.m_Center.y + inner.m_Extents.y;
		if (outer.m_Center.y + outer.m_Extents.y <= inner.m_Center.y + inner.m_Extents.y) {
			fVar7 = outer.m_Center.y + outer.m_Extents.y;
		}
		fVar14 = inner.m_Center.y - inner.m_Extents.y;
		if (inner.m_Center.y - inner.m_Extents.y <= outer.m_Center.y - outer.m_Extents.y) {
			fVar14 = outer.m_Center.y - outer.m_Extents.y;
		}
		auVar9._0_4_ = fVar7 - fVar14;
		auVar9._4_4_ = inner.m_Extents.y + inner.m_Extents.y;
		auVar9._8_8_ = 0;
		fVar7 = inner.m_Center.x + inner.m_Extents.x;
		if (outer.m_Center.x + outer.m_Extents.x <= inner.m_Center.x + inner.m_Extents.x) {
			fVar7 = outer.m_Center.x + outer.m_Extents.x;
		}
		fVar14 = inner.m_Center.x - inner.m_Extents.x;
		if (inner.m_Center.x - inner.m_Extents.x <= outer.m_Center.x - outer.m_Extents.x) {
			fVar14 = outer.m_Center.x - outer.m_Extents.x;
		}
		auVar12._0_4_ = fVar7 - fVar14;
		auVar12._4_4_ = inner.m_Extents.x + inner.m_Extents.x;
		auVar12._8_8_ = 0;
		uVar3 = (pUVar8.oneVector).x;
		uVar5 = (pUVar8.oneVector).y;
		auVar11._4_4_ = (pUVar8.oneVector).z * 0.01;
		auVar11._0_4_ = fVar1;
		auVar11._8_8_ = 0;
		auVar11 = maxps(auVar10, auVar11);
		auVar13._4_4_ = (float)uVar3 * 0.01;
		auVar13._0_4_ = uVar2;
		auVar13._8_8_ = 0;
		auVar13 = maxps(auVar12, auVar13);
		auVar6._4_4_ = (float)uVar5 * 0.01;
		auVar6._0_4_ = uVar4;
		auVar6._8_4_ = uVar4;
		auVar6._12_4_ = uVar4;
		auVar10 = maxps(auVar9, auVar6);
		return (auVar10._0_4_ * auVar13._0_4_ * auVar11._0_4_) / (auVar10._4_4_ * auVar13._4_4_ * auVar11._4_4_);
	}

	[Token(Token = "0x6001923")]
	[Address(RVA = "0x587EA20", Offset = "0x587DA20", VA = "0x587EA20")]
	private static bool CanBreak(int id, float maxObjectSize)
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$CanBreak): 1 lines keep C-only constructs
		Dictionary<int, object> __this;
		HashSet<int> __this_00;
		bool bVar1;
		object local_18;

		local_18 = null;
		__this = (Dictionary<int, object>)MapDestruction.Objects;
		if (__this != null) {
			bVar1 = __this.TryGetValue(id, ref local_18) ;
			if (!bVar1) {
				return false;
			}
			__this_00 = MapDestruction.Destroyed;
			if (__this_00 != null) {
				bVar1 = __this_00.Contains(id);
				if (bVar1) {
					return false;
				}
				if (local_18 != null) {
					return *(float)&local_18[3].monitor <= maxObjectSize;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001924")]
	[Address(RVA = "0x587E920", Offset = "0x587D920", VA = "0x587E920")]
	private static float GetMaxObjectSize(BaseCharacter attacker, float hitSize)
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$GetMaxObjectSize): 2 lines keep C-only constructs
		byte bVar1;
		float fVar2;

		fVar2 = 11.0;
		if (attacker != null) {
			bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
			if (bVar1 <= (attacker.klass._2).typeHierarchyDepth) {
				fVar2 = *(float)(&g_data_0100ab20 +(ulong)((attacker.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(BaseTitan)) * 4);
			}
		}
		return fVar2 * hitSize;
	}

	[Token(Token = "0x6001925")]
	[Address(RVA = "0x587F2E0", Offset = "0x587E2E0", VA = "0x587F2E0")]
	private static float GetMaxHitSize(BaseCharacter attacker, float hitSize)
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$GetMaxHitSize): 1 lines keep C-only constructs
		byte bVar1;
		float fVar2;

		if (attacker != null) {
			bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
			if ((bVar1 <= (attacker.klass._2).typeHierarchyDepth) &&((attacker.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BaseTitan)) ) {
				fVar2 = MapDestruction.GetHandSize((BaseTitan)attacker, hitSize);
				return fVar2 * 4.0;
			}
		}
		return 150.0;
	}

	[Token(Token = "0x6001926")]
	[Address(RVA = "0x5880EB0", Offset = "0x587FEB0", VA = "0x5880EB0")]
	private static float GetHandSize(BaseTitan titan, float hitSize)
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$GetHandSize): clean
		uint uVar1;
		BaseTitanComponentCache pCVar2;
		BaseHitbox x;
		Object x_00;
		bool bVar3;
		float fVar4;

		if ((titan == null) ||(pCVar2 = titan.BaseTitanCache, pCVar2 == null)) {
	label_05980fcd: ;
			throw new NullReferenceException();
		}
		x = pCVar2.HandRHitbox;
		if (x == null) {
			x = pCVar2.HandLHitbox;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar3 = ((Object)x != null);
		if (bVar3) {
			if (x == null) goto label_05980fcd;
			x_00 = (Object)x._collider;
			bVar3 = (x_00 != null);
			if (bVar3) {
				return fVar4;
			}
		}
		return hitSize;
	}

	[Token(Token = "0x6001927")]
	[Address(RVA = "0x5880FE0", Offset = "0x587FFE0", VA = "0x5880FE0")]
	private static float GetHitSize(Collider collider)
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$GetHitSize): 3 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		Collider pUVar3;
		Transform __this;
		MethodInfo method_00;
		CustomLogicMathBuiltin __return_storage_ptr__;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		Vector3 UVar9;
		byte[] local_20 = new byte[20];
		float local_c;

		if (collider != null) {
			__this = collider.transform;
			if (__this != null) {
				UVar9 = __this.lossyScale;
				UVar9 = Util.Abs(UVar9);
				fVar5 = UVar9.z;
				fVar6 = UVar9.x;
				fVar7 = UVar9.y;
				fVar4 = fVar7;
				if (fVar7 <= fVar5) {
					fVar4 = fVar5;
				}
				fVar8 = fVar6;
				if (fVar6 <= fVar4) {
					fVar8 = fVar4;
				}
				pUVar3 = collider.klass;
				bVar1 = (pUVar3._2).typeHierarchyDepth;
				bVar2 = (typeof(SphereCollider)._2).typeHierarchyDepth;
				if ((bVar1 < bVar2) ||((pUVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(SphereCollider))) {
					bVar2 = (typeof(CapsuleCollider)._2).typeHierarchyDepth;
					if ((bVar1 < bVar2) ||((pUVar3._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CapsuleCollider))) {
						bVar2 = (typeof(BoxCollider)._2).typeHierarchyDepth;
						if ((bVar1 < bVar2) ||((pUVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BoxCollider)) ) {
							__return_storage_ptr__ = (CustomLogicMathBuiltin)local_20;
							__return_storage_ptr__.get_bounds(collider);
							fVar6 = local_20._12_4_ + local_20._12_4_;
							fVar7 = local_20._16_4_ + local_20._16_4_;
							local_c = local_c + local_c;
							method_00 = (MethodInfo)collider;
							collider = (Collider)__return_storage_ptr__;
						}
						else {
							method_00 = null;
							UVar9 = collider.size ;
							fVar6 = fVar6 * UVar9.x;
							fVar7 = fVar7 * UVar9.y;
							local_c = fVar5 * UVar9.z;
						}
						local_c = fVar7 * fVar6 * local_c;
						if (local_c <= 0.0) {
							local_c = 0.0;
						}
						fVar4 = powf((CustomLogicMathBuiltin)collider, local_c, 0.33333334, method_00);
						return fVar4;
					}
					fVar4 = collider.radius;
				}
				else {
					fVar4 = collider.radius;
				}
				return fVar8 * fVar4 + fVar8 * fVar4;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001928")]
	[Address(RVA = "0x5880820", Offset = "0x587F820", VA = "0x5880820")]
	private static void SpawnEffects(DestructibleMapObject target, Vector3 center, float hitSize)
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$SpawnEffects): 16 lines keep C-only constructs
		Bounds objectBounds;
		MethodInfo method_00;
		MethodInfo method_01;
		float fVar1;
		float fVar2;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		Vector3 impact;
		Il2CppMethodPointer local_48;
		InvokerMethod local_38;
		sbyte pcStack_30;
		Il2CppClass local_28;
		byte[] local_18 = new byte[16];

		fVar1 = center.x;
		fVar2 = center.y;
		if (g_data_075459fb == false) {
			local_18._8_4_ = in_XMM0_Dc;
			local_18._0_8_ = center._0_8_;
			local_18._12_4_ = in_XMM0_Dd;
			g_data_075459fb = true;
			fVar1 = (float)local_18._0_4_;
			fVar2 = (float)local_18._4_4_;
		}
		if (target == null) {
			throw new NullReferenceException();
		}
		method_01 = (MethodInfo)&target.Bounds;
		local_28 = *(Il2CppClass*)&target.Bounds.m_Extents.y;
		local_38 = *(InvokerMethod)&target.Bounds.m_Center;
		pcStack_30 = *(sbyte*)&target.Bounds.m_Center.z;
		local_48 = (Il2CppMethodPointer)CONCAT44(fVar2, fVar1);
		method_00 = (MethodInfo)&local_48;
		impact = method_01.Internal_ClosestPoint((Vector3)method_00);
		objectBounds._8_8_ = pcStack_30;
		objectBounds.m_Center._0_8_ = local_38;
		objectBounds.m_Extents._4_8_ = local_28;
		MapDestructionDust.Spawn(objectBounds, impact, hitSize * 0.5);
		MapDestructionDebris.Spawn(target);
		return;
	}

	[Token(Token = "0x6001929")]
	[Address(RVA = "0x58800C0", Offset = "0x587F0C0", VA = "0x58800C0")]
	private static void ReleaseHooks(DestructibleMapObject target)
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$ReleaseHooks): 8 lines keep C-only constructs
		byte bVar1;
		BaseGameManager pGVar2;
		HashSet<object> __this;
		HookUseable useable;
		object x;
		bool bVar3;
		sbyte cVar4;
		byte[] local_60 = new byte[16];
		Object local_50;
		System_Collections_Generic_HashSet_Enumerator_T__o local_48;

		pGVar2 = SceneLoader.CurrentGameManager;
		if (pGVar2 != null) {
			bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if ((bVar1 <= (pGVar2.klass._2).typeHierarchyDepth) &&((pGVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(InGameManager))) {
				__this = (HashSet<object>)(*(ulong)((sbyte)pGVar2 + 0x40));
				if (__this == null) {
					throw new NullReferenceException();
				}
				local_60.GetEnumerator(__this);
				local_48._current = (object)local_50;
				local_48._set = (HashSet<T>)local_60._0_8_;
				local_48._index = local_60._8_4_;
				local_48._version = local_60._12_4_;
				local_60._0_8_ = null;
				local_60._8_8_ = &local_48;
				while(true) {
					bVar3 = local_48.MoveNext();
					x = local_48._current;
					if (!bVar3) break;
					bVar3 = ((Object)x == null);
					if (!bVar3) {
						if ((Object)x == null) {
							throw new NullReferenceException();
						}
						cVar4 = (*(code)((Object)x.klass)[3].vtable._3_ToString.method)(x,((Object)x.klass)[4]._1.image);
						if (cVar4 != false) {
							useable = ((Object)((long)x + 0x120)).monitor;
							if ((typeof(MapDestruction)._2).cctor_finished_or_no_cctor == 0) {
							}
							MapDestruction.ReleaseHooks(useable, target);
							MapDestruction.ReleaseHooks((HookUseable)(((Object)((long)x + 0x120)).fields).m_CachedPtr, target);
						}
					}
				}
				local_48.Dispose() ;
			}
		}
		return;
	}

	[Token(Token = "0x600192A")]
	[Address(RVA = "0x5882120", Offset = "0x5881120", VA = "0x5882120")]
	private static void ReleaseHooks(HookUseable useable, DestructibleMapObject target)
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$ReleaseHooks): 11 lines keep C-only constructs
		List<Hook> __this;
		Transform __this_00;
		object pIVar1;
		System_Collections_Generic_List_Enumerator_object__o pSVar2;
		bool bVar3;
		System_Collections_Generic_List_Enumerator_object__o local_68;
		byte[] local_48 = new byte[16];
		Hook local_38;

		if (Il2CppMethodInitialized_075459fd == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Hook_GetEnumerator) ;
			Il2CppMethodInitialized_075459fd = true;
		}
		local_68._list = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		if (useable != null) {
			__this = useable.Hooks;
			if (__this == null) {
				throw new NullReferenceException();
			}
			local_48.GetEnumerator((List<object>)__this);
			local_68._current = (object)local_38;
			local_68._list = (List<T>)local_48._0_8_;
			local_68._index = local_48._8_4_;
			local_68._version = local_48._12_4_;
			local_48._0_8_ = null;
			local_48._8_8_ = &local_68;
			pSVar2 = &local_68;
			if (target == null) {
				while (true) {
					local_48._8_8_ = pSVar2;
					bVar3 = local_68.MoveNext();
					pIVar1 = local_68._current;
					if (!(bVar3)) break;
					bVar3 = ((Object)pIVar1 != null);
					pSVar2 = (System_Collections_Generic_List_Enumerator_object__o)local_48._8_8_;
					if (bVar3) {
						if ((Hook)pIVar1 == null) goto label_05982337;
						if (((Hook)((long)pIVar1 + 0x10)).State == 2) {
							throw new NullReferenceException();
						}
					}
				}
			}
			else {
				while (true) {
					bVar3 = local_68.MoveNext();
					pIVar1 = local_68._current;
					if (!(bVar3)) break;
					bVar3 = ((Object)pIVar1 != null);
					if (bVar3) {
						if ((Hook)pIVar1 == null) {
	label_05982337: ;
							throw new NullReferenceException();
						}
						if (((Hook)((long)pIVar1 + 0x10)).State == 2) {
							__this_00 = ((Hook)((long)pIVar1 + 0x10)).HookParent;
							bVar3 = ((Object)__this_00 != null);
							if (bVar3) {
								if (__this_00 == null) {
									throw new NullReferenceException();
								}
								bVar3 = __this_00.IsChildOf(target.Root);
								if (bVar3) {
									pIVar1.SetHookState(4);
								}
							}
						}
					}
				}
			}
			local_68.Dispose();
		}
		return;
	}

	[Token(Token = "0x600192B")]
	[Address(RVA = "0x587F2B0", Offset = "0x587E2B0", VA = "0x587F2B0")]
	private static bool IsFinite(Vector3 value)
	{
		// Lifted from source/cpp/Map/MapDestruction.c (Map.MapDestruction$$IsFinite): 12 lines keep C-only constructs
		uint in_EAX;
		ulong in_XMM0_Qb;
		byte[] auVar1 = new byte[16];
		int iVar3;
		byte[] auVar2 = new byte[16];

		auVar1._0_8_ = value._0_8_;
		auVar1._8_8_ = in_XMM0_Qb;
		auVar2._0_4_ = -(uint)(SUB164(auVar1 & _DAT_01008860, 0) == (int)g_data_01008860);
		iVar3 = -(uint)(SUB164(auVar1 & _DAT_01008860, 4) == g_data_01008860._4_4_);
		auVar2._4_4_ = auVar2._0_4_;
		auVar2._8_4_ = iVar3;
		auVar2._12_4_ = iVar3;
		iVar3 = movmskpd(in_EAX, auVar2);
		if (iVar3 == 0) {
			return (~(uint)value.z & 0x7f800000) != 0;
		}
		return false;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Map/MapDestruction.c.

	// Map.MapDestruction$$.cctor: 2 lines keep C-only constructs
	static MapDestruction()
	{
		uint uVar1;
		Map_MapDestruction_StaticFields pMVar3;
		LayerMask mask;
		int iVar4;
		Int32[] layers;
		Dictionary<int, DestructibleMapObject> __this;
		Dictionary<Renderer, BatchSlice> __this_00;
		HashSet<int> __this_01;
		Collider[] pUVar5;
		List<int> __this_02;
		List<DestructibleMapObject> __this_03;
		Queue<int> __this_04;
		HashSet<Component> __this_05;
		WaitForFixedUpdate __this_06;

		layers = (Int32[])new int[6];
		if (layers == null) {
			throw new NullReferenceException();
		}
		uVar1 = (uint)layers.Length;
		if (uVar1 != 0) {
			layers[0] = PhysicsLayer.MapObjectAll;
			if ((((uVar1 != 1) && (layers[1] = PhysicsLayer.MapObjectEntities, 2 < uVar1)) &&(layers[2] = PhysicsLayer.MapObjectCharacters, uVar1 != 3)) &&((layers[3] = PhysicsLayer.MapObjectTitans, 4 < uVar1 &&(layers[4] = PhysicsLayer.MapObjectHumans, uVar1 != 5)))) {
				layers[5] = PhysicsLayer.MapObjectProjectiles;
				mask = PhysicsLayer.GetMask(layers);
				iVar4 = ((LayerMask)mask);
				MapDestruction.MapMask = iVar4;
				__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<int, DestructibleMapObject>));
				__this = new Dictionary<int, object>();
				pMVar3 = typeof(MapDestruction).static_fields;
				pMVar3.Objects = __this;
				__this_00 = il2cpp_codegen_object_new(typeof(Dictionary<Renderer, BatchSlice>));
				__this_00 = new Dictionary<object, BatchSlice>();
				pMVar3 = typeof(MapDestruction).static_fields;
				pMVar3.BatchSlices = __this_00;
				__this_01 = new HashSet<int>();
				pMVar3 = typeof(MapDestruction).static_fields;
				pMVar3.Destroyed = __this_01;
				pUVar5 = (Collider[])new Collider[0x40];
				pMVar3 = typeof(MapDestruction).static_fields;
				pMVar3.Overlaps = pUVar5;
				__this_02 = new List<int>();
				pMVar3 = typeof(MapDestruction).static_fields;
				pMVar3.Targets = __this_02;
				__this_03 = new List<DestructibleMapObject>();
				pMVar3 = typeof(MapDestruction).static_fields;
				pMVar3.Applied = __this_03;
				__this_04 = new Queue<int>();
				pMVar3 = typeof(MapDestruction).static_fields;
				pMVar3.Pending = __this_04;
				__this_05 = new HashSet<Component>();
				pMVar3 = typeof(MapDestruction).static_fields;
				pMVar3.NavMeshRemovals = __this_05;
				__this_06 = new WaitForFixedUpdate();
				pMVar3 = typeof(MapDestruction).static_fields;
				pMVar3.FixedStep = __this_06;
				return;
			}
		}
		throw new IndexOutOfRangeException();
	}
}
