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
[Token(Token = "0x2000209")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpClampedIntParameter : VolumeParameter<int>
{
	[NonSerialized]
	[Token(Token = "0x4000997")]
	[FieldOffset(Offset = "0x20")]
	public int min;

	[NonSerialized]
	[Token(Token = "0x4000998")]
	[FieldOffset(Offset = "0x24")]
	public int max;

	[Token(Token = "0x170001F1")]
	public override int value
	{
		[Token(Token = "0x6000F2C")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000F2D")]
		[Address(RVA = "0x2B4FFB0", Offset = "0x2B4E5B0", VA = "0x182B4FFB0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000F2E")]
	[Address(RVA = "0x2B5F450", Offset = "0x2B5DA50", VA = "0x182B5F450")]
	public NoInterpClampedIntParameter(int value, int min, int max, bool overrideState = false)
	{
	}
}
