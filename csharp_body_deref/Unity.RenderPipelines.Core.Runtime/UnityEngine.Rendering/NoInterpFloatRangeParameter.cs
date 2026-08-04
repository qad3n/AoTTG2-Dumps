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
[Token(Token = "0x20001F5")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpFloatRangeParameter : VolumeParameter<Vector2>
{
	[NonSerialized]
	[Token(Token = "0x4000832")]
	[FieldOffset(Offset = "0x1C")]
	public float min;

	[NonSerialized]
	[Token(Token = "0x4000833")]
	[FieldOffset(Offset = "0x20")]
	public float max;

	[Token(Token = "0x170001A8")]
	public override Vector2 value
	{
		[Token(Token = "0x6000DE9")]
		[Address(RVA = "0x4C0B720", Offset = "0x4C0B720", VA = "0x4C0B720", Slot = "14")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000DEA")]
		[Address(RVA = "0x4C0B730", Offset = "0x4C0B730", VA = "0x4C0B730", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x4C0B750", Offset = "0x4C0B750", VA = "0x4C0B750")]
	public NoInterpFloatRangeParameter(Vector2 value, float min, float max, bool overrideState = false)
	{
	}
}
