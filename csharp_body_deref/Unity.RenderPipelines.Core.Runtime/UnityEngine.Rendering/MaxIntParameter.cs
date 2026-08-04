// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.MaxIntParameter
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
[Token(Token = "0x20001E8")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class MaxIntParameter : IntParameter
{
	[NonSerialized]
	[Token(Token = "0x4000822")]
	[FieldOffset(Offset = "0x18")]
	public int max;

	[Token(Token = "0x1700019D")]
	public override int value
	{
		[Token(Token = "0x6000DC4")]
		[Address(RVA = "0x4C0AFF0", Offset = "0x4C0AFF0", VA = "0x4C0AFF0", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000DC5")]
		[Address(RVA = "0x4C0B000", Offset = "0x4C0B000", VA = "0x4C0B000", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x4C0B010", Offset = "0x4C0B010", VA = "0x4C0B010")]
	public MaxIntParameter(int value, int max, bool overrideState = false)
	{
	}
}
