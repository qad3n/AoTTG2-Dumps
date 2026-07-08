using System;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Serializable]
[Token(Token = "0x200009D")]
public struct Mesh_Extents
{
	[Token(Token = "0x4000556")]
	[FieldOffset(Offset = "0x0")]
	public Vector2 min;

	[Token(Token = "0x4000557")]
	[FieldOffset(Offset = "0x8")]
	public Vector2 max;

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x4967780", Offset = "0x4967780", VA = "0x4967780")]
	public Mesh_Extents(Vector2 min, Vector2 max)
	{
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x4967790", Offset = "0x4967790", VA = "0x4967790", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
