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

[Token(Token = "0x2000277")]
public class MapScriptBaseObject : BaseCSVRow
{
	[Token(Token = "0x4000D6D")]
	[FieldOffset(Offset = "0x10")]
	[Order(1)]
	public string Type;

	[Token(Token = "0x4000D6E")]
	[FieldOffset(Offset = "0x18")]
	[Order(2)]
	public string Asset;

	[Token(Token = "0x4000D6F")]
	[FieldOffset(Offset = "0x20")]
	[Order(3)]
	public int Id;

	[Token(Token = "0x4000D70")]
	[FieldOffset(Offset = "0x24")]
	[Order(4)]
	public int Parent;

	[Token(Token = "0x4000D71")]
	[FieldOffset(Offset = "0x28")]
	[Order(5)]
	public bool Active;

	[Token(Token = "0x4000D72")]
	[FieldOffset(Offset = "0x29")]
	[Order(6)]
	public bool Static;

	[Token(Token = "0x4000D73")]
	[FieldOffset(Offset = "0x2A")]
	[Order(7)]
	public bool Visible;

	[Token(Token = "0x4000D74")]
	[FieldOffset(Offset = "0x2B")]
	[Order(8)]
	public bool Networked;

	[Token(Token = "0x4000D75")]
	[FieldOffset(Offset = "0x30")]
	[Order(9)]
	public string Name;

	[Token(Token = "0x4000D76")]
	[FieldOffset(Offset = "0x38")]
	[Order(10)]
	public float PositionX;

	[Token(Token = "0x4000D77")]
	[FieldOffset(Offset = "0x3C")]
	[Order(11)]
	public float PositionY;

	[Token(Token = "0x4000D78")]
	[FieldOffset(Offset = "0x40")]
	[Order(12)]
	public float PositionZ;

	[Token(Token = "0x4000D79")]
	[FieldOffset(Offset = "0x44")]
	[Order(13)]
	public float RotationX;

	[Token(Token = "0x4000D7A")]
	[FieldOffset(Offset = "0x48")]
	[Order(14)]
	public float RotationY;

	[Token(Token = "0x4000D7B")]
	[FieldOffset(Offset = "0x4C")]
	[Order(15)]
	public float RotationZ;

	[Token(Token = "0x4000D7C")]
	[FieldOffset(Offset = "0x50")]
	[Order(16)]
	public float ScaleX;

	[Token(Token = "0x4000D7D")]
	[FieldOffset(Offset = "0x54")]
	[Order(17)]
	public float ScaleY;

	[Token(Token = "0x4000D7E")]
	[FieldOffset(Offset = "0x58")]
	[Order(18)]
	public float ScaleZ;

	[Token(Token = "0x6000F3D")]
	[Address(RVA = "0x3FB4C10", Offset = "0x3FB4C10", VA = "0x3FB4C10")]
	public void SetPosition(Vector3 position)
	{
	}

	[Token(Token = "0x6000F3E")]
	[Address(RVA = "0x3FB4BF0", Offset = "0x3FB4BF0", VA = "0x3FB4BF0")]
	public void SetScale(Vector3 scale)
	{
	}

	[Token(Token = "0x6000F3F")]
	[Address(RVA = "0x3FB5C90", Offset = "0x3FB5C90", VA = "0x3FB5C90")]
	public void SetRotation(Vector3 rotation)
	{
	}

	[Token(Token = "0x6000F40")]
	[Address(RVA = "0x3FB4CE0", Offset = "0x3FB4CE0", VA = "0x3FB4CE0")]
	public void SetRotation(Quaternion rotation)
	{
	}

	[Token(Token = "0x6000F41")]
	[Address(RVA = "0x3FB5CB0", Offset = "0x3FB5CB0", VA = "0x3FB5CB0")]
	public Vector3 GetPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000F42")]
	[Address(RVA = "0x3FB5CC0", Offset = "0x3FB5CC0", VA = "0x3FB5CC0")]
	public Vector3 GetRotation()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000F43")]
	[Address(RVA = "0x3FB5CD0", Offset = "0x3FB5CD0", VA = "0x3FB5CD0")]
	public Vector3 GetScale()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000F44")]
	[Address(RVA = "0x3FB5CE0", Offset = "0x3FB5CE0", VA = "0x3FB5CE0")]
	public MapScriptBaseObject()
	{
	}
}
