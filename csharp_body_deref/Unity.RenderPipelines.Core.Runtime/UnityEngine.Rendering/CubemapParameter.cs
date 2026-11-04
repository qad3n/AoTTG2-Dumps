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
[Token(Token = "0x2000222")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class CubemapParameter : VolumeParameter<Texture>
{
	[Token(Token = "0x6000F66")]
	[Address(RVA = "0x2B579A0", Offset = "0x2B55FA0", VA = "0x182B579A0")]
	public CubemapParameter(Texture value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000F67")]
	[Address(RVA = "0x2B578B0", Offset = "0x2B55EB0", VA = "0x182B578B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
