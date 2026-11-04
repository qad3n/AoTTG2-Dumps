// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.MaxIntParameter
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
[Token(Token = "0x2000206")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class MaxIntParameter : IntParameter
{
	[NonSerialized]
	[Token(Token = "0x4000993")]
	[FieldOffset(Offset = "0x20")]
	public int max;

	[Token(Token = "0x170001EE")]
	public override int value
	{
		[Token(Token = "0x6000F23")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000F24")]
		[Address(RVA = "0x2B5E390", Offset = "0x2B5C990", VA = "0x182B5E390", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000F25")]
	[Address(RVA = "0x2B5E330", Offset = "0x2B5C930", VA = "0x182B5E330")]
	public MaxIntParameter(int value, int max, bool overrideState = false)
	{
	}
}
