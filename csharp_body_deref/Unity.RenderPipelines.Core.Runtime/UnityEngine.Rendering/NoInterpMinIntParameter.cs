// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.NoInterpMinIntParameter
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
[Token(Token = "0x20001E7")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpMinIntParameter : VolumeParameter<int>
{
	[NonSerialized]
	[Token(Token = "0x4000821")]
	[FieldOffset(Offset = "0x18")]
	public int min;

	[Token(Token = "0x1700019C")]
	public override int value
	{
		[Token(Token = "0x6000DC1")]
		[Address(RVA = "0x4C0AF70", Offset = "0x4C0AF70", VA = "0x4C0AF70", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000DC2")]
		[Address(RVA = "0x4C0AF80", Offset = "0x4C0AF80", VA = "0x4C0AF80", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DC3")]
	[Address(RVA = "0x4C0AF90", Offset = "0x4C0AF90", VA = "0x4C0AF90")]
	public NoInterpMinIntParameter(int value, int min, bool overrideState = false)
	{
	}
}
