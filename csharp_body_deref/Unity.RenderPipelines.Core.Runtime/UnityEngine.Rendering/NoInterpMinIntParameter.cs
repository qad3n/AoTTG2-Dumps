// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.NoInterpMinIntParameter
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
[Token(Token = "0x2000205")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpMinIntParameter : VolumeParameter<int>
{
	[NonSerialized]
	[Token(Token = "0x4000992")]
	[FieldOffset(Offset = "0x20")]
	public int min;

	[Token(Token = "0x170001ED")]
	public override int value
	{
		[Token(Token = "0x6000F20")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000F21")]
		[Address(RVA = "0x2B5F3C0", Offset = "0x2B5D9C0", VA = "0x182B5F3C0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000F22")]
	[Address(RVA = "0x2B5F990", Offset = "0x2B5DF90", VA = "0x182B5F990")]
	public NoInterpMinIntParameter(int value, int min, bool overrideState = false)
	{
	}
}
