// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ClampedFloatParameter
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
[Token(Token = "0x2000210")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class ClampedFloatParameter : FloatParameter
{
	[NonSerialized]
	[Token(Token = "0x400099D")]
	[FieldOffset(Offset = "0x18")]
	public float min;

	[NonSerialized]
	[Token(Token = "0x400099E")]
	[FieldOffset(Offset = "0x1C")]
	public float max;

	[Token(Token = "0x170001F6")]
	public override float value
	{
		[Token(Token = "0x6000F3E")]
		[Address(RVA = "0x6555B40", Offset = "0x6554B40", VA = "0x6555B40", Slot = "14")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000F3F")]
		[Address(RVA = "0x6555B50", Offset = "0x6554B50", VA = "0x6555B50", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000F40")]
	[Address(RVA = "0x6555B80", Offset = "0x6554B80", VA = "0x6555B80")]
	public ClampedFloatParameter(float value, float min, float max, bool overrideState = false)
	{
	}
}
