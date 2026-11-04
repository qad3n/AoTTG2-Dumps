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
	[FieldOffset(Offset = "0x20")]
	public float min;

	[Token(Token = "0x170001F3")]
	public override float value
	{
		[Token(Token = "0x6000F35")]
		[Address(RVA = "0x584FF0", Offset = "0x5835F0", VA = "0x180584FF0", Slot = "14")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000F36")]
		[Address(RVA = "0x2B5F3B0", Offset = "0x2B5D9B0", VA = "0x182B5F3B0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000F37")]
	[Address(RVA = "0x2B5F920", Offset = "0x2B5DF20", VA = "0x182B5F920")]
	public NoInterpMinFloatParameter(float value, float min, bool overrideState = false)
	{
	}
}
