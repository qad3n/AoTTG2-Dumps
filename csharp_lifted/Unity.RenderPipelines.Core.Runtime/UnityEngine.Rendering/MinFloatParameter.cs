// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.MinFloatParameter
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
[Token(Token = "0x200020C")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class MinFloatParameter : FloatParameter
{
	[NonSerialized]
	[Token(Token = "0x4000999")]
	[FieldOffset(Offset = "0x18")]
	public float min;

	[Token(Token = "0x170001F2")]
	public override float value
	{
		[Token(Token = "0x6000F32")]
		[Address(RVA = "0x6555940", Offset = "0x6554940", VA = "0x6555940", Slot = "14")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000F33")]
		[Address(RVA = "0x6555950", Offset = "0x6554950", VA = "0x6555950", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000F34")]
	[Address(RVA = "0x6555960", Offset = "0x6554960", VA = "0x6555960")]
	public MinFloatParameter(float value, float min, bool overrideState = false)
	{
	}
}
