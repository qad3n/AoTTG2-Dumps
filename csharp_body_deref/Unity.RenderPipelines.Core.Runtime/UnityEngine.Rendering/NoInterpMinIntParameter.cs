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
	[FieldOffset(Offset = "0x18")]
	public int min;

	[Token(Token = "0x170001ED")]
	public override int value
	{
		[Token(Token = "0x6000F20")]
		[Address(RVA = "0x65555E0", Offset = "0x65545E0", VA = "0x65555E0", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000F21")]
		[Address(RVA = "0x65555F0", Offset = "0x65545F0", VA = "0x65555F0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000F22")]
	[Address(RVA = "0x6555600", Offset = "0x6554600", VA = "0x6555600")]
	public NoInterpMinIntParameter(int value, int min, bool overrideState = false)
	{
	}
}
