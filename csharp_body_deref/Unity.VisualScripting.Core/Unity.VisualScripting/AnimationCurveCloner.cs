using System;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x2000005")]
public sealed class AnimationCurveCloner : Cloner<AnimationCurve>
{
	[Token(Token = "0x600000D")]
	[Address(RVA = "0x4979950", Offset = "0x4979950", VA = "0x4979950", Slot = "9")]
	public override bool Handles(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x49799C0", Offset = "0x49799C0", VA = "0x49799C0", Slot = "11")]
	public override AnimationCurve ConstructClone(Type type, AnimationCurve original)
	{
		return null;
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x4979A00", Offset = "0x4979A00", VA = "0x4979A00", Slot = "12")]
	public override void FillClone(Type type, ref AnimationCurve clone, AnimationCurve original, CloningContext context)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x4979B20", Offset = "0x4979B20", VA = "0x4979B20")]
	public AnimationCurveCloner()
	{
	}
}
