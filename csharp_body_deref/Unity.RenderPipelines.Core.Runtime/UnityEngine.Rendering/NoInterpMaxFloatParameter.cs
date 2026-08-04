// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.NoInterpMaxFloatParameter
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
[Token(Token = "0x20001F1")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpMaxFloatParameter : VolumeParameter<float>
{
	[NonSerialized]
	[Token(Token = "0x400082B")]
	[FieldOffset(Offset = "0x18")]
	public float max;

	[Token(Token = "0x170001A4")]
	public override float value
	{
		[Token(Token = "0x6000DDC")]
		[Address(RVA = "0x4C0B450", Offset = "0x4C0B450", VA = "0x4C0B450", Slot = "14")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000DDD")]
		[Address(RVA = "0x4C0B460", Offset = "0x4C0B460", VA = "0x4C0B460", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x4C0B470", Offset = "0x4C0B470", VA = "0x4C0B470")]
	public NoInterpMaxFloatParameter(float value, float max, bool overrideState = false)
	{
	}
}
