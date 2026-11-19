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
	}

	[Token(Token = "0x60019E9")]
	[Address(RVA = "0x58A1B30", Offset = "0x58A0B30", VA = "0x58A1B30")]
	public void RegisterComponentInstance(CustomLogicComponentInstance instance)
	{
	}

	[Token(Token = "0x60019EA")]
	[Address(RVA = "0x58A1BD0", Offset = "0x58A0BD0", VA = "0x58A1BD0")]
	public CustomLogicComponentInstance FindComponentInstance(string name)
	{
		return null;
	}
}
