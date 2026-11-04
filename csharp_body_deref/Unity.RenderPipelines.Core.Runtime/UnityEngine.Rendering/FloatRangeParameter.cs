// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.FloatRangeParameter
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
[Token(Token = "0x2000212")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class FloatRangeParameter : VolumeParameter<Vector2>
{
	[NonSerialized]
	[Token(Token = "0x40009A1")]
	[FieldOffset(Offset = "0x20")]
	public float min;

	[NonSerialized]
	[Token(Token = "0x40009A2")]
	[FieldOffset(Offset = "0x24")]
	public float max;

	[Token(Token = "0x170001F8")]
	public override Vector2 value
	{
		[Token(Token = "0x6000F44")]
		[Address(RVA = "0x111AD40", Offset = "0x1119340", VA = "0x18111AD40", Slot = "14")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000F45")]
		[Address(RVA = "0x2B588D0", Offset = "0x2B56ED0", VA = "0x182B588D0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000F46")]
	[Address(RVA = "0x2B58850", Offset = "0x2B56E50", VA = "0x182B58850")]
	public FloatRangeParameter(Vector2 value, float min, float max, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000F47")]
	[Address(RVA = "0x2B58800", Offset = "0x2B56E00", VA = "0x182B58800", Slot = "16")]
	public override void Interp(Vector2 from, Vector2 to, float t)
	{
	}
}
