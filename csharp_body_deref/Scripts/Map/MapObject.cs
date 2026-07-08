using System.Collections.Generic;
using CustomLogic;
using Il2CppDummyDll;
using UnityEngine;

namespace Map;

[Token(Token = "0x200023C")]
internal class MapObject
{
	[Token(Token = "0x4000C76")]
	[FieldOffset(Offset = "0x10")]
	public int Parent;

	[Token(Token = "0x4000C77")]
	[FieldOffset(Offset = "0x18")]
	public GameObject GameObject;

	[Token(Token = "0x4000C78")]
	[FieldOffset(Offset = "0x20")]
	public MapScriptBaseObject ScriptObject;

	[Token(Token = "0x4000C79")]
	[FieldOffset(Offset = "0x28")]
	public Vector3 BaseScale;

	[Token(Token = "0x4000C7A")]
	[FieldOffset(Offset = "0x38")]
	public List<CustomLogicComponentInstance> ComponentInstances;

	[Token(Token = "0x4000C7B")]
	[FieldOffset(Offset = "0x40")]
	public Renderer[] renderCache;

	[Token(Token = "0x4000C7C")]
	[FieldOffset(Offset = "0x48")]
	public Collider[] colliderCache;

	[Token(Token = "0x4000C7D")]
	[FieldOffset(Offset = "0x50")]
	public bool RuntimeCreated;

	[Token(Token = "0x6000D8A")]
	[Address(RVA = "0x3CA0A90", Offset = "0x3CA0A90", VA = "0x3CA0A90")]
	public MapObject(int parent, GameObject gameObject, MapScriptBaseObject scriptObject)
	{
	}

	[Token(Token = "0x6000D8B")]
	[Address(RVA = "0x3CAEC10", Offset = "0x3CAEC10", VA = "0x3CAEC10")]
	public void RegisterComponentInstance(CustomLogicComponentInstance instance)
	{
	}

	[Token(Token = "0x6000D8C")]
	[Address(RVA = "0x3CAECB0", Offset = "0x3CAECB0", VA = "0x3CAECB0")]
	public CustomLogicComponentInstance FindComponentInstance(string name)
	{
		return null;
	}
}
