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
	[FieldOffset(Offset = "0x20")]
	public int max;

	[Token(Token = "0x170001EF")]
	public override int value
	{
		[Token(Token = "0x6000F26")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000F27")]
		[Address(RVA = "0x2B5E390", Offset = "0x2B5C990", VA = "0x182B5E390", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000F28")]
	[Address(RVA = "0x2B5F8C0", Offset = "0x2B5DEC0", VA = "0x182B5F8C0")]
	public NoInterpMaxIntParameter(int value, int max, bool overrideState = false)
	{
	}
}
