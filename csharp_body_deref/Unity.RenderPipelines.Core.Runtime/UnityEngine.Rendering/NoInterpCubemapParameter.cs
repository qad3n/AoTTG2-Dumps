// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.NoInterpCubemapParameter
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
[Token(Token = "0x2000205")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpCubemapParameter : VolumeParameter<Cubemap>
{
	[Token(Token = "0x6000E09")]
	[Address(RVA = "0x4C0C540", Offset = "0x4C0C540", VA = "0x4C0C540")]
	public NoInterpCubemapParameter(Cubemap value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000E0A")]
	[Address(RVA = "0x4C0C590", Offset = "0x4C0C590", VA = "0x4C0C590", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
