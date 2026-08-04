// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.NoInterpMaxIntParameter
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
[Token(Token = "0x20001E9")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class NoInterpMaxIntParameter : VolumeParameter<int>
{
	[NonSerialized]
	[Token(Token = "0x4000823")]
	[FieldOffset(Offset = "0x18")]
	public int max;

	[Token(Token = "0x1700019E")]
	public override int value
	{
		[Token(Token = "0x6000DC7")]
		[Address(RVA = "0x4C0B070", Offset = "0x4C0B070", VA = "0x4C0B070", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000DC8")]
		[Address(RVA = "0x4C0B080", Offset = "0x4C0B080", VA = "0x4C0B080", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6000DC9")]
	[Address(RVA = "0x4C0B090", Offset = "0x4C0B090", VA = "0x4C0B090")]
	public NoInterpMaxIntParameter(int value, int max, bool overrideState = false)
	{
	}
}
