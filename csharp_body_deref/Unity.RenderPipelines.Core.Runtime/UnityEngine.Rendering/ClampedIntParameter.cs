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
[Token(Token = "0x2000208")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class ClampedIntParameter : IntParameter
{
	[NonSerialized]
	[Token(Token = "0x4000995")]
	[FieldOffset(Offset = "0x20")]
	public int min;

	[NonSerialized]
	[Token(Token = "0x4000996")]
	[FieldOffset(Offset = "0x24")]
	public int max;

	[Token(Token = "0x170001F0")]
	public override int value
	{
		[Token(Token = "0x6000F29")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000F2A")]
		[Address(RVA = "0x2B4FFB0", Offset = "0x2B4E5B0", VA = "0x182B4FFB0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000F2B")]
	[Address(RVA = "0x2B4FF50", Offset = "0x2B4E550", VA = "0x182B4FF50")]
	public ClampedIntParameter(int value, int min, int max, bool overrideState = false)
	{
	}
}
