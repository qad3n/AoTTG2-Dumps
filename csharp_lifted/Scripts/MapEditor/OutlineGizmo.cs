// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.OutlineGizmo
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/OutlineGizmo.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/OutlineGizmo.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;

namespace MapEditor;

[Token(Token = "0x200014D")]
internal class OutlineGizmo : BaseGizmo
{
	[Token(Token = "0x400078B")]
	[FieldOffset(Offset = "0x48")]
	private Dictionary<MapObject, Outline> _outlines;

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x5B936C0", Offset = "0x5B926C0", VA = "0x5B936C0")]
	public static OutlineGizmo Create()
	{
		// Lifted from source/cpp/MapEditor/OutlineGizmo.c (MapEditor.OutlineGizmo$$Create): clean
		GameObject __this;
		OutlineGizmo pMVar1;

		__this = new GameObject();
		if (__this == null) {
			throw new NullReferenceException();
		}
		pMVar1 = __this.AddComponent<OutlineGizmo>();
		return pMVar1;
	}

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x5B93730", Offset = "0x5B92730", VA = "0x5B93730", Slot = "7")]
	public override void OnSelectionChange()
	{
		// Lifted from source/cpp/MapEditor/OutlineGizmo.c (MapEditor.OutlineGizmo$$OnSelectionChange): 7 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		MapEditorGameManager pGVar2;
		HashSet<object> pSVar3;
		MapObject obj;
		object obj_00;
		bool bVar4;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o collection;
		List<MapObject> __this_00;
		byte[] local_80 = new byte[16];
		MapObject local_70;
		byte[] local_68 = new byte[8];
		MapObject local_58;
		System_Collections_Generic_HashSet_Enumerator_T__o local_48;

		local_68 = (byte[])0x0;
		local_58 = null;
		local_48._set = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		pSVar1 = (Dictionary<object, object>)this._outlines;
		if (pSVar1 != null) {
			collection = pSVar1.Keys;
			__this_00 = new List<MapObject>((IEnumerable<T>)collection);
			if (__this_00 != null) {
				local_80.GetEnumerator((List<object>)__this_00);
				local_58 = local_70;
				local_68 = (byte[])local_80._0_8_;
				local_80._0_8_ = null;
				local_80._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_68;
				while(true) {
					bVar4 = local_68.MoveNext();
					obj = local_58;
					if (!bVar4) break;
					pGVar2 = this._gameManager;
					if (pGVar2 == null) {
						throw new NullReferenceException();
					}
					pSVar3 = (HashSet<object>)pGVar2.SelectedObjects;
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					bVar4 = pSVar3.Contains((object)local_58);
					if (!bVar4) {
						this.DestroyOutline(obj);
					}
				}
				local_68.Dispose();
				pGVar2 = this._gameManager;
				if ((pGVar2 != null) &&(pSVar3 = (HashSet<object>)pGVar2.SelectedObjects, pSVar3 != null)) {
					local_48 = pSVar3.GetEnumerator();
					local_80._0_8_ = null;
					local_80._8_8_ = &local_48;
					while(true) {
						bVar4 = local_48.MoveNext();
						obj_00 = local_48._current;
						if (!bVar4) {
							local_48.Dispose();
							return;
						}
						pSVar1 = (Dictionary<object, object>)this._outlines;
						if (pSVar1 == null) break;
						bVar4 = pSVar1.ContainsKey(local_48._current);
						if (!bVar4) {
							this.CreateOutline((MapObject)obj_00);
						}
					}
					throw new NullReferenceException();
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x5B93B40", Offset = "0x5B92B40", VA = "0x5B93B40")]
	private void CreateOutline(MapObject obj)
	{
		// Lifted from source/cpp/MapEditor/OutlineGizmo.c (MapEditor.OutlineGizmo$$CreateOutline): clean
		GameObject __this_00;
		Dictionary<object, object> __this_01;
		Outline __this_02;
		Color value;

		if ((obj != null) &&(__this_00 = obj.GameObject, __this_00 != null)) {
			__this_02 = __this_00.AddComponent<Outline>();
			if (__this_02 != null) {
				__this_02.OutlineMode = 5;
				value.b = 0.0;
				value.a = 1.0;
				value.r = 0.0;
				value.g = 1.0;
				__this_02.OutlineColor = value;
				__this_02.OutlineWidth = 3.0;
				__this_01 = (Dictionary<object, object>)this._outlines;
				if (__this_01 != null) {
					__this_01.Add((object)obj, (object)__this_02);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x5B93A90", Offset = "0x5B92A90", VA = "0x5B93A90")]
	private void DestroyOutline(MapObject obj)
	{
		// Lifted from source/cpp/MapEditor/OutlineGizmo.c (MapEditor.OutlineGizmo$$DestroyOutline): clean
		Dictionary<object, object> pSVar1;
		Outline obj_00;

		pSVar1 = (Dictionary<object, object>)this._outlines;
		if (pSVar1 != null) {
			obj_00 = pSVar1.get_Item((object)obj);
			Object.Destroy((Object)obj_00);
			pSVar1 = (Dictionary<object, object>)this._outlines;
			if (pSVar1 != null) {
				pSVar1.Remove((object)obj);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x5B93C00", Offset = "0x5B92C00", VA = "0x5B93C00")]
	public OutlineGizmo()
	{
		// Lifted from source/cpp/MapEditor/OutlineGizmo.c (MapEditor.OutlineGizmo$$.ctor): clean
		Dictionary<MapObject, Outline> __this_00;

		__this_00 = new Dictionary<MapObject, Outline>();
		this._outlines = __this_00;
		base();
		return;
	}
}
