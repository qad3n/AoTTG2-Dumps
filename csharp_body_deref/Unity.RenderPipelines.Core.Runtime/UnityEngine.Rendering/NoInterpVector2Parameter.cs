using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001F9")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpVector2Parameter : VolumeParameter<Vector2>
{
	[Token(Token = "0x6000DF3")]
	[Address(RVA = "0x48E69F0", Offset = "0x48E69F0", VA = "0x48E69F0")]
	public NoInterpVector2Parameter(Vector2 value, bool overrideState = false)
	{
	}
}
