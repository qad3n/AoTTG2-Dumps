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
[Token(Token = "0x2000220")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class RenderTextureParameter : VolumeParameter<RenderTexture>
{
	[Token(Token = "0x6000F62")]
	[Address(RVA = "0x2B60C20", Offset = "0x2B5F220", VA = "0x182B60C20")]
	public RenderTextureParameter(RenderTexture value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000F63")]
	[Address(RVA = "0x2B60B30", Offset = "0x2B5F130", VA = "0x182B60B30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
