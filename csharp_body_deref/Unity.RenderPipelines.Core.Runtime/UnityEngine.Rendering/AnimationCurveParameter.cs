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
	[Address(RVA = "0x2B4FD80", Offset = "0x2B4E380", VA = "0x182B4FD80")]
	public AnimationCurveParameter(AnimationCurve value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000F78")]
	[Address(RVA = "0x2B4FCA0", Offset = "0x2B4E2A0", VA = "0x182B4FCA0", Slot = "16")]
	public override void Interp(AnimationCurve lhsCurve, AnimationCurve rhsCurve, float t)
	{
	}

	[Token(Token = "0x6000F79")]
	[Address(RVA = "0x2B4FCF0", Offset = "0x2B4E2F0", VA = "0x182B4FCF0", Slot = "8")]
	public override void SetValue(VolumeParameter parameter)
	{
	}

	[Token(Token = "0x6000F7A")]
	[Address(RVA = "0x2B4FB10", Offset = "0x2B4E110", VA = "0x182B4FB10", Slot = "12")]
	public override object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x2B4FC10", Offset = "0x2B4E210", VA = "0x182B4FC10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
