// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.MapEditorGameManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/GameManagers/MapEditorGameManager.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/MapEditorGameManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CustomLogic;
using Il2CppDummyDll;
using Map;
using MapEditor;
using Settings;
using UI;
using UnityEngine;

namespace GameManagers;

[Token(Token = "0x2000396")]
internal class MapEditorGameManager : BaseGameManager
{
	[Token(Token = "0x200039B")]
	[CompilerGenerated]
	private sealed class _003CWaitAndAutosave_003Ed__57 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001257")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001258")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001259")]
		[FieldOffset(Offset = "0x20")]
		public MapEditorGameManager _003C_003E4__this;

		[Token(Token = "0x17000282")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001732")]
			[Address(RVA = "0x5855450", Offset = "0x5854450", VA = "0x5855450", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager.<WaitAndAutosave>d__57$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000283")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001734")]
			[Address(RVA = "0x58554A0", Offset = "0x58544A0", VA = "0x58554A0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager.<WaitAndAutosave>d__57$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600172F")]
		[Address(RVA = "0x5852090", Offset = "0x5851090", VA = "0x5852090")]
		[DebuggerHidden]
		public _003CWaitAndAutosave_003Ed__57(int _003C_003E1__state)
		{
			// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager.<WaitAndAutosave>d__57$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6001730")]
		[Address(RVA = "0x5855380", Offset = "0x5854380", VA = "0x5855380", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager.<WaitAndAutosave>d__57$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6001731")]
		[Address(RVA = "0x5855390", Offset = "0x5854390", VA = "0x5855390", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager.<WaitAndAutosave>d__57$$MoveNext): clean
			int iVar1;
			MapEditorGameManager pGVar2;
			MapEditorMenu pUVar3;
			MapEditorTopPanel __this_00;
			WaitForSeconds __this_01;

			iVar1 = this.__1__state;
			if (iVar1 == 1) {
				pGVar2 = this.__4__this;
				this.__1__state = -1;
				if (((pGVar2 == null) ||(pUVar3 = pGVar2._menu, pUVar3 == null)) ||(__this_00 = pUVar3._topPanel, __this_00 == null)) {
					throw new NullReferenceException();
				}
				__this_00.Autosave();
			}
			else {
				if (iVar1 != 0) {
					return false;
				}
				this.__1__state = -1;
			}
			__this_01 = new WaitForSeconds(900.0);
			this.__2__current = (object)__this_01;
			this.__1__state = 1;
			return true;
		}

		[Token(Token = "0x6001733")]
		[Address(RVA = "0x5855460", Offset = "0x5854460", VA = "0x5855460", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager.<WaitAndAutosave>d__57$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_GameManagers_MapEditorGameManager_WaitAndAutosave_d__57_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x400122C")]
	[FieldOffset(Offset = "0x28")]
	public MapScript MapScript;

	[Token(Token = "0x400122D")]
	[FieldOffset(Offset = "0x30")]
	public CustomLogicEvaluator LogicEvaluator;

	[Token(Token = "0x400122E")]
	[FieldOffset(Offset = "0x38")]
	public HashSet<MapObject> SelectedObjects;

	[Token(Token = "0x400122F")]
	[FieldOffset(Offset = "0x40")]
	public BaseGizmo CurrentGizmo;

	[Token(Token = "0x4001230")]
	[FieldOffset(Offset = "0x48")]
	public GizmoMode CurrentGizmoMode;

	[Token(Token = "0x4001231")]
	[FieldOffset(Offset = "0x4C")]
	public bool Snap;

	[Token(Token = "0x4001232")]
	[FieldOffset(Offset = "0x4D")]
	public bool HierarchyTreeViewEnabled;

	[Token(Token = "0x4001233")]
	[FieldOffset(Offset = "0x50")]
	public int LastSelectedObjectId;

	[Token(Token = "0x4001234")]
	[FieldOffset(Offset = "0x58")]
	private List<BaseCommand> _undoCommands;

	[Token(Token = "0x4001235")]
	[FieldOffset(Offset = "0x60")]
	private List<BaseCommand> _redoCommands;

	[Token(Token = "0x4001236")]
	[FieldOffset(Offset = "0x68")]
	private string _clipboard;

	[Token(Token = "0x4001237")]
	[FieldOffset(Offset = "0x70")]
	private MapEditorMenu _menu;

	[Token(Token = "0x4001238")]
	[FieldOffset(Offset = "0x78")]
	private MapEditorInputSettings _input;

	[Token(Token = "0x4001239")]
	[FieldOffset(Offset = "0x80")]
	public PositionGizmo _positionGizmo;

	[Token(Token = "0x400123A")]
	[FieldOffset(Offset = "0x88")]
	public RotationGizmo _rotationGizmo;

	[Token(Token = "0x400123B")]
	[FieldOffset(Offset = "0x90")]
	public ScaleGizmo _scaleGizmo;

	[Token(Token = "0x400123C")]
	[FieldOffset(Offset = "0x98")]
	private OutlineGizmo _outlineGizmo;

	[Token(Token = "0x400123D")]
	[FieldOffset(Offset = "0xA0")]
	public MapEditorBrush Brush;

	[Token(Token = "0x400123E")]
	[FieldOffset(Offset = "0xA8")]
	public MapEditorRuler Ruler;

	[Token(Token = "0x400123F")]
	[FieldOffset(Offset = "0xB0")]
	private MapEditorSceneGrid _sceneGrid;

	[Token(Token = "0x4001240")]
	[FieldOffset(Offset = "0xB8")]
	private int _currentObjectId;

	[Token(Token = "0x4001241")]
	[FieldOffset(Offset = "0xBC")]
	public bool IgnoreNextSelect;

	[Token(Token = "0x4001242")]
	[FieldOffset(Offset = "0xBD")]
	private bool _isDrag;

	[Token(Token = "0x4001243")]
	[FieldOffset(Offset = "0xC0")]
	private Vector3 _dragStart;

	[Token(Token = "0x4001244")]
	[FieldOffset(Offset = "0xD0")]
	private MobileMapEditorPointer _mobilePointer;

	[Token(Token = "0x4001245")]
	[FieldOffset(Offset = "0xD8")]
	private bool _lightsOn;

	[Token(Token = "0x17000280")]
	private MobileMapEditorPointer MobilePointer
	{
		[Token(Token = "0x60016F5")]
		[Address(RVA = "0x584F2A0", Offset = "0x584E2A0", VA = "0x584F2A0")]
		get
		{
			// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$get_MobilePointer): 2 lines keep C-only constructs
			MobileMapEditorPointer pUVar1;
			MobileMapEditorPointer* targetAddress;

			if (Il2CppMethodInitialized_07545883 == false) {
				Il2CppMethodInitialized_07545883 = true;
				pUVar1 = this._mobilePointer;
			}
			else {
				pUVar1 = this._mobilePointer;
			}
			if (pUVar1 == null) {
				targetAddress = &this._mobilePointer;
				pUVar1 = new MobileMapEditorPointer();
				*targetAddress = pUVar1;
				return *targetAddress;
			}
			return pUVar1;
		}
	}

	[Token(Token = "0x17000281")]
	public bool LightsOn
	{
		[Token(Token = "0x6001716")]
		[Address(RVA = "0x5853BF0", Offset = "0x5852BF0", VA = "0x5853BF0")]
		get
		{
			// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$get_LightsOn): clean
			return this._lightsOn;
		}
	}

	[Token(Token = "0x60016E8")]
	[Address(RVA = "0x584BAC0", Offset = "0x584AAC0", VA = "0x584BAC0", Slot = "41")]
	public override void OnJoinedRoom()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$OnJoinedRoom): 4 lines keep C-only constructs
		uint uVar1;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07545879 == false) {
			Il2CppMethodInitialized_07545879 = true;
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(InGameManager);
		}
		else {
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(InGameManager);
		}
		typeof(InGameManager) = (InGameManager)klass;
		if (uVar1 == 0) {
			InGameManager.OnJoinRoom();
			return;
		}
		InGameManager.OnJoinRoom();
		return;
	}

	[Token(Token = "0x60016E9")]
	[Address(RVA = "0x584BB20", Offset = "0x584AB20", VA = "0x584BB20")]
	public void ShowAddObject()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$ShowAddObject): clean
		MapEditorMenu __this_00;
		MapEditorAddObjectPopup pUVar1;
		MapEditorAddVariantPopup pUVar2;

		__this_00 = this._menu;
		if ((__this_00 == null) ||(pUVar1 = __this_00.AddObjectPopup, pUVar1 == null)) {
	label_0594bb67: ;
			throw new NullReferenceException();
		}
		if (pUVar1.IsActive == false) {
			pUVar2 = __this_00.AddVariantPopup;
			if (pUVar2 == null) goto label_0594bb67;
			if ((pUVar2.IsActive == false) && (__this_00.IsMouseUI != false)) {
				return;
			}
		}
		__this_00.ToggleAddObjectPopup();
		return;
	}

	[Token(Token = "0x60016EA")]
	[Address(RVA = "0x584BB70", Offset = "0x584AB70", VA = "0x584BB70")]
	public void AddObject(string name)
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$AddObject): 45 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		MapScriptBaseMaterial pMVar4;
		Dictionary<object, object> __this_00;
		BaseCamera pCVar5;
		BaseComponentCache pUVar6;
		Transform pUVar7;
		MapEditorSettings pSVar8;
		FloatSetting pSVar9;
		BoolSetting pSVar10;
		BaseGameManager pGVar11;
		List<MapScriptBaseObject> pSVar12;
		MapScriptBaseObject[] pMVar13;
		Dictionary<int, object> __this_01;
		HashSet<object> __this_02;
		MapScriptBaseObject pMVar14;
		MapEditorMenu __this_03;
		byte[] auVar15 = new byte[16];
		double dVar16;
		Ray ray;
		bool bVar17;
		LayerMask mask;
		int layerMask;
		MapScriptObjects __this_04;
		MapScriptSceneObject __this_05;
		String[] pSVar18;
		Int32[] layers;
		MethodInfo pMVar19;
		MapObject item;
		MapEditorGameManager method_02;
		float fVar20;
		float fVar21;
		float fVar22;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		float extraout_XMM0_Dc_01;
		float fVar23;
		float extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		float extraout_XMM0_Dd_01;
		float fVar24;
		uint uVar25;
		uint uVar26;
		uint uVar27;
		uint uVar28;
		byte[] auVar29 = new byte[16];
		float fVar30;
		Vector3 UVar31;
		Vector3 UVar32;
		float local_d0;
		float local_b8;
		float fStack_b4;
		double local_a0;
		byte[] local_98 = new byte[8];
		float fStack_90;
		float fStack_8c;
		float local_84;
		uint uStack_74;
		uint uStack_70;
		RaycastHit local_68;

		local_68.m_UV.x = 0.0;
		local_68.m_UV.y = 0.0;
		local_68.m_Collider.m_Data = (EntityId)0x0;
		local_68.m_Normal.y = 0.0;
		local_68.m_Normal.z = 0.0;
		local_68.m_FaceID = 0;
		local_68.m_Distance = 0.0;
		local_68.m_Point.x = 0.0;
		local_68.m_Point.y = 0.0;
		local_68.m_Point.z = 0.0;
		local_68.m_Normal.x = 0.0;
		__this_04 = new MapScriptObjects();
		if (name == null) goto label_0594c5ff;
		bVar17 = name.StartsWith("Custom/");
		if (bVar17) {
			__this_05 = new MapScriptSceneObject();
			if (__this_05 == null) goto label_0594c5ff;
			__this_05.Asset = name;
			pSVar18 = name.Split(0x2f, 0);
			if (pSVar18 == null) goto label_0594c5ff;
			if ((uint)pSVar18.Length < 3) goto label_0594c609;
			__this_05.Name = pSVar18[2];
			pMVar4 = __this_05.Material;
			if (pMVar4 == null) goto label_0594c5ff;
			pMVar4.Shader = MapObjectShader.DefaultNoTint;
		}
		else {
			__this_00 = (Dictionary<object, object>)BuiltinMapPrefabs.AllPrefabs;
			if (__this_00 == null) goto label_0594c5ff;
			__this_05 = (MapScriptSceneObject)__this_00.get_Item((object)name);
			if (__this_05 == null) {
				__this_05 = null;
			}
			else {
				bVar2 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
				if (((__this_05.klass._2).typeHierarchyDepth < bVar2) ||((__this_05.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(MapScriptSceneObject))) {
					throw new InvalidCastException();
				}
			}
		}
		pCVar5 = SceneLoader.CurrentCamera;
		if (pCVar5 != null) {
			pUVar6 = pCVar5.Cache;
			if (pUVar6 != null) {
				pUVar7 = pUVar6.Transform;
				if (pUVar7 != null) {
					UVar31 = pUVar7.position;
					pCVar5 = SceneLoader.CurrentCamera;
					if (pCVar5 != null) {
						pUVar6 = pCVar5.Cache;
						if (pUVar6 != null) {
							pUVar7 = pUVar6.Transform;
							if (pUVar7 != null) {
								UVar32 = pUVar7.forward;
								pSVar8 = SettingsManager.MapEditorSettings;
								if (pSVar8 != null) {
									pSVar9 = pSVar8.PlacementDistance;
									if (pSVar9 != null) {
										pSVar10 = pSVar8.PlaceOnFirstSurface;
										if (pSVar10 != null) {
											fVar30 = pSVar9._value;
											local_b8 = UVar31.x;
											fStack_b4 = UVar31.y;
											local_b8 = local_b8 + UVar32.x * fVar30;
											fStack_b4 = fStack_b4 + UVar32.y * fVar30;
											fVar20 = UVar31.z + UVar32.z * fVar30;
											if (pSVar10._value != false) {
												pCVar5 = SceneLoader.CurrentCamera;
												if (pCVar5 == null) goto label_0594c5ff;
												pUVar6 = pCVar5.Cache;
												if (pUVar6 == null) goto label_0594c5ff;
												pUVar7 = pUVar6.Transform;
												if (pUVar7 == null) goto label_0594c5ff;
												UVar31 = pUVar7.position;
												pCVar5 = SceneLoader.CurrentCamera;
												if (pCVar5 == null) goto label_0594c5ff;
												pUVar6 = pCVar5.Cache;
												if (pUVar6 == null) goto label_0594c5ff;
												pUVar7 = pUVar6.Transform;
												local_84 = UVar31.z;
												if (pUVar7 == null) goto label_0594c5ff;
												UVar32 = pUVar7.position;
												fVar21 = UVar32.x;
												fVar22 = UVar32.y;
												fVar23 = extraout_XMM0_Dc_01;
												fVar24 = extraout_XMM0_Dd_01;
												if (g_data_0753e729 == false) {
													fStack_90 = extraout_XMM0_Dc_01;
													local_98 = (byte[])UVar32._0_8_;
													fStack_8c = extraout_XMM0_Dd_01;
													g_data_0753e729 = true;
													fVar21 = (float)local_98._0_4_;
													fVar22 = (float)local_98._4_4_;
													fVar23 = fStack_90;
													fVar24 = fStack_8c;
												}
												auVar29._0_4_ = local_b8 - fVar21;
												auVar29._4_4_ = fStack_b4 - fVar22;
												auVar29._8_4_ = (extraout_XMM0_Dc + extraout_XMM0_Dc_00 * fVar30) - fVar23;
												auVar29._12_4_ = (extraout_XMM0_Dd + extraout_XMM0_Dd_00 * fVar30) - fVar24;
												fVar30 = fVar20 - UVar32.z;
												if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
													_local_98 = auVar29;
													auVar29 = _local_98;
												}
												fVar21 = fVar30 * fVar30 + auVar29._4_4_ * auVar29._4_4_ + auVar29._0_4_ * auVar29._0_4_ ;
												local_d0 = 0.0;
												if (fVar21 < 0.0) {
													_local_98 = auVar29;
													fVar21 = sqrtf(fVar21);
													auVar29 = _local_98;
												}
												else {
													fVar21 = SQRT(fVar21);
												}
												uVar28 = 0;
												uVar27 = 0;
												uVar26 = 0;
												uVar25 = 0;
												if (1e-05 < fVar21) {
													local_d0 = fVar30 / fVar21;
													auVar15._4_4_ = fVar21;
													auVar15._0_4_ = fVar21;
													auVar15._8_4_ = fVar21;
													auVar15._12_4_ = fVar21;
													auVar29 = divps(auVar29, auVar15);
													uVar25 = auVar29._0_4_;
													uVar26 = auVar29._4_4_;
													uVar27 = auVar29._8_4_;
													uVar28 = auVar29._12_4_;
												}
												pSVar8 = SettingsManager.MapEditorSettings;
												if (pSVar8 == null) goto label_0594c5ff;
												local_98._4_4_ = uVar26;
												local_98._0_4_ = uVar25;
												fStack_90 = (float)uVar27;
												fStack_8c = (float)uVar28;
												pSVar9 = pSVar8.PlacementDistance;
												if (pSVar9 == null) goto label_0594c5ff;
												fVar30 = pSVar9._value;
												layers = (Int32[])new int[1];
												if (layers == null) goto label_0594c5ff;
												if ((int)layers.Length == 0) {
	label_0594c609: ;
													throw new IndexOutOfRangeException();
												}
												layers[0] = PhysicsLayer.MapEditorObject;
												mask = PhysicsLayer.GetMask(layers);
												layerMask = ((LayerMask)mask);
												uStack_74 = local_98._0_4_;
												uStack_70 = local_98._4_4_;
												ray.m_Direction.z = local_d0;
												ray.m_Direction.y = (float)uStack_70;
												ray.m_Direction.x = (float)uStack_74;
												ray.m_Origin.z = local_84;
												ray.m_Origin.x = UVar31.x;
												ray.m_Origin.y = UVar31.y;
												bVar17 = Physics.Raycast(ray, ref local_68, fVar30, layerMask);
												if (bVar17) {
													UVar31 = local_68.point;
													fVar20 = UVar31.z;
													local_b8 = UVar31.x;
													fStack_b4 = UVar31.y;
												}
											}
											pGVar11 = SceneLoader.CurrentGameManager;
											if (pGVar11 != null) {
												bVar2 = (typeof(MapEditorGameManager)._2).typeHierarchyDepth;
												if (((pGVar11.klass._2).typeHierarchyDepth < bVar2) ||((pGVar11.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(MapEditorGameManager))) {
													throw new InvalidCastException();
												}
												if (*(sbyte)((long)&(*(ulong)((sbyte)pGVar11 + 0x48)) + 4) != false) {
													pSVar8 = SettingsManager.MapEditorSettings;
													if ((pSVar8 == null) ||(pSVar9 = pSVar8.SnapMove, pSVar9 == null)) goto label_0594c5ff;
													fVar30 = pSVar9._value;
													local_b8 = local_b8 / fVar30;
													method_02 = typeof(MapEditorGameManager);
													dVar16 = modf((double)local_b8, &local_a0, (MethodInfo)typeof(MapEditorGameManager));
													if (0.0 <= local_b8) {
														if ((dVar16 != 0.5) || (NAN(dVar16))) {
															local_b8 = floorf(local_b8 + 0.5);
														}
														else {
															local_b8 = (float)local_a0;
															if (((long)local_a0 & 1U) != 0) {
																local_b8 = local_b8 + 1.0;
															}
														}
													}
													else if ((dVar16 != -0.5) || (NAN(dVar16))) {
														local_b8 = ceilf(local_b8 + -0.5);
													}
													else {
														local_b8 = (float)local_a0;
														if (((long)local_a0 & 1U) != 0) {
															local_b8 = local_b8 + -1.0;
														}
													}
													fStack_b4 = fStack_b4 / fVar30;
													dVar16 = modf((double)fStack_b4, &local_a0, (MethodInfo)method_02);
													if (0.0 <= fStack_b4) {
														if ((dVar16 != 0.5) || (NAN(dVar16))) {
															fStack_b4 = floorf(fStack_b4 + 0.5);
														}
														else {
															fStack_b4 = (float)local_a0;
															if (((long)local_a0 & 1U) != 0) {
																fStack_b4 = fStack_b4 + 1.0;
															}
														}
													}
													else if ((dVar16 != -0.5) || (NAN(dVar16))) {
														fStack_b4 = ceilf(fStack_b4 + -0.5);
													}
													else {
														fStack_b4 = (float)local_a0;
														if (((long)local_a0 & 1U) != 0) {
															fStack_b4 = fStack_b4 + -1.0;
														}
													}
													local_b8 = local_b8 * fVar30;
													fStack_b4 = fStack_b4 * fVar30;
													fVar20 = fVar20 / fVar30;
													dVar16 = modf((double)fVar20, &local_a0, (MethodInfo)method_02);
													if (0.0 <= fVar20) {
														if ((dVar16 != 0.5) || (NAN(dVar16))) {
															fVar20 = floorf(fVar20 + 0.5);
														}
														else {
															fVar20 = (float)local_a0;
															if (((long)local_a0 & 1U) != 0) {
																fVar20 = fVar20 + 1.0;
															}
														}
													}
													else if ((dVar16 != -0.5) || (NAN(dVar16))) {
														fVar20 = ceilf(fVar20 + -0.5);
													}
													else {
														fVar20 = (float)local_a0;
														if (((long)local_a0 & 1U) != 0) {
															fVar20 = fVar20 + -1.0;
														}
													}
													fVar20 = fVar30 * fVar20;
												}
												if (__this_05 != null) {
													UVar31.y = fStack_b4;
													UVar31.x = local_b8;
													UVar31.z = fVar20;
													__this_05.SetPosition(UVar31);
													pMVar19 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
													if ((__this_04 != null) &&(pSVar12 = __this_04.Objects, pSVar12 != null)) {
														piVar1 = &pSVar12._version;
														*piVar1 = *piVar1 + 1;
														pMVar13 = pSVar12._items;
														if (pMVar13 != null) {
															uVar3 = pSVar12._size;
															if (uVar3 < (uint)pMVar13.Length) {
																pSVar12._size = uVar3 + 1;
																pMVar13[(int)uVar3] = (MapScriptBaseObject)__this_05;
															}
															else {
																pSVar12.AddWithResize((object)__this_05);
															}
															pSVar12 = __this_04.Objects;
															pMVar19 = new AddObjectCommand(pSVar12, -1);
															this.NewCommand((BaseCommand)pMVar19, true);
															this.DeselectAll();
															__this_01 = (Dictionary<int, object>)MapLoader.IdToMapObject;
															if (__this_01 != null) {
																item = __this_01.get_Item(this._currentObjectId);
																if ((item != null) &&(item.ScriptObject != null)) {
																	__this_02 = (HashSet<object>)this.SelectedObjects;
																	if (__this_02 == null) goto label_0594c5ff;
																	__this_02.Add((object)item);
																	pMVar14 = item.ScriptObject;
																	if (pMVar14 == null) goto label_0594c5ff;
																	this.LastSelectedObjectId = pMVar14.Id;
																}
																__this_03 = this._menu;
																if (__this_03 != null) {
																	__this_03.SyncHierarchyPanel();
																	this.OnSelectionChange(true);
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
	label_0594c5ff: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60016EB")]
	[Address(RVA = "0x584CD00", Offset = "0x584BD00", VA = "0x584CD00")]
	public void Undo()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$Undo): 4 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		byte bVar3;
		int iVar4;
		uint uVar5;
		List<object> pSVar6;
		Object[] pSVar7;
		Il2CppClass pIVar8;
		MapEditorMenu __this_00;
		object item;

		pSVar6 = (List<object>)this._undoCommands;
		if (pSVar6 != null) {
			iVar4 = pSVar6._size;
			if (iVar4 == 0) {
				return;
			}
			item = (object)pSVar6.get_Item(iVar4 + -1);
			if (item == null) goto label_0594cf3a;
			(*item.klass.vtable[5].methodPtr)(item,item.klass.vtable[5].method);
			pSVar6 = (List<object>)this._redoCommands;
			if (pSVar6 == null) goto label_0594cf3a;
			piVar1 = &pSVar6._version;
			*piVar1 = *piVar1 + 1;
			pSVar7 = pSVar6._items;
			if (pSVar7 == null) goto label_0594cf3a;
			uVar5 = pSVar6._size;
			if (uVar5 < (uint)pSVar7.Length) {
				pSVar6._size = uVar5 + 1;
				pSVar7[(int)uVar5] = item;
			}
			else {
				pSVar6.AddWithResize(item);
			}
			pSVar6 = (List<object>)this._undoCommands;
			if (pSVar6 == null) goto label_0594cf3a;
			pSVar6.RemoveAt(pSVar6._size + -1);
			pIVar8 = item.klass;
			bVar2 = (pIVar8._2).typeHierarchyDepth;
			bVar3 = (typeof(AddObjectCommand)._2).typeHierarchyDepth;
			if ((bVar2 < bVar3) ||((pIVar8._2).typeHierarchy[(ulong)bVar3 - 1] != typeof(AddObjectCommand))) {
				bVar3 = (typeof(DeleteObjectCommand)._2).typeHierarchyDepth;
				if ((bVar2 < bVar3) ||((pIVar8._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(DeleteObjectCommand))) {
					bVar3 = (typeof(ReparentObjectsCommand)._2).typeHierarchyDepth;
					if ((bVar2 < bVar3) ||((pIVar8._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(ReparentObjectsCommand))) {
						bVar3 = (typeof(ReorderObjectsCommand)._2).typeHierarchyDepth;
						if ((bVar2 < bVar3) ||((pIVar8._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(ReorderObjectsCommand))) {
							bVar3 = (typeof(CreateEmptyParentCommand)._2).typeHierarchyDepth;
							if ((bVar2 < bVar3) ||((pIVar8._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(CreateEmptyParentCommand))) goto label_0594cf26;
						}
					}
				}
			}
			__this_00 = this._menu;
			if (__this_00 != null) {
				__this_00.SyncHierarchyPanel();
	label_0594cf26: ;
				this.OnSelectionChange(true);
				return;
			}
		}
	label_0594cf3a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60016EC")]
	[Address(RVA = "0x584CF40", Offset = "0x584BF40", VA = "0x584CF40")]
	public void Redo()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$Redo): 4 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		byte bVar3;
		int iVar4;
		uint uVar5;
		List<object> pSVar6;
		Object[] pSVar7;
		Il2CppClass pIVar8;
		MapEditorMenu __this_00;
		object item;

		pSVar6 = (List<object>)this._redoCommands;
		if (pSVar6 != null) {
			iVar4 = pSVar6._size;
			if (iVar4 == 0) {
				return;
			}
			item = (object)pSVar6.get_Item(iVar4 + -1);
			if (item == null) goto label_0594d17a;
			(*item.klass.vtable[4].methodPtr)(item,item.klass.vtable[4].method);
			pSVar6 = (List<object>)this._undoCommands;
			if (pSVar6 == null) goto label_0594d17a;
			piVar1 = &pSVar6._version;
			*piVar1 = *piVar1 + 1;
			pSVar7 = pSVar6._items;
			if (pSVar7 == null) goto label_0594d17a;
			uVar5 = pSVar6._size;
			if (uVar5 < (uint)pSVar7.Length) {
				pSVar6._size = uVar5 + 1;
				pSVar7[(int)uVar5] = item;
			}
			else {
				pSVar6.AddWithResize(item);
			}
			pSVar6 = (List<object>)this._redoCommands;
			if (pSVar6 == null) goto label_0594d17a;
			pSVar6.RemoveAt(pSVar6._size + -1);
			pIVar8 = item.klass;
			bVar2 = (pIVar8._2).typeHierarchyDepth;
			bVar3 = (typeof(AddObjectCommand)._2).typeHierarchyDepth;
			if ((bVar2 < bVar3) ||((pIVar8._2).typeHierarchy[(ulong)bVar3 - 1] != typeof(AddObjectCommand))) {
				bVar3 = (typeof(DeleteObjectCommand)._2).typeHierarchyDepth;
				if ((bVar2 < bVar3) ||((pIVar8._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(DeleteObjectCommand))) {
					bVar3 = (typeof(ReparentObjectsCommand)._2).typeHierarchyDepth;
					if ((bVar2 < bVar3) ||((pIVar8._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(ReparentObjectsCommand))) {
						bVar3 = (typeof(ReorderObjectsCommand)._2).typeHierarchyDepth;
						if ((bVar2 < bVar3) ||((pIVar8._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(ReorderObjectsCommand))) {
							bVar3 = (typeof(CreateEmptyParentCommand)._2).typeHierarchyDepth;
							if ((bVar2 < bVar3) ||((pIVar8._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(CreateEmptyParentCommand))) goto label_0594d166;
						}
					}
				}
			}
			__this_00 = this._menu;
			if (__this_00 != null) {
				__this_00.SyncHierarchyPanel();
	label_0594d166: ;
				this.OnSelectionChange(true);
				return;
			}
		}
	label_0594d17a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60016ED")]
	[Address(RVA = "0x584D180", Offset = "0x584C180", VA = "0x584D180")]
	public void Copy()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$Copy): 20 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		HashSet<MapObject> source;
		object pIVar3;
		Dictionary<int, object> pSVar4;
		List<int> __this_00;
		List<MapScriptBaseObject> __this_01;
		MapScriptBaseObject item;
		MapScriptBaseObject[] pMVar5;
		int item_00;
		MapEditorGameManager pGVar7;
		bool bVar8;
		int iVar9;
		Func<MapObject, int> __this_02;
		System_Collections_Generic_IEnumerable_TResult__o collection;
		HashSet<int> __this_03;
		HashSet<int> __this_04;
		GameManagers_MapEditorGameManager___c_StaticFields pGVar10;
		Func<int, bool> __this_05;
		System_Collections_Generic_IEnumerable_TSource__o collection_00;
		Queue<int> __this_06;
		MapScriptObjects __this_07;
		MapObject pMVar11;
		String pSVar12;
		byte[] local_b8 = new byte[8];
		object local_a8;
		MapScriptObjects local_98;
		byte[] local_90 = new byte[16];
		object local_80;
		object pIStack_78;
		int local_70;
		uint uStack_6c;
		byte[] local_68 = new byte[8];
		object local_58;
		object pIStack_50;
		ulong local_48;
		MapEditorGameManager local_38;

		local_58 = null;
		pIStack_50 = null;
		local_68 = (byte[])0x0;
		local_48._0_4_ = 0;
		local_48._4_4_ = 0;
		local_b8 = (byte[])0x0;
		local_a8 = null;
		source = this.SelectedObjects;
		if (source != null) {
			if (source._count == 0) {
				return;
			}
			if ((typeof(MapEditorGameManager.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar10 = typeof(MapEditorGameManager.c).static_fields;
				__this_02 = pGVar10.__9__29_0;
			}
			else {
				pGVar10 = typeof(MapEditorGameManager.c).static_fields;
				__this_02 = pGVar10.__9__29_0;
			}
			if (__this_02 == null) {
				if (((typeof(MapEditorGameManager.c))._2).cctor_finished_or_no_cctor == 0) {
					pGVar10 = typeof(MapEditorGameManager.c).static_fields;
				}
				pIVar3 = (object)pGVar10.__9;
				__this_02 = new Func<MapObject, int>(pIVar3, (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_Copy_b__29_0);
				pGVar10 = typeof(MapEditorGameManager.c).static_fields;
				pGVar10.__9__29_0 = __this_02;
			}
			collection = Enumerable.Select<MapObject, int>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this_02);
			__this_03 = new HashSet<int>((IEnumerable<T>)collection);
			__this_04 = new HashSet<int>((IEnumerable<T>)__this_03);
			local_38 = this;
			if (this.HierarchyTreeViewEnabled != false) {
				if ((typeof(MapEditorGameManager.c)._2).cctor_finished_or_no_cctor == 0) {
					pGVar10 = typeof(MapEditorGameManager.c).static_fields;
					__this_05 = pGVar10.__9__29_1;
				}
				else {
					pGVar10 = typeof(MapEditorGameManager.c).static_fields;
					__this_05 = pGVar10.__9__29_1;
				}
				if (__this_05 == null) {
					if (((typeof(MapEditorGameManager.c))._2).cctor_finished_or_no_cctor == 0) {
						pGVar10 = typeof(MapEditorGameManager.c).static_fields;
					}
					pIVar3 = (object)pGVar10.__9;
					__this_05 = new Func<int, bool>(pIVar3, (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_Copy_b__29_1);
					pGVar10 = typeof(MapEditorGameManager.c).static_fields;
					pGVar10.__9__29_1 = __this_05;
				}
				collection_00 = Enumerable.Where<int>((System_Collections_Generic_IEnumerable_TSource__o)__this_03, (System_Func_TSource__bool__o)__this_05);
				__this_06 = new Queue<int>((IEnumerable<T>)collection_00);
				if (__this_06 == null) goto label_0594da00;
				if (0 < __this_06._size) {
					do {
						iVar9 = __this_06.Dequeue();
						pSVar4 = (Dictionary<int, object>)MapLoader.IdToMapObject;
						if (pSVar4 == null) goto label_0594da00;
						local_90.GetEnumerator(pSVar4);
						local_48._0_4_ = local_70;
						local_48._4_4_ = uStack_6c;
						local_58 = local_80;
						pIStack_50 = pIStack_78;
						local_68 = (byte[])local_90._0_8_;
						local_90._0_8_ = null;
						local_90._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o)local_68;
						if (__this_04 == null) {
							while (bVar8 = local_68.MoveNext()) {
								if (pIStack_50 == null) goto label_0594d6af;
								if (*(int)&pIStack_50[1].klass == iVar9) {
									throw new NullReferenceException();
								}
							}
						}
						else {
							while (bVar8 = local_68.MoveNext()) {
								if (pIStack_50 == null) {
	label_0594d6af: ;
									throw new NullReferenceException();
								}
								if (*(int)&pIStack_50[1].klass == iVar9) {
									item_00 = (int32_t)local_58;
									bVar8 = __this_04.Add((int32_t)local_58);
									if (bVar8) {
										__this_06.Enqueue(item_00);
									}
								}
							}
						}
						local_68.Dispose();
					} while (0 < __this_06._size);
				}
			}
			__this_07 = new MapScriptObjects();
			__this_00 = MapLoader.ObjectOrder;
			if (__this_00 != null) {
				local_90.GetEnumerator(__this_00);
				local_a8 = local_80;
				local_b8 = (byte[])local_90._0_8_;
				local_90._0_8_ = null;
				local_90._8_8_ = local_b8;
				local_98 = __this_07;
				if (__this_04 == null) {
					bVar8 = local_b8.MoveNext();
					if (bVar8) {
						throw new NullReferenceException();
					}
				}
				else if (__this_07 == null) {
					while (bVar8 = local_b8.MoveNext()) {
						iVar9 = (int32_t)local_a8;
						bVar8 = __this_04.Contains((int32_t)local_a8) ;
						if (bVar8) {
							pSVar4 = (Dictionary<int, object>)MapLoader.IdToMapObject;
							if (pSVar4 == null) goto label_0594da05;
							bVar8 = pSVar4.ContainsKey(iVar9);
							if (bVar8) {
								throw new NullReferenceException();
							}
						}
					}
				}
				else {
	label_0594d7e0: ;
					bVar8 = local_b8.MoveNext();
					if (bVar8) {
						iVar9 = (int32_t)local_a8;
						bVar8 = __this_04.Contains((int32_t)local_a8) ;
						if (bVar8) {
							pSVar4 = (Dictionary<int, object>)MapLoader.IdToMapObject;
							if (pSVar4 == null) {
	label_0594da05: ;
								throw new NullReferenceException();
							}
							bVar8 = pSVar4.ContainsKey(iVar9);
							if (bVar8) {
								__this_01 = local_98.Objects;
								pSVar4 = (Dictionary<int, object>)MapLoader.IdToMapObject;
								if (pSVar4 == null) {
									throw new NullReferenceException();
								}
								pMVar11 = pSVar4.get_Item(iVar9);
								if (pMVar11 == null) {
									throw new NullReferenceException();
								}
								if (__this_01 != null) {
									item = pMVar11.ScriptObject;
									piVar1 = &__this_01._version;
									*piVar1 = *piVar1 + 1;
									pMVar5 = __this_01._items;
									if (pMVar5 != null) {
										uVar2 = __this_01._size;
										if (uVar2 < (uint)pMVar5.Length) {
											__this_01._size = uVar2 + 1;
											pMVar5[(int)uVar2] = item;
										}
										else {
											__this_01.AddWithResize((object)item);
										}
										goto label_0594d7e0;
									}
								}
								throw new NullReferenceException();
							}
						}
						goto label_0594d7e0;
					}
				}
				local_b8.Dispose();
				pGVar7 = local_38;
				if (local_98 != null) {
					pSVar12 = local_98.Serialize();
					pGVar7._clipboard = pSVar12;
					return;
				}
			}
		}
	label_0594da00: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60016EE")]
	[Address(RVA = "0x584DAB0", Offset = "0x584CAB0", VA = "0x584DAB0")]
	public void Paste()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$Paste): clean


		this.Paste(-1);
		return;
	}

	[Token(Token = "0x60016EF")]
	[Address(RVA = "0x584E380", Offset = "0x584D380", VA = "0x584E380")]
	public void PasteAsChild(int parentId)
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$PasteAsChild): clean
		uint uVar1;
		Dictionary<int, object> __this_00;
		bool bVar2;

		if (Il2CppMethodInitialized_0754587e == false) {
			Il2CppMethodInitialized_0754587e = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = (Dictionary<int, object>)MapLoader.IdToMapObject;
		}
		else {
			__this_00 = *(Dictionary<int, object>*)(typeof(MapLoader)).static_fields;
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar2 = __this_00.ContainsKey(parentId);
		if (bVar2) {
			this.Paste(parentId);
			return;
		}
		return;
	}

	[Token(Token = "0x60016F0")]
	[Address(RVA = "0x584DAC0", Offset = "0x584CAC0", VA = "0x584DAC0")]
	private void Paste(int parentId)
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$Paste): 22 lines keep C-only constructs
		List<MapScriptBaseObject> pSVar1;
		object pIVar2;
		HashSet<object> pSVar3;
		List<int> __this_00;
		Dictionary<int, object> __this_01;
		MapScriptBaseObject pMVar4;
		MapEditorMenu __this_02;
		MapEditorGameManager pGVar5;
		bool bVar6;
		int iVar7;
		MapScriptObjects pMVar8;
		Func<MapScriptBaseObject, int> pSVar9;
		System_Collections_Generic_IEnumerable_TResult__o pSVar10;
		HashSet<int> pSVar11;
		MethodInfo method_00;
		GameManagers_MapEditorGameManager___c_StaticFields pGVar12;
		MapObject item;
		int iVar13;
		byte[] local_a0 = new byte[16];
		object local_90;
		byte[] local_88 = new byte[8];
		object local_78;
		MapEditorGameManager local_68;
		int local_5c;
		byte[] local_58 = new byte[8];
		object local_48;
		MapScriptObjects local_38;

		local_88 = (byte[])0x0;
		local_78 = null;
		local_58 = (byte[])0x0;
		local_48 = null;
		bVar6 = (this._clipboard == (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (bVar6) {
			return;
		}
		pMVar8 = new MapScriptObjects();
		if (pMVar8 != null) {
			pMVar8.Deserialize(this._clipboard);
			local_68 = this;
			local_38 = pMVar8;
			if (0 < parentId) {
				pSVar1 = pMVar8.Objects;
				if ((typeof(MapEditorGameManager.c)._2).cctor_finished_or_no_cctor == 0) {
					pGVar12 = typeof(MapEditorGameManager.c).static_fields;
					pSVar9 = pGVar12.__9__32_1;
				}
				else {
					pGVar12 = typeof(MapEditorGameManager.c).static_fields;
					pSVar9 = pGVar12.__9__32_1;
				}
				if (pSVar9 == null) {
					if (((typeof(MapEditorGameManager.c))._2).cctor_finished_or_no_cctor == 0) {
						pGVar12 = typeof(MapEditorGameManager.c).static_fields;
					}
					pIVar2 = (object)pGVar12.__9;
					pSVar9 = new Func<MapScriptBaseObject, int>(pIVar2, (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_Paste_b__32_1);
					pGVar12 = typeof(MapEditorGameManager.c).static_fields;
					pGVar12.__9__32_1 = pSVar9;
				}
				pSVar10 = Enumerable.Select<MapScriptBaseObject, int>((System_Collections_Generic_IEnumerable_TSource__o)pSVar1, (System_Func_TSource__TResult__o)pSVar9);
				pSVar11 = new HashSet<int>((IEnumerable<T>)pSVar10);
				pSVar1 = pMVar8.Objects;
				if (pSVar1 == null) goto label_0594e229;
				local_a0.GetEnumerator((List<object>)pSVar1);
				local_78 = local_90;
				local_88 = (byte[])local_a0._0_8_;
				local_a0._0_8_ = null;
				local_a0._8_8_ = local_88;
				if (pSVar11 == null) {
					bVar6 = local_88.MoveNext() ;
					if (bVar6) {
						if (local_78 != null) {
							throw new NullReferenceException();
						}
	label_0594e248: ;
						throw new NullReferenceException();
					}
				}
				else {
					while (true) {
						bVar6 = local_88.MoveNext();
						pIVar2 = local_78;
						if (!(bVar6)) break;
						if (local_78 == null) goto label_0594e248;
						bVar6 = pSVar11.Contains(*(int)((long)&local_78[2].klass + 4)) ;
						if (!bVar6) {
							*(int)((long)&pIVar2[2].klass + 4) = parentId;
						}
					}
				}
				local_88.Dispose();
			}
			pSVar3 = (HashSet<object>)local_68.SelectedObjects;
			if (pSVar3 != null) {
				local_a0.GetEnumerator(pSVar3);
				local_48 = local_90;
				local_58 = (byte[])local_a0._0_8_;
				local_a0._0_8_ = null;
				local_5c = -1;
				iVar13 = -1;
				local_a0._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_58;
				while (true) {
					bVar6 = local_58.MoveNext();
					pIVar2 = local_48;
					if (!(bVar6)) break;
					if (pIVar2 == null) {
						throw new NullReferenceException();
					}
					if (pIVar2[2].klass == null) {
						throw new NullReferenceException();
					}
					__this_00 = MapLoader.ObjectOrder;
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					iVar7 = __this_00.IndexOf(*(int)&((pIVar2[2].klass)._1).byval_arg.data);
					if (iVar13 < iVar7) {
						if (pIVar2[2].klass == null) {
							throw new NullReferenceException();
						}
						local_5c = *(int)&((pIVar2[2].klass)._1).byval_arg.data;
						iVar13 = iVar7;
					}
				}
				local_58.Dispose();
				pMVar8 = local_38;
				pSVar1 = local_38.Objects;
				method_00 = new AddObjectCommand(pSVar1, local_5c);
				pGVar5 = local_68;
				local_68.NewCommand((BaseCommand)method_00, true);
				pGVar5.DeselectAll();
				pSVar1 = pMVar8.Objects;
				if ((typeof(MapEditorGameManager.c)._2).cctor_finished_or_no_cctor == 0) {
					pGVar12 = typeof(MapEditorGameManager.c).static_fields;
					pSVar9 = pGVar12.__9__32_0;
				}
				else {
					pGVar12 = typeof(MapEditorGameManager.c).static_fields;
					pSVar9 = pGVar12.__9__32_0;
				}
				if (pSVar9 == null) {
					if (((typeof(MapEditorGameManager.c))._2).cctor_finished_or_no_cctor == 0) {
						pGVar12 = typeof(MapEditorGameManager.c).static_fields;
					}
					pIVar2 = (object)pGVar12.__9;
					pSVar9 = new Func<MapScriptBaseObject, int>(pIVar2, (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_Paste_b__32_0);
					pGVar12 = typeof(MapEditorGameManager.c).static_fields;
					pGVar12.__9__32_0 = pSVar9;
				}
				pSVar10 = Enumerable.Select<MapScriptBaseObject, int>((System_Collections_Generic_IEnumerable_TSource__o)pSVar1, (System_Func_TSource__TResult__o)pSVar9);
				pSVar11 = new HashSet<int>((IEnumerable<T>)pSVar10);
				pSVar1 = pMVar8.Objects;
				if (pSVar1 != null) {
					local_a0.GetEnumerator((List<object>)pSVar1);
					local_78 = local_90;
					local_88 = (byte[])local_a0._0_8_;
					local_a0._0_8_ = null;
					local_a0._8_8_ = local_88;
					if (pSVar11 == null) {
						bVar6 = local_88.MoveNext();
						if (bVar6) {
							if (local_78 != null) {
								throw new NullReferenceException();
							}
	label_0594e23b: ;
							throw new NullReferenceException();
						}
					}
					else {
	label_0594e0d0: ;
						bVar6 = local_88.MoveNext();
						pIVar2 = local_78;
						if (bVar6) {
							if (local_78 == null) goto label_0594e23b;
							bVar6 = pSVar11.Contains(*(int)((long)&local_78[2].klass + 4));
							if (!bVar6) {
								__this_01 = (Dictionary<int, object>)MapLoader.IdToMapObject;
								if (__this_01 == null) {
									throw new NullReferenceException();
								}
								item = __this_01.get_Item(*(int)&pIVar2[2].klass);
								if ((item != null) &&(item.ScriptObject != null)) {
									pSVar3 = (HashSet<object>)local_68.SelectedObjects;
									if (pSVar3 != null) {
										pSVar3.Add((object)item);
										pMVar4 = item.ScriptObject;
										if (pMVar4 != null) {
											local_68.LastSelectedObjectId = pMVar4.Id;
											goto label_0594e0d0;
										}
									}
									throw new NullReferenceException();
								}
							}
							goto label_0594e0d0;
						}
					}
					local_88.Dispose();
					pGVar5 = local_68;
					__this_02 = local_68._menu;
					if (__this_02 != null) {
						__this_02.SyncHierarchyPanel();
						pGVar5.OnSelectionChange(true);
						return;
					}
				}
			}
		}
	label_0594e229: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60016F1")]
	[Address(RVA = "0x584E430", Offset = "0x584D430", VA = "0x584E430")]
	public void CreateEmptyParent(int contextId)
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$CreateEmptyParent): 16 lines keep C-only constructs
		int piVar1;
		Dictionary<int, object> pSVar2;
		HashSet<MapObject> source;
		object pIVar3;
		List<MapScriptBaseObject> pSVar4;
		Dictionary<object, object> __this_00;
		MapScriptBaseObject[] pMVar5;
		GameObject __this_01;
		HashSet<object> __this_02;
		MapEditorMenu __this_03;
		bool bVar6;
		int key;
		uint uVar7;
		MapEditorGameManager.c__DisplayClass33_0 __this_04;
		Func<MapObject, int> __this_05;
		System_Collections_Generic_IEnumerable_TResult__o collection;
		HashSet<int> pSVar8;
		Func<int, bool> __this_06;
		System_Collections_Generic_IEnumerable_TSource__o source_00;
		System_Collections_Generic_List_TSource__o pSVar9;
		GameManagers_MapEditorGameManager___c_StaticFields pGVar10;
		Func<int, int> __this_07;
		System_Linq_IOrderedEnumerable_TSource__o source_01;
		MapObject pMVar11;
		MapScriptObjects pMVar12;
		MapScriptBaseObject pMVar13;
		String pSVar14;
		Transform __this_08;
		MethodInfo __this_09;
		HashSet<int>* targetAddress;
		MethodInfo pMVar15;
		Vector3 position;

		__this_04 = new MapEditorGameManager.c__DisplayClass33_0();
		if (__this_04 != null) {
			__this_04.__4__this = this;
			pSVar2 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			if (pSVar2 != null) {
				bVar6 = pSVar2.ContainsKey(contextId);
				if (!bVar6) {
					return;
				}
				source = this.SelectedObjects;
				if ((typeof(MapEditorGameManager.c)._2).cctor_finished_or_no_cctor == 0) {
					pGVar10 = typeof(MapEditorGameManager.c).static_fields;
					__this_05 = pGVar10.__9__33_0;
				}
				else {
					pGVar10 = typeof(MapEditorGameManager.c).static_fields;
					__this_05 = pGVar10.__9__33_0;
				}
				if (__this_05 == null) {
					if (((typeof(MapEditorGameManager.c))._2).cctor_finished_or_no_cctor == 0) {
						pGVar10 = typeof(MapEditorGameManager.c).static_fields;
					}
					pIVar3 = (object)pGVar10.__9;
					__this_05 = new Func<MapObject, int>(pIVar3, (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_CreateEmptyParent_b__33_0);
					pGVar10 = typeof(MapEditorGameManager.c).static_fields;
					pGVar10.__9__33_0 = __this_05;
				}
				collection = Enumerable.Select<MapObject, int>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this_05);
				pSVar8 = new HashSet<int>((IEnumerable<T>)collection);
				targetAddress = &__this_04.selectedIds;
				__this_04.selectedIds = pSVar8;
				pSVar8 = __this_04.selectedIds;
				if (pSVar8 != null) {
					bVar6 = pSVar8.Contains(contextId);
					if (!bVar6) {
						pSVar8 = new HashSet<int>();
						if (pSVar8 == null) goto label_0594ebea;
						pSVar8.Add(contextId);
						*targetAddress = pSVar8;
					}
					pSVar8 = __this_04.selectedIds;
					__this_06 = new Func<int, bool>((object)__this_04, (intptr_t) MethodInfo_GameManagers_MapEditorGameManager_c__DisplayClass33_0_CreateEmptyParent_b__1);
					source_00 = Enumerable.Where<int>((System_Collections_Generic_IEnumerable_TSource__o)pSVar8, (System_Func_TSource__bool__o)__this_06);
					pSVar9 = Enumerable.ToList<int>(source_00);
					if (pSVar9 != null) {
						if (pSVar9._size == 0) {
							return;
						}
						if ((typeof(MapEditorGameManager.c)._2).cctor_finished_or_no_cctor == 0) {
							pGVar10 = typeof(MapEditorGameManager.c).static_fields;
							__this_07 = pGVar10.__9__33_2;
						}
						else {
							pGVar10 = typeof(MapEditorGameManager.c).static_fields;
							__this_07 = pGVar10.__9__33_2;
						}
						if (__this_07 == null) {
							if (((typeof(MapEditorGameManager.c))._2).cctor_finished_or_no_cctor == 0) {
								pGVar10 = typeof(MapEditorGameManager.c).static_fields;
							}
							pIVar3 = (object)pGVar10.__9;
							__this_07 = new Func<int, int>(pIVar3, (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_CreateEmptyParent_b__33_2);
							pGVar10 = typeof(MapEditorGameManager.c).static_fields;
							pGVar10.__9__33_2 = __this_07;
						}
						source_01 = Enumerable.OrderBy<int, int>((System_Collections_Generic_IEnumerable_TSource__o)pSVar9, (System_Func_TSource__TKey__o)__this_07);
						pSVar9 = Enumerable.ToList<int>((System_Collections_Generic_IEnumerable_TSource__o)source_01);
						if (pSVar9 != null) {
							pSVar2 = (Dictionary<int, object>)MapLoader.IdToMapObject;
							key = pSVar9.get_Item(0);
							if (pSVar2 != null) {
								pMVar11 = pSVar2.get_Item(key);
								pMVar12 = new MapScriptObjects();
								if (pMVar12 != null) {
									pSVar4 = pMVar12.Objects;
									__this_00 = (Dictionary<object, object>)BuiltinMapPrefabs.AllPrefabs;
									if ((__this_00 != null) &&(pMVar13 = __this_00.get_Item((Il2CppObject *)"Empty Object"), pMVar15 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add, pSVar4 != null)) {
										piVar1 = &pSVar4._version;
										*piVar1 = *piVar1 + 1;
										pMVar5 = pSVar4._items;
										if (pMVar5 != null) {
											uVar7 = pSVar4._size;
											if (uVar7 < (uint)pMVar5.Length) {
												pSVar4._size = uVar7 + 1;
												pMVar5[(int)uVar7] = pMVar13;
											}
											else {
												pSVar4.AddWithResize((object)pMVar13);
											}
											pSVar14 = pMVar12.Serialize();
											pMVar12 = new MapScriptObjects();
											if (pMVar12 != null) {
												pMVar12.Deserialize(pSVar14);
												pSVar4 = pMVar12.Objects;
												if (((pSVar4 != null) &&(pMVar13 = pSVar4.get_Item(0), pMVar11 != null)) &&(pMVar13 != null)) {
													pMVar13.Parent = pMVar11.Parent;
													__this_01 = pMVar11.GameObject;
													if ((__this_01 != null) &&(__this_08 = __this_01.transform, __this_08 != null)) {
														position = __this_08.position;
														pMVar13.SetPosition(position);
														uVar7 = pSVar9.get_Item(0);
														__this_09 = new CreateEmptyParentCommand(pMVar13, (List<int>)pSVar9, uVar7) ;
														pMVar15 = __this_09;
														this.NewCommand((BaseCommand)__this_09, true);
														this.DeselectAll();
														if ((__this_09 != null) &&(pSVar2 = (Dictionary<int, object>)MapLoader.IdToMapObject, pSVar2 != null)) {
															pMVar11 = pSVar2.get_Item(*(int)&__this_09.klass);
															if ((pMVar11 != null) &&(pMVar11.ScriptObject != null)) {
																__this_02 = (HashSet<object>)this.SelectedObjects;
																if (__this_02 == null) goto label_0594ebea;
																__this_02.Add((object)pMVar11);
																pMVar13 = pMVar11.ScriptObject;
																if (pMVar13 == null) goto label_0594ebea;
																this.LastSelectedObjectId = pMVar13.Id;
															}
															__this_03 = this._menu;
															if (__this_03 != null) {
																__this_03.SyncHierarchyPanel();
																this.OnSelectionChange(true);
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
	label_0594ebea: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60016F2")]
	[Address(RVA = "0x584EC00", Offset = "0x584DC00", VA = "0x584EC00")]
	public void ResetOrigin()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$ResetOrigin): 17 lines keep C-only constructs
		float fVar1;
		float fVar2;
		HashSet<MapObject> pSVar3;
		object pIVar4;
		Dictionary<int, object> pSVar5;
		GameObject __this_00;
		bool bVar7;
		MapEditorGameManager.c__DisplayClass34_0 __this_01;
		GameManagers_MapEditorGameManager___c_StaticFields pGVar8;
		Func<MapObject, int> __this_02;
		System_Collections_Generic_IEnumerable_TResult__o collection;
		HashSet<int> __this_03;
		Func<MapObject, bool> __this_04;
		System_Collections_Generic_IEnumerable_TSource__o source;
		Transform __this_05;
		MapObject pMVar9;
		Transform __this_06;
		TransformPositionCommand __this_07;
		MethodInfo* method_00;
		Vector3 UVar10;
		System_Collections_Generic_List_Enumerator_object__o SStack_68;
		byte[] auStack_50 = new byte[16];
		object pIStack_40;
		List<MapObject> pSStack_38;

		SStack_68._list = null;
		SStack_68._index = 0;
		SStack_68._version = 0;
		SStack_68._current = null;
		__this_01 = new MapEditorGameManager.c__DisplayClass34_0();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			pSVar3 = this.SelectedObjects;
			if (pSVar3 != null) {
				if (pSVar3._count != 0) {
					if ((typeof(MapEditorGameManager.c)._2).cctor_finished_or_no_cctor == 0) {
						pGVar8 = typeof(MapEditorGameManager.c).static_fields;
						__this_02 = pGVar8.__9__34_0;
					}
					else {
						pGVar8 = typeof(MapEditorGameManager.c).static_fields;
						__this_02 = pGVar8.__9__34_0;
					}
					if (__this_02 == null) {
						if (((typeof(MapEditorGameManager.c))._2).cctor_finished_or_no_cctor == 0) {
							pGVar8 = typeof(MapEditorGameManager.c).static_fields;
						}
						pIVar4 = (object)pGVar8.__9;
						__this_02 = new Func<MapObject, int>(pIVar4, (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_ResetOrigin_b__34_0);
						pGVar8 = typeof(MapEditorGameManager.c).static_fields;
						pGVar8.__9__34_0 = __this_02;
					}
					collection = Enumerable.Select<MapObject, int>((System_Collections_Generic_IEnumerable_TSource__o)pSVar3, (System_Func_TSource__TResult__o)__this_02);
					__this_03 = new HashSet<int>((IEnumerable<T>)collection);
					__this_01.selectedIds = __this_03;
					pSVar3 = this.SelectedObjects;
					__this_04 = new Func<MapObject, bool>((object)__this_01, (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c__DisplayClass34_0_ResetOrigin_b__1);
					source = Enumerable.Where<MapObject>((System_Collections_Generic_IEnumerable_TSource__o)pSVar3, (System_Func_TSource__bool__o)__this_04);
					pSStack_38 = (List<MapObject>)Enumerable.ToList<MapObject>(source);
					if (pSStack_38 == null) goto label_0594f0db;
					method_00 = &MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator;
					auStack_50.GetEnumerator((List<object>)pSStack_38);
					SStack_68._current = pIStack_40;
					SStack_68._list = (List<T>)auStack_50._0_8_;
					SStack_68._index = auStack_50._8_4_;
					SStack_68._version = auStack_50._12_4_;
					auStack_50._0_8_ = null;
					auStack_50._8_8_ = &SStack_68;
					while (true) {
						bVar7 = SStack_68.MoveNext();
						pIVar4 = SStack_68._current;
						if (!(bVar7)) break;
						if (SStack_68._current == null) {
							throw new NullReferenceException();
						}
						if (SStack_68._current[1].monitor == null) {
							throw new NullReferenceException();
						}
						__this_05 = SStack_68._current[1].monitor.transform;
						if (*(int)&pIVar4[1].klass < 0) {
	label_0594f010: ;
							fVar1 = (Vector3.zeroVector).x;
							fVar2 = (Vector3.zeroVector).y;
							UVar10.z = (Vector3.zeroVector).z;
						}
						else {
							pSVar5 = (Dictionary<int, object>)MapLoader.IdToMapObject;
							if (pSVar5 == null) {
								throw new NullReferenceException();
							}
							bVar7 = pSVar5.ContainsKey(*(int)&pIVar4[1].klass);
							if (!bVar7) goto label_0594f010;
							pSVar5 = (Dictionary<int, object>)MapLoader.IdToMapObject;
							if (pSVar5 == null) {
								throw new NullReferenceException();
							}
							pMVar9 = pSVar5.get_Item(*(int)&pIVar4[1].klass);
							if (pMVar9 == null) {
								throw new NullReferenceException();
							}
							__this_00 = pMVar9.GameObject;
							if (__this_00 == null) {
								throw new NullReferenceException();
							}
							__this_06 = __this_00.transform;
							if (__this_06 == null) {
								throw new NullReferenceException();
							}
							UVar10 = __this_06.position;
							UVar10.z = UVar10.z;
							fVar1 = UVar10.x;
							fVar2 = UVar10.y;
						}
						if (__this_05 == null) {
							throw new NullReferenceException();
						}
						UVar10.y = fVar2;
						UVar10.x = fVar1;
						UVar10.z = UVar10.z;
						__this_05.position = UVar10;
					}
					SStack_68.Dispose();
					__this_07 = new TransformPositionCommand(pSStack_38);
					this.NewCommand((BaseCommand)__this_07, true);
					this.OnSelectionChange(false);
				}
				return;
			}
		}
	label_0594f0db: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60016F3")]
	[Address(RVA = "0x584F180", Offset = "0x584E180", VA = "0x584F180")]
	public void Cut()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$Cut): clean
		this.Copy();
		this.Delete();
		return;
	}

	[Token(Token = "0x60016F4")]
	[Address(RVA = "0x584F1A0", Offset = "0x584E1A0", VA = "0x584F1A0")]
	public void Delete()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$Delete): clean
		bool includeDescendants;
		HashSet<MapObject> collection;
		MapEditorMenu __this_00;
		List<MapObject> objs;
		DeleteObjectCommand __this_01;

		collection = this.SelectedObjects;
		if (collection != null) {
			if (collection._count == 0) {
				return;
			}
			objs = new List<MapObject>((IEnumerable<T>)collection);
			includeDescendants = this.HierarchyTreeViewEnabled;
			__this_01 = new DeleteObjectCommand(objs, includeDescendants);
			this.NewCommand((BaseCommand)__this_01, true);
			__this_00 = this._menu;
			if (__this_00 != null) {
				__this_00.SyncHierarchyPanel();
				this.OnSelectionChange(true);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60016F6")]
	[Address(RVA = "0x584F320", Offset = "0x584E320", VA = "0x584F320")]
	public void Select(bool multi)
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$Select): clean
		MapEditorMenu pUVar1;
		Vector3 position;

		position = Input.mousePosition;
		pUVar1 = this._menu;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		this.SelectAt(multi, position, pUVar1.IsMouseUI);
		return;
	}

	[Token(Token = "0x60016F7")]
	[Address(RVA = "0x584F360", Offset = "0x584E360", VA = "0x584F360")]
	private void SelectAt(bool multi, Vector3 position, bool isUI)
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$SelectAt): 67 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		float fVar3;
		uint uVar4;
		uint uVar5;
		MapEditorBrush pMVar6;
		BaseCamera pCVar7;
		Dictionary<object, object> pSVar8;
		Object pUVar9;
		Camera pUVar10;
		BaseComponentCache pUVar11;
		Transform __this_00;
		MapScriptBaseObject pMVar12;
		Ray ray;
		Vector3 position_00;
		object pIVar13;
		int iVar14;
		byte[] auVar15 = new byte[16];
		bool bVar16;
		LayerMask mask;
		uint uVar17;
		Int32[] layers;
		Collider collider;
		MethodInfo obj;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_01;
		MapObject item;
		Object[] pSVar18;
		ulong uVar19;
		GameObject pUVar20;
		undefined7 in_register_00000011;
		MethodInfo pMVar21;
		ulong uVar22;
		undefined7 in_register_00000031;
		MethodInfo pMVar23;
		HashSet<object> pSVar24;
		float fVar25;
		float fVar26;
		float fVar27;
		float in_XMM0_Dc;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		float in_XMM0_Dd;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		float fVar28;
		float fVar29;
		float in_XMM1_Db;
		float fVar30;
		float fVar31;
		float fVar32;
		float fVar33;
		float fVar34;
		float fVar35;
		float fVar36;
		float fVar37;
		float fVar38;
		Vector3 UVar39;
		Vector3 v;
		Vector3 start;
		Vector3 end;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_f8;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_e0;
		byte[] local_c8 = new byte[8];
		float fStack_c0;
		float fStack_bc;
		ulong local_b8;
		ulong uStack_b0;
		byte[] local_a8 = new byte[8];
		float fStack_a0;
		float fStack_9c;
		float local_98;
		float fStack_94;
		float fStack_90;
		float fStack_8c;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_80;
		byte[] local_78 = new byte[16];
		RaycastHit local_68;

		pMVar23 = (MethodInfo)CONCAT71(in_register_00000031, multi);
		pMVar21 = (MethodInfo)CONCAT71(in_register_00000011, isUI);
		UVar39.z = position.z;
		fStack_a0 = in_XMM0_Dc;
		local_a8 = position._0_8_;
		fStack_9c = in_XMM0_Dd;
		fVar25 = position.x;
		fVar26 = position.y;
		if (Il2CppMethodInitialized_07545884 == false) {
			Il2CppMethodInitialized_07545884 = true;
			fVar25 = (float)local_a8._0_4_;
			fVar26 = (float)local_a8._4_4_;
			in_XMM0_Dc = fStack_a0;
			in_XMM0_Dd = fStack_9c;
		}
		auVar15 = _local_c8;
		local_68.m_UV.x = 0.0;
		local_68.m_UV.y = 0.0;
		local_68.m_Collider.m_Data = (EntityId)0x0;
		local_68.m_Normal.y = 0.0;
		local_68.m_Normal.z = 0.0;
		local_68.m_FaceID = 0;
		local_68.m_Distance = 0.0;
		local_68.m_Point.x = 0.0;
		local_68.m_Point.y = 0.0;
		local_68.m_Point.z = 0.0;
		local_68.m_Normal.x = 0.0;
		local_f8._dictionary = null;
		local_f8._index = 0;
		local_f8._version = 0;
		local_f8._currentKey = null;
		pMVar6 = this.Brush;
		if ((pMVar6 != null) && (pMVar6.Active != false)) {
			return;
		}
		pCVar7 = SceneLoader.CurrentCamera;
		fVar1 = this._dragStart.x;
		fVar3 = this._dragStart.y;
		local_c8._4_4_ = fVar3;
		local_c8._0_4_ = fVar1;
		fVar35 = this._dragStart.z;
		fVar28 = UVar39.z;
		fVar30 = fVar25;
		fVar32 = fVar26;
		fVar33 = 0.0;
		fVar34 = 0.0;
		fVar36 = fVar1;
		fVar37 = 0.0;
		fVar38 = fVar3;
		if (g_data_0753e729 == false) {
			local_b8 = (Dictionary<TKey, TValue>)CONCAT44(fVar25, UVar39.z);
			uStack_b0 = CONCAT44(fVar26, in_XMM1_Db);
			fStack_90 = 0.0;
			local_98 = fVar35;
			fStack_94 = fVar1;
			fStack_8c = fVar3;
			g_data_0753e729 = true;
			fVar25 = (float)local_a8._0_4_;
			fVar26 = (float)local_a8._4_4_;
			in_XMM0_Dc = fStack_a0;
			in_XMM0_Dd = fStack_9c;
			fVar28 = (float)local_b8;
			fVar30 = local_b8._4_4_;
			in_XMM1_Db = (float)uStack_b0;
			fVar32 = uStack_b0._4_4_;
			fVar1 = (float)local_c8._0_4_;
			fVar3 = (float)local_c8._4_4_;
			fVar33 = fStack_c0;
			fVar34 = fStack_bc;
			fVar35 = local_98;
			fVar36 = fStack_94;
			fVar37 = fStack_90;
			fVar38 = fStack_8c;
			auVar15 = _local_c8;
		}
		_local_c8 = auVar15;
		fVar27 = fVar26 - fVar3;
		fVar29 = fVar28 - fVar35;
		fVar31 = fVar30 - fVar36;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			local_b8 = (Dictionary<TKey, TValue>)CONCAT44(fVar30 - fVar36, fVar28 - fVar35);
			uStack_b0 = CONCAT44(fVar32 - fVar38, in_XMM1_Db - fVar37);
			local_c8._4_4_ = fVar26 - fVar3;
			local_c8._0_4_ = fVar25 - fVar1;
			fStack_c0 = in_XMM0_Dc - fVar33;
			fStack_bc = in_XMM0_Dd - fVar34;
			fVar27 = (float)local_c8._4_4_;
			fVar29 = (float)local_b8;
			fVar31 = local_b8._4_4_;
		}
		fVar25 = fVar27 * fVar27 + fVar31 * fVar31 + fVar29 * fVar29;
		if (fVar25 < 0.0) {
			fVar25 = sqrtf(fVar25);
		}
		else {
			fVar25 = SQRT(fVar25);
		}
		if (fVar25 < 1.0) {
			if (isUI) goto label_0594fc76;
			if ((pCVar7 == null) ||(pUVar10 = pCVar7.Camera, pUVar10 == null)) goto label_0594fd9c;
			UVar39.x = (float)local_a8._0_4_;
			UVar39.y = (float)local_a8._4_4_;
			local_e0 = pUVar10.ScreenPointToRay(UVar39);
			layers = (Int32[])new int[1];
			if (layers == null) goto label_0594fd9c;
			if ((int)layers.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			layers[0] = PhysicsLayer.MapEditorObject;
			mask = PhysicsLayer.GetMask(layers);
			uVar17 = ((LayerMask)mask);
			ray.m_Direction.x = (float)local_e0._version;
			ray.m_Origin.z = (float)local_e0._index;
			ray.m_Origin._0_8_ = local_e0._dictionary;
			ray.m_Direction._4_8_ = local_e0._currentKey;
			bVar16 = Physics.Raycast(ray, ref local_68, 100000.0, uVar17);
			if (bVar16) {
				collider = local_68.collider;
				obj = (MethodInfo)MapLoader.FindObjectFromCollider(collider);
				pSVar24 = (HashSet<object>)this.SelectedObjects;
				if (multi) {
					if (pSVar24 == null) goto label_0594fd9c;
					bVar16 = pSVar24.Contains((object)obj);
					if (bVar16) {
						this.DeselectObject((MapObject)obj);
						goto label_0594fc76;
					}
				}
				else {
					if (pSVar24 == null) goto label_0594fd9c;
					if (pSVar24._count == 1) {
						bVar16 = pSVar24.Contains((object)obj);
						if (bVar16) goto label_0594fc9c;
						pSVar24 = (HashSet<object>)this.SelectedObjects;
						if (pSVar24 == null) goto label_0594fd9c;
					}
					if (pSVar24._count < 1) {
						this.SelectObject((MapObject)obj);
						goto label_0594fc76;
					}
					this.DeselectAll();
				}
				if ((obj == null) || (obj.klass == null)) goto label_0594fc76;
				pSVar24 = (HashSet<object>)this.SelectedObjects;
				if (pSVar24 != null) {
					pSVar24.Add((object)obj);
					if (obj.klass != null) {
						this.LastSelectedObjectId = *(int)&(obj.klass._1).byval_arg.data;
						goto label_0594fc76;
					}
				}
				goto label_0594fd9c;
			}
			if (multi) goto label_0594fc76;
	label_0594fc9c: ;
			this.DeselectAll();
			goto label_0594fc76;
		}
		if (multi) {
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor != 0) goto label_0594f5a1;
	label_0594f759: ;
			pSVar8 = (Dictionary<object, object>)MapLoader.GoToMapObject;
		}
		else {
			this.DeselectAll();
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) goto label_0594f759;
	label_0594f5a1: ;
			pSVar8 = (Dictionary<object, object>)MapLoader.GoToMapObject;
		}
		if ((pSVar8 == null) ||(__this_01 = pSVar8.Keys, __this_01 == null)) {
	label_0594fd9c: ;
			throw new NullReferenceException();
		}
		local_e0 = __this_01.GetEnumerator();
		local_f8._currentKey = local_e0._currentKey;
		local_f8._version = local_e0._version;
		local_f8._index = local_e0._index;
		local_f8._dictionary = local_e0._dictionary;
		local_80 = &local_f8;
		if (pCVar7 == null) {
			while (true) {
				bVar16 = local_f8.MoveNext();
				pIVar13 = local_f8._currentKey;
				if (!(bVar16)) break;
				pSVar8 = (Dictionary<object, object>)MapLoader.GoToMapObject;
				if (pSVar8 == null) goto label_0594fd92;
				pSVar8.get_Item(pIVar13);
				if ((GameObject)pIVar13 == null) goto label_0594fd97;
				pSVar18 = pIVar13.GetComponentsInChildren<Renderer>();
				if (pSVar18 == null) goto label_0594fd8d;
				if (0 < (int)pSVar18.Length) {
					uVar19 = pSVar18.Length & 0xffffffff;
					uVar22 = 0;
					do {
						if (uVar19 <= uVar22) goto label_0594fd6a;
						pUVar9 = (Object)pSVar18[uVar22];
						bVar16 = (pUVar9 != null);
						if (bVar16) {
							if (pUVar9 == null) goto label_0594fd74;
							pUVar20 = pUVar9.gameObject;
							if (pUVar20 == null) goto label_0594fd6f;
							bVar16 = pUVar20.activeSelf;
							if (bVar16) {
								local_e0 = pUVar9.bounds ;
								throw new NullReferenceException();
							}
						}
						uVar22 = uVar22 + 1;
						uVar17 = (uint)pSVar18.Length;
						uVar19 = (ulong)uVar17;
					} while ((long)uVar22 < (long)(int)uVar17);
				}
			}
		}
		else {
	label_0594f7f0: ;
			bVar16 = local_f8.MoveNext();
			pIVar13 = local_f8._currentKey;
			if (bVar16) {
				pSVar8 = (Dictionary<object, object>)MapLoader.GoToMapObject;
				if (pSVar8 == null) {
	label_0594fd92: ;
					throw new NullReferenceException();
				}
				item = pSVar8.get_Item(pIVar13);
				if ((GameObject)pIVar13 == null) {
	label_0594fd97: ;
					throw new NullReferenceException();
				}
				pSVar18 = pIVar13.GetComponentsInChildren<Renderer>();
				if (pSVar18 == null) {
	label_0594fd8d: ;
					throw new NullReferenceException();
				}
				if (0 < (int)pSVar18.Length) {
					uVar19 = pSVar18.Length & 0xffffffff;
					uVar22 = 0;
					do {
						if (uVar19 <= uVar22) {
	label_0594fd6a: ;
							throw new IndexOutOfRangeException();
						}
						pUVar9 = (Object)pSVar18[uVar22];
						bVar16 = (pUVar9 != null);
						if (bVar16) {
							if (pUVar9 == null) {
	label_0594fd74: ;
								throw new NullReferenceException();
							}
							pUVar20 = pUVar9.gameObject;
							if (pUVar20 == null) {
	label_0594fd6f: ;
								throw new NullReferenceException();
							}
							bVar16 = pUVar20.activeSelf;
							if (bVar16) {
								local_e0 = pUVar9.bounds ;
								iVar14 = local_e0._index;
								pUVar10 = pCVar7.Camera;
								if (pUVar10 == null) {
									throw new NullReferenceException();
								}
								position_00.z = (float)local_e0._index;
								position_00._0_8_ = local_e0._dictionary;
								local_b8 = local_e0._dictionary;
								uStack_b0 = 0;
								UVar39 = pUVar10.WorldToScreenPoint(position_00);
								local_78._8_4_ = extraout_XMM0_Dc;
								local_78._0_8_ = UVar39._0_8_;
								local_78._12_4_ = extraout_XMM0_Dd;
								pUVar11 = pCVar7.Cache;
								if (pUVar11 == null) {
									throw new NullReferenceException();
								}
								__this_00 = pUVar11.Transform;
								if (__this_00 == null) {
									throw new NullReferenceException();
								}
								UVar39 = __this_00.position;
								local_98 = UVar39.z;
								fStack_c0 = (float)extraout_XMM0_Dc_00;
								local_c8 = (byte[])UVar39._0_8_;
								fStack_bc = (float)extraout_XMM0_Dd_00;
								if (Il2CppMethodInitialized_0753e7b7 == false) {
									Il2CppMethodInitialized_0753e7b7 = true;
									uVar5 = (typeof(Math)._2).cctor_finished_or_no_cctor;
								}
								else {
									uVar5 = (typeof(Math)._2).cctor_finished_or_no_cctor;
								}
								if (uVar5 == 0) {
								}
								fVar25 = ((float)iVar14 - local_98) * ((float)iVar14 - local_98) +(local_b8._4_4_ - (float)local_c8._4_4_) * (local_b8._4_4_ - (float)local_c8._4_4_) +((float)local_b8 - (float)local_c8._0_4_) * ((float)local_b8 - (float)local_c8._0_4_);
								if (fVar25 < 0.0) {
									fVar25 = sqrtf(fVar25);
								}
								else {
									fVar25 = SQRT(fVar25);
								}
								pUVar10 = pCVar7.Camera;
								if (pUVar10 == null) {
									throw new NullReferenceException();
								}
								fVar26 = pUVar10.farClipPlane;
								if (fVar25 < fVar26) {
									uVar2 = this._dragStart.x;
									uVar4 = this._dragStart.y;
									start.y = (float)uVar4;
									start.x = (float)uVar2;
									v.z = 0.0;
									v.x = (float)local_78._0_4_;
									v.y = (float)local_78._4_4_;
									start.z = 0.0;
									end.z = 0.0;
									end.x = (float)local_a8._0_4_;
									end.y = (float)local_a8._4_4_;
									bVar16 = Util.IsVectorBetween(v, start, end);
									if ((bVar16) &&(bVar16 = pUVar9.isVisible)) {
										pSVar24 = (HashSet<object>)this.SelectedObjects;
										if (pSVar24 == null) {
											throw new NullReferenceException();
										}
										bVar16 = pSVar24.Contains((object)item);
										if (bVar16) break;
										if ((item == null) ||(item.ScriptObject == null)) break;
										pSVar24 = (HashSet<object>)this.SelectedObjects;
										if (pSVar24 != null) {
											pSVar24.Add((object)item);
											pMVar12 = item.ScriptObject;
											if (pMVar12 != null) {
												this.LastSelectedObjectId = pMVar12.Id;
												break;
											}
										}
										throw new NullReferenceException();
									}
								}
							}
						}
						uVar22 = uVar22 + 1;
						uVar17 = (uint)pSVar18.Length;
						uVar19 = (ulong)uVar17;
					} while ((long)uVar22 < (long)(int)uVar17);
				}
				goto label_0594f7f0;
			}
		}
		local_f8.Dispose();
	label_0594fc76: ;
		this.OnSelectionChange(true);
		return;
	}

	[Token(Token = "0x60016F8")]
	[Address(RVA = "0x584C7B0", Offset = "0x584B7B0", VA = "0x584C7B0")]
	public void DeselectAll()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$DeselectAll): 2 lines keep C-only constructs
		HashSet<MapObject> collection;
		bool bVar1;
		List<MapObject> __this_00;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_28;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		collection = this.SelectedObjects;
		__this_00 = new List<MapObject>((IEnumerable<T>)collection);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_48 = __this_00.GetEnumerator();
		local_28 = (byte)&local_48;
		while(true) {
			bVar1 = local_48.MoveNext();
			if (!bVar1) break;
			this.DeselectObject((MapObject)local_48._current);
		}
		local_48.Dispose();
		this.LastSelectedObjectId = -1;
		return;
	}

	[Token(Token = "0x60016F9")]
	[Address(RVA = "0x584FE70", Offset = "0x584EE70", VA = "0x584FE70")]
	public void DeselectObject(MapObject obj)
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$DeselectObject): 1 lines keep C-only constructs
		HashSet<object> __this_00;
		MapScriptBaseObject pMVar1;
		HashSet<MapObject> source;
		int iVar2;
		MapObject pMVar3;

		__this_00 = (HashSet<object>)this.SelectedObjects;
		if (__this_00 == null) {
	label_0594ff22: ;
			throw new NullReferenceException();
		}
		__this_00.Remove((object)obj);
		if (((obj != null) &&(pMVar1 = obj.ScriptObject, pMVar1 != null)) &&(this.LastSelectedObjectId == pMVar1.Id)) {
			source = this.SelectedObjects;
			if (source == null) goto label_0594ff22;
			if (source._count < 1) {
				iVar2 = -1;
			}
			else {
				pMVar3 = Enumerable.Last<MapObject>((System_Collections_Generic_IEnumerable_TSource__o)source);
				if ((pMVar3 == null) ||(pMVar1 = pMVar3.ScriptObject, pMVar1 == null)) goto label_0594ff22;
				iVar2 = pMVar1.Id;
			}
			this.LastSelectedObjectId = iVar2;
		}
		return;
	}

	[Token(Token = "0x60016FA")]
	[Address(RVA = "0x584C940", Offset = "0x584B940", VA = "0x584C940")]
	public void SelectObject(MapObject obj)
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$SelectObject): clean
		HashSet<object> __this_00;
		MapScriptBaseObject pMVar1;

		if ((obj == null) || (obj.ScriptObject == null)) {
			return;
		}
		__this_00 = (HashSet<object>)this.SelectedObjects;
		if (__this_00 != null) {
			__this_00.Add((object)obj);
			pMVar1 = obj.ScriptObject;
			if (pMVar1 != null) {
				this.LastSelectedObjectId = pMVar1.Id;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60016FB")]
	[Address(RVA = "0x584FF30", Offset = "0x584EF30", VA = "0x584FF30")]
	public void SetHierarchyTreeView(bool enabled)
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$SetHierarchyTreeView): clean
		this.HierarchyTreeViewEnabled = enabled;
		return;
	}

	[Token(Token = "0x60016FC")]
	[Address(RVA = "0x584FF40", Offset = "0x584EF40", VA = "0x584FF40")]
	public List<MapObject> GetSelectedObjectsForTransformCommand()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$GetSelectedObjectsForTransformCommand): 15 lines keep C-only constructs
		int id;
		HashSet<MapObject> collection;
		object pIVar1;
		HashSet<@object> __this_00;
		Dictionary<int, MapObject> @object;
		bool bVar2;
		Func<MapObject, int> __this_01;
		System_Collections_Generic_IEnumerable_TResult__o pSVar3;
		HashSet<int> __this_02;
		Func<int, bool> __this_03;
		System_Collections_Generic_IEnumerable_TSource__o source;
		GameManagers_MapEditorGameManager___c_StaticFields pGVar4;
		Func<int, MapObject> __this_04;
		List<MapObject> pSVar5;
		byte[] local_60 = new byte[16];
		object local_50;
		byte[] local_48 = new byte[16];
		object local_38;

		collection = this.SelectedObjects;
		if (this.HierarchyTreeViewEnabled == false) {
			pSVar5 = new List<MapObject>((IEnumerable<T>)collection);
			return pSVar5;
		}
		if ((typeof(MapEditorGameManager.c)._2).cctor_finished_or_no_cctor == 0) {
			pGVar4 = typeof(MapEditorGameManager.c).static_fields;
			__this_01 = pGVar4.__9__46_0;
		}
		else {
			pGVar4 = typeof(MapEditorGameManager.c).static_fields;
			__this_01 = pGVar4.__9__46_0;
		}
		if (__this_01 == null) {
			if (((typeof(MapEditorGameManager.c))._2).cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(MapEditorGameManager.c).static_fields;
			}
			pIVar1 = (object)pGVar4.__9;
			__this_01 = new Func<MapObject, int>(pIVar1, (intptr_t) MethodInfo_GameManagers_MapEditorGameManager_c_GetSelectedObjectsForTransformCommand_b__46_0);
			pGVar4 = typeof(MapEditorGameManager.c).static_fields;
			pGVar4.__9__46_0 = __this_01;
		}
		pSVar3 = Enumerable.Select<MapObject, int>((System_Collections_Generic_IEnumerable_TSource__o)collection, (System_Func_TSource__TResult__o)__this_01);
		__this_02 = new HashSet<int>((IEnumerable<T>)pSVar3);
		__this_00 = (HashSet<@object>)this.SelectedObjects;
		if (__this_00 != null) {
			local_60.GetEnumerator(__this_00);
			local_38 = local_50;
			local_48._0_8_ = local_60._0_8_;
			local_48._8_8_ = local_60._8_8_;
			local_60._0_8_ = null;
			local_60._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_48;
			while (bVar2 = local_48.MoveNext()) {
				if (local_38 == null) {
					throw new NullReferenceException();
				}
				if (local_38[2].klass == null) {
					throw new NullReferenceException();
				}
				id = *(int)&((local_38[2].klass)._1).byval_arg.data;
				if (0 < id) {
					this.AddDescendants(id, __this_02);
				}
			}
			local_48.Dispose();
			@object = MapLoader.IdToMapObject;
			if (@object != null) {
				__this_03 = new Func<int, bool>((object)@object, (intptr_t)((Il2CppClass)@object.klass).vtable[0x24].method);
				source = Enumerable.Where<int>((System_Collections_Generic_IEnumerable_TSource__o)__this_02, (System_Func_TSource__bool__o)__this_03);
				if ((typeof(MapEditorGameManager.c)._2).cctor_finished_or_no_cctor == 0) {
					pGVar4 = typeof(MapEditorGameManager.c).static_fields;
					__this_04 = pGVar4.__9__46_1;
				}
				else {
					pGVar4 = typeof(MapEditorGameManager.c).static_fields;
					__this_04 = pGVar4.__9__46_1;
				}
				if (__this_04 == null) {
					if (((typeof(MapEditorGameManager.c))._2).cctor_finished_or_no_cctor == 0) {
						pGVar4 = typeof(MapEditorGameManager.c).static_fields;
					}
					pIVar1 = (object)pGVar4.__9;
					__this_04 = new Func<int, MapObject>(pIVar1, (intptr_t) MethodInfo_GameManagers_MapEditorGameManager_c_GetSelectedObjectsForTransformCommand_b__46_1);
					pGVar4 = typeof(MapEditorGameManager.c).static_fields;
					pGVar4.__9__46_1 = __this_04;
				}
				pSVar3 = Enumerable.Select<int, MapObject>(source, (System_Func_TSource__TResult__o)__this_04);
				pSVar5 = (List<MapObject>)Enumerable.ToList<MapObject>((System_Collections_Generic_IEnumerable_TSource__o)pSVar3);
				return pSVar5;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60016FD")]
	[Address(RVA = "0x5850610", Offset = "0x584F610", VA = "0x5850610")]
	public void ReparentObjects(List<int> ids, int newParentId)
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$ReparentObjects): 17 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		object pIVar3;
		Int32[] pSVar4;
		Dictionary<int, object> pSVar5;
		MapEditorMenu __this_00;
		int iVar6;
		bool bVar7;
		int iVar8;
		Func<int, bool> __this_01;
		System_Collections_Generic_IEnumerable_TSource__o collection;
		HashSet<int> __this_02;
		List<int> __this_03;
		List<int> __this_04;
		MapObject pMVar9;
		GameManagers_MapEditorGameManager___c_StaticFields pGVar10;
		Func<int, MapObject> __this_05;
		System_Collections_Generic_IEnumerable_TResult__o source;
		List<MapObject> mapObjects;
		ReparentObjectsCommand __this_06;
		MapEditorGameManager pGVar12;
		byte[] local_90 = new byte[16];
		CustomLogicEvaluator local_80;
		byte[] local_78 = new byte[8];
		CustomLogicEvaluator local_68;
		byte[] local_58 = new byte[8];
		CustomLogicEvaluator local_48;
		MapEditorGameManager local_38;

		local_58 = (byte[])0x0;
		local_48 = null;
		local_78 = (byte[])0x0;
		local_68 = null;
		if (ids == null) {
			return;
		}
		if (ids._size == 0) {
			return;
		}
		if ((typeof(MapEditorGameManager.c)._2).cctor_finished_or_no_cctor == 0) {
			pGVar10 = typeof(MapEditorGameManager.c).static_fields;
			__this_01 = pGVar10.__9__47_0;
		}
		else {
			pGVar10 = typeof(MapEditorGameManager.c).static_fields;
			__this_01 = pGVar10.__9__47_0;
		}
		if (__this_01 == null) {
			if (((typeof(MapEditorGameManager.c))._2).cctor_finished_or_no_cctor == 0) {
				pGVar10 = typeof(MapEditorGameManager.c).static_fields;
			}
			pIVar3 = (object)pGVar10.__9;
			__this_01 = new Func<int, bool>(pIVar3, (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_ReparentObjects_b__47_0);
			pGVar10 = typeof(MapEditorGameManager.c).static_fields;
			pGVar10.__9__47_0 = __this_01;
		}
		collection = Enumerable.Where<int>((System_Collections_Generic_IEnumerable_TSource__o)ids, (System_Func_TSource__bool__o)__this_01);
		__this_02 = new HashSet<int>((IEnumerable<T>)collection);
		__this_03 = new List<int>();
		if (__this_02 != null) {
			local_38 = this;
			local_90.GetEnumerator(__this_02);
			local_48 = local_80;
			local_58 = (byte[])local_90._0_8_;
			local_90._0_8_ = null;
			local_90._8_8_ = local_58;
			if (__this_03 == null) {
				do {
					pGVar12 = (MapEditorGameManager)local_58;
					bVar7 = local_58.MoveNext();
					if (!bVar7) goto label_05950994;
					bVar7 = pGVar12.HasAncestorInSet((int32_t)local_48, __this_02);
				} while (bVar7);
	label_0595098f: ;
				throw new NullReferenceException();
			}
			while (true) {
				pGVar12 = (MapEditorGameManager)local_58;
				bVar7 = local_58.MoveNext();
				if (!(bVar7)) break;
				iVar8 = (int32_t)local_48;
				bVar7 = pGVar12.HasAncestorInSet((int32_t)local_48, __this_02);
				if (!bVar7) {
					piVar1 = &__this_03._version;
					*piVar1 = *piVar1 + 1;
					pSVar4 = __this_03._items;
					if (pSVar4 == null) goto label_0595098f;
					uVar2 = __this_03._size;
					if (uVar2 < (uint)pSVar4.Length) {
						method = (MethodInfo)(ulong)(uVar2 + 1);
						__this_03._size = uVar2 + 1;
						pSVar4[(int)uVar2] = iVar8;
					}
					else {
						__this_03.AddWithResize(iVar8);
					}
				}
			}
	label_05950994: ;
			local_58.Dispose();
			__this_04 = new List<int>();
			if (__this_03 != null) {
				local_90.GetEnumerator(__this_03);
				local_68 = local_80;
				local_78 = (byte[])local_90._0_8_;
				local_90._0_8_ = null;
				local_90._8_8_ = local_78;
				if (__this_04 == null) {
					while (true) {
						pGVar12 = (MapEditorGameManager)local_78;
						bVar7 = local_78.MoveNext();
						if (!(bVar7)) break;
						iVar6 = (int)local_68;
						if (((int)local_68 != newParentId) &&((newParentId < 0 ||(bVar7 = pGVar12.IsDescendant(newParentId, (int)local_68), !bVar7)))) {
							pSVar5 = (Dictionary<int, object>)MapLoader.IdToMapObject;
							if (pSVar5 == null) {
	label_05950cef: ;
								throw new NullReferenceException();
							}
							pMVar9 = pSVar5.get_Item(iVar6);
							iVar8 = MapLoader.GetLogicalParentId(pMVar9);
							if (iVar8 != newParentId) {
	label_05950cf4: ;
								throw new NullReferenceException();
							}
						}
					}
				}
				else {
					while (true) {
						pGVar12 = (MapEditorGameManager)local_78;
						bVar7 = local_78.MoveNext();
						if (!(bVar7)) break;
						iVar6 = (int)local_68;
						if (((int)local_68 != newParentId) &&((newParentId < 0 ||(bVar7 = pGVar12.IsDescendant(newParentId, (int)local_68), !bVar7)))) {
							pSVar5 = (Dictionary<int, object>)MapLoader.IdToMapObject;
							if (pSVar5 == null) goto label_05950cef;
							pMVar9 = pSVar5.get_Item(iVar6);
							iVar8 = MapLoader.GetLogicalParentId(pMVar9);
							if (iVar8 != newParentId) {
								piVar1 = &__this_04._version;
								*piVar1 = *piVar1 + 1;
								pSVar4 = __this_04._items;
								if (pSVar4 == null) goto label_05950cf4;
								uVar2 = __this_04._size;
								if (uVar2 < (uint)pSVar4.Length) {
									method = (MethodInfo)(ulong)(uVar2 + 1);
									__this_04._size = uVar2 + 1;
									pSVar4[(int)uVar2] = iVar6;
								}
								else {
									__this_04.AddWithResize(iVar6);
								}
							}
						}
					}
				}
				local_78.Dispose();
				pGVar12 = local_38;
				if (__this_04 != null) {
					if (__this_04._size != 0) {
						if ((typeof(MapEditorGameManager.c)._2).cctor_finished_or_no_cctor == 0) {
							pGVar10 = typeof(MapEditorGameManager.c).static_fields;
							__this_05 = pGVar10.__9__47_1;
						}
						else {
							pGVar10 = typeof(MapEditorGameManager.c).static_fields;
							__this_05 = pGVar10.__9__47_1;
						}
						if (__this_05 == null) {
							if (((typeof(MapEditorGameManager.c))._2).cctor_finished_or_no_cctor == 0) {
								pGVar10 = typeof(MapEditorGameManager.c).static_fields;
							}
							pIVar3 = (object)pGVar10.__9;
							__this_05 = new Func<int, MapObject>(pIVar3, (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_c_ReparentObjects_b__47_1);
							pGVar10 = typeof(MapEditorGameManager.c).static_fields;
							pGVar10.__9__47_1 = __this_05;
						}
						source = Enumerable.Select<int, MapObject>((System_Collections_Generic_IEnumerable_TSource__o)__this_04, (System_Func_TSource__TResult__o)__this_05);
						mapObjects = (List<MapObject>)Enumerable.ToList<MapObject>((System_Collections_Generic_IEnumerable_TSource__o)source);
						__this_06 = new ReparentObjectsCommand(mapObjects, newParentId);
						pGVar12.NewCommand((BaseCommand)__this_06, true);
						__this_00 = pGVar12._menu;
						if (__this_00 == null) goto label_05950cf9;
						__this_00.SyncHierarchyPanel();
						pGVar12.OnSelectionChange(true);
					}
					return;
				}
			}
		}
	label_05950cf9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60016FE")]
	[Address(RVA = "0x5851180", Offset = "0x5850180", VA = "0x5851180")]
	public void ReorderObjects(List<int> ids, int anchorId, bool insertAfter, bool inTreeView)
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$ReorderObjects): 8 lines keep C-only constructs
		Dictionary<int, object> pSVar1;
		MapEditorMenu __this_00;
		bool bVar2;
		int iVar3;
		Nullable<int> in_RAX;
		MapEditorGameManager.c__DisplayClass48_0 __this_01;
		Func<int, bool> __this_02;
		System_Collections_Generic_IEnumerable_TSource__o source;
		System_Collections_Generic_List_TSource__o objectIds;
		MapObject obj;
		ReorderObjectsCommand __this_03;
		Nullable<int> newParentId;
		Nullable<int> local_38;

		local_38 = in_RAX;
		__this_01 = new MapEditorGameManager.c__DisplayClass48_0();
		if (__this_01 == null) {
	label_05951405: ;
			throw new NullReferenceException();
		}
		__this_01.anchorId = anchorId;
		if (((ids != null) && (-1 < anchorId)) &&(ids._size != 0)) {
			pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			if (pSVar1 == null) goto label_05951405;
			bVar2 = pSVar1.ContainsKey(__this_01.anchorId);
			if (bVar2) {
				__this_02 = new Func<int, bool>((object)__this_01, (intptr_t) MethodInfo_GameManagers_MapEditorGameManager_c__DisplayClass48_0_ReorderObjects_b__0);
				source = Enumerable.Where<int>((System_Collections_Generic_IEnumerable_TSource__o)ids, (System_Func_TSource__bool__o)__this_02);
				objectIds = Enumerable.ToList<int>(source);
				if (objectIds == null) goto label_05951405;
				if (objectIds._size != 0) {
					if (inTreeView) {
						pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
						if (pSVar1 == null) goto label_05951405;
						obj = pSVar1.get_Item(__this_01.anchorId);
						iVar3 = MapLoader.GetLogicalParentId(obj);
						local_38.hasValue = false;
						local_38._1_3_ = 0;
						local_38.value = 0;
						local_38 = new Nullable<int>(iVar3);
						newParentId = local_38;
					}
					else {
						newParentId.hasValue = false;
						newParentId._1_3_ = 0;
						newParentId.value = 0;
					}
					iVar3 = __this_01.anchorId;
					__this_03 = new ReorderObjectsCommand((List<int>)objectIds, iVar3, insertAfter, (Nullable<int>)newParentId);
					this.NewCommand((BaseCommand)__this_03, true);
					__this_00 = this._menu;
					if (__this_00 == null) goto label_05951405;
					__this_00.SyncHierarchyPanel();
					this.OnSelectionChange(true);
				}
			}
		}
		return;
	}

	[Token(Token = "0x60016FF")]
	[Address(RVA = "0x58503C0", Offset = "0x584F3C0", VA = "0x58503C0")]
	private void AddDescendants(int id, HashSet<int> ids)
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$AddDescendants): 8 lines keep C-only constructs
		Dictionary<int, object> pSVar1;
		int id_00;
		System_Collections_Generic_HashSet_Enumerator_T__o pSVar2;
		bool bVar3;
		HashSet<int> __this_00;
		MethodInfo* method_00;
		System_Collections_Generic_HashSet_Enumerator_T__o local_58;
		byte local_38;

		local_58._set = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		pSVar1 = (Dictionary<int, object>)MapLoader.IdToChildren;
		if (pSVar1 != null) {
			bVar3 = pSVar1.ContainsKey(id);
			if (!bVar3) {
				return;
			}
			pSVar1 = (Dictionary<int, object>)MapLoader.IdToChildren;
			if (pSVar1 != null) {
				__this_00 = (HashSet<int>)pSVar1.get_Item(id);
				local_38 = (byte)&local_58;
				if (__this_00 != null) {
					method_00 = &MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator;
					local_58 = __this_00.GetEnumerator();
					pSVar2 = &local_58;
					if (ids == null) {
						bVar3 = local_58.MoveNext();
						if (bVar3) {
							throw new NullReferenceException();
						}
					}
					else {
						while (true) {
							local_38 = (byte)pSVar2;
							bVar3 = local_58.MoveNext();
							if (!(bVar3)) break;
							id_00 = (int32_t)local_58._current;
							bVar3 = ids.Add((int32_t)local_58._current);
							pSVar2 = (System_Collections_Generic_HashSet_Enumerator_T__o)local_38;
							if (bVar3) {
								this.AddDescendants(id_00, ids);
								pSVar2 = (System_Collections_Generic_HashSet_Enumerator_T__o)local_38;
							}
						}
					}
					local_58.Dispose() ;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001700")]
	[Address(RVA = "0x5851010", Offset = "0x5850010", VA = "0x5851010")]
	private bool IsDescendant(int id, int ancestorId)
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$IsDescendant): clean
		Dictionary<int, object> pSVar1;
		bool bVar2;
		HashSet<int> __this_00;
		MapObject obj;

		__this_00 = new HashSet<int>();
		if (__this_00 == null) {
			if (-1 < id) {
	label_05951175: ;
				throw new NullReferenceException();
			}
	label_05951164: ;
			bVar2 = false;
		}
		else {
			do {
				if ((id < 0) ||(bVar2 = __this_00.Add(id), !bVar2)) goto label_05951164;
				pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (pSVar1 == null) goto label_05951175;
				bVar2 = pSVar1.ContainsKey(id);
				if (!bVar2) goto label_05951164;
				pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (pSVar1 == null) goto label_05951175;
				obj = pSVar1.get_Item(id);
				id = MapLoader.GetLogicalParentId(obj);
			} while (id != ancestorId);
			bVar2 = true;
		}
		return bVar2;
	}

	[Token(Token = "0x6001701")]
	[Address(RVA = "0x5850DD0", Offset = "0x584FDD0", VA = "0x5850DD0")]
	private bool HasAncestorInSet(int id, HashSet<int> ids)
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$HasAncestorInSet): clean
		Dictionary<int, object> pSVar1;
		bool bVar2;
		HashSet<int> __this_00;
		MapObject pMVar3;

		__this_00 = new HashSet<int>();
		if (__this_00 == null) {
			if (-1 < id) {
	label_05950fe7: ;
				throw new NullReferenceException();
			}
		}
		else if (ids == null) {
			if ((-1 < id) &&(bVar2 = __this_00.Add(id))) {
				pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (pSVar1 != null) {
					bVar2 = pSVar1.ContainsKey(id);
					if (!bVar2) {
						return false;
					}
					pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
					if (pSVar1 != null) {
						pMVar3 = pSVar1.get_Item(id);
						MapLoader.GetLogicalParentId(pMVar3);
						throw new NullReferenceException();
					}
				}
				goto label_05950fe7;
			}
		}
		else {
			while ((-1 < id &&(bVar2 = __this_00.Add(id)))) {
				pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (pSVar1 == null) goto label_05950fe7;
				bVar2 = pSVar1.ContainsKey(id);
				if (!bVar2) {
					return false;
				}
				pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (pSVar1 == null) goto label_05950fe7;
				pMVar3 = pSVar1.get_Item(id);
				id = MapLoader.GetLogicalParentId(pMVar3);
				bVar2 = ids.Contains(id);
				if (bVar2) {
					return true;
				}
			}
		}
		return false;
	}

	[Token(Token = "0x6001702")]
	[Address(RVA = "0x5851420", Offset = "0x5850420", VA = "0x5851420")]
	public void SetupTemporaryPhysicalParenting()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$SetupTemporaryPhysicalParenting): 9 lines keep C-only constructs
		List<int> __this_00;
		Dictionary<int, object> pSVar1;
		GameObject pUVar2;
		bool bVar3;
		int iVar4;
		MapObject pMVar5;
		Transform __this_01;
		Transform parent;
		byte[] local_68 = new byte[16];
		ulong local_58;
		byte[] local_48 = new byte[16];
		object local_38;

		local_68._0_8_ = null;
		local_68._8_4_ = 0;
		local_68._12_4_ = 0;
		local_58._0_4_ = 0;
		local_58._4_4_ = 0;
		if (this.HierarchyTreeViewEnabled != false) {
			__this_00 = MapLoader.ObjectOrder;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			local_48.GetEnumerator(__this_00);
			local_58 = local_38;
			local_68._0_8_ = local_48._0_8_;
			local_68._8_8_ = local_48._8_8_;
			local_48._0_8_ = null;
			local_48._8_8_ = local_68;
			while(true) {
				bVar3 = local_68.MoveNext();
				if (!bVar3) break;
				iVar4 = (int32_t)local_58;
				pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (pSVar1 == null) {
					throw new NullReferenceException();
				}
				bVar3 = pSVar1.ContainsKey(iVar4);
				if (bVar3) {
					pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
					if (pSVar1 == null) {
						throw new NullReferenceException();
					}
					pMVar5 = pSVar1.get_Item(iVar4);
					iVar4 = MapLoader.GetLogicalParentId(pMVar5);
					if (-1 < iVar4) {
						pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
						if (pSVar1 == null) {
							throw new NullReferenceException();
						}
						bVar3 = pSVar1.ContainsKey(iVar4);
						if (bVar3) {
							if (pMVar5 == null) {
								throw new NullReferenceException();
							}
							pUVar2 = pMVar5.GameObject;
							if (pUVar2 == null) {
								throw new NullReferenceException();
							}
							__this_01 = pUVar2.transform;
							pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
							if (pSVar1 == null) {
								throw new NullReferenceException();
							}
							pMVar5 = pSVar1.get_Item(iVar4);
							if (pMVar5 == null) {
								throw new NullReferenceException();
							}
							pUVar2 = pMVar5.GameObject;
							if (pUVar2 == null) {
								throw new NullReferenceException();
							}
							parent = pUVar2.transform;
							if (__this_01 == null) {
								throw new NullReferenceException();
							}
							__this_01.SetParent(parent, true);
						}
					}
				}
			}
			local_68.Dispose();
		}
		return;
	}

	[Token(Token = "0x6001703")]
	[Address(RVA = "0x5851760", Offset = "0x5850760", VA = "0x5851760")]
	public void TeardownTemporaryPhysicalParenting()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$TeardownTemporaryPhysicalParenting): 12 lines keep C-only constructs
		Dictionary<int, object> pSVar1;
		GameObject __this_00;
		bool bVar2;
		int iVar3;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o source;
		System_Collections_Generic_List_TSource__o __this_01;
		MapObject obj;
		Transform __this_02;
		byte[] local_68 = new byte[16];
		ulong local_58;
		byte[] local_48 = new byte[16];
		object local_38;

		local_68._0_8_ = null;
		local_68._8_4_ = 0;
		local_68._12_4_ = 0;
		local_58._0_4_ = 0;
		local_58._4_4_ = 0;
		if (this.HierarchyTreeViewEnabled == false) {
			return;
		}
		pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
		if (pSVar1 != null) {
			source = pSVar1.Keys;
			__this_01 = Enumerable.ToList<int>((System_Collections_Generic_IEnumerable_TSource__o)source);
			if (__this_01 != null) {
				local_48.GetEnumerator((List<int>)__this_01);
				local_58 = local_38;
				local_68._0_8_ = local_48._0_8_;
				local_68._8_8_ = local_48._8_8_;
				local_48._0_8_ = null;
				local_48._8_8_ = local_68;
				while(true) {
					do {
						do {
							bVar2 = local_68.MoveNext();
							if (!bVar2) {
								local_68.Dispose();
								return;
							}
							iVar3 = (int32_t)local_58;
							pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
							if (pSVar1 == null) {
								throw new NullReferenceException();
							}
							obj = pSVar1.get_Item(iVar3);
							iVar3 = MapLoader.GetLogicalParentId(obj);
						} while (iVar3 < 0);
						pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
						if (pSVar1 == null) {
							throw new NullReferenceException();
						}
						bVar2 = pSVar1.ContainsKey(iVar3);
					} while (!bVar2);
					if (obj == null) {
						throw new NullReferenceException();
					}
					__this_00 = obj.GameObject;
					if (__this_00 == null) break;
					__this_02 = __this_00.transform;
					if (__this_02 == null) {
						throw new NullReferenceException();
					}
					__this_02.SetParent(null, true);
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001704")]
	[Address(RVA = "0x584C610", Offset = "0x584B610", VA = "0x584C610")]
	public void NewCommand(BaseCommand command, bool syncInspector = true)
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$NewCommand): 5 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		byte bVar3;
		uint uVar4;
		int length;
		List<object> __this_00;
		Object[] pSVar5;
		List<BaseCommand> pSVar6;
		BaseCommand pMVar7;
		MapEditorMenu __this_01;

		if (command != null) {
			command.Execute();
			__this_00 = (List<object>)this._undoCommands;
			if (__this_00 != null) {
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pSVar5 = __this_00._items;
				if (pSVar5 != null) {
					uVar4 = __this_00._size;
					if (uVar4 < (uint)pSVar5.Length) {
						__this_00._size = uVar4 + 1;
						pSVar5[(int)uVar4] = (object)command;
					}
					else {
						__this_00.AddWithResize((object)command);
					}
					pSVar6 = this._redoCommands;
					if (pSVar6 != null) {
						piVar1 = &pSVar6._version;
						*piVar1 = *piVar1 + 1;
						length = pSVar6._size;
						pSVar6._size = 0;
						if (0 < length) {
							Array.Clear((Array)pSVar6._items, 0, length);
						}
						pMVar7 = command.klass;
						bVar2 = (pMVar7._2).typeHierarchyDepth;
						bVar3 = (typeof(TransformPositionCommand)._2).typeHierarchyDepth;
						if (((bVar2 < bVar3) ||((pMVar7._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(TransformPositionCommand))) &&((bVar3 = (typeof(TransformPositionRotationCommand)._2).typeHierarchyDepth, bVar2 < bVar3 ||((pMVar7._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(TransformPositionRotationCommand))))) {
							bVar3 = (typeof(TransformScaleCommand)._2).typeHierarchyDepth;
							if (bVar2 < bVar3) {
								return;
							}
							if ((pMVar7._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(TransformScaleCommand)) {
								return;
							}
						}
						if (!syncInspector) {
							return;
						}
						__this_01 = this._menu;
						if (__this_01 != null) {
							__this_01.SyncInspector();
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001705")]
	[Address(RVA = "0x5851A30", Offset = "0x5850A30", VA = "0x5851A30", Slot = "57")]
	protected override void OnFinishLoading()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$OnFinishLoading): 18 lines keep C-only constructs
		MapScript* targetAddress;
		byte bVar1;
		MapEditorTopPanel __this_00;
		ExportPopup __this_01;
		MapVersionConversionResult pMVar2;
		MapEditorVersionConversionPopup __this_02;
		MapEditorMenu pUVar3;
		int iVar4;
		PositionGizmo pMVar5;
		OutlineGizmo pMVar6;
		RotationGizmo pMVar7;
		ScaleGizmo method_00;
		CustomLogicEvaluator pCVar8;
		String pSVar9;
		UnityAction __this_03;
		MapEditorGameManager.d__57<WaitAndAutosave> __this_04;
		MapEditorMenu pUVar10;
		List<string> values;
		MapEditorGameManager __this_05;
		MapEditorMenu* targetAddress_00;

		targetAddress = &this.MapScript;
		this.MapScript = MapManager.MapScript;
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			pUVar10 = (MapEditorMenu)UIManager.CurrentMenu;
			if (pUVar10 != null) goto label_05951b11;
	label_05951b86: ;
			this._menu = null;
		}
		else {
			pUVar10 = (MapEditorMenu)UIManager.CurrentMenu;
			if (pUVar10 == null) goto label_05951b86;
	label_05951b11: ;
			pUVar3 = typeof(MapEditorMenu);
			bVar1 = (typeof(MapEditorMenu)._2).typeHierarchyDepth;
			if (((((BaseMenu)pUVar10.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseMenu)pUVar10.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapEditorMenu))) {
	label_05951e29: ;
				throw new InvalidCastException();
			}
			this._menu = pUVar10;
			if (((((BaseMenu)pUVar10.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseMenu)pUVar10.klass)._2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass)pUVar3)) goto label_05951e29;
		}
		targetAddress_00 = &this._menu;
		pMVar5 = PositionGizmo.Create();
		this._positionGizmo = pMVar5;
		pMVar6 = OutlineGizmo.Create();
		this._outlineGizmo = pMVar6;
		pMVar7 = RotationGizmo.Create();
		this._rotationGizmo = pMVar7;
		method_00 = ScaleGizmo.Create();
		__this_05 = (MapEditorGameManager)&this._scaleGizmo;
		this._scaleGizmo = method_00;
		iVar4 = __this_05.GetHighestObjectId();
		this._currentObjectId = iVar4;
		pUVar10 = this._menu;
		if (pUVar10 != null) {
			pUVar10.ShowHierarchyPanel();
			if (*targetAddress != null) {
				pSVar9 = ((*targetAddress).fields).Logic;
				pCVar8 = CustomLogicManager.GetEditorEvaluator(pSVar9, true);
				this.LogicEvaluator = pCVar8;
				this.CurrentGizmo = (BaseGizmo)this._positionGizmo;
				pUVar10 = this._menu;
				if ((pUVar10 != null) &&(__this_00 = pUVar10._topPanel, __this_00 != null)) {
					__this_00.ApplyViewSettings();
					values = MapLoader.Errors;
					if (values != null) {
						if (0 < values._size) {
							if (*targetAddress_00 == null) goto label_05951e24;
							__this_01 = (ExportPopup)((*targetAddress_00).fields).ErrorPopup;
							if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
								values = MapLoader.Errors;
							}
							pSVar9 = String.Join("\n", (IEnumerable<string>)values);
							if (__this_01 == null) goto label_05951e24;
							__this_01.Show(pSVar9);
						}
						if (*targetAddress != null) {
							pMVar2 = ((*targetAddress).fields)._LastUpgradeResult_k__BackingField;
							if ((pMVar2 == null) ||(iVar4 = pMVar2.VersionCount, iVar4 < 1) ) {
	label_05951dbf: ;
								__this_04 = il2cpp_codegen_object_new((Il2CppClass)typeof(MapEditorGameManager.d__57<WaitAndAutosave>));
								__this_04 = new Object();
								__this_04.__1__state = 0;
								__this_04.__4__this = this;
								this.StartCoroutine((IEnumerator)__this_04);
								return;
							}
							if ((*targetAddress_00 != null) && (*targetAddress != null) ) {
								__this_02 = ((*targetAddress_00).fields).VersionConversionPopup;
								pMVar2 = ((*targetAddress).fields)._LastUpgradeResult_k__BackingField;
								__this_03 = new UnityAction((object)this, (intptr_t)MethodInfo_GameManagers_MapEditorGameManager_OnFinishLoading_b__55_0);
								if (__this_02 != null) {
									__this_02.Show(pMVar2, __this_03);
									goto label_05951dbf;
								}
							}
						}
					}
				}
			}
		}
	label_05951e24: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001706")]
	[Address(RVA = "0x5852030", Offset = "0x5851030", VA = "0x5852030", Slot = "54")]
	protected override void Awake()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$Awake): clean
		InputSettings pSVar1;

		this.Awake();
		pSVar1 = SettingsManager.InputSettings;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		this._input = pSVar1.MapEditor;
		return;
	}

	[Token(Token = "0x6001707")]
	[Address(RVA = "0x5851FC0", Offset = "0x5850FC0", VA = "0x5851FC0")]
	[IteratorStateMachine(typeof(_003CWaitAndAutosave_003Ed__57))]
	private IEnumerator WaitAndAutosave()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$WaitAndAutosave): clean
		MapEditorGameManager.d__57<WaitAndAutosave> __this_00;

		__this_00 = new MapEditorGameManager.d__57<WaitAndAutosave>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6001708")]
	[Address(RVA = "0x58520B0", Offset = "0x58510B0", VA = "0x58520B0")]
	protected void Update()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$Update): clean
		Vector2 start;
		MapEditorMenu __this_00;
		MapEditorRuler __this_01;
		bool bVar1;

		bVar1 = MobileLayoutEditorOverlay.IsOpen;
		if (!bVar1) {
			this.UpdateInput();
			this.UpdateBrush();
			__this_01 = this.Ruler;
			if (__this_01 == null) {
				throw new NullReferenceException();
			}
			__this_01.Update();
			this.UpdateDrag();
			return;
		}
		this._isDrag = false;
		__this_00 = this._menu;
		if (__this_00 == null) {
			return;
		}
		start = (Vector2.zeroVector);
		__this_00.SetDrag(false, (Vector2)start, (Vector2)start);
		return;
	}

	[Token(Token = "0x6001709")]
	[Address(RVA = "0x5852760", Offset = "0x5851760", VA = "0x5852760")]
	protected void UpdateBrush()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$UpdateBrush): 31 lines keep C-only constructs
		MapEditorMenu pUVar1;
		BaseCamera x;
		Camera __this_00;
		BaseComponentCache pUVar2;
		Transform pUVar3;
		MapEditorInputSettings pSVar4;
		KeybindSetting pSVar5;
		Ray ray;
		Ray ray_00;
		bool bVar6;
		bool bVar7;
		bool bVar8;
		LayerMask mask;
		int iVar9;
		EventSystem x_00;
		InputField x_01;
		Int32[] layers;
		int z;
		int y;
		int iVar10;
		int iVar11;
		MapEditorBrush pMVar12;
		Object x_02;
		int iVar13;
		float fVar14;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		float fVar15;
		Vector3 UVar16;
		Vector3 UVar17;
		Vector3 UVar18;
		Vector3 cameraPosition;
		Vector3 local_e8;
		byte[] local_d8 = new byte[16];
		ulong local_c8;
		Vector3[] local_b8 = new Vector3[2];
		byte[] local_98 = new byte[16];
		byte[] local_88 = new byte[16];
		Ray local_70;
		RaycastHit local_58;

		local_d8._0_4_ = 0.0;
		local_d8._4_4_ = 0.0;
		local_d8._8_4_ = 0.0;
		local_d8._12_4_ = 0.0;
		local_c8._0_4_ = 0.0;
		local_c8._4_4_ = 0.0;
		local_58.m_UV.x = 0.0;
		local_58.m_UV.y = 0.0;
		local_58.m_Collider.m_Data = (EntityId)0x0;
		local_58.m_Normal.y = 0.0;
		local_58.m_Normal.z = 0.0;
		local_58.m_FaceID = 0;
		local_58.m_Distance = 0.0;
		local_58.m_Point.x = 0.0;
		local_58.m_Point.y = 0.0;
		local_58.m_Point.z = 0.0;
		local_58.m_Normal.x = 0.0;
		local_e8.z = 0.0;
		local_e8.x = 0.0;
		local_e8.y = 0.0;
		pMVar12 = this.Brush;
		if (pMVar12 == null) {
			return;
		}
		if (pMVar12.Active == false) {
			return;
		}
		pUVar1 = this._menu;
		bVar6 = ((Object)pUVar1 == null);
		if (bVar6) {
			return;
		}
		pUVar1 = this._menu;
		if (pUVar1 == null) goto label_05953045;
		bVar6 = pUVar1.IsPopupActive();
		if (bVar6) {
	label_05952899: ;
			pMVar12 = this.Brush;
			if (pMVar12 != null) {
				pMVar12.ClearCenter();
				return;
			}
			goto label_05953045;
		}
		pUVar1 = this._menu;
		if (pUVar1 == null) goto label_05953045;
		if (pUVar1.IsMouseUI != false) goto label_05952899;
		x_00 = EventSystem.current;
		x_02 = null;
		bVar6 = ((Object)x_00 != null);
		if (bVar6) {
			if (x_00 == null) goto label_05953045;
			x_02 = (Object)x_00.m_CurrentSelected;
		}
		bVar6 = (x_02 != null);
		if (bVar6) {
			if (x_02 == null) goto label_05953045;
			x_01 = x_02.GetComponent<InputField>();
			bVar6 = ((Object)x_01 != null);
			if (bVar6) goto label_05952899;
		}
		x = SceneLoader.CurrentCamera;
		bVar6 = ((Object)x == null);
		if (bVar6) {
			return;
		}
		if (x == null) goto label_05953045;
		__this_00 = x.Camera;
		UVar16 = Input.mousePosition;
		if (__this_00 == null) goto label_05953045;
		local_70 = __this_00.ScreenPointToRay(UVar16);
		local_c8._0_4_ = local_70.m_Direction.y;
		local_c8._4_4_ = local_70.m_Direction.z;
		local_d8._0_4_ = local_70.m_Origin.x;
		local_d8._4_4_ = local_70.m_Origin.y;
		local_d8._8_4_ = local_70.m_Origin.z;
		local_d8._12_4_ = local_70.m_Direction.x;
		local_b8[1].y = local_70.m_Direction.y;
		local_b8[1].z = local_70.m_Direction.z;
		local_b8[0].x = local_70.m_Origin.x;
		local_b8[0].y = local_70.m_Origin.y;
		local_b8[0].z = local_70.m_Origin.z;
		local_b8[1].x = local_70.m_Direction.x;
		layers = (Int32[])new int[1];
		if (layers == null) goto label_05953045;
		if ((int)layers.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		layers[0] = PhysicsLayer.MapEditorObject;
		mask = PhysicsLayer.GetMask(layers);
		iVar9 = ((LayerMask)mask);
		ray.m_Origin.z = local_b8[0].z;
		ray.m_Direction.x = local_b8[1].x;
		ray.m_Origin.x = local_b8[0].x;
		ray.m_Origin.y = local_b8[0].y;
		ray.m_Direction.y = local_b8[1].y;
		ray.m_Direction.z = local_b8[1].z;
		bVar6 = Physics.Raycast(ray, ref local_58, 100000.0, iVar9);
		pMVar12 = this.Brush;
		if (bVar6) {
			UVar16 = local_58.point;
			UVar17 = local_58.normal;
			pUVar2 = x.Cache;
			if (pUVar2 == null) goto label_05953045;
			local_88._8_4_ = extraout_XMM0_Dc;
			local_88._0_8_ = UVar17._0_8_;
			local_88._12_4_ = extraout_XMM0_Dd;
			pUVar3 = pUVar2.Transform;
			if (pUVar3 == null) goto label_05953045;
			UVar18 = pUVar3.right;
			pUVar2 = x.Cache;
			if (pUVar2 == null) goto label_05953045;
			local_98._8_4_ = extraout_XMM0_Dc_00;
			local_98._0_8_ = UVar18._0_8_;
			local_98._12_4_ = extraout_XMM0_Dd_00;
			pUVar3 = pUVar2.Transform;
			if ((pUVar3 == null) ||(cameraPosition = pUVar3.position, pMVar12 == null)) goto label_05953045;
			UVar17.z = UVar17.z;
			UVar17.x = (float)local_88._0_4_;
			UVar17.y = (float)local_88._4_4_;
			UVar18.z = UVar18.z;
			UVar18.x = (float)local_98._0_4_;
			UVar18.y = (float)local_98._4_4_;
			pMVar12.SetCenter(UVar16, UVar17, UVar18, cameraPosition) ;
		}
		else {
			if (pMVar12 == null) goto label_05953045;
			if ((pMVar12.FlatPlane != false) && (pMVar12._hasCenter != false)) {
				ray_00.m_Origin.z = (float)local_d8._8_4_;
				ray_00.m_Direction.x = (float)local_d8._12_4_;
				ray_00.m_Origin.x = (float)local_d8._0_4_;
				ray_00.m_Origin.y = (float)local_d8._4_4_;
				ray_00.m_Direction.y = (float)local_c8;
				ray_00.m_Direction.z = local_c8._4_4_;
				bVar6 = pMVar12.TryProjectRayToPlane(ray_00, ref local_e8);
				pMVar12 = this.Brush;
				if (bVar6) {
					if (pMVar12 == null) goto label_05953045;
					UVar16.z = local_e8.z;
					UVar16.x = local_e8.x;
					UVar16.y = local_e8.y;
					pMVar12.SetCenter(UVar16);
					goto label_05952c08;
				}
				if (pMVar12 == null) goto label_05953045;
			}
			pMVar12.ClearCenter();
		}
	label_05952c08: ;
		fVar14 = Input.GetAxis("Mouse ScrollWheel");
		pSVar4 = this._input;
		if ((pSVar4 == null) ||(pSVar5 = pSVar4.BrushCount, pSVar5 == null)) goto label_05953045;
		bVar6 = pSVar5.GetKey(false);
		pSVar4 = this._input;
		if ((pSVar4 == null) ||(pSVar5 = pSVar4.BrushCurve, pSVar5 == null)) goto label_05953045;
		bVar7 = pSVar5.GetKey(false);
		pMVar12 = this.Brush;
		if (pMVar12 == null) goto label_05953045;
		if (pMVar12.Mode == 1) {
			pSVar4 = this._input;
			if ((pSVar4 == null) ||(pSVar5 = pSVar4.BrushCurveAxisX, pSVar5 == null)) goto label_05953045;
			bVar8 = pSVar5.GetKeyDown(false);
			if (bVar8) {
				pMVar12 = this.Brush;
				iVar9 = 1;
	joined_r0x05952e67: ;
				if (pMVar12 == null) goto label_05953045;
				pMVar12.CurveAxis = iVar9;
			}
			else {
				pSVar4 = this._input;
				if ((pSVar4 == null) ||(pSVar5 = pSVar4.BrushCurveAxisY, pSVar5 == null)) goto label_05953045;
				bVar8 = pSVar5.GetKeyDown(false);
				if (bVar8) {
					pMVar12 = this.Brush;
					iVar9 = 2;
					goto joined_r0x05952e67;
				}
				pSVar4 = this._input;
				if ((pSVar4 == null) ||(pSVar5 = pSVar4.BrushCurveAxisZ, pSVar5 == null)) goto label_05953045;
				bVar8 = pSVar5.GetKeyDown(false);
				if (bVar8) {
					pMVar12 = this.Brush;
					iVar9 = 3;
					goto joined_r0x05952e67;
				}
				pSVar4 = this._input;
				if ((pSVar4 == null) ||(pSVar5 = pSVar4.BrushCurveAxisNone, pSVar5 == null)) goto label_05953045;
				iVar9 = 0;
				bVar8 = pSVar5.GetKeyDown(false);
				if (bVar8) {
					pMVar12 = this.Brush;
					goto joined_r0x05952e67;
				}
			}
			if (0.0001 < ABS(fVar14)) {
				pMVar12 = this.Brush;
				if (pMVar12 == null) goto label_05953045;
				iVar13 = pMVar12.CurveAxis;
				iVar10 = 1;
				if (iVar13 != 0) {
					iVar10 = iVar13;
				}
				iVar13 = (uint)(0.0 < fVar14) * 2 + -1;
				if (bVar7) {
					pMVar12.CurveAmount = (float)iVar13 * 0.5 + pMVar12.CurveAmount;
					pMVar12 = this.Brush;
					goto joined_r0x05952ed0;
				}
				if (bVar6) {
					iVar11 = 0;
					if (iVar10 == 1) {
						iVar11 = iVar13;
					}
					y = pMVar12.GridY;
					z = pMVar12.GridZ;
					if (iVar10 == 2) {
	label_05952f4f: ;
						y = y + iVar13;
					}
					else {
						if (iVar10 != 3) {
							iVar13 = 0;
							goto label_05952f4f;
						}
						z = z + iVar13;
					}
					pMVar12.SetGrid(iVar11 + pMVar12.GridX, y, z);
	label_05952f5a: ;
					pMVar12 = this.Brush;
				}
				else {
					UVar16 = pMVar12.GetAverageGhostSize();
					fVar14 = UVar16.y;
					if ((iVar10 == 2) || (fVar14 = UVar16.z, iVar10 != 1)) {
						fVar15 = 0.5;
						if (0.5 <= fVar14 * 0.1) {
							fVar15 = fVar14 * 0.1;
						}
						if (iVar10 != 1) {
							if (iVar10 != 3) {
								if (iVar10 == 2) {
									pMVar12 = this.Brush;
									if (pMVar12 == null) goto label_05953045;
									fVar15 = fVar15 * (float)iVar13 + pMVar12.SpacingY;
									fVar14 = 0.0;
									if (0.0 <= fVar15) {
										fVar14 = fVar15;
									}
									pMVar12.SpacingY = fVar14;
									pMVar12 = this.Brush;
									goto joined_r0x05952ed0;
								}
								goto label_05952f5a;
							}
							pMVar12 = this.Brush;
							if (pMVar12 == null) goto label_05953045;
							fVar15 = fVar15 * (float)iVar13 + pMVar12.SpacingZ;
							fVar14 = 0.0;
							if (0.0 <= fVar15) {
								fVar14 = fVar15;
							}
							pMVar12.SpacingZ = fVar14;
							pMVar12 = this.Brush;
							goto joined_r0x05952ed0;
						}
					}
					else {
						fVar14 = UVar16.x * 0.1;
						fVar15 = 0.5;
						if (0.5 <= fVar14) {
							fVar15 = fVar14;
						}
					}
					pMVar12 = this.Brush;
					if (pMVar12 == null) goto label_05953045;
					fVar15 = fVar15 * (float)iVar13 + pMVar12.SpacingX;
					fVar14 = 0.0;
					if (0.0 <= fVar15) {
						fVar14 = fVar15;
					}
					pMVar12.SpacingX = fVar14;
					pMVar12 = this.Brush;
				}
	joined_r0x05952ed0: ;
				if (pMVar12 == null) goto label_05953045;
				pMVar12.RegenerateGhosts();
				pUVar1 = this._menu;
				if (pUVar1 == null) goto label_05953045;
				pUVar1.SyncBrushPanelValues();
			}
		}
		else if (0.0001 < ABS(fVar14)) {
			pMVar12.SetRadius((fVar14 + fVar14 + 1.0) * pMVar12.Radius);
		}
		pSVar4 = this._input;
		if ((pSVar4 == null) ||(pSVar5 = pSVar4.BrushReroll, pSVar5 == null)) goto label_05953045;
		bVar6 = pSVar5.GetKeyDown(false);
		if (bVar6) {
			pMVar12 = this.Brush;
			if (pMVar12 == null) goto label_05953045;
			pMVar12.Reseed();
			pMVar12 = this.Brush;
			if (pMVar12 == null) goto label_05953045;
			pMVar12.RegenerateGhosts();
		}
		pSVar4 = this._input;
		if ((pSVar4 != null) &&(pSVar5 = pSVar4.Select, pSVar5 != null)) {
			bVar6 = pSVar5.GetKeyDown(false);
			if (bVar6) {
				this.PlaceBrush();
			}
			return;
		}
	label_05953045: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600170A")]
	[Address(RVA = "0x5853580", Offset = "0x5852580", VA = "0x5853580")]
	private void PlaceBrush()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$PlaceBrush): clean
		MapEditorMenu __this_00;
		List<MapScriptBaseObject> objs;
		AddObjectCommand __this_01;
		MapEditorBrush pMVar1;

		pMVar1 = this.Brush;
		if (pMVar1 != null) {
			if (pMVar1.Active == false) {
				return;
			}
			objs = pMVar1.BuildPlacements();
			if (objs != null) {
				if (objs._size == 0) {
					return;
				}
				__this_01 = new AddObjectCommand(objs, -1);
				this.NewCommand((BaseCommand)__this_01, true);
				__this_00 = this._menu;
				if (__this_00 != null) {
					__this_00.SyncHierarchyPanel();
					pMVar1 = this.Brush;
					if (pMVar1 != null) {
						if (pMVar1.RandomizeEachPlacement != false) {
							pMVar1.Reseed();
							pMVar1 = this.Brush;
							if (pMVar1 == null) goto label_0595365e;
						}
						pMVar1.RegenerateGhosts();
						return;
					}
				}
			}
		}
	label_0595365e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600170B")]
	[Address(RVA = "0x5853670", Offset = "0x5852670", VA = "0x5853670")]
	public void ToggleBrush()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$ToggleBrush): clean
		bool bVar1;
		MapEditorBrush __this_00;
		MapEditorMenu pUVar2;
		MethodInfo pMVar3;

		__this_00 = this.Brush;
		if (__this_00 == null) {
	label_059536d8: ;
			throw new NullReferenceException();
		}
		bVar1 = __this_00.Active;
		pMVar3 = (MethodInfo)(ulong)(bVar1 == false);
		__this_00.SetActive(bVar1 == false);
		if (bVar1 == false) {
			this.DeselectAll();
			pUVar2 = this._menu;
			if (pUVar2 == null) goto label_059536d8;
			pUVar2.ShowBrushPanel();
		}
		else {
			pUVar2 = this._menu;
			if (pUVar2 == null) goto label_059536d8;
			pUVar2.HideBrushPanel();
		}
		this.OnSelectionChange(true);
		return;
	}

	[Token(Token = "0x600170C")]
	[Address(RVA = "0x5853050", Offset = "0x5852050", VA = "0x5853050")]
	protected void UpdateDrag()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$UpdateDrag): 10 lines keep C-only constructs
		MobileMapEditorPointer* targetAddress;
		Vector2 start;
		Vector2 UVar1;
		MapEditorMenu pUVar2;
		BaseGizmo pMVar3;
		Object x;
		MapEditorInputSettings pSVar4;
		KeybindSetting pSVar5;
		HashSet<MapObject> pSVar6;
		bool bVar7;
		bool bVar8;
		EventSystem pUVar9;
		InputField x_00;
		MobileMapEditorPointer pUVar10;
		Vector3 position;
		Vector3 UVar11;
		Vector3 UStack_68;
		Vector2 UStack_58;
		Vector2 UStack_48;
		byte[] auStack_38 = new byte[8];

		UStack_58.x = 0.0;
		UStack_58.y = 0.0;
		UStack_68.z = 0.0;
		UStack_68.x = 0.0;
		UStack_68.y = 0.0;
		pUVar2 = this._menu;
		bVar7 = ((Object)pUVar2 == null);
		if (bVar7) {
			return;
		}
		pMVar3 = this.CurrentGizmo;
		bVar7 = ((Object)pMVar3 != null);
		if (bVar7) {
			pMVar3 = this.CurrentGizmo;
			if (pMVar3 == null) goto label_0595356d;
			bVar7 = pMVar3.IsActive();
			if (bVar7) {
				this._isDrag = false;
			}
		}
		pUVar2 = this._menu;
		if (pUVar2 == null) goto label_0595356d;
		bVar7 = pUVar2.IsPopupActive();
		if (bVar7) {
			this._isDrag = false;
			if ((typeof(EventSystem)._2).cctor_finished_or_no_cctor == 0) goto label_059531a8;
	label_0595317c: ;
			pUVar9 = EventSystem.current;
		}
		else {
			if ((typeof(EventSystem)._2).cctor_finished_or_no_cctor != 0) goto label_0595317c;
	label_059531a8: ;
			pUVar9 = EventSystem.current;
		}
		if (pUVar9 == null) goto label_0595356d;
		x = (Object)pUVar9.m_CurrentSelected;
		if (((typeof(Object))._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar7 = (x != null);
		if (bVar7) {
			if (x == null) goto label_0595356d;
			x_00 = x.GetComponent<InputField>();
			bVar7 = ((Object)x_00 != null);
			if (bVar7) {
				this._isDrag = false;
			}
		}
		if (this._isDrag != false) {
			if ((typeof(MobileMapEditorPointer)._2).cctor_finished_or_no_cctor == 0) {
				bVar7 = MobileMapEditorPointer.Enabled;
			}
			else {
				bVar7 = MobileMapEditorPointer.Enabled;
			}
			if (bVar7) {
				targetAddress = &this._mobilePointer;
				pUVar10 = this._mobilePointer;
				if (pUVar10 == null) {
					pUVar10 = new MobileMapEditorPointer();
					*targetAddress = pUVar10;
					pUVar10 = *targetAddress;
					if (pUVar10 == null) goto label_0595356d;
				}
				pUVar10.TryGetPointerPosition(ref UStack_58);
				pUVar2 = this._menu;
				if (pUVar2 != null) {
					start.x = this._dragStart.x;
					start.y = this._dragStart.y;
					pUVar2.SetDrag(true, start, (Vector2)UStack_58);
					pUVar10 = *targetAddress;
					if (pUVar10 == null) {
						pUVar10 = new MobileMapEditorPointer();
						*targetAddress = pUVar10;
						pUVar10 = *targetAddress;
						if (pUVar10 == null) goto label_0595356d;
					}
					bVar7 = pUVar10.TryGetSelectUp(ref UStack_68);
					if (!bVar7) {
						return;
					}
					pSVar4 = this._input;
					if ((pSVar4 != null) &&(pSVar5 = pSVar4.Multiselect, pSVar5 != null)) {
						bVar7 = false;
						bVar8 = pSVar5.GetKey(false);
						if (bVar8) {
							pSVar6 = this.SelectedObjects;
							if (pSVar6 == null) goto label_0595356d;
							bVar7 = 0 < pSVar6._count;
						}
						pUVar2 = this._menu;
						if (pUVar2 != null) {
							UStack_48.x = UStack_68.z;
							auStack_38._0_4_ = UStack_68.x;
							auStack_38._4_4_ = UStack_68.y;
							UVar11.z = UStack_68.z;
							UVar11.x = UStack_68.x;
							UVar11.y = UStack_68.y;
							bVar8 = pUVar2.IsTouchUI(UVar11);
							position.z = UStack_48.x;
							position.x = (float)auStack_38._0_4_;
							position.y = (float)auStack_38._4_4_;
							this.SelectAt(bVar7, position, bVar8);
							this._isDrag = false;
							pUVar2 = this._menu;
							if (pUVar2 != null) {
								UVar1 = (Vector2.zeroVector);
								pUVar2.SetDrag(false, (Vector2)UVar1, (Vector2)UVar1);
								return;
							}
						}
					}
				}
				goto label_0595356d;
			}
			pUVar2 = this._menu;
			UStack_48.x = this._dragStart.x;
			UStack_48.y = this._dragStart.y;
			UVar11 = Input.mousePosition;
			if (pUVar2 == null) goto label_0595356d;
			pUVar2.SetDrag(true, UStack_48, (Vector2)UVar11._0_8_);
			pSVar4 = this._input;
			if ((pSVar4 == null) ||(pSVar5 = pSVar4.Select, pSVar5 == null)) goto label_0595356d;
			bVar7 = pSVar5.GetKeyUp(false);
			if (!bVar7) {
				return;
			}
			pSVar4 = this._input;
			if ((pSVar4 == null) ||(pSVar5 = pSVar4.Multiselect, pSVar5 == null)) goto label_0595356d;
			bVar7 = false;
			bVar8 = pSVar5.GetKey(false);
			if (bVar8) {
				pSVar6 = this.SelectedObjects;
				if (pSVar6 == null) goto label_0595356d;
				bVar7 = 0 < pSVar6._count;
			}
			UVar11 = Input.mousePosition;
			pUVar2 = this._menu;
			if (pUVar2 == null) goto label_0595356d;
			this.SelectAt(bVar7, UVar11, pUVar2.IsMouseUI);
			this._isDrag = false;
		}
		pUVar2 = this._menu;
		if (pUVar2 != null) {
			UVar1 = (Vector2.zeroVector);
			pUVar2.SetDrag(false, (Vector2)UVar1, (Vector2)UVar1);
			return;
		}
	label_0595356d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600170D")]
	[Address(RVA = "0x5852150", Offset = "0x5851150", VA = "0x5852150")]
	protected void UpdateInput()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$UpdateInput): clean
		MapEditorMenu pUVar1;
		MapEditorInputSettings pSVar2;
		KeybindSetting pSVar3;
		MapEditorTopPanel pUVar4;
		Object x;
		MapEditorAddObjectPopup pUVar5;
		MapEditorAddVariantPopup pUVar6;
		MapEditorRuler pMVar7;
		Vector3 position;
		bool bVar8;
		bool bVar9;
		EventSystem pUVar10;
		InputField x_00;
		MobileMapEditorPointer __this_00;
		Vector3 UVar12;
		Vector3 local_30;

		local_30.z = 0.0;
		local_30.x = 0.0;
		local_30.y = 0.0;
		bVar8 = MobileLayoutEditorOverlay.IsOpen;
		if (bVar8) {
			return;
		}
		pUVar1 = this._menu;
		bVar8 = ((Object)pUVar1 == null);
		if (bVar8) {
			return;
		}
		pSVar2 = this._input;
		if ((pSVar2 != null) &&(pSVar3 = pSVar2.SaveMap, pSVar3 != null)) {
			bVar8 = pSVar3.GetKeyDown(false);
			if (bVar8) {
				pUVar1 = this._menu;
				if ((pUVar1 != null) &&(pUVar4 = pUVar1._topPanel, pUVar4 != null)) {
					pUVar4.Save();
					return;
				}
			}
			else {
				pUVar10 = EventSystem.current;
				if (pUVar10 != null) {
					x = (Object)pUVar10.m_CurrentSelected;
					bVar9 = false;
					bVar8 = (x != null);
					if (bVar8) {
						if (x == null) goto label_05952721;
						x_00 = x.GetComponent<InputField>();
						bVar9 = ((Object)x_00 != null);
					}
					pUVar1 = this._menu;
					if (pUVar1 != null) {
						bVar8 = pUVar1.IsPopupActive();
						if (bVar8) {
							pUVar1 = this._menu;
							if ((pUVar1 != null) &&(pUVar5 = pUVar1.AddObjectPopup, pUVar5 != null)) {
								if (pUVar5.IsActive == false) {
									pUVar6 = pUVar1.AddVariantPopup;
									if (pUVar6 == null) goto label_05952721;
									if (pUVar6.IsActive == false) {
										return;
									}
								}
								bVar8 = Input.GetKeyDown(0x1b);
								if (!bVar8) {
									if (bVar9 != false) {
										return;
									}
									pSVar2 = this._input;
									if ((pSVar2 == null) ||(pSVar3 = pSVar2.AddObject, pSVar3 == null)) goto label_05952721;
									bVar8 = pSVar3.GetKeyDown(false);
									if (!bVar8) {
										return;
									}
								}
								pUVar1 = this._menu;
								if (pUVar1 != null) {
									pUVar1.ToggleAddObjectPopup();
									return;
								}
							}
						}
						else {
							if (bVar9 != false) {
								return;
							}
							pSVar2 = this._input;
							if ((pSVar2 != null) &&(pSVar3 = pSVar2.Undo, pSVar3 != null)) {
								bVar8 = pSVar3.GetKeyDown(false);
								if (bVar8) {
									this.Undo();
								}
								else {
									pSVar2 = this._input;
									if ((pSVar2 == null) ||(pSVar3 = pSVar2.Redo, pSVar3 == null)) goto label_05952721;
									bVar8 = pSVar3.GetKeyDown(false);
									if (bVar8) {
										this.Redo();
										goto label_05952745;
									}
									pSVar2 = this._input;
									if ((pSVar2 == null) ||(pSVar3 = pSVar2.CopyObjects, pSVar3 == null)) goto label_05952721;
									bVar8 = pSVar3.GetKeyDown(false);
									if (bVar8) {
										this.Copy();
										goto label_05952745;
									}
									pSVar2 = this._input;
									if ((pSVar2 == null) ||(pSVar3 = pSVar2.Paste, pSVar3 == null)) goto label_05952721;
									bVar8 = pSVar3.GetKeyDown(false);
									if (bVar8) {
										this.Paste(-1);
										goto label_05952745;
									}
									pSVar2 = this._input;
									if ((pSVar2 == null) ||(pSVar3 = pSVar2.Cut, pSVar3 == null)) goto label_05952721;
									bVar8 = pSVar3.GetKeyDown(false);
									if (bVar8) {
										this.Copy();
									}
									else {
										pSVar2 = this._input;
										if ((pSVar2 == null) ||(pSVar3 = pSVar2.AddObject, pSVar3 == null)) goto label_05952721;
										bVar8 = pSVar3.GetKeyDown(false);
										if (bVar8) {
											this.ShowAddObject();
											goto label_05952745;
										}
										pSVar2 = this._input;
										if ((pSVar2 == null) ||(pSVar3 = pSVar2.Delete, pSVar3 == null)) goto label_05952721;
										bVar8 = pSVar3.GetKeyDown(false);
										if (!bVar8) {
											pSVar2 = this._input;
											if ((pSVar2 != null) &&(pSVar3 = pSVar2.Deselect, pSVar3 != null)) {
												bVar8 = pSVar3.GetKeyDown(false);
												if (bVar8) {
													this.DeselectAll();
													this.OnSelectionChange(true);
													goto label_05952745;
												}
												pSVar2 = this._input;
												if ((pSVar2 != null) &&(pSVar3 = pSVar2.ChangeGizmo, pSVar3 != null)) {
													bVar8 = pSVar3.GetKeyDown(false);
													if (bVar8) {
														pUVar1 = this._menu;
														if ((pUVar1 != null) &&(pUVar4 = pUVar1._topPanel, pUVar4 != null)) {
															pUVar4.NextGizmo();
															goto label_05952745;
														}
													}
													else {
														pSVar2 = this._input;
														if ((pSVar2 != null) &&(pSVar3 = pSVar2.ToggleSnap, pSVar3 != null )) {
															bVar8 = pSVar3.GetKeyDown(false);
															if (!bVar8) {
																bVar8 = MobileMapEditorPointer.Enabled;
																if (bVar8) {
																	__this_00 = this.MobilePointer;
																	if (__this_00 == null) goto label_05952721;
																	bVar8 = __this_00.TryGetSelectDown(ref local_30);
																	if (bVar8) {
																		pUVar1 = this._menu;
																		if (pUVar1 == null) goto label_05952721;
																		position.z = local_30.z;
																		position.x = local_30.x;
																		position.y = local_30.y;
																		bVar8 = pUVar1.IsTouchUI(position);
																		if (!bVar8) {
																			pMVar7 = this.Ruler;
																			if (pMVar7 == null) goto label_05952721;
																			if (pMVar7._Active_k__BackingField == false) {
																				this._isDrag = true;
																				this._dragStart.x = local_30.x;
																				this._dragStart.y = local_30.y;
																				this._dragStart.z = local_30.z;
																				goto label_05952745;
																			}
																		}
																	}
																}
																bVar8 = MobileMapEditorPointer.Enabled;
																if (!bVar8) {
																	pSVar2 = this._input;
																	if ((pSVar2 == null) ||(pSVar3 = pSVar2.Select, pSVar3 == null)) goto label_05952721;
																	bVar8 = pSVar3.GetKeyDown(false);
																	if (bVar8) {
																		pUVar1 = this._menu;
																		if (pUVar1 == null) goto label_05952721;
																		if (pUVar1.IsMouseUI == false) {
																			pMVar7 = this.Ruler;
																			if (pMVar7 == null) goto label_05952721;
																			if (pMVar7._Active_k__BackingField == false) {
																				this._isDrag = true;
																				UVar12 = (Vector3)Input.mousePosition;
																				this._dragStart = UVar12;
																			}
																		}
																	}
																}
																goto label_05952745;
															}
															pUVar1 = this._menu;
															if ((pUVar1 != null) &&(pUVar4 = pUVar1._topPanel, pUVar4 != null)) {
																pUVar4.ToggleSnap();
																goto label_05952745;
															}
														}
													}
												}
											}
											goto label_05952721;
										}
									}
									this.Delete();
								}
	label_05952745: ;
								this.IgnoreNextSelect = false;
								return;
							}
						}
					}
				}
			}
		}
	label_05952721: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600170E")]
	[Address(RVA = "0x58536E0", Offset = "0x58526E0", VA = "0x58536E0")]
	public void Save()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$Save): clean
		MapEditorMenu pUVar1;
		MapEditorTopPanel __this_00;

		pUVar1 = this._menu;
		if ((pUVar1 == null) ||(__this_00 = pUVar1._topPanel, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Save();
		return;
	}

	[Token(Token = "0x600170F")]
	[Address(RVA = "0x584C9B0", Offset = "0x584B9B0", VA = "0x584C9B0")]
	public void OnSelectionChange(bool focusHierarchy = true)
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$OnSelectionChange): 3 lines keep C-only constructs
		HashSet<MapObject> pSVar1;
		MapScriptBaseObject pMVar2;
		Dictionary<int, object> __this_00;
		MapEditorBrush pMVar3;
		MapEditorMenu pUVar4;
		MapEditorHierarchyPanel pUVar5;
		MapObject obj;
		bool bVar6;
		HashSet<MapObject> __this_01;
		List<MapObject> objs;
		byte[] local_68 = new byte[8];
		MapObject local_58;
		byte[] local_48 = new byte[16];
		MapObject local_38;

		local_68 = (byte[])0x0;
		local_58 = null;
		pSVar1 = this.SelectedObjects;
		__this_01 = new HashSet<MapObject>((IEnumerable<T>)pSVar1);
		if (__this_01 == null) goto label_0594cc84;
		local_48.GetEnumerator((HashSet<object>)__this_01);
		local_58 = local_38;
		local_68 = (byte[])local_48._0_8_;
		local_48._0_8_ = null;
		local_48._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_68;
		while (true) {
			bVar6 = local_68.MoveNext();
			obj = local_58;
			if (!(bVar6)) break;
			if (obj == null) {
				throw new NullReferenceException();
			}
			pMVar2 = obj.ScriptObject;
			if (pMVar2 == null) {
				throw new NullReferenceException();
			}
			__this_00 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar6 = __this_00.ContainsKey(pMVar2.Id);
			if (!bVar6) {
				this.DeselectObject(obj);
			}
		}
		local_68.Dispose() ;
		pSVar1 = this.SelectedObjects;
		if (pSVar1 == null) goto label_0594cc84;
		if (pSVar1._count < 1) {
	label_0594cbad: ;
			pUVar4 = this._menu;
			if (pUVar4 == null) goto label_0594cc84;
			pUVar4.HideInspector();
			pUVar4 = this._menu;
		}
		else {
			pMVar3 = this.Brush;
			if (pMVar3 == null) goto label_0594cc84;
			if (pMVar3.Active != false) goto label_0594cbad;
			pUVar4 = this._menu;
			objs = new List<MapObject>((IEnumerable<T>)pSVar1);
			if (pUVar4 == null) goto label_0594cc84;
			pUVar4.ShowInspector(objs);
			pUVar4 = this._menu;
		}
		if ((pUVar4 == null) ||(pUVar5 = pUVar4.HierarchyPanel, pUVar5 == null)) {
	label_0594cc84: ;
			throw new NullReferenceException();
		}
		pUVar5.SyncSelectedItems();
		if (focusHierarchy) {
			pSVar1 = this.SelectedObjects;
			if (pSVar1 == null) goto label_0594cc84;
			if (0 < pSVar1._count) {
				pUVar4 = this._menu;
				if ((pUVar4 == null) ||(pUVar5 = pUVar4.HierarchyPanel, pUVar5 == null)) goto label_0594cc84;
				pUVar5.FocusSelectionFromScene();
			}
		}
		this.SyncGizmos();
		return;
	}

	[Token(Token = "0x6001710")]
	[Address(RVA = "0x5853710", Offset = "0x5852710", VA = "0x5853710")]
	public void SyncGizmos()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$SyncGizmos): clean
		OutlineGizmo pMVar1;
		PositionGizmo pMVar2;
		RotationGizmo pMVar3;
		ScaleGizmo pMVar4;

		pMVar1 = this._outlineGizmo;
		if (pMVar1 != null) {
			pMVar1.OnSelectionChange();
			pMVar2 = this._positionGizmo;
			if (pMVar2 != null) {
				pMVar2.OnSelectionChange();
				pMVar3 = this._rotationGizmo;
				if (pMVar3 != null) {
					pMVar3.OnSelectionChange();
					pMVar4 = this._scaleGizmo;
					if (pMVar4 != null) {
						pMVar4.OnSelectionChange();
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001711")]
	[Address(RVA = "0x5853790", Offset = "0x5852790", VA = "0x5853790")]
	public void SetGizmo(string gizmo)
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$SetGizmo): clean
		bool bVar1;
		PositionGizmo method_00;

		bVar1 = (gizmo == "Position");
		if (bVar1) {
			method_00 = this._positionGizmo;
		}
		else {
			bVar1 = (gizmo == "Rotation");
			if (bVar1) {
				method_00 = (PositionGizmo)this._rotationGizmo;
			}
			else {
				method_00 = (PositionGizmo)this._scaleGizmo;
			}
		}
		this.CurrentGizmo = (BaseGizmo)method_00;
		this.SyncGizmos();
		return;
	}

	[Token(Token = "0x6001712")]
	[Address(RVA = "0x5853830", Offset = "0x5852830", VA = "0x5853830")]
	public void SetGizmoMode(GizmoMode mode)
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$SetGizmoMode): clean


		this.CurrentGizmoMode = mode;
		this.SyncGizmos();
		return;
	}

	[Token(Token = "0x6001713")]
	[Address(RVA = "0x5853840", Offset = "0x5852840", VA = "0x5853840")]
	public void SetGridAxes(HashSet<int> axes)
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$SetGridAxes): 4 lines keep C-only constructs
		bool bVar1;
		GameObject __this_00;
		MapEditorSceneGrid pGVar2;
		MapEditorSceneGrid* targetAddress;

		pGVar2 = this._sceneGrid;
		targetAddress = &this._sceneGrid;
		bVar1 = ((Object)pGVar2 == null);
		if (bVar1) {
			if (axes == null) goto label_05953951;
			if (axes._count == 0) {
				return;
			}
			__this_00 = new GameObject("MapEditorSceneGrid");
			if (__this_00 == null) goto label_05953951;
			pGVar2 = __this_00.AddComponent<MapEditorSceneGrid>();
			*targetAddress = pGVar2;
		}
		if (*targetAddress != null) {
			(*targetAddress).SetAxes(axes);
			return;
		}
	label_05953951: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001714")]
	[Address(RVA = "0x5853BE0", Offset = "0x5852BE0", VA = "0x5853BE0")]
	public int GetNextObjectId()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$GetNextObjectId): clean
		int iVar1;

		iVar1 = this._currentObjectId + 1;
		this._currentObjectId = iVar1;
		return iVar1;
	}

	[Token(Token = "0x6001715")]
	[Address(RVA = "0x5851E40", Offset = "0x5850E40", VA = "0x5851E40")]
	protected int GetHighestObjectId()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$GetHighestObjectId): 3 lines keep C-only constructs
		Dictionary<int, object> __this_00;
		bool bVar1;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_01;
		int iVar2;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
		byte local_20;

		local_48._dictionary = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._currentKey = null;
		__this_00 = (Dictionary<int, object>)MapLoader.IdToMapObject;
		if (__this_00 != null) {
			__this_01 = __this_00.Keys;
			local_20 = (byte)&local_48;
			if (__this_01 != null) {
				local_48 = __this_01.GetEnumerator();
				iVar2 = 0;
				while (bVar1 = local_48.MoveNext()) {
					if (iVar2 <= (int)local_48._currentKey) {
						iVar2 = (int)local_48._currentKey;
					}
				}
				local_48.Dispose();
				return iVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001717")]
	private T TryGetSetting<T>(Dictionary<string, BaseSetting> settings, string key, T Default) where T : BaseSetting
	{
		return null;
	}

	[Token(Token = "0x6001718")]
	[Address(RVA = "0x5853C00", Offset = "0x5852C00", VA = "0x5853C00")]
	public void ToggleLights()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$ToggleLights): 17 lines keep C-only constructs
		byte bVar1;
		Dictionary<int, object> pSVar2;
		Il2CppClass pIVar3;
		IntPtr pvVar4;
		List<object> __this_00;
		Color255 pUVar5;
		object pIVar6;
		MapEditorGameManager pGVar7;
		object pIVar8;
		bool bVar9;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o pSVar10;
		Light pUVar11;
		Dictionary<string, BaseSetting> settings;
		ColorSetting pSVar12;
		FloatSetting pSVar13;
		Color UVar14;
		byte[] local_a8 = new byte[8];
		ulong uStack_a0;
		object local_98;
		byte[] local_90 = new byte[16];
		object local_80;
		BaseGameManager local_78;
		MapEditorGameManager local_70;
		byte[] local_68 = new byte[8];
		object local_58;
		FloatSetting local_48;

		local_a8 = (byte[])0x0;
		uStack_a0._0_4_ = 0;
		uStack_a0._4_4_ = 0;
		local_98 = null;
		local_68 = (byte[])0x0;
		local_58 = null;
		local_70 = this;
		if (this._lightsOn == false) {
			this._lightsOn = true;
			local_78 = SceneLoader.CurrentGameManager;
			if (local_78 != null) {
				bVar1 = (typeof(MapEditorGameManager)._2).typeHierarchyDepth;
				if (((local_78.klass._2).typeHierarchyDepth < bVar1) ||((local_78.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapEditorGameManager))) {
					throw new InvalidCastException();
				}
			}
			pSVar2 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			if ((pSVar2 != null) &&(pSVar10 = pSVar2.Values , pSVar10 != null)) {
				local_90.GetEnumerator(pSVar10);
				local_98 = local_80;
				local_a8 = (byte[])local_90._0_8_;
				uStack_a0 = (byte)local_90._8_8_;
				do {
					do {
						do {
							while(true) {
								bVar9 = local_a8.MoveNext();
								pIVar6 = local_98;
								if (!bVar9) {
									local_a8.Dispose();
									return;
								}
								if (local_98 == null) {
									throw new NullReferenceException();
								}
								if (local_98[1].monitor == null) {
									throw new NullReferenceException();
								}
								pUVar11 = local_98[1].monitor.GetComponent<Light>() ;
								bVar9 = ((Object)pUVar11 != null);
								if (!bVar9) break;
								if (pIVar6[1].monitor == null) {
									throw new NullReferenceException();
								}
								pUVar11 = pIVar6[1].monitor.GetComponent<Light>() ;
								if (pUVar11 == null) {
									throw new NullReferenceException();
								}
								pUVar11.enabled = true;
							}
							pIVar3 = pIVar6[2].klass;
						} while (pIVar3 == null);
						pvVar4 = (pIVar3._1).image;
						bVar1 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
					} while ((*(byte)((long)pvVar4 + 0x130) < bVar1) ||(*(MapScriptSceneObject*)(*(long)((long)pvVar4 + 200) + -8 + (ulong)bVar1 * 8) != typeof(MapScriptSceneObject)));
					__this_00 = (pIVar3._1);
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					local_90.GetEnumerator(__this_00);
					local_58 = local_80;
					local_68 = (byte[])local_90._0_8_;
					local_90._0_8_ = null;
					local_90._8_8_ = local_68;
					if (local_78 == null) {
						bVar9 = local_68.MoveNext();
						if (bVar9) {
							throw new NullReferenceException();
						}
					}
					else {
						do {
							do {
								while(true) {
									bVar9 = local_68.MoveNext();
									pIVar8 = local_58;
									if (!bVar9) goto label_0595432e;
									if (local_58 == null) {
										throw new NullReferenceException();
									}
									if ((*(ulong)((sbyte)local_78 + 0x30)) == null) {
										throw new NullReferenceException();
									}
									settings = ((*(ulong)((sbyte)local_78 + 0x30))).GetComponentSettings((String)local_58[1].klass, local_58[1].monitor);
									bVar9 = ((String)pIVar8[1].klass == "Daylight") ;
									pGVar7 = local_70;
									if (!bVar9) break;
									pSVar12 = local_70.TryGetSetting<ColorSetting>(settings, "Color", null);
									pSVar13 = pGVar7.TryGetSetting<FloatSetting>(settings, "Intensity", null);
									if ((pSVar12 != null) && (pSVar13 != null) ) {
										if (pIVar6[1].monitor == null) {
											throw new NullReferenceException();
										}
										pUVar11 = pIVar6[1].monitor.AddComponent<Light>();
										if (pUVar11 == null) {
											throw new NullReferenceException();
										}
										pUVar11.type = 1;
										pUVar5 = pSVar12._value;
										if (pUVar5 == null) {
											throw new NullReferenceException();
										}
										UVar14 = pUVar5.ToColor();
										pUVar11.color = UVar14;
										pUVar11.intensity = pSVar13._value;
										pUVar11.shadows = 1;
										goto label_0595432e;
									}
								}
								bVar9 = ((String)pIVar8[1].klass == "PointLight");
								pGVar7 = local_70;
							} while (!bVar9);
							pSVar12 = local_70.TryGetSetting<ColorSetting>(settings, "Color", null);
							local_48 = pGVar7.TryGetSetting<FloatSetting>(settings, "Intensity", null);
							pSVar13 = pGVar7.TryGetSetting<FloatSetting>(settings, "Range", null);
						} while (((pSVar12 == null) ||(local_48 == null)) ||(pSVar13 == null));
						if (pIVar6[1].monitor == null) {
							throw new NullReferenceException();
						}
						pUVar11 = pIVar6[1].monitor.AddComponent<Light>();
						if (pUVar11 == null) {
							throw new NullReferenceException();
						}
						pUVar11.type = 2;
						pUVar5 = pSVar12._value;
						if (pUVar5 == null) {
							throw new NullReferenceException();
						}
						UVar14 = pUVar5.ToColor();
						pUVar11.color = UVar14;
						pUVar11.intensity = local_48._value;
						pUVar11.range = pSVar13._value;
					}
	label_0595432e: ;
					local_68.Dispose();
				} while(true);
			}
		}
		else {
			pSVar2 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			if ((pSVar2 != null) &&(pSVar10 = pSVar2.Values , pSVar10 != null)) {
				local_90.GetEnumerator(pSVar10);
				local_98 = local_80;
				local_a8 = (byte[])local_90._0_8_;
				uStack_a0 = (byte)local_90._8_8_;
				local_90._0_8_ = null;
				local_90._8_8_ = local_a8;
				while(true) {
					do {
						bVar9 = local_a8.MoveNext();
						pIVar6 = local_98;
						if (!bVar9) {
							local_a8.Dispose();
							local_70._lightsOn = false;
							return;
						}
						if (local_98 == null) {
							throw new NullReferenceException();
						}
						if (local_98[1].monitor == null) {
							throw new NullReferenceException();
						}
						pUVar11 = local_98[1].monitor.GetComponent<Light>();
						bVar9 = ((Object)pUVar11 != null);
					} while (!bVar9);
					if (pIVar6[1].monitor == null) {
						throw new NullReferenceException();
					}
					pUVar11 = pIVar6[1].monitor.GetComponent<Light>();
					if (pUVar11 == null) break;
					pUVar11.enabled = false;
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001719")]
	[Address(RVA = "0x58545E0", Offset = "0x58535E0", VA = "0x58545E0")]
	public void SetLayerVisibility(HashSetSetting<int> selectedLayers)
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$SetLayerVisibility): 12 lines keep C-only constructs
		byte bVar1;
		Dictionary<int, object> __this_00;
		Il2CppClass pIVar2;
		IntPtr pvVar3;
		HashSet<int> __this_01;
		String pSVar4;
		object pIVar5;
		byte puVar6;
		bool bVar7;
		sbyte cVar8;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_02;
		bool value;
		byte[] local_98 = new byte[8];
		ulong uStack_90;
		object local_88;
		byte[] local_78 = new byte[16];
		object local_68;
		HashSetSetting<int> local_60;
		byte[] local_58 = new byte[8];
		object local_48;
		byte local_38;

		local_98 = (byte[])0x0;
		uStack_90._0_4_ = 0;
		uStack_90._4_4_ = 0;
		local_88 = null;
		local_58 = (byte[])0x0;
		local_48 = null;
		__this_00 = (Dictionary<int, object>)MapLoader.IdToMapObject;
		if ((__this_00 == null) ||(__this_02 = __this_00.Values, __this_02 == null)) {
			throw new NullReferenceException();
		}
		local_78.GetEnumerator(__this_02);
		local_38 = local_98;
		local_88 = local_68;
		local_98 = (byte[])local_78._0_8_;
		uStack_90 = (byte)local_78._8_8_;
		puVar6 = local_98;
		if (selectedLayers == null) {
			while (true) {
				local_38 = puVar6;
				bVar7 = local_98.MoveNext();
				if (!(bVar7)) break;
				if (local_88 == null) goto label_05954afc;
				puVar6 = local_38;
				if (local_88[2].klass != null) {
					pvVar3 = ((local_88[2].klass)._1).image;
					bVar1 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
					if ((bVar1 <= *(byte)((long)pvVar3 + 0x130)) &&(*(MapScriptSceneObject*)(*(long)((long)pvVar3 + 200) + -8 + (ulong)bVar1 * 8) == typeof(MapScriptSceneObject))) {
						throw new NullReferenceException();
					}
				}
			}
		}
		else {
			local_60 = selectedLayers;
			while (true) {
				bVar7 = local_98.MoveNext();
				pIVar5 = local_88;
				if (!(bVar7)) break;
				if (local_88 == null) {
	label_05954afc: ;
					throw new NullReferenceException();
				}
				pIVar2 = local_88[2].klass;
				if (pIVar2 != null) {
					pvVar3 = (pIVar2._1).image;
					bVar1 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
					if ((bVar1 <= *(byte)((long)pvVar3 + 0x130)) &&(*(MapScriptSceneObject*)(*(long)((long)pvVar3 + 200) + -8 + (ulong)bVar1 * 8) == typeof(MapScriptSceneObject))) {
						bVar7 = selectedLayers.Contains(0);
						value = true;
						if (!bVar7) {
							__this_01 = (HashSet<int>)selectedLayers._value;
							if (__this_01 == null) {
								throw new NullReferenceException();
							}
							local_78.GetEnumerator(__this_01);
							local_48 = local_68;
							local_58 = (byte[])local_78._0_8_;
							local_78._0_8_ = null;
							local_78._8_8_ = local_58;
	switchD_059548a0_default: ;
							do {
								bVar7 = local_58.MoveNext();
								if (!bVar7) {
									value = false;
									goto label_059549db;
								}
								switch(local_48._0_4_) {
								case 1:
									cVar8 = (char)(pIVar2._1).byval_arg.bits;
									goto joined_r0x05954939;
								case 2:
									cVar8 = (char)(pIVar2._1).byval_arg.bits;
									goto joined_r0x059549ae;
								case 3:
									cVar8 = *(sbyte)((long)&(pIVar2._1).byval_arg.bits + 2);
									goto joined_r0x05954939;
								case 4:
									cVar8 = *(sbyte)((long)&(pIVar2._1).byval_arg.bits + 2);
									goto joined_r0x059549ae;
								case 5:
									cVar8 = *(sbyte)((long)&(pIVar2._1).byval_arg.bits + 1);
	joined_r0x05954939: ;
									if (cVar8 != false) goto label_059549d7;
									goto switchD_059548a0_default;
								case 6:
									cVar8 = *(sbyte)((long)&(pIVar2._1).byval_arg.bits + 1);
									goto joined_r0x059549ae;
								case 7:
									cVar8 = ((pIVar2._1).generic_class == "Physical");
									break;
								case 8:
									cVar8 = ((pIVar2._1).generic_class == "Region");
									break;
								case 9:
									cVar8 = ((pIVar2._1).generic_class == "None");
									break;
								case 10:
									cVar8 = *(sbyte)((long)&(pIVar2._1).byval_arg.bits + 3);
									break;
								case 0xb:
									cVar8 = *(sbyte)((long)&(pIVar2._1).byval_arg.bits + 3);
	joined_r0x059549ae: ;
									if (cVar8 == false) goto label_059549d7;
									goto switchD_059548a0_default;
								case 0xc:
									pSVar4 = (String)(pIVar2._1).namespaze;
									bVar7 = (pSVar4 == MapAssets.NavMeshObstacle);
									if (bVar7) goto label_059549d7;
									pSVar4 = (String)(pIVar2._1).namespaze;
									cVar8 = (pSVar4 == MapAssets.NavMeshRegion);
									break;
								default: ;
									goto switchD_059548a0_default;
								}
							} while (cVar8 == false);
	label_059549d7: ;
							value = true;
	label_059549db: ;
							local_58.Dispose();
							selectedLayers = local_60;
						}
						if (pIVar5[1].monitor == null) {
							throw new NullReferenceException();
						}
						pIVar5[1].monitor.SetActive(value);
					}
				}
			}
		}
		local_98.Dispose();
		return;
	}

	[Token(Token = "0x600171A")]
	[Address(RVA = "0x5854BA0", Offset = "0x5853BA0", VA = "0x5854BA0")]
	public MapEditorGameManager()
	{
		// Lifted from source/cpp/GameManagers/MapEditorGameManager.c (GameManagers.MapEditorGameManager$$.ctor): clean
		HashSet<MapObject> __this_00;
		List<object> pSVar1;
		MapEditorBrush __this_01;
		MapEditorRuler __this_02;

		__this_00 = new HashSet<MapObject>();
		this.SelectedObjects = __this_00;
		this.HierarchyTreeViewEnabled = true;
		this.LastSelectedObjectId = -1;
		pSVar1 = new List<BaseCommand>();
		this._undoCommands = (List<BaseCommand>)pSVar1;
		pSVar1 = new List<BaseCommand>();
		this._redoCommands = (List<BaseCommand>)pSVar1;
		this._clipboard = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this_01 = new MapEditorBrush();
		this.Brush = __this_01;
		__this_02 = new MapEditorRuler();
		this.Ruler = __this_02;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/GameManagers/MapEditorGameManager.c.

	// GameManagers.MapEditorGameManager$$TryGetSetting<object>: 5 lines keep C-only constructs
	private object TryGetSetting_object(Dictionary<string, BaseSetting> settings, String key, object Default)
	{
		bool bVar1;
		BaseSetting pSVar2;
		Il2CppClass pIVar3;
		object pIVar4;

		if (method.rgctx_data == null) {
			if (method.rgctx_data == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			}
		}
		if (settings == null) {
			throw new NullReferenceException();
		}
		bVar1 = settings.ContainsKey((object)key);
		if (bVar1) {
			pSVar2 = settings.get_Item((object)key);
			pIVar3 = method.rgctx_data._0_T;
			if (((pIVar3._2).bitflags1 & 1) == 0) {
				pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
			}
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar2, pIVar3);
			if (pIVar4 != null) {
				pSVar2 = settings.get_Item((object)key);
				pIVar3 = method.rgctx_data._0_T;
				if (((pIVar3._2).bitflags1 & 1) == 0) {
					pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
				}
				if (pSVar2 == null) {
					Default = null;
				}
				else {
					Default = il2cpp_vm_Object_IsInst((object)pSVar2, pIVar3);
					if (Default == null) {
						throw new InvalidCastException();
					}
				}
			}
		}
		return Default;
	}

	// GameManagers.MapEditorGameManager.<>c__DisplayClass33_0$$.ctor: clean
	private void c__DisplayClass33_0__ctor()
	{
		base();
		return;
	}

	// GameManagers.MapEditorGameManager.<>c__DisplayClass34_0$$.ctor: clean
	private void c__DisplayClass34_0__ctor()
	{
		base();
		return;
	}

	// GameManagers.MapEditorGameManager.<>c__DisplayClass48_0$$.ctor: clean
	private void c__DisplayClass48_0__ctor()
	{
		base();
		return;
	}

	// GameManagers.MapEditorGameManager$$<OnFinishLoading>b__55_0: clean
	private void OnFinishLoading_b__55_0()
	{
		MapEditorSettings pSVar1;
		StringSetting pSVar2;
		MapScript pMVar3;
		MapVersionConversionResult pMVar4;
		String name;
		String map;
		String version;

		pSVar1 = SettingsManager.MapEditorSettings;
		if ((((pSVar1 != null) &&(pSVar2 = pSVar1.CurrentMap, pSVar2 != null)) &&(pMVar3 = this.MapScript, pMVar3 != null)) &&(pMVar4 = pMVar3._LastUpgradeResult_k__BackingField, pMVar4 != null)) {
			name = pSVar2._value;
			map = pMVar3._OriginalCSV_k__BackingField;
			version = pMVar4._OriginalVersion_k__BackingField;
			BuiltinLevels.BackupCustomMap(name, map, version);
			pSVar1 = SettingsManager.MapEditorSettings;
			if ((pSVar1 != null) &&(pSVar2 = pSVar1.CurrentMap, pSVar2 != null)) {
				BuiltinLevels.SaveCustomMap(pSVar2._value, this.MapScript);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// GameManagers.MapEditorGameManager.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new MapEditorGameManager.c();
		MapEditorGameManager.c.__9 =(MapEditorGameManager.c)__this;
		return;
	}

	// GameManagers.MapEditorGameManager.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// GameManagers.MapEditorGameManager.<>c$$<Copy>b__29_0: clean
	private int c__Copy_b__29_0(MapObject o)
	{
		MapScriptBaseObject pMVar1;

		if ((o == null) ||(pMVar1 = o.ScriptObject, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		return pMVar1.Id;
	}

	// GameManagers.MapEditorGameManager.<>c$$<Copy>b__29_1: clean
	private bool c__Copy_b__29_1(int id)
	{
		return 0 < id;
	}

	// GameManagers.MapEditorGameManager.<>c$$<Paste>b__32_1: clean
	private int c__Paste_b__32_1(MapScriptBaseObject o)
	{
		if (o == null) {
			throw new NullReferenceException();
		}
		return o.Id;
	}

	// GameManagers.MapEditorGameManager.<>c$$<Paste>b__32_0: clean
	private int c__Paste_b__32_0(MapScriptBaseObject o)
	{
		if (o == null) {
			throw new NullReferenceException();
		}
		return o.Id;
	}

	// GameManagers.MapEditorGameManager.<>c$$<CreateEmptyParent>b__33_0: clean
	private int c__CreateEmptyParent_b__33_0(MapObject o)
	{
		MapScriptBaseObject pMVar1;

		if ((o == null) ||(pMVar1 = o.ScriptObject, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		return pMVar1.Id;
	}

	// GameManagers.MapEditorGameManager.<>c$$<CreateEmptyParent>b__33_2: clean
	private int c__CreateEmptyParent_b__33_2(int id)
	{
		uint uVar1;
		List<int> __this_00;
		int iVar2;

		if (Il2CppMethodInitialized_075458a1 == false) {
			Il2CppMethodInitialized_075458a1 = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = MapLoader.ObjectOrder;
		}
		else {
			__this_00 = *(List<int>*)((long)(typeof(MapLoader)).static_fields + 0x10);
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return iVar2;
	}

	// GameManagers.MapEditorGameManager.<>c$$<ResetOrigin>b__34_0: clean
	private int c__ResetOrigin_b__34_0(MapObject o)
	{
		MapScriptBaseObject pMVar1;

		if ((o == null) ||(pMVar1 = o.ScriptObject, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		return pMVar1.Id;
	}

	// GameManagers.MapEditorGameManager.<>c$$<GetSelectedObjectsForTransformCommand>b__46_0: clean
	private int c__GetSelectedObjectsForTransformCommand_b__46_0(MapObject x)
	{
		MapScriptBaseObject pMVar1;

		if ((x == null) ||(pMVar1 = x.ScriptObject, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		return pMVar1.Id;
	}

	// GameManagers.MapEditorGameManager.<>c$$<GetSelectedObjectsForTransformCommand>b__46_1: clean
	private MapObject c__GetSelectedObjectsForTransformCommand_b__46_1(int id)
	{
		uint uVar1;
		Dictionary<int, object> __this_00;
		MapObject pMVar2;

		if (Il2CppMethodInitialized_075458a2 == false) {
			Il2CppMethodInitialized_075458a2 = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = (Dictionary<int, object>)MapLoader.IdToMapObject;
		}
		else {
			__this_00 = *(Dictionary<int, object>*)(typeof(MapLoader)).static_fields;
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return pMVar2;
	}

	// GameManagers.MapEditorGameManager.<>c$$<ReparentObjects>b__47_0: clean
	private bool c__ReparentObjects_b__47_0(int id)
	{
		uint uVar1;
		Dictionary<int, object> __this_00;
		bool bVar2;

		if (Il2CppMethodInitialized_075458a3 == false) {
			Il2CppMethodInitialized_075458a3 = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = (Dictionary<int, object>)MapLoader.IdToMapObject;
		}
		else {
			__this_00 = *(Dictionary<int, object>*)(typeof(MapLoader)).static_fields;
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return bVar2;
	}

	// GameManagers.MapEditorGameManager.<>c$$<ReparentObjects>b__47_1: clean
	private MapObject c__ReparentObjects_b__47_1(int id)
	{
		uint uVar1;
		Dictionary<int, object> __this_00;
		MapObject pMVar2;

		if (Il2CppMethodInitialized_075458a4 == false) {
			Il2CppMethodInitialized_075458a4 = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = (Dictionary<int, object>)MapLoader.IdToMapObject;
		}
		else {
			__this_00 = *(Dictionary<int, object>*)(typeof(MapLoader)).static_fields;
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return pMVar2;
	}

	// GameManagers.MapEditorGameManager.<>c__DisplayClass33_0$$<CreateEmptyParent>b__1: clean
	private bool c__DisplayClass33_0__CreateEmptyParent_b__1(int id)
	{
		uint uVar1;
		bool bVar2;
		MapEditorGameManager __this_00;

		if (Il2CppMethodInitialized_075458a5 == false) {
			Il2CppMethodInitialized_075458a5 = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = (MapEditorGameManager)MapLoader.IdToMapObject;
		}
		else {
			__this_00 = *(MapEditorGameManager*)(typeof(MapLoader)).static_fields;
		}
		if (__this_00 != null) {
			bVar2 = __this_00.ContainsKey(id);
			if (!bVar2) {
				return false;
			}
			if (this.__4__this != null) {
				bVar2 = __this_00.HasAncestorInSet(id, this.selectedIds);
				return !bVar2;
			}
		}
		throw new NullReferenceException();
	}

	// GameManagers.MapEditorGameManager.<>c__DisplayClass34_0$$<ResetOrigin>b__1: clean
	private bool c__DisplayClass34_0__ResetOrigin_b__1(MapObject obj)
	{
		MapScriptBaseObject pMVar1;
		bool bVar2;

		if (((obj == null) ||(pMVar1 = obj.ScriptObject, pMVar1 == null)) ||(this.__4__this == null)) {
			throw new NullReferenceException();
		}
		bVar2 = this.HasAncestorInSet(pMVar1.Id, this.selectedIds);
		return !bVar2;
	}

	// GameManagers.MapEditorGameManager.<>c__DisplayClass48_0$$<ReorderObjects>b__0: clean
	private bool c__DisplayClass48_0__ReorderObjects_b__0(int id)
	{
		uint uVar1;
		Dictionary<int, object> __this_00;
		bool bVar2;

		if (Il2CppMethodInitialized_075458a6 == false) {
			Il2CppMethodInitialized_075458a6 = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = (Dictionary<int, object>)MapLoader.IdToMapObject;
		}
		else {
			__this_00 = *(Dictionary<int, object>*)(typeof(MapLoader)).static_fields;
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar2 = __this_00.ContainsKey(id);
		if (bVar2) {
			return this.anchorId != id;
		}
		return false;
	}
}
