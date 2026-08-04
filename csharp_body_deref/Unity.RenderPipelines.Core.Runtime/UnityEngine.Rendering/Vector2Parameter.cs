// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Vector2Parameter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4C0B9E0", Offset = "0x4C0B9E0", VA = "0x4C0B9E0")]
	public Vector2Parameter(Vector2 value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000DF2")]
	[Address(RVA = "0x4C0BA30", Offset = "0x4C0BA30", VA = "0x4C0BA30", Slot = "16")]
	public override void Interp(Vector2 from, Vector2 to, float t)
	{
	}
}
