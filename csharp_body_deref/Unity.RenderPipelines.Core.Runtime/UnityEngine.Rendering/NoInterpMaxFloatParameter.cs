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
	[FieldOffset(Offset = "0x20")]
	public float max;

	[Token(Token = "0x170001F5")]
	public override float value
	{
		[Token(Token = "0x6000F3B")]
		[Address(RVA = "0x584FF0", Offset = "0x5835F0", VA = "0x180584FF0", Slot = "14")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000F3C")]
		[Address(RVA = "0x2B5E320", Offset = "0x2B5C920", VA = "0x182B5E320", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000F3D")]
	[Address(RVA = "0x2B5F850", Offset = "0x2B5DE50", VA = "0x182B5F850")]
	public NoInterpMaxFloatParameter(float value, float max, bool overrideState = false)
	{
	}
}
