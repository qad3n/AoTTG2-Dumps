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
[Token(Token = "0x2000216")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class Vector2Parameter : VolumeParameter<Vector2>
{
	[Token(Token = "0x6000F50")]
	[Address(RVA = "0x2B64560", Offset = "0x2B62B60", VA = "0x182B64560")]
	public Vector2Parameter(Vector2 value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000F51")]
	[Address(RVA = "0x2B58800", Offset = "0x2B56E00", VA = "0x182B58800", Slot = "16")]
	public override void Interp(Vector2 from, Vector2 to, float t)
	{
	}
}
