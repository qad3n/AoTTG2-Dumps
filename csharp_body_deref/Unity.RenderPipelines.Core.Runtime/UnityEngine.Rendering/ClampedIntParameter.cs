// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ClampedIntParameter
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
[Token(Token = "0x20001EA")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class ClampedIntParameter : IntParameter
{
	[NonSerialized]
	[Token(Token = "0x4000824")]
	[FieldOffset(Offset = "0x18")]
	public int min;

	[NonSerialized]
	[Token(Token = "0x4000825")]
	[FieldOffset(Offset = "0x1C")]
	public int max;

	[Token(Token = "0x1700019F")]
	public override int value
	{
		[Token(Token = "0x6000DCA")]
		[Address(RVA = "0x4C0B0F0", Offset = "0x4C0B0F0", VA = "0x4C0B0F0", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000DCB")]
		[Address(RVA = "0x4C0B100", Offset = "0x4C0B100", VA = "0x4C0B100", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x4C0B120", Offset = "0x4C0B120", VA = "0x4C0B120")]
	public ClampedIntParameter(int value, int min, int max, bool overrideState = false)
	{
	}
}
