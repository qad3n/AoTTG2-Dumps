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
	}

	[Token(Token = "0x6001A17")]
	[Address(RVA = "0x58A4920", Offset = "0x58A3920", VA = "0x58A4920", Slot = "17")]
	protected override object DeserializeValue(Type t, string value)
	{
		return null;
	}

	[Token(Token = "0x6001A18")]
	[Address(RVA = "0x58A49D0", Offset = "0x58A39D0", VA = "0x58A49D0")]
	public static MapScriptBaseMaterial DeserializeMaterial(string value)
	{
		return null;
	}
}
