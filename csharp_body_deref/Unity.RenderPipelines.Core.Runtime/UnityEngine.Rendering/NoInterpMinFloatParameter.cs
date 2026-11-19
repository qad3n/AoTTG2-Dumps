// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.NoInterpMinFloatParameter
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
[Token(Token = "0x200020D")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpMinFloatParameter : VolumeParameter<float>
{
	[NonSerialized]
	[Token(Token = "0x400099A")]
	[FieldOffset(Offset = "0x18")]
	public float min;

	[Token(Token = "0x170001F3")]
	public override float value
	{
		[Token(Token = "0x6000F35")]
		[Address(RVA = "0x65559C0", Offset = "0x65549C0", VA = "0x65559C0", Slot = "14")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000F36")]
		[Address(RVA = "0x65559D0", Offset = "0x65549D0", VA = "0x65559D0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000F37")]
	[Address(RVA = "0x65559E0", Offset = "0x65549E0", VA = "0x65559E0")]
	public NoInterpMinFloatParameter(float value, float min, bool overrideState = false)
	{
	}
}
