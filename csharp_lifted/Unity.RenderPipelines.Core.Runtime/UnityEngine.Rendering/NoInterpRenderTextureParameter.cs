// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.NoInterpRenderTextureParameter
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
[Token(Token = "0x2000221")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpRenderTextureParameter : VolumeParameter<RenderTexture>
{
	[Token(Token = "0x6000F64")]
	[Address(RVA = "0x6556940", Offset = "0x6555940", VA = "0x6556940")]
	public NoInterpRenderTextureParameter(RenderTexture value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000F65")]
	[Address(RVA = "0x6556990", Offset = "0x6555990", VA = "0x6556990", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
