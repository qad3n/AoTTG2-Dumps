// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CubemapParameter
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
[Token(Token = "0x2000204")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class CubemapParameter : VolumeParameter<Texture>
{
	[Token(Token = "0x6000E07")]
	[Address(RVA = "0x4C0C410", Offset = "0x4C0C410", VA = "0x4C0C410")]
	public CubemapParameter(Texture value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000E08")]
	[Address(RVA = "0x4C0C460", Offset = "0x4C0C460", VA = "0x4C0C460", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
