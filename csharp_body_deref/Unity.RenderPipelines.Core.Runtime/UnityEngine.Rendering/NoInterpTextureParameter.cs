// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.NoInterpTextureParameter
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
[Token(Token = "0x200021D")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpTextureParameter : VolumeParameter<Texture>
{
	[Token(Token = "0x6000F5C")]
	[Address(RVA = "0x2B5FC30", Offset = "0x2B5E230", VA = "0x182B5FC30")]
	public NoInterpTextureParameter(Texture value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000F5D")]
	[Address(RVA = "0x2B5FB40", Offset = "0x2B5E140", VA = "0x182B5FB40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
