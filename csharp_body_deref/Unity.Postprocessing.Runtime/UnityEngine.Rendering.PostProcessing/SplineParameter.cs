using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x2000058")]
public sealed class SplineParameter : ParameterOverride<Spline>
{
	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x4826610", Offset = "0x4826610", VA = "0x4826610", Slot = "6")]
	protected internal override void OnEnable()
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x4826630", Offset = "0x4826630", VA = "0x4826630", Slot = "8")]
	internal override void SetValue(ParameterOverride parameter)
	{
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x48266A0", Offset = "0x48266A0", VA = "0x48266A0", Slot = "9")]
	public override void Interp(Spline from, Spline to, float t)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x48267D0", Offset = "0x48267D0", VA = "0x48267D0")]
	public SplineParameter()
	{
	}
}
