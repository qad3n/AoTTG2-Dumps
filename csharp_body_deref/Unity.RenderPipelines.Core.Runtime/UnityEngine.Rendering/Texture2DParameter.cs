// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Texture2DParameter
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
[Token(Token = "0x2000200")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class Texture2DParameter : VolumeParameter<Texture>
{
	[Token(Token = "0x6000DFF")]
	[Address(RVA = "0x4C0BF50", Offset = "0x4C0BF50", VA = "0x4C0BF50")]
	public Texture2DParameter(Texture value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000E00")]
	[Address(RVA = "0x4C0BFA0", Offset = "0x4C0BFA0", VA = "0x4C0BFA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
