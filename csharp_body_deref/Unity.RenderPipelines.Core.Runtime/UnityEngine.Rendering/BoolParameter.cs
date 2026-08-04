// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BoolParameter
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
[Token(Token = "0x20001E1")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class BoolParameter : VolumeParameter<bool>
{
	[Token(Token = "0x20001E2")]
	public enum DisplayType
	{
		[Token(Token = "0x400081E")]
		Checkbox,
		[Token(Token = "0x400081F")]
		EnumPopup
	}

	[NonSerialized]
	[Token(Token = "0x400081C")]
	[FieldOffset(Offset = "0x14")]
	public DisplayType displayType;

	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x4C0AD30", Offset = "0x4C0AD30", VA = "0x4C0AD30")]
	public BoolParameter(bool value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x4C0AD80", Offset = "0x4C0AD80", VA = "0x4C0AD80")]
	public BoolParameter(bool value, DisplayType displayType, bool overrideState = false)
	{
	}
}
