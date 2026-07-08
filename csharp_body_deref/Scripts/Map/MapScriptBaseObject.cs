using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Map;

[Token(Token = "0x200023E")]
public class MapScriptBaseObject : BaseCSVRow
{
	[Token(Token = "0x4000C87")]
	[FieldOffset(Offset = "0x10")]
	[Order(1)]
	public string Type;

	[Token(Token = "0x4000C88")]
	[FieldOffset(Offset = "0x18")]
	[Order(2)]
	public string Asset;

	[Token(Token = "0x4000C89")]
	[FieldOffset(Offset = "0x20")]
	[Order(3)]
	public int Id;

	[Token(Token = "0x4000C8A")]
	[FieldOffset(Offset = "0x24")]
	[Order(4)]
	public int Parent;

	[Token(Token = "0x4000C8B")]
	[FieldOffset(Offset = "0x28")]
	[Order(5)]
	public bool Active;

	[Token(Token = "0x4000C8C")]
	[FieldOffset(Offset = "0x29")]
	[Order(6)]
	public bool Static;

	[Token(Token = "0x4000C8D")]
	[FieldOffset(Offset = "0x2A")]
	[Order(7)]
	public bool Visible;

	[Token(Token = "0x4000C8E")]
	[FieldOffset(Offset = "0x2B")]
	[Order(8)]
	public bool Networked;

	[Token(Token = "0x4000C8F")]
	[FieldOffset(Offset = "0x30")]
	[Order(9)]
	public string Name;

	[Token(Token = "0x4000C90")]
	[FieldOffset(Offset = "0x38")]
	[Order(10)]
	public float PositionX;

	[Token(Token = "0x4000C91")]
	[FieldOffset(Offset = "0x3C")]
	[Order(11)]
	public float PositionY;

	[Token(Token = "0x4000C92")]
	[FieldOffset(Offset = "0x40")]
	[Order(12)]
	public float PositionZ;

	[Token(Token = "0x4000C93")]
	[FieldOffset(Offset = "0x44")]
	[Order(13)]
	public float RotationX;

	[Token(Token = "0x4000C94")]
	[FieldOffset(Offset = "0x48")]
	[Order(14)]
	public float RotationY;

	[Token(Token = "0x4000C95")]
	[FieldOffset(Offset = "0x4C")]
	[Order(15)]
	public float RotationZ;

	[Token(Token = "0x4000C96")]
	[FieldOffset(Offset = "0x50")]
	[Order(16)]
	public float ScaleX;

	[Token(Token = "0x4000C97")]
	[FieldOffset(Offset = "0x54")]
	[Order(17)]
	public float ScaleY;

	[Token(Token = "0x4000C98")]
	[FieldOffset(Offset = "0x58")]
	[Order(18)]
	public float ScaleZ;

	[Token(Token = "0x6000D93")]
	[Address(RVA = "0x3C9BD10", Offset = "0x3C9BD10", VA = "0x3C9BD10")]
	public void SetPosition(Vector3 position)
	{
	}

	[Token(Token = "0x6000D94")]
	[Address(RVA = "0x3C9BCF0", Offset = "0x3C9BCF0", VA = "0x3C9BCF0")]
	public void SetScale(Vector3 scale)
	{
	}

	[Token(Token = "0x6000D95")]
	[Address(RVA = "0x3C9C390", Offset = "0x3C9C390", VA = "0x3C9C390")]
	public void SetRotation(Vector3 rotation)
	{
	}

	[Token(Token = "0x6000D96")]
	[Address(RVA = "0x3C9BED0", Offset = "0x3C9BED0", VA = "0x3C9BED0")]
	public void SetRotation(Quaternion rotation)
	{
	}

	[Token(Token = "0x6000D97")]
	[Address(RVA = "0x3C9F490", Offset = "0x3C9F490", VA = "0x3C9F490")]
	public Vector3 GetPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000D98")]
	[Address(RVA = "0x3C9F4A0", Offset = "0x3C9F4A0", VA = "0x3C9F4A0")]
	public Vector3 GetRotation()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000D99")]
	[Address(RVA = "0x3CAFDC0", Offset = "0x3CAFDC0", VA = "0x3CAFDC0")]
	public Vector3 GetScale()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000D9A")]
	[Address(RVA = "0x3CAFDD0", Offset = "0x3CAFDD0", VA = "0x3CAFDD0")]
	public MapScriptBaseObject()
	{
	}
}
