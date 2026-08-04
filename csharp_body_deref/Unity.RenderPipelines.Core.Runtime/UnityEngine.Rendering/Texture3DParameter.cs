// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Texture3DParameter
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
[Token(Token = "0x2000201")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class Texture3DParameter : VolumeParameter<Texture>
{
	[Token(Token = "0x6000E01")]
	[Address(RVA = "0x4C0C080", Offset = "0x4C0C080", VA = "0x4C0C080")]
	public Texture3DParameter(Texture value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000E02")]
	[Address(RVA = "0x4C0C0D0", Offset = "0x4C0C0D0", VA = "0x4C0C0D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
