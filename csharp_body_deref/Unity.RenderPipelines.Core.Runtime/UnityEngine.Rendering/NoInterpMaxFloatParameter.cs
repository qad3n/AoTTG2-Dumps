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
[Token(Token = "0x200020F")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpMaxFloatParameter : VolumeParameter<float>
{
	[NonSerialized]
	[Token(Token = "0x400099C")]
	[FieldOffset(Offset = "0x18")]
	public float max;

	[Token(Token = "0x170001F5")]
	public override float value
	{
		[Token(Token = "0x6000F3B")]
		[Address(RVA = "0x6555AC0", Offset = "0x6554AC0", VA = "0x6555AC0", Slot = "14")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000F3C")]
		[Address(RVA = "0x6555AD0", Offset = "0x6554AD0", VA = "0x6555AD0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000F3D")]
	[Address(RVA = "0x6555AE0", Offset = "0x6554AE0", VA = "0x6555AE0")]
	public NoInterpMaxFloatParameter(float value, float max, bool overrideState = false)
	{
	}
}
