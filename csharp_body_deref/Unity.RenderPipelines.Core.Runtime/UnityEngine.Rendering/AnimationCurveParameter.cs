// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.AnimationCurveParameter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000208")]
public class AnimationCurveParameter : VolumeParameter<AnimationCurve>
{
	[Token(Token = "0x6000E18")]
	[Address(RVA = "0x4C0C670", Offset = "0x4C0C670", VA = "0x4C0C670")]
	public AnimationCurveParameter(AnimationCurve value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000E19")]
	[Address(RVA = "0x4C0C6C0", Offset = "0x4C0C6C0", VA = "0x4C0C6C0", Slot = "16")]
	public override void Interp(AnimationCurve lhsCurve, AnimationCurve rhsCurve, float t)
	{
	}

	[Token(Token = "0x6000E1A")]
	[Address(RVA = "0x4C0C700", Offset = "0x4C0C700", VA = "0x4C0C700", Slot = "8")]
	public override void SetValue(VolumeParameter parameter)
	{
	}

	[Token(Token = "0x6000E1B")]
	[Address(RVA = "0x4C0C780", Offset = "0x4C0C780", VA = "0x4C0C780", Slot = "12")]
	public override object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000E1C")]
	[Address(RVA = "0x4C0C870", Offset = "0x4C0C870", VA = "0x4C0C870", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
