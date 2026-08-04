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

[Token(Token = "0x2000275")]
internal class MapObject
{
	[Token(Token = "0x4000D5C")]
	[FieldOffset(Offset = "0x10")]
	public int Parent;

	[Token(Token = "0x4000D5D")]
	[FieldOffset(Offset = "0x18")]
	public GameObject GameObject;

	[Token(Token = "0x4000D5E")]
	[FieldOffset(Offset = "0x20")]
	public MapScriptBaseObject ScriptObject;

	[Token(Token = "0x4000D5F")]
	[FieldOffset(Offset = "0x28")]
	public Vector3 BaseScale;

	[Token(Token = "0x4000D60")]
	[FieldOffset(Offset = "0x38")]
	public List<CustomLogicComponentInstance> ComponentInstances;

	[Token(Token = "0x4000D61")]
	[FieldOffset(Offset = "0x40")]
	public Renderer[] renderCache;

	[Token(Token = "0x4000D62")]
	[FieldOffset(Offset = "0x48")]
	public Collider[] colliderCache;

	[Token(Token = "0x4000D63")]
	[FieldOffset(Offset = "0x50")]
	public bool RuntimeCreated;

	[Token(Token = "0x6000F34")]
	[Address(RVA = "0x3FB4670", Offset = "0x3FB4670", VA = "0x3FB4670")]
	public MapObject(int parent, GameObject gameObject, MapScriptBaseObject scriptObject)
	{
	}

	[Token(Token = "0x6000F35")]
	[Address(RVA = "0x3FB47C0", Offset = "0x3FB47C0", VA = "0x3FB47C0")]
	public void RegisterComponentInstance(CustomLogicComponentInstance instance)
	{
	}

	[Token(Token = "0x6000F36")]
	[Address(RVA = "0x3FB4860", Offset = "0x3FB4860", VA = "0x3FB4860")]
	public CustomLogicComponentInstance FindComponentInstance(string name)
	{
		return null;
	}
}
