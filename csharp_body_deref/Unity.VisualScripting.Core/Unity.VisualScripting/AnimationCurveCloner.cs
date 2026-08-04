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

[Token(Token = "0x2000005")]
public sealed class AnimationCurveCloner : Cloner<AnimationCurve>
{
	[Token(Token = "0x600000D")]
	[Address(RVA = "0x4C9E520", Offset = "0x4C9E520", VA = "0x4C9E520", Slot = "9")]
	public override bool Handles(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x4C9E590", Offset = "0x4C9E590", VA = "0x4C9E590", Slot = "11")]
	public override AnimationCurve ConstructClone(Type type, AnimationCurve original)
	{
		return null;
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x4C9E5D0", Offset = "0x4C9E5D0", VA = "0x4C9E5D0", Slot = "12")]
	public override void FillClone(Type type, ref AnimationCurve clone, AnimationCurve original, CloningContext context)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x4C9E6F0", Offset = "0x4C9E6F0", VA = "0x4C9E6F0")]
	public AnimationCurveCloner()
	{
	}
}
