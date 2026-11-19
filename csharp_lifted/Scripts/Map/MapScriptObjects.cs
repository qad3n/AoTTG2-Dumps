// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapScriptObjects
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Map/MapScriptObjects.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptObjects.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Utility;

namespace Map;

[Token(Token = "0x2000419")]
public class MapScriptObjects : BaseCSVContainer
{
	[Token(Token = "0x400152A")]
	[FieldOffset(Offset = "0x10")]
	public List<MapScriptBaseObject> Objects;

	[Token(Token = "0x400152B")]
	private const int MaxErrorRowLength = 80;

	[Token(Token = "0x6001A10")]
	[Address(RVA = "0x58A3700", Offset = "0x58A2700", VA = "0x58A3700")]
	public void DeserializeSkippingErrors(string csv, List<string> errors)
	{
		// Lifted from source/cpp/Map/MapScriptObjects.c (Map.MapScriptObjects$$DeserializeSkippingErrors): 5 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		int length;
		List<MapScriptBaseObject> pSVar3;
		MapScriptBaseObject[] pMVar4;
		Il2CppType handle;
		bool bVar6;
		ushort separator;
		uint uVar7;
		String[] pSVar8;
		String a;
		Type pSVar9;
		MapScriptBaseObject item;
		uint uVar10;

		pSVar3 = this.Objects;
		if (pSVar3 != null) {
			piVar1 = &pSVar3._version;
			*piVar1 = *piVar1 + 1;
			length = pSVar3._size;
			pSVar3._size = 0;
			if (0 < length) {
				Array.Clear((Array)pSVar3._items, 0, length);
			}
			separator = this.get_Delimiter();
			if (csv != null) {
				pSVar8 = csv.Split(separator, 0);
				if (pSVar8 != null) {
					uVar7 = (uint)pSVar8.Length;
					if (0 < (int)uVar7) {
						uVar10 = 0;
						do {
							if (uVar7 <= uVar10) {
								throw new IndexOutOfRangeException();
							}
							if (pSVar8[(int)uVar10] == null) goto label_059a3a4c;
							a = (pSVar8[(int)uVar10]).Trim();
							bVar6 = (a == (String)**(ulong*)(g_data_07556758 + 0xb8));
							handle = TypeRef_Map_MapScriptBaseObject;
							if (!bVar6) {
								pSVar3 = this.Objects;
								pSVar9 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
								item = (MapScriptBaseObject)this.DeserializeValue(pSVar9, a);
								if (pSVar3 == null) {
	label_059a3925: ;
									throw new NullReferenceException();
								}
								if (item != null) {
									bVar2 = (typeof(MapScriptBaseObject)._2).typeHierarchyDepth;
									if (((((Il2CppClass)item.klass)._2).typeHierarchyDepth < bVar2) ||((((Il2CppClass)item.klass)._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(MapScriptBaseObject))) {
										throw new InvalidCastException();
									}
								}
								piVar1 = &pSVar3._version;
								*piVar1 = *piVar1 + 1;
								pMVar4 = pSVar3._items;
								if (pMVar4 == null) goto label_059a3925;
								uVar7 = pSVar3._size;
								if (uVar7 < (uint)pMVar4.Length) {
									pSVar3._size = uVar7 + 1;
									pMVar4[(int)uVar7] = item;
								}
								else {
									pSVar3.AddWithResize((object)item);
								}
							}
							uVar10 = uVar10 + 1;
							uVar7 = (uint)pSVar8.Length;
						} while ((int)uVar10 < (int)uVar7);
					}
					return;
				}
			}
		}
	label_059a3a4c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001A11")]
	[Address(RVA = "0x58A4770", Offset = "0x58A3770", VA = "0x58A4770", Slot = "17")]
	protected override object DeserializeValue(Type t, string value)
	{
		// Lifted from source/cpp/Map/MapScriptObjects.c (Map.MapScriptObjects$$DeserializeValue): clean
		bool bVar1;
		ushort separator;
		MapScriptSceneObject __this_00;
		String[] pSVar2;
		MethodInfo method_00;

		__this_00 = new MapScriptSceneObject();
		if (__this_00 != null) {
			separator = __this_00.get_Delimiter();
			if (value != null) {
				pSVar2 = value.Split(separator, 0);
				if (pSVar2 != null) {
					if ((int)pSVar2.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					method_00 = (MethodInfo *)"Scene";
					bVar1 = (pSVar2[0] == "Scene");
					if (bVar1) {
						__this_00 = new MapScriptSceneObject();
						if (__this_00 == null) goto label_059a485b;
					}
					__this_00.Deserialize(value);
					return (object)__this_00;
				}
			}
		}
	label_059a485b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001A12")]
	[Address(RVA = "0x58A2ED0", Offset = "0x58A1ED0", VA = "0x58A2ED0")]
	public MapScriptObjects()
	{
		// Lifted from source/cpp/Map/MapScriptObjects.c (Map.MapScriptObjects$$.ctor): clean
		List<MapScriptBaseObject> __this_00;

		__this_00 = new List<MapScriptBaseObject>();
		this.Objects = __this_00;
		base();
		return;
	}
}
