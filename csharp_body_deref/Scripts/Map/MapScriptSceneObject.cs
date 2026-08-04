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

[Token(Token = "0x200027C")]
public class MapScriptSceneObject : MapScriptBaseObject
{
	[Token(Token = "0x4000D86")]
	[FieldOffset(Offset = "0x60")]
	[Order(19)]
	public string CollideMode;

	[Token(Token = "0x4000D87")]
	[FieldOffset(Offset = "0x68")]
	[Order(20)]
	public string CollideWith;

	[Token(Token = "0x4000D88")]
	[FieldOffset(Offset = "0x70")]
	[Order(21)]
	public string PhysicsMaterial;

	[Token(Token = "0x4000D89")]
	[FieldOffset(Offset = "0x78")]
	[Order(22)]
	public MapScriptBaseMaterial Material;

	[Token(Token = "0x4000D8A")]
	[FieldOffset(Offset = "0x80")]
	[Order(23)]
	public List<MapScriptComponent> Components;

	[Token(Token = "0x6000F4C")]
	[Address(RVA = "0x3FB4A00", Offset = "0x3FB4A00", VA = "0x3FB4A00")]
	public MapScriptSceneObject()
	{
	}

	[Token(Token = "0x6000F4D")]
	[Address(RVA = "0x3FB5FC0", Offset = "0x3FB5FC0", VA = "0x3FB5FC0", Slot = "17")]
	protected override object DeserializeValue(Type t, string value)
	{
		return null;
	}

	[Token(Token = "0x6000F4E")]
	[Address(RVA = "0x3FB6070", Offset = "0x3FB6070", VA = "0x3FB6070")]
	public static MapScriptBaseMaterial DeserializeMaterial(string value)
	{
		return null;
	}
}
