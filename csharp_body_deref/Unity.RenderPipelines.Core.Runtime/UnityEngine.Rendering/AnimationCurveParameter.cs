using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000208")]
public class AnimationCurveParameter : VolumeParameter<AnimationCurve>
{
	[Token(Token = "0x6000E18")]
	[Address(RVA = "0x48E7600", Offset = "0x48E7600", VA = "0x48E7600")]
	public AnimationCurveParameter(AnimationCurve value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000E19")]
	[Address(RVA = "0x48E7650", Offset = "0x48E7650", VA = "0x48E7650", Slot = "16")]
	public override void Interp(AnimationCurve lhsCurve, AnimationCurve rhsCurve, float t)
	{
	}

	[Token(Token = "0x6000E1A")]
	[Address(RVA = "0x48E7690", Offset = "0x48E7690", VA = "0x48E7690", Slot = "8")]
	public override void SetValue(VolumeParameter parameter)
	{
	}

	[Token(Token = "0x6000E1B")]
	[Address(RVA = "0x48E7710", Offset = "0x48E7710", VA = "0x48E7710", Slot = "12")]
	public override object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000E1C")]
	[Address(RVA = "0x48E7800", Offset = "0x48E7800", VA = "0x48E7800", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
