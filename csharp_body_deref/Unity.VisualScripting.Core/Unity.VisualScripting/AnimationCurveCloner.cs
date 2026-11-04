// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.AnimationCurveCloner
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x2000004")]
public sealed class AnimationCurveCloner : Cloner<AnimationCurve>
{
	[Token(Token = "0x600000C")]
	[Address(RVA = "0x2D98F90", Offset = "0x2D97590", VA = "0x182D98F90", Slot = "9")]
	public override bool Handles(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x2D98E70", Offset = "0x2D97470", VA = "0x182D98E70", Slot = "11")]
	public override AnimationCurve ConstructClone(Type type, AnimationCurve original)
	{
		return null;
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x2D98EC0", Offset = "0x2D974C0", VA = "0x182D98EC0", Slot = "12")]
	public override void FillClone(Type type, ref AnimationCurve clone, AnimationCurve original, CloningContext context)
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x2D99000", Offset = "0x2D97600", VA = "0x182D99000")]
	public AnimationCurveCloner()
	{
	}
}
