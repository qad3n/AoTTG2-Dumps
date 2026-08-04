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
[Token(Token = "0x20001EF")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpMinFloatParameter : VolumeParameter<float>
{
	[NonSerialized]
	[Token(Token = "0x4000829")]
	[FieldOffset(Offset = "0x18")]
	public float min;

	[Token(Token = "0x170001A2")]
	public override float value
	{
		[Token(Token = "0x6000DD6")]
		[Address(RVA = "0x4C0B350", Offset = "0x4C0B350", VA = "0x4C0B350", Slot = "14")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000DD7")]
		[Address(RVA = "0x4C0B360", Offset = "0x4C0B360", VA = "0x4C0B360", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DD8")]
	[Address(RVA = "0x4C0B370", Offset = "0x4C0B370", VA = "0x4C0B370")]
	public NoInterpMinFloatParameter(float value, float min, bool overrideState = false)
	{
	}
}
