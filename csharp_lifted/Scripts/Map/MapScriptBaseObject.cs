// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapScriptBaseObject
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapScriptBaseObject.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptBaseObject.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Map;

[Token(Token = "0x2000415")]
public class MapScriptBaseObject : BaseCSVRow
{
	[Token(Token = "0x400150F")]
	[FieldOffset(Offset = "0x10")]
	[Order(1)]
	public string Type;

	[Token(Token = "0x4001510")]
	[FieldOffset(Offset = "0x18")]
	[Order(2)]
	public string Asset;

	[Token(Token = "0x4001511")]
	[FieldOffset(Offset = "0x20")]
	[Order(3)]
	public int Id;

	[Token(Token = "0x4001512")]
	[FieldOffset(Offset = "0x24")]
	[Order(4)]
	public int Parent;

	[Token(Token = "0x4001513")]
	[FieldOffset(Offset = "0x28")]
	[Order(5)]
	public bool Active;

	[Token(Token = "0x4001514")]
	[FieldOffset(Offset = "0x29")]
	[Order(6)]
	public bool Static;

	[Token(Token = "0x4001515")]
	[FieldOffset(Offset = "0x2A")]
	[Order(7)]
	public bool Visible;

	[Token(Token = "0x4001516")]
	[FieldOffset(Offset = "0x2B")]
	[Order(8)]
	public bool Networked;

	[Token(Token = "0x4001517")]
	[FieldOffset(Offset = "0x30")]
	[Order(9)]
	public string Name;

	[Token(Token = "0x4001518")]
	[FieldOffset(Offset = "0x38")]
	[Order(10)]
	public float PositionX;

	[Token(Token = "0x4001519")]
	[FieldOffset(Offset = "0x3C")]
	[Order(11)]
	public float PositionY;

	[Token(Token = "0x400151A")]
	[FieldOffset(Offset = "0x40")]
	[Order(12)]
	public float PositionZ;

	[Token(Token = "0x400151B")]
	[FieldOffset(Offset = "0x44")]
	[Order(13)]
	public float RotationX;

	[Token(Token = "0x400151C")]
	[FieldOffset(Offset = "0x48")]
	[Order(14)]
	public float RotationY;

	[Token(Token = "0x400151D")]
	[FieldOffset(Offset = "0x4C")]
	[Order(15)]
	public float RotationZ;

	[Token(Token = "0x400151E")]
	[FieldOffset(Offset = "0x50")]
	[Order(16)]
	public float ScaleX;

	[Token(Token = "0x400151F")]
	[FieldOffset(Offset = "0x54")]
	[Order(17)]
	public float ScaleY;

	[Token(Token = "0x4001520")]
	[FieldOffset(Offset = "0x58")]
	[Order(18)]
	public float ScaleZ;

	[Token(Token = "0x60019FB")]
	[Address(RVA = "0x58A1F30", Offset = "0x58A0F30", VA = "0x58A1F30")]
	public void SetPosition(Vector3 position)
	{
		// Lifted from source/cpp/Map/MapScriptBaseObject.c (Map.MapScriptBaseObject$$SetPosition): clean
		this.PositionX = position.x;
		this.PositionY = position.y;
		this.PositionZ = position.z;
		return;
	}

	[Token(Token = "0x60019FC")]
	[Address(RVA = "0x58A1F20", Offset = "0x58A0F20", VA = "0x58A1F20")]
	public void SetScale(Vector3 scale)
	{
		// Lifted from source/cpp/Map/MapScriptBaseObject.c (Map.MapScriptBaseObject$$SetScale): clean
		this.ScaleX = scale.x;
		this.ScaleY = scale.y;
		this.ScaleZ = scale.z;
		return;
	}

	[Token(Token = "0x60019FD")]
	[Address(RVA = "0x58A3AA0", Offset = "0x58A2AA0", VA = "0x58A3AA0")]
	public void SetRotation(Vector3 rotation)
	{
		// Lifted from source/cpp/Map/MapScriptBaseObject.c (Map.MapScriptBaseObject$$SetRotation): clean
		this.RotationX = rotation.x;
		this.RotationY = rotation.y;
		this.RotationZ = rotation.z;
		return;
	}

	[Token(Token = "0x60019FE")]
	[Address(RVA = "0x58A1FF0", Offset = "0x58A0FF0", VA = "0x58A1FF0")]
	public void SetRotation(Quaternion rotation)
	{
		// Lifted from source/cpp/Map/MapScriptBaseObject.c (Map.MapScriptBaseObject$$SetRotation): clean
		Vector3 UVar1;
		Vector3 euler;
		Quaternion local_18;

		local_18 = rotation;
		UVar1 = Quaternion.Internal_ToEulerRad(ref local_18);
		euler.x = UVar1.x * 57.29578;
		euler.y = UVar1.y * 57.29578;
		euler.z = UVar1.z * 57.29578;
		UVar1 = Quaternion.Internal_MakePositive(euler);
		this.RotationX = UVar1.x;
		this.RotationY = UVar1.y;
		this.RotationZ = UVar1.z;
		return;
	}

	[Token(Token = "0x60019FF")]
	[Address(RVA = "0x58A3AB0", Offset = "0x58A2AB0", VA = "0x58A3AB0")]
	public Vector3 GetPosition()
	{
		// Lifted from source/cpp/Map/MapScriptBaseObject.c (Map.MapScriptBaseObject$$GetPosition): clean
		Vector3 UVar1;

		UVar1.x = this.PositionX;
		UVar1.y = this.PositionY;
		UVar1.z = this.PositionZ;
		return (Vector3)UVar1;
	}

	[Token(Token = "0x6001A00")]
	[Address(RVA = "0x58A3AC0", Offset = "0x58A2AC0", VA = "0x58A3AC0")]
	public Vector3 GetRotation()
	{
		// Lifted from source/cpp/Map/MapScriptBaseObject.c (Map.MapScriptBaseObject$$GetRotation): clean
		Vector3 UVar1;

		UVar1.x = this.RotationX;
		UVar1.y = this.RotationY;
		UVar1.z = this.RotationZ;
		return (Vector3)UVar1;
	}

	[Token(Token = "0x6001A01")]
	[Address(RVA = "0x58A3AD0", Offset = "0x58A2AD0", VA = "0x58A3AD0")]
	public Vector3 GetScale()
	{
		// Lifted from source/cpp/Map/MapScriptBaseObject.c (Map.MapScriptBaseObject$$GetScale): clean
		Vector3 UVar1;

		UVar1.x = this.ScaleX;
		UVar1.y = this.ScaleY;
		UVar1.z = this.ScaleZ;
		return (Vector3)UVar1;
	}

	[Token(Token = "0x6001A02")]
	[Address(RVA = "0x58A3AE0", Offset = "0x58A2AE0", VA = "0x58A3AE0")]
	public MapScriptBaseObject()
	{
		// Lifted from source/cpp/Map/MapScriptBaseObject.c (Map.MapScriptBaseObject$$.ctor): clean
		this.Asset = "None";
		this.Parent = MapLoader.ROOT_OBJECT_ID;
		this.Active = true;
		this.Static = true;
		this.Visible = true;
		this.Name = "Unnamed";
		this.ScaleX = 1.0;
		this.ScaleY = 1.0;
		this.ScaleZ = 1.0;
		base();
		return;
	}
}
