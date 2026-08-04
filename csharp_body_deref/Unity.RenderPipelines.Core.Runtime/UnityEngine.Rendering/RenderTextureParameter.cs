// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderTextureParameter
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
[Token(Token = "0x2000202")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class RenderTextureParameter : VolumeParameter<RenderTexture>
{
	[Token(Token = "0x6000E03")]
	[Address(RVA = "0x4C0C1B0", Offset = "0x4C0C1B0", VA = "0x4C0C1B0")]
	public RenderTextureParameter(RenderTexture value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000E04")]
	[Address(RVA = "0x4C0C200", Offset = "0x4C0C200", VA = "0x4C0C200", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
