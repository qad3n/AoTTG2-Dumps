// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.NoInterpMaxIntParameter
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
[Token(Token = "0x2000207")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpMaxIntParameter : VolumeParameter<int>
{
	[NonSerialized]
	[Token(Token = "0x4000994")]
	[FieldOffset(Offset = "0x18")]
	public int max;

	[Token(Token = "0x170001EF")]
	public override int value
	{
		[Token(Token = "0x6000F26")]
		[Address(RVA = "0x65556E0", Offset = "0x65546E0", VA = "0x65556E0", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000F27")]
		[Address(RVA = "0x65556F0", Offset = "0x65546F0", VA = "0x65556F0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000F28")]
	[Address(RVA = "0x6555700", Offset = "0x6554700", VA = "0x6555700")]
	public NoInterpMaxIntParameter(int value, int max, bool overrideState = false)
	{
	}
}
