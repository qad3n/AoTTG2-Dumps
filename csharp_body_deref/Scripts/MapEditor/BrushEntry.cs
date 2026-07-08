using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace MapEditor;

[Token(Token = "0x2000101")]
public class BrushEntry
{
	[Token(Token = "0x40005FA")]
	[FieldOffset(Offset = "0x10")]
	public string AssetName;

	[Token(Token = "0x40005FB")]
	[FieldOffset(Offset = "0x18")]
	public float Weight;

	[Token(Token = "0x40005FC")]
	[FieldOffset(Offset = "0x1C")]
	public bool Advanced;

	[Token(Token = "0x40005FD")]
	[FieldOffset(Offset = "0x20")]
	public float ScaleMin;

	[Token(Token = "0x40005FE")]
	[FieldOffset(Offset = "0x24")]
	public float ScaleMax;

	[Token(Token = "0x40005FF")]
	[FieldOffset(Offset = "0x28")]
	public float YawMin;

	[Token(Token = "0x4000600")]
	[FieldOffset(Offset = "0x2C")]
	public float YawMax;

	[Token(Token = "0x4000601")]
	[FieldOffset(Offset = "0x30")]
	public float ScaleXMin;

	[Token(Token = "0x4000602")]
	[FieldOffset(Offset = "0x34")]
	public float ScaleXMax;

	[Token(Token = "0x4000603")]
	[FieldOffset(Offset = "0x38")]
	public float ScaleYMin;

	[Token(Token = "0x4000604")]
	[FieldOffset(Offset = "0x3C")]
	public float ScaleYMax;

	[Token(Token = "0x4000605")]
	[FieldOffset(Offset = "0x40")]
	public float ScaleZMin;

	[Token(Token = "0x4000606")]
	[FieldOffset(Offset = "0x44")]
	public float ScaleZMax;

	[Token(Token = "0x4000607")]
	[FieldOffset(Offset = "0x48")]
	public float RotXMin;

	[Token(Token = "0x4000608")]
	[FieldOffset(Offset = "0x4C")]
	public float RotXMax;

	[Token(Token = "0x4000609")]
	[FieldOffset(Offset = "0x50")]
	public float RotYMin;

	[Token(Token = "0x400060A")]
	[FieldOffset(Offset = "0x54")]
	public float RotYMax;

	[Token(Token = "0x400060B")]
	[FieldOffset(Offset = "0x58")]
	public float RotZMin;

	[Token(Token = "0x400060C")]
	[FieldOffset(Offset = "0x5C")]
	public float RotZMax;

	[Token(Token = "0x400060D")]
	[FieldOffset(Offset = "0x60")]
	public bool Active;

	[Token(Token = "0x400060E")]
	[FieldOffset(Offset = "0x61")]
	public bool Static;

	[Token(Token = "0x400060F")]
	[FieldOffset(Offset = "0x62")]
	public bool Visible;

	[Token(Token = "0x4000610")]
	[FieldOffset(Offset = "0x68")]
	public string CollideMode;

	[Token(Token = "0x4000611")]
	[FieldOffset(Offset = "0x70")]
	public string CollideWith;

	[Token(Token = "0x4000612")]
	[FieldOffset(Offset = "0x78")]
	public string PhysicsMaterial;

	[Token(Token = "0x4000613")]
	[FieldOffset(Offset = "0x80")]
	public string Shader;

	[Token(Token = "0x4000614")]
	[FieldOffset(Offset = "0x88")]
	public Color255 Color;

	[Token(Token = "0x4000615")]
	[FieldOffset(Offset = "0x90")]
	public Color255 ReflectColor;

	[Token(Token = "0x4000616")]
	[FieldOffset(Offset = "0x98")]
	public string Texture;

	[Token(Token = "0x4000617")]
	[FieldOffset(Offset = "0xA0")]
	public Vector2 Tiling;

	[Token(Token = "0x4000618")]
	[FieldOffset(Offset = "0xA8")]
	public Vector2 Offset;

	[Token(Token = "0x4000619")]
	[FieldOffset(Offset = "0xB0")]
	public float YOffset;

	[Token(Token = "0x6000518")]
	[Address(RVA = "0x3F3E330", Offset = "0x3F3E330", VA = "0x3F3E330")]
	public BrushEntry()
	{
	}
}
