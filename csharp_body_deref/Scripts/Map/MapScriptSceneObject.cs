// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapScriptSceneObject
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapScriptSceneObject.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptSceneObject.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Utility;

namespace Map;

[Token(Token = "0x20003BC")]
public class MapScriptSceneObject : MapScriptBaseObject
{
	[Token(Token = "0x400138F")]
	[FieldOffset(Offset = "0x60")]
	[Order(19)]
	public string CollideMode;

	[Token(Token = "0x4001390")]
	[FieldOffset(Offset = "0x68")]
	[Order(20)]
	public string CollideWith;

	[Token(Token = "0x4001391")]
	[FieldOffset(Offset = "0x70")]
	[Order(21)]
	public string PhysicsMaterial;

	[Token(Token = "0x4001392")]
	[FieldOffset(Offset = "0x78")]
	[Order(22)]
	public MapScriptBaseMaterial Material;

	[Token(Token = "0x4001393")]
	[FieldOffset(Offset = "0x80")]
	[Order(23)]
	public List<MapScriptComponent> Components;

	[Token(Token = "0x600179F")]
	[Address(RVA = "0x1EDA710", Offset = "0x1ED8D10", VA = "0x181EDA710")]
	public MapScriptSceneObject()
	{
	}

	[Token(Token = "0x60017A0")]
	[Address(RVA = "0x1EDA660", Offset = "0x1ED8C60", VA = "0x181EDA660", Slot = "17")]
	protected override object DeserializeValue(Type t, string value)
	{
		return null;
	}

	[Token(Token = "0x60017A1")]
	[Address(RVA = "0x1EDA360", Offset = "0x1ED8960", VA = "0x181EDA360")]
	public static MapScriptBaseMaterial DeserializeMaterial(string value)
	{
		return null;
	}
}
