// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.EnumParameter
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001FD")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public sealed class EnumParameter<T> : VolumeParameter<T>
{
	[Token(Token = "0x6000F15")]
	public EnumParameter(T value, bool overrideState = false)
	{
	}
}
