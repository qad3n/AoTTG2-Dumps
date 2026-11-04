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
[Token(Token = "0x200021F")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class Texture3DParameter : VolumeParameter<Texture>
{
	[Token(Token = "0x6000F60")]
	[Address(RVA = "0x2B62670", Offset = "0x2B60C70", VA = "0x182B62670")]
	public Texture3DParameter(Texture value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000F61")]
	[Address(RVA = "0x2B62580", Offset = "0x2B60B80", VA = "0x182B62580", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
