// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.NoInterpClampedIntParameter
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
[Token(Token = "0x20001EB")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpClampedIntParameter : VolumeParameter<int>
{
	[NonSerialized]
	[Token(Token = "0x4000826")]
	[FieldOffset(Offset = "0x18")]
	public int min;

	[NonSerialized]
	[Token(Token = "0x4000827")]
	[FieldOffset(Offset = "0x1C")]
	public int max;

	[Token(Token = "0x170001A0")]
	public override int value
	{
		[Token(Token = "0x6000DCD")]
		[Address(RVA = "0x4C0B180", Offset = "0x4C0B180", VA = "0x4C0B180", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000DCE")]
		[Address(RVA = "0x4C0B190", Offset = "0x4C0B190", VA = "0x4C0B190", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x4C0B1B0", Offset = "0x4C0B1B0", VA = "0x4C0B1B0")]
	public NoInterpClampedIntParameter(int value, int min, int max, bool overrideState = false)
	{
	}
}
