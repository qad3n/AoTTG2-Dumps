using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001E3")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class LayerMaskParameter : VolumeParameter<LayerMask>
{
	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x48E5D70", Offset = "0x48E5D70", VA = "0x48E5D70")]
	public LayerMaskParameter(LayerMask value, bool overrideState = false)
	{
	}
}
