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

[Token(Token = "0x20000BC")]
public readonly struct GisketchMotionTarget
{
	[Token(Token = "0x40003D8")]
	[FieldOffset(Offset = "0x0")]
	public readonly GameObject GameObject;

	[Token(Token = "0x40003D9")]
	[FieldOffset(Offset = "0x8")]
	public readonly GisketchMotionDefinition Enter;

	[Token(Token = "0x40003DA")]
	[FieldOffset(Offset = "0x10")]
	public readonly GisketchMotionDefinition Exit;

	[Token(Token = "0x40003DB")]
	[FieldOffset(Offset = "0x18")]
	public readonly Vector3 RestScale;

	[Token(Token = "0x40003DC")]
	[FieldOffset(Offset = "0x24")]
	public readonly float RestAlpha;

	[Token(Token = "0x60005C9")]
	[Address(RVA = "0x1903200", Offset = "0x1901800", VA = "0x181903200")]
	public GisketchMotionTarget(GameObject gameObject, GisketchMotionDefinition enter, GisketchMotionDefinition exit)
	{
	}
}
