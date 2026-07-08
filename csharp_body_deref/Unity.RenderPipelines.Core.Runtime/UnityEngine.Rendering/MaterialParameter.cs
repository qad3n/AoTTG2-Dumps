using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000209")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class MaterialParameter : VolumeParameter<Material>
{
	[Token(Token = "0x6000E1D")]
	[Address(RVA = "0x48E7890", Offset = "0x48E7890", VA = "0x48E7890")]
	public MaterialParameter(Material value, bool overrideState = false)
	{
	}
}
