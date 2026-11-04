// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapObject
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapObject.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapObject.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using CustomLogic;
using Il2CppDummyDll;
using UnityEngine;

namespace Map;

[Token(Token = "0x20003B4")]
internal class MapObject
{
	[Token(Token = "0x400135E")]
	[FieldOffset(Offset = "0x10")]
	public int Parent;

	[Token(Token = "0x400135F")]
	[FieldOffset(Offset = "0x18")]
	public GameObject GameObject;

	[Token(Token = "0x4001360")]
	[FieldOffset(Offset = "0x20")]
	public MapScriptBaseObject ScriptObject;

	[Token(Token = "0x4001361")]
	[FieldOffset(Offset = "0x28")]
	public Vector3 BaseScale;

	[Token(Token = "0x4001362")]
	[FieldOffset(Offset = "0x38")]
	public List<CustomLogicComponentInstance> ComponentInstances;

	[Token(Token = "0x4001363")]
	[FieldOffset(Offset = "0x40")]
	public Renderer[] renderCache;

	[Token(Token = "0x4001364")]
	[FieldOffset(Offset = "0x48")]
	public Collider[] colliderCache;

	[Token(Token = "0x4001365")]
	[FieldOffset(Offset = "0x50")]
	public bool RuntimeCreated;

	[Token(Token = "0x600177A")]
	[Address(RVA = "0x1EB53C0", Offset = "0x1EB39C0", VA = "0x181EB53C0")]
	public MapObject(int parent, GameObject gameObject, MapScriptBaseObject scriptObject)
	{
	}

	[Token(Token = "0x600177B")]
	[Address(RVA = "0x1EB5310", Offset = "0x1EB3910", VA = "0x181EB5310")]
	public void RegisterComponentInstance(CustomLogicComponentInstance instance)
	{
	}

	[Token(Token = "0x600177C")]
	[Address(RVA = "0x1EB51A0", Offset = "0x1EB37A0", VA = "0x181EB51A0")]
	public CustomLogicComponentInstance FindComponentInstance(string name)
	{
		return null;
	}
}
