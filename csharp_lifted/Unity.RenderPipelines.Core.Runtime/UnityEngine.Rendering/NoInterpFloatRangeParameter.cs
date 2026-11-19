// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.NoInterpFloatRangeParameter
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
[Token(Token = "0x2000213")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpFloatRangeParameter : VolumeParameter<Vector2>
{
	[NonSerialized]
	[Token(Token = "0x40009A3")]
	[FieldOffset(Offset = "0x1C")]
	public float min;

	[NonSerialized]
	[Token(Token = "0x40009A4")]
	[FieldOffset(Offset = "0x20")]
	public float max;

	[Token(Token = "0x170001F9")]
	public override Vector2 value
	{
		[Token(Token = "0x6000F48")]
		[Address(RVA = "0x6555D90", Offset = "0x6554D90", VA = "0x6555D90", Slot = "14")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000F49")]
		[Address(RVA = "0x6555DA0", Offset = "0x6554DA0", VA = "0x6555DA0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000F4A")]
	[Address(RVA = "0x6555DD0", Offset = "0x6554DD0", VA = "0x6555DD0")]
	public NoInterpFloatRangeParameter(Vector2 value, float min, float max, bool overrideState = false)
	{
	}
}
