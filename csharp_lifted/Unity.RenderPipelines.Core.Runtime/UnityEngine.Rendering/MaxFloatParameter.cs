// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.MaxFloatParameter
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
[Token(Token = "0x200020E")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class MaxFloatParameter : FloatParameter
{
	[NonSerialized]
	[Token(Token = "0x400099B")]
	[FieldOffset(Offset = "0x18")]
	public float max;

	[Token(Token = "0x170001F4")]
	public override float value
	{
		[Token(Token = "0x6000F38")]
		[Address(RVA = "0x6555A40", Offset = "0x6554A40", VA = "0x6555A40", Slot = "14")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000F39")]
		[Address(RVA = "0x6555A50", Offset = "0x6554A50", VA = "0x6555A50", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000F3A")]
	[Address(RVA = "0x6555A60", Offset = "0x6554A60", VA = "0x6555A60")]
	public MaxFloatParameter(float value, float max, bool overrideState = false)
	{
	}
}
