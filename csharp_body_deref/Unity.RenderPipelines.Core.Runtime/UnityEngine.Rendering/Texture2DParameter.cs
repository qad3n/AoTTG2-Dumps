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
[Token(Token = "0x200021E")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class Texture2DParameter : VolumeParameter<Texture>
{
	[Token(Token = "0x6000F5E")]
	[Address(RVA = "0x65565B0", Offset = "0x65555B0", VA = "0x65565B0")]
	public Texture2DParameter(Texture value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000F5F")]
	[Address(RVA = "0x6556600", Offset = "0x6555600", VA = "0x6556600", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
