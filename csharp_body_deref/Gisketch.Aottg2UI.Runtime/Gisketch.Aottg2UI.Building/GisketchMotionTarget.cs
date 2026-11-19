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

[Token(Token = "0x20000C2")]
public readonly struct GisketchMotionTarget
{
	[Token(Token = "0x40003FF")]
	[FieldOffset(Offset = "0x0")]
	public readonly GameObject GameObject;

	[Token(Token = "0x4000400")]
	[FieldOffset(Offset = "0x8")]
	public readonly GisketchMotionDefinition Enter;

	[Token(Token = "0x4000401")]
	[FieldOffset(Offset = "0x10")]
	public readonly GisketchMotionDefinition Exit;

	[Token(Token = "0x4000402")]
	[FieldOffset(Offset = "0x18")]
	public readonly Vector3 RestScale;

	[Token(Token = "0x4000403")]
	[FieldOffset(Offset = "0x24")]
	public readonly float RestAlpha;

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x5293C50", Offset = "0x5292C50", VA = "0x5293C50")]
	public GisketchMotionTarget(GameObject gameObject, GisketchMotionDefinition enter, GisketchMotionDefinition exit)
	{
	}
}
