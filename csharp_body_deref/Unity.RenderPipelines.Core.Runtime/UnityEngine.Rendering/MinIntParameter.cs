// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.MinIntParameter
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
[Token(Token = "0x20001E6")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class MinIntParameter : IntParameter
{
	[NonSerialized]
	[Token(Token = "0x4000820")]
	[FieldOffset(Offset = "0x18")]
	public int min;

	[Token(Token = "0x1700019B")]
	public override int value
	{
		[Token(Token = "0x6000DBE")]
		[Address(RVA = "0x4C0AEF0", Offset = "0x4C0AEF0", VA = "0x4C0AEF0", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000DBF")]
		[Address(RVA = "0x4C0AF00", Offset = "0x4C0AF00", VA = "0x4C0AF00", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x4C0AF10", Offset = "0x4C0AF10", VA = "0x4C0AF10")]
	public MinIntParameter(int value, int min, bool overrideState = false)
	{
	}
}
