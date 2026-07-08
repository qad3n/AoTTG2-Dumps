using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Utility;

namespace Map;

[Token(Token = "0x2000243")]
public class MapScriptSceneObject : MapScriptBaseObject
{
	[Token(Token = "0x4000CA0")]
	[FieldOffset(Offset = "0x60")]
	[Order(19)]
	public string CollideMode;

	[Token(Token = "0x4000CA1")]
	[FieldOffset(Offset = "0x68")]
	[Order(20)]
	public string CollideWith;

	[Token(Token = "0x4000CA2")]
	[FieldOffset(Offset = "0x70")]
	[Order(21)]
	public string PhysicsMaterial;

	[Token(Token = "0x4000CA3")]
	[FieldOffset(Offset = "0x78")]
	[Order(22)]
	public MapScriptBaseMaterial Material;

	[Token(Token = "0x4000CA4")]
	[FieldOffset(Offset = "0x80")]
	[Order(23)]
	public List<MapScriptComponent> Components;

	[Token(Token = "0x6000DA2")]
	[Address(RVA = "0x3C9A7A0", Offset = "0x3C9A7A0", VA = "0x3C9A7A0")]
	public MapScriptSceneObject()
	{
	}

	[Token(Token = "0x6000DA3")]
	[Address(RVA = "0x3CB0010", Offset = "0x3CB0010", VA = "0x3CB0010", Slot = "17")]
	protected override object DeserializeValue(Type t, string value)
	{
		return null;
	}

	[Token(Token = "0x6000DA4")]
	[Address(RVA = "0x3C9A990", Offset = "0x3C9A990", VA = "0x3C9A990")]
	public static MapScriptBaseMaterial DeserializeMaterial(string value)
	{
		return null;
	}
}
