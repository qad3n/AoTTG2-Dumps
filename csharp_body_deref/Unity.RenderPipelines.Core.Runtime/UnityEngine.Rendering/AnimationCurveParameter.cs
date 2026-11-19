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
[Token(Token = "0x2000226")]
public class AnimationCurveParameter : VolumeParameter<AnimationCurve>
{
	[Token(Token = "0x6000F77")]
	[Address(RVA = "0x6556CD0", Offset = "0x6555CD0", VA = "0x6556CD0")]
	public AnimationCurveParameter(AnimationCurve value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000F78")]
	[Address(RVA = "0x6556D20", Offset = "0x6555D20", VA = "0x6556D20", Slot = "16")]
	public override void Interp(AnimationCurve lhsCurve, AnimationCurve rhsCurve, float t)
	{
	}

	[Token(Token = "0x6000F79")]
	[Address(RVA = "0x6556D60", Offset = "0x6555D60", VA = "0x6556D60", Slot = "8")]
	public override void SetValue(VolumeParameter parameter)
	{
	}

	[Token(Token = "0x6000F7A")]
	[Address(RVA = "0x6556DE0", Offset = "0x6555DE0", VA = "0x6556DE0", Slot = "12")]
	public override object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x6556ED0", Offset = "0x6555ED0", VA = "0x6556ED0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
