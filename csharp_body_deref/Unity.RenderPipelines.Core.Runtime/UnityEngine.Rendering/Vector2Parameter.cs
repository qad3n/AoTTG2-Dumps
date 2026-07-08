using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001F8")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class Vector2Parameter : VolumeParameter<Vector2>
{
	[Token(Token = "0x6000DF1")]
	[Address(RVA = "0x48E6970", Offset = "0x48E6970", VA = "0x48E6970")]
	public Vector2Parameter(Vector2 value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000DF2")]
	[Address(RVA = "0x48E69C0", Offset = "0x48E69C0", VA = "0x48E69C0", Slot = "16")]
	public override void Interp(Vector2 from, Vector2 to, float t)
	{
	}
}
