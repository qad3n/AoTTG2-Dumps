// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapScriptBaseObject
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapScriptBaseObject.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptBaseObject.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Map;

[Token(Token = "0x20003B6")]
public class MapScriptBaseObject : BaseCSVRow
{
	[Token(Token = "0x4001371")]
	[FieldOffset(Offset = "0x10")]
	[Order(1)]
	public string Type;

	[Token(Token = "0x4001372")]
	[FieldOffset(Offset = "0x18")]
	[Order(2)]
	public string Asset;

	[Token(Token = "0x4001373")]
	[FieldOffset(Offset = "0x20")]
	[Order(3)]
	public int Id;

	[Token(Token = "0x4001374")]
	[FieldOffset(Offset = "0x24")]
	[Order(4)]
	public int Parent;

	[Token(Token = "0x4001375")]
	[FieldOffset(Offset = "0x28")]
	[Order(5)]
	public bool Active;

	[Token(Token = "0x4001376")]
	[FieldOffset(Offset = "0x29")]
	[Order(6)]
	public bool Static;

	[Token(Token = "0x4001377")]
	[FieldOffset(Offset = "0x2A")]
	[Order(7)]
	public bool Visible;

	[Token(Token = "0x4001378")]
	[FieldOffset(Offset = "0x2B")]
	[Order(8)]
	public bool Networked;

	[Token(Token = "0x4001379")]
	[FieldOffset(Offset = "0x30")]
	[Order(9)]
	public string Name;

	[Token(Token = "0x400137A")]
	[FieldOffset(Offset = "0x38")]
	[Order(10)]
	public float PositionX;

	[Token(Token = "0x400137B")]
	[FieldOffset(Offset = "0x3C")]
	[Order(11)]
	public float PositionY;

	[Token(Token = "0x400137C")]
	[FieldOffset(Offset = "0x40")]
	[Order(12)]
	public float PositionZ;

	[Token(Token = "0x400137D")]
	[FieldOffset(Offset = "0x44")]
	[Order(13)]
	public float RotationX;

	[Token(Token = "0x400137E")]
	[FieldOffset(Offset = "0x48")]
	[Order(14)]
	public float RotationY;

	[Token(Token = "0x400137F")]
	[FieldOffset(Offset = "0x4C")]
	[Order(15)]
	public float RotationZ;

	[Token(Token = "0x4001380")]
	[FieldOffset(Offset = "0x50")]
	[Order(16)]
	public float ScaleX;

	[Token(Token = "0x4001381")]
	[FieldOffset(Offset = "0x54")]
	[Order(17)]
	public float ScaleY;

	[Token(Token = "0x4001382")]
	[FieldOffset(Offset = "0x58")]
	[Order(18)]
	public float ScaleZ;

	[Token(Token = "0x6001787")]
	[Address(RVA = "0x1EB5560", Offset = "0x1EB3B60", VA = "0x181EB5560")]
	public void SetPosition(Vector3 position)
	{
	}

	[Token(Token = "0x6001788")]
	[Address(RVA = "0x1EB5610", Offset = "0x1EB3C10", VA = "0x181EB5610")]
	public void SetScale(Vector3 scale)
	{
	}

	[Token(Token = "0x6001789")]
	[Address(RVA = "0x1EB5580", Offset = "0x1EB3B80", VA = "0x181EB5580")]
	public void SetRotation(Vector3 rotation)
	{
	}

	[Token(Token = "0x600178A")]
	[Address(RVA = "0x1EB55A0", Offset = "0x1EB3BA0", VA = "0x181EB55A0")]
	public void SetRotation(Quaternion rotation)
	{
	}

	[Token(Token = "0x600178B")]
	[Address(RVA = "0x1EB5500", Offset = "0x1EB3B00", VA = "0x181EB5500")]
	public Vector3 GetPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x600178C")]
	[Address(RVA = "0x1EB5520", Offset = "0x1EB3B20", VA = "0x181EB5520")]
	public Vector3 GetRotation()
	{
		return default(Vector3);
	}

	[Token(Token = "0x600178D")]
	[Address(RVA = "0x1EB5540", Offset = "0x1EB3B40", VA = "0x181EB5540")]
	public Vector3 GetScale()
	{
		return default(Vector3);
	}

	[Token(Token = "0x600178E")]
	[Address(RVA = "0x1EB5630", Offset = "0x1EB3C30", VA = "0x181EB5630")]
	public MapScriptBaseObject()
	{
	}
}
