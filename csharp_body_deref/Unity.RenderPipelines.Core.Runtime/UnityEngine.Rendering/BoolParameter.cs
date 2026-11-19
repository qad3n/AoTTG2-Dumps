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
[Token(Token = "0x20001FE")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class BoolParameter : VolumeParameter<bool>
{
	[Token(Token = "0x20001FF")]
	public enum DisplayType
	{
		[Token(Token = "0x400098F")]
		Checkbox,
		[Token(Token = "0x4000990")]
		EnumPopup
	}

	[NonSerialized]
	[Token(Token = "0x400098D")]
	[FieldOffset(Offset = "0x14")]
	public DisplayType displayType;

	[Token(Token = "0x6000F16")]
	[Address(RVA = "0x6555350", Offset = "0x6554350", VA = "0x6555350")]
	public BoolParameter(bool value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000F17")]
	[Address(RVA = "0x65553A0", Offset = "0x65543A0", VA = "0x65553A0")]
	public BoolParameter(bool value, DisplayType displayType, bool overrideState = false)
	{
	}
}
