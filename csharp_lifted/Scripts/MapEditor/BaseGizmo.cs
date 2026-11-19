// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.BaseGizmo
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/MapEditor/BaseGizmo.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/BaseGizmo.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using GameManagers;
using Il2CppDummyDll;
using Map;
using Settings;
using UI;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x200014C")]
internal class BaseGizmo : MonoBehaviour
{
	[Token(Token = "0x4000787")]
	[FieldOffset(Offset = "0x20")]
	protected MapEditorGameManager _gameManager;

	[Token(Token = "0x4000788")]
	[FieldOffset(Offset = "0x28")]
	protected Transform _transform;

	[Token(Token = "0x4000789")]
	[FieldOffset(Offset = "0x30")]
	protected MapEditorMenu _menu;

	[Token(Token = "0x170000D4")]
	protected Vector3 PointerPosition
	{
		[Token(Token = "0x60006AA")]
		[Address(RVA = "0x5B92D20", Offset = "0x5B91D20", VA = "0x5B92D20")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/MapEditor/BaseGizmo.c (MapEditor.BaseGizmo$$get_PointerPosition): clean
			return (Vector3)this._PointerPosition_k__BackingField;
		}
		[Token(Token = "0x60006AB")]
		[Address(RVA = "0x5B92D30", Offset = "0x5B91D30", VA = "0x5B92D30")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/MapEditor/BaseGizmo.c (MapEditor.BaseGizmo$$set_PointerPosition): clean
			this._PointerPosition_k__BackingField.x = value.x;
			this._PointerPosition_k__BackingField.y = value.y;
			this._PointerPosition_k__BackingField.z = value.z;
			return;
		}
	}

	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x5B92D40", Offset = "0x5B91D40", VA = "0x5B92D40", Slot = "4")]
	public virtual bool IsActive()
	{
		// Lifted from source/cpp/MapEditor/BaseGizmo.c (MapEditor.BaseGizmo$$IsActive): clean
		return false;
	}

	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x5B92D50", Offset = "0x5B91D50", VA = "0x5B92D50", Slot = "5")]
	protected virtual void Awake()
	{
		// Lifted from source/cpp/MapEditor/BaseGizmo.c (MapEditor.BaseGizmo$$Awake): 4 lines keep C-only constructs
		byte bVar1;
		Transform pUVar2;
		Il2CppClass pIVar3;
		MapEditorMenu pUVar4;

		pIVar3 = typeof(MapEditorGameManager);
		pUVar4 = (MapEditorMenu)SceneLoader.CurrentGameManager;
		if (pUVar4 == null) {
			this._gameManager = null;
		}
		else {
			bVar1 = (typeof(MapEditorGameManager)._2).typeHierarchyDepth;
			if (((((BaseGameManager)pUVar4.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseGameManager)pUVar4.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapEditorGameManager))) goto label_05c92edc;
			this._gameManager = (MapEditorGameManager)pUVar4;
			if (((((BaseGameManager)pUVar4.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseGameManager)pUVar4.klass)._2).typeHierarchy[(ulong)bVar1 - 1] != pIVar3)) goto label_05c92edc;
		}
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			pUVar4 = (MapEditorMenu)UIManager.CurrentMenu;
			pIVar3 = typeof(MapEditorMenu);
		}
		else {
			pUVar4 = (MapEditorMenu)UIManager.CurrentMenu;
			pIVar3 = typeof(MapEditorMenu);
		}
		typeof(MapEditorMenu) = (MapEditorMenu)pIVar3;
		if (pUVar4 == null) {
			this._menu = null;
	label_05c92eb3: ;
			pUVar2 = this.transform;
			this._transform = pUVar2;
			return;
		}
		bVar1 = (pIVar3._2).typeHierarchyDepth;
		if ((bVar1 <= (((BaseGameManager)pUVar4.klass)._2).typeHierarchyDepth) &&((((BaseGameManager)pUVar4.klass)._2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3)) {
			this._menu = pUVar4;
			if ((bVar1 <= (((BaseGameManager)pUVar4.klass)._2).typeHierarchyDepth) &&((((BaseGameManager)pUVar4.klass)._2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3)) goto label_05c92eb3;
		}
	label_05c92edc: ;
		throw new InvalidCastException();
	}

	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x5B92EF0", Offset = "0x5B91EF0", VA = "0x5B92EF0", Slot = "6")]
	protected virtual void Update()
	{
		// Lifted from source/cpp/MapEditor/BaseGizmo.c (MapEditor.BaseGizmo$$Update): clean
		uint uVar1;
		uint uVar2;
		BaseCamera pCVar3;
		BaseComponentCache pUVar4;
		Transform pUVar5;
		Camera pUVar6;
		bool bVar8;
		int iVar9;
		float fVar10;
		Vector3 UVar11;
		Vector3 UVar12;
		float local_28;
		float fStack_24;

		UVar11 = Input.mousePosition;
		this._PointerPosition_k__BackingField.x = UVar11.x;
		this._PointerPosition_k__BackingField.y = UVar11.y;
		this._PointerPosition_k__BackingField.z = UVar11.z;
		pCVar3 = SceneLoader.CurrentCamera;
		if (((pCVar3 != null) &&(pUVar4 = pCVar3.Cache, pUVar4 != null)) &&(pUVar5 = pUVar4.Transform, pUVar5 != null)) {
			UVar11 = pUVar5.position;
			pUVar5 = this._transform;
			if (pUVar5 != null) {
				UVar12 = pUVar5.position;
				fVar10 = UVar11.z - UVar12.z;
				local_28 = UVar11.x;
				fStack_24 = UVar11.y;
				local_28 = local_28 - UVar12.x;
				fStack_24 = fStack_24 - UVar12.y;
				fVar10 = fVar10 * fVar10 + fStack_24 * fStack_24 + local_28 * local_28;
				if (fVar10 < 0.0) {
					fVar10 = sqrtf(fVar10);
				}
				else {
					fVar10 = SQRT(fVar10);
				}
				pCVar3 = SceneLoader.CurrentCamera;
				if ((pCVar3 != null) &&(pUVar6 = pCVar3.Camera, pUVar6 != null)) {
					bVar8 = pUVar6.orthographic;
					if (bVar8) {
						pCVar3 = SceneLoader.CurrentCamera;
						if ((pCVar3 == null) ||(pUVar6 = pCVar3.Camera, pUVar6 == null)) goto label_05c9312d;
						fVar10 = pUVar6.orthographicSize;
						iVar9 = Screen.height;
						fVar10 = (fVar10 * 10.0) / (float)iVar9;
						pUVar5 = this._transform;
					}
					else {
						fVar10 = fVar10 / 200.0;
						pUVar5 = this._transform;
					}
					if (pUVar5 != null) {
						UVar11.z = (Vector3.oneVector).z * fVar10;
						uVar1 = (Vector3.oneVector).x;
						uVar2 = (Vector3.oneVector).y;
						UVar11.x = fVar10 * (float)uVar1;
						UVar11.y = fVar10 * (float)uVar2;
						pUVar5.localScale = UVar11;
						return;
					}
				}
			}
		}
	label_05c9312d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x5B93140", Offset = "0x5B92140", VA = "0x5B93140")]
	protected bool TryGetPointerDown(KeybindSetting selectKey, out Vector3 position)
	{
		// Lifted from source/cpp/MapEditor/BaseGizmo.c (MapEditor.BaseGizmo$$TryGetPointerDown): clean
		float fVar1;
		MapEditorMenu pUVar2;
		float fVar3;
		bool bVar4;
		bool bVar5;
		Vector3 UVar6;

		if (Il2CppMethodInitialized_075479e7 == false) {
			Il2CppMethodInitialized_075479e7 = true;
			if ((typeof(MobileMapEditorPointer)._2).cctor_finished_or_no_cctor == 0) goto label_05c9325f;
	label_05c93177: ;
			bVar4 = MobileMapEditorPointer.Enabled;
		}
		else {
			if ((typeof(MobileMapEditorPointer)._2).cctor_finished_or_no_cctor != 0) goto label_05c93177;
	label_05c9325f: ;
			bVar4 = MobileMapEditorPointer.Enabled;
		}
		if (!bVar4) {
			UVar6 = (Vector3)Input.mousePosition;
			position.fields = UVar6;
			this._PointerPosition_k__BackingField = UVar6;
			pUVar2 = this._menu;
			if (pUVar2 != null) {
				if (pUVar2.IsMouseUI != false) {
					return false;
				}
				if (selectKey != null) {
					bVar4 = selectKey.GetKeyDown(false);
					return bVar4;
				}
			}
	label_05c932e8: ;
			throw new NullReferenceException();
		}
		if (((typeof(MobileMapEditorPointer))._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar4 = MobileMapEditorPointer.TryGetGizmoPointerDown(position);
		if (bVar4) {
			pUVar2 = this._menu;
			if (pUVar2 == null) goto label_05c932e8;
			bVar4 = pUVar2.IsTouchUI((Vector3)position.fields);
			if (bVar4) {
				bVar4 = MobileMapEditorPointer.Enabled;
				if (bVar4) {
					MobileMapEditorPointer.CancelGizmoPointer();
				}
			}
			else {
				fVar3 = position.y;
				fVar1 = position.z;
				this._PointerPosition_k__BackingField.x = position.x;
				this._PointerPosition_k__BackingField.y = fVar3;
				this._PointerPosition_k__BackingField.z = fVar1;
			}
		}
		return bVar5;
	}

	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x5B93380", Offset = "0x5B92380", VA = "0x5B93380")]
	protected bool IsPointerHeld(KeybindSetting selectKey, out Vector3 position)
	{
		// Lifted from source/cpp/MapEditor/BaseGizmo.c (MapEditor.BaseGizmo$$IsPointerHeld): clean
		float fVar1;
		uint uVar2;
		float fVar3;
		bool bVar4;
		Vector3 UVar5;

		if (Il2CppMethodInitialized_075479e8 == false) {
			Il2CppMethodInitialized_075479e8 = true;
			uVar2 = (typeof(MobileMapEditorPointer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(MobileMapEditorPointer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			bVar4 = MobileMapEditorPointer.Enabled;
		}
		else {
			bVar4 = MobileMapEditorPointer.Enabled;
		}
		if (bVar4) {
			if (((typeof(MobileMapEditorPointer))._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar4 = MobileMapEditorPointer.TryGetGizmoPointerPosition(position);
			if (bVar4) {
				fVar3 = position.y;
				fVar1 = position.z;
				this._PointerPosition_k__BackingField.x = position.x;
				this._PointerPosition_k__BackingField.y = fVar3;
				this._PointerPosition_k__BackingField.z = fVar1;
			}
			return bVar4;
		}
		UVar5 = (Vector3)Input.mousePosition;
		position.fields = UVar5;
		this._PointerPosition_k__BackingField = UVar5;
		if (selectKey == null) {
			throw new NullReferenceException();
		}
		bVar4 = selectKey.GetKey(false);
		return bVar4;
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x5B932F0", Offset = "0x5B922F0", VA = "0x5B932F0")]
	protected void CancelPointer()
	{
		// Lifted from source/cpp/MapEditor/BaseGizmo.c (MapEditor.BaseGizmo$$CancelPointer): clean
		uint uVar1;
		bool bVar2;

		if (Il2CppMethodInitialized_075479e9 == false) {
			Il2CppMethodInitialized_075479e9 = true;
			uVar1 = (typeof(MobileMapEditorPointer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileMapEditorPointer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar2 = MobileMapEditorPointer.Enabled;
		}
		else {
			bVar2 = MobileMapEditorPointer.Enabled;
		}
		if (bVar2) {
			if (((typeof(MobileMapEditorPointer))._2).cctor_finished_or_no_cctor == 0) {
				MobileMapEditorPointer.CancelGizmoPointer();
				return;
			}
			MobileMapEditorPointer.CancelGizmoPointer();
			return;
		}
		return;
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x5B93490", Offset = "0x5B92490", VA = "0x5B93490", Slot = "7")]
	public virtual void OnSelectionChange()
	{
		// Lifted from source/cpp/MapEditor/BaseGizmo.c (MapEditor.BaseGizmo$$OnSelectionChange): clean
		return;
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x5B934A0", Offset = "0x5B924A0", VA = "0x5B934A0")]
	protected static bool HasSelectedAncestor(MapObject obj, HashSet<int> selectedIds)
	{
		// Lifted from source/cpp/MapEditor/BaseGizmo.c (MapEditor.BaseGizmo$$HasSelectedAncestor): clean
		Dictionary<int, object> pSVar1;
		bool bVar2;
		HashSet<int> __this;
		MapObject pMVar3;
		int item;

		if (obj == null) {
	label_05c936a5: ;
			throw new NullReferenceException();
		}
		item = obj.Parent;
		__this = new HashSet<int>();
		if (0 < item) {
			if (__this == null) goto label_05c936a5;
			if (selectedIds == null) {
				bVar2 = __this.Add(item);
				if (bVar2) {
					pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
					if ((pSVar1 == null) ||(bVar2 = pSVar1.ContainsKey(item))) goto label_05c936a5;
				}
			}
			else {
				do {
					bVar2 = __this.Add(item);
					if (!bVar2) {
						return false;
					}
					pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
					if (pSVar1 == null) goto label_05c936a5;
					bVar2 = pSVar1.ContainsKey(item);
					if (!bVar2) {
						return false;
					}
					bVar2 = selectedIds.Contains(item);
					if (bVar2) {
						return true;
					}
					pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
					if ((pSVar1 == null) ||(pMVar3 = pSVar1.get_Item(item), pMVar3 == null)) goto label_05c936a5;
					item = pMVar3.Parent;
				} while (0 < item);
			}
		}
		return false;
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x5B936B0", Offset = "0x5B926B0", VA = "0x5B936B0")]
	public BaseGizmo()
	{
		// Lifted from source/cpp/MapEditor/BaseGizmo.c (MapEditor.BaseGizmo$$.ctor): clean
		base();
		return;
	}
}
