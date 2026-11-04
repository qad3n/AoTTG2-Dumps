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
	[FieldOffset(Offset = "0x20")]
	public float min;

	[NonSerialized]
	[Token(Token = "0x400099E")]
	[FieldOffset(Offset = "0x24")]
	public float max;

	[Token(Token = "0x170001F6")]
	public override float value
	{
		[Token(Token = "0x6000F3E")]
		[Address(RVA = "0x584FF0", Offset = "0x5835F0", VA = "0x180584FF0", Slot = "14")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000F3F")]
		[Address(RVA = "0x2B4FF20", Offset = "0x2B4E520", VA = "0x182B4FF20", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000F40")]
	[Address(RVA = "0x2B4FEA0", Offset = "0x2B4E4A0", VA = "0x182B4FEA0")]
	public ClampedFloatParameter(float value, float min, float max, bool overrideState = false)
	{
	}
}
