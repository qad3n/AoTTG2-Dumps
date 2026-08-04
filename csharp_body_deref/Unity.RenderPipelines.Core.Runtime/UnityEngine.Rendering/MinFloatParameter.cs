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
[Token(Token = "0x20001EE")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class MinFloatParameter : FloatParameter
{
	[NonSerialized]
	[Token(Token = "0x4000828")]
	[FieldOffset(Offset = "0x18")]
	public float min;

	[Token(Token = "0x170001A1")]
	public override float value
	{
		[Token(Token = "0x6000DD3")]
		[Address(RVA = "0x4C0B2D0", Offset = "0x4C0B2D0", VA = "0x4C0B2D0", Slot = "14")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000DD4")]
		[Address(RVA = "0x4C0B2E0", Offset = "0x4C0B2E0", VA = "0x4C0B2E0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DD5")]
	[Address(RVA = "0x4C0B2F0", Offset = "0x4C0B2F0", VA = "0x4C0B2F0")]
	public MinFloatParameter(float value, float min, bool overrideState = false)
	{
	}
}
