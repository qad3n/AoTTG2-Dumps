// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapScriptSceneObject
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapScriptSceneObject.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptSceneObject.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Utility;

namespace Map;

[Token(Token = "0x200041B")]
public class MapScriptSceneObject : MapScriptBaseObject
{
	[Token(Token = "0x400152F")]
	[FieldOffset(Offset = "0x60")]
	[Order(19)]
	public string CollideMode;

	[Token(Token = "0x4001530")]
	[FieldOffset(Offset = "0x68")]
	[Order(20)]
	public string CollideWith;

	[Token(Token = "0x4001531")]
	[FieldOffset(Offset = "0x70")]
	[Order(21)]
	public string PhysicsMaterial;

	[Token(Token = "0x4001532")]
	[FieldOffset(Offset = "0x78")]
	[Order(22)]
	public MapScriptBaseMaterial Material;

	[Token(Token = "0x4001533")]
	[FieldOffset(Offset = "0x80")]
	[Order(23)]
	public List<MapScriptComponent> Components;

	[Token(Token = "0x6001A16")]
	[Address(RVA = "0x58A1DA0", Offset = "0x58A0DA0", VA = "0x58A1DA0")]
	public MapScriptSceneObject()
	{
		// Lifted from source/cpp/Map/MapScriptSceneObject.c (Map.MapScriptSceneObject$$.ctor): clean
		MapScriptBaseMaterial __this_00;
		MethodInfo pMVar1;

		this.CollideMode = MapObjectCollideMode.Physical;
		this.CollideWith = MapObjectCollideWith.Entities;
		pMVar1 = (MethodInfo *)"Default";
		this.PhysicsMaterial = "Default";
		__this_00 = new MapScriptBaseMaterial();
		this.Material = __this_00;
		pMVar1 = new List<MapScriptComponent>();
		this.Components = (List<MapScriptComponent>)pMVar1;
		base();
		this.Type = "Scene";
		return;
	}

	[Token(Token = "0x6001A17")]
	[Address(RVA = "0x58A4920", Offset = "0x58A3920", VA = "0x58A4920", Slot = "17")]
	protected override object DeserializeValue(Type t, string value)
	{
		// Lifted from source/cpp/Map/MapScriptSceneObject.c (Map.MapScriptSceneObject$$DeserializeValue): clean
		Il2CppType handle;
		bool bVar1;
		Type pSVar2;
		MapScriptBaseMaterial pMVar3;
		object pIVar4;

		handle = TypeRef_Map_MapScriptBaseMaterial;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		bVar1 = pSVar2.IsAssignableFrom(t);
		if (bVar1) {
			pMVar3 = MapScriptSceneObject.DeserializeMaterial(value);
			return (object)pMVar3;
		}
		pIVar4 = this.DeserializeValue(t, value);
		return pIVar4;
	}

	[Token(Token = "0x6001A18")]
	[Address(RVA = "0x58A49D0", Offset = "0x58A39D0", VA = "0x58A49D0")]
	public static MapScriptBaseMaterial DeserializeMaterial(string value)
	{
		// Lifted from source/cpp/Map/MapScriptSceneObject.c (Map.MapScriptSceneObject$$DeserializeMaterial): 4 lines keep C-only constructs
		String a;
		bool bVar1;
		ushort separator;
		MapScriptReflectiveMaterial __this;
		String[] pSVar2;
		MapScriptDefaultTiledMaterial* ppMVar3;
		MethodInfo pMVar4;

		__this = new MapScriptBasicMaterial();
		if (__this != null) {
			separator = __this.get_Delimiter();
			if (value == null) goto label_059a4c91;
			pSVar2 = value.Split(separator, 0);
			if (pSVar2 == null) goto label_059a4c91;
			if ((int)pSVar2.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			a = pSVar2[0];
			pMVar4 = (MethodInfo)MapObjectShader.Basic;
			bVar1 = (a == (String)pMVar4);
			if (!bVar1) {
				pMVar4 = (MethodInfo)MapObjectShader.Transparent;
				bVar1 = (a == (String)pMVar4);
				if (!bVar1) {
					pMVar4 = (MethodInfo)MapObjectShader.DefaultTiled;
					bVar1 = (a == (String)pMVar4);
					if (bVar1) {
						ppMVar3 = &typeof(MapScriptDefaultTiledMaterial);
					}
					else {
						pMVar4 = (MethodInfo)MapObjectShader.Reflective;
						bVar1 = (a == (String)pMVar4);
						if (bVar1) {
							pMVar4 = new Color255();
							__this.ReflectColor = (Color255)pMVar4;
							__this = new MapScriptBasicMaterial();
							goto label_059a4b20;
						}
						bVar1 = MapObjectShader.IsLegacyShader(a);
						if (!bVar1) goto label_059a4b20;
						ppMVar3 = (MapScriptDefaultTiledMaterial*)&typeof(MapScriptLegacyMaterial);
					}
					__this = (MapScriptReflectiveMaterial)il2cpp_codegen_object_new((Il2CppClass)*ppMVar3);
					__this.Texture =(String)(Vector2.oneVector);
					__this = new MapScriptBasicMaterial();
					goto label_059a4b20;
				}
			}
			__this = new MapScriptBasicMaterial();
			if (__this != null) {
	label_059a4b20: ;
				__this.Deserialize(value);
				return (MapScriptBaseMaterial)__this;
			}
		}
	label_059a4c91: ;
		throw new NullReferenceException();
	}
}
