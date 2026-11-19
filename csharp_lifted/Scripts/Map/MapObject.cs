// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapObject
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapObject.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapObject.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using CustomLogic;
using Il2CppDummyDll;
using UnityEngine;

namespace Map;

[Token(Token = "0x2000411")]
internal class MapObject
{
	[Token(Token = "0x40014F5")]
	[FieldOffset(Offset = "0x10")]
	public int Parent;

	[Token(Token = "0x40014F6")]
	[FieldOffset(Offset = "0x18")]
	public GameObject GameObject;

	[Token(Token = "0x40014F7")]
	[FieldOffset(Offset = "0x20")]
	public MapScriptBaseObject ScriptObject;

	[Token(Token = "0x40014F8")]
	[FieldOffset(Offset = "0x28")]
	public Vector3 BaseScale;

	[Token(Token = "0x40014F9")]
	[FieldOffset(Offset = "0x38")]
	public List<CustomLogicComponentInstance> ComponentInstances;

	[Token(Token = "0x40014FA")]
	[FieldOffset(Offset = "0x40")]
	public Renderer[] renderCache;

	[Token(Token = "0x40014FB")]
	[FieldOffset(Offset = "0x48")]
	public Collider[] colliderCache;

	[Token(Token = "0x40014FC")]
	[FieldOffset(Offset = "0x50")]
	public bool RuntimeCreated;

	[Token(Token = "0x60019E8")]
	[Address(RVA = "0x58A19E0", Offset = "0x58A09E0", VA = "0x58A19E0")]
	public MapObject(int parent, GameObject gameObject, MapScriptBaseObject scriptObject)
	{
		// Lifted from source/cpp/Map/MapObject.c (Map.MapObject$$.ctor): 4 lines keep C-only constructs
		GameObject* targetAddress;
		GameObject pUVar1;
		List<CustomLogicComponentInstance> __this_00;
		Collider[] pUVar2;
		Renderer[] pUVar3;

		__this_00 = il2cpp_codegen_object_new(typeof(List<CustomLogicComponentInstance>)) ;
		__this_00 = new List<object>();
		this.ComponentInstances = __this_00;
		base();
		this.Parent = parent;
		targetAddress = &this.GameObject;
		this.GameObject = gameObject;
		this.ScriptObject = scriptObject;
		pUVar1 = this.GameObject;
		if (pUVar1 != null) {
			pUVar2 = (Collider[])pUVar1.GetComponentsInChildren<Collider>();
			this.colliderCache = pUVar2;
			if (scriptObject != null) {
				if (scriptObject.Static == false) {
					pUVar1 = *targetAddress;
					if (pUVar1 == null) goto label_059a1b1f;
					pUVar3 = (Renderer[])pUVar1.GetComponentsInChildren<Renderer>();
				}
				else {
					pUVar3 = (Renderer[])new Renderer[0];
				}
				this.renderCache = pUVar3;
				return;
			}
		}
	label_059a1b1f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60019E9")]
	[Address(RVA = "0x58A1B30", Offset = "0x58A0B30", VA = "0x58A1B30")]
	public void RegisterComponentInstance(CustomLogicComponentInstance instance)
	{
		// Lifted from source/cpp/Map/MapObject.c (Map.MapObject$$RegisterComponentInstance): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<CustomLogicComponentInstance> __this_00;
		CustomLogicComponentInstance[] pCVar3;

		__this_00 = this.ComponentInstances;
		if (__this_00 != null) {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pCVar3 = __this_00._items;
			if (pCVar3 != null) {
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pCVar3.Length) {
					__this_00._size = uVar2 + 1;
					pCVar3[(int)uVar2] = instance;
					return;
				}
				__this_00.AddWithResize((object)instance);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60019EA")]
	[Address(RVA = "0x58A1BD0", Offset = "0x58A0BD0", VA = "0x58A1BD0")]
	public CustomLogicComponentInstance FindComponentInstance(string name)
	{
		// Lifted from source/cpp/Map/MapObject.c (Map.MapObject$$FindComponentInstance): 3 lines keep C-only constructs
		List<CustomLogicComponentInstance> __this_00;
		bool bVar1;
		String a;
		CustomLogicComponentInstance pCVar2;
		int iVar4;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_30;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		__this_00 = this.ComponentInstances;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_58 = __this_00.GetEnumerator();
		local_30 = (byte)&local_58;
		do {
			bVar1 = local_58.MoveNext();
			if (!bVar1) {
				iVar4 = 5;
				goto label_059a1cbc;
			}
			if ((CustomLogicComponentInstance)local_58._current ==null) {
				throw new NullReferenceException();
			}
			a = (*(((CustomLogicComponentInstance)(local_58._current).klass).vtable). _6_get_ClassName.methodPtr)(local_58._current,(((CustomLogicComponentInstance)(local_58._current).klass).vtable) ._6_get_ClassName.method);
			bVar1 = (a == name);
		} while (!bVar1);
		iVar4 = 4;
	label_059a1cbc: ;
		local_58.Dispose();
		if (iVar4 == 4) {
		}
		return pCVar2;
	}
}
