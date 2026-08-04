// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchMotionTarget
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchMotionTarget.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x200009C")]
public readonly struct GisketchMotionTarget
{
	[Token(Token = "0x400032A")]
	[FieldOffset(Offset = "0x0")]
	public readonly GameObject GameObject;

	[Token(Token = "0x400032B")]
	[FieldOffset(Offset = "0x8")]
	public readonly GisketchMotionDefinition Enter;

	[Token(Token = "0x400032C")]
	[FieldOffset(Offset = "0x10")]
	public readonly GisketchMotionDefinition Exit;

	[Token(Token = "0x400032D")]
	[FieldOffset(Offset = "0x18")]
	public readonly Vector3 RestScale;

	[Token(Token = "0x400032E")]
	[FieldOffset(Offset = "0x24")]
	public readonly float RestAlpha;

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x3A89A50", Offset = "0x3A89A50", VA = "0x3A89A50")]
	public GisketchMotionTarget(GameObject gameObject, GisketchMotionDefinition enter, GisketchMotionDefinition exit)
	{
	}
}
