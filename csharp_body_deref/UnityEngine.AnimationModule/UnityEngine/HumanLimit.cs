// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.HumanLimit
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000019")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AvatarBuilder.bindings.h")]
[UnityEngine.Bindings.NativeType(UnityEngine.Bindings.CodegenOptions.Custom, "MonoHumanLimit")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/HumanDescription.h")]
public struct HumanLimit
{
	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x0")]
	private Vector3 m_Min;

	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0xC")]
	private Vector3 m_Max;

	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0x18")]
	private Vector3 m_Center;

	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x24")]
	private float m_AxisLength;

	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x28")]
	private int m_UseDefaultValues;
}
