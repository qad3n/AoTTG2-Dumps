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
[Token(Token = "0x2000223")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpCubemapParameter : VolumeParameter<Cubemap>
{
	[Token(Token = "0x6000F68")]
	[Address(RVA = "0x2B5F6B0", Offset = "0x2B5DCB0", VA = "0x182B5F6B0")]
	public NoInterpCubemapParameter(Cubemap value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000F69")]
	[Address(RVA = "0x2B5F5C0", Offset = "0x2B5DBC0", VA = "0x182B5F5C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
