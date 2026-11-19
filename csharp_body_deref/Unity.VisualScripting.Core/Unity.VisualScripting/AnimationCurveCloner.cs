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
	[Address(RVA = "0x678D830", Offset = "0x678C830", VA = "0x678D830", Slot = "9")]
	public override bool Handles(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x678D8A0", Offset = "0x678C8A0", VA = "0x678D8A0", Slot = "11")]
	public override AnimationCurve ConstructClone(Type type, AnimationCurve original)
	{
		return null;
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x678D8E0", Offset = "0x678C8E0", VA = "0x678D8E0", Slot = "12")]
	public override void FillClone(Type type, ref AnimationCurve clone, AnimationCurve original, CloningContext context)
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x678D9D0", Offset = "0x678C9D0", VA = "0x678D9D0")]
	public AnimationCurveCloner()
	{
	}
}
