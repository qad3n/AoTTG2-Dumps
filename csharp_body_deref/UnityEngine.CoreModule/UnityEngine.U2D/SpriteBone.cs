// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.U2D.SpriteBone
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.U2D;

[Serializable]
[Token(Token = "0x2000401")]
[UnityEngine.Bindings.NativeHeader("Runtime/2D/Common/SpriteDataMarshalling.h")]
[UnityEngine.Bindings.NativeType(UnityEngine.Bindings.CodegenOptions.Custom, "ScriptingSpriteBone")]
[MovedFrom("UnityEngine.Experimental.U2D")]
[UnityEngine.Bindings.NativeHeader("Runtime/2D/Common/SpriteDataAccess.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct SpriteBone
{
	[Token(Token = "0x4000E08")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("name")]
	[SerializeField]
	private string m_Name;

	[Token(Token = "0x4000E09")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.NativeName("guid")]
	[SerializeField]
	private string m_Guid;

	[Token(Token = "0x4000E0A")]
	[FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.NativeName("position")]
	[SerializeField]
	private Vector3 m_Position;

	[Token(Token = "0x4000E0B")]
	[FieldOffset(Offset = "0x1C")]
	[UnityEngine.Bindings.NativeName("rotation")]
	[SerializeField]
	private Quaternion m_Rotation;

	[Token(Token = "0x4000E0C")]
	[FieldOffset(Offset = "0x2C")]
	[UnityEngine.Bindings.NativeName("length")]
	[SerializeField]
	private float m_Length;

	[Token(Token = "0x4000E0D")]
	[FieldOffset(Offset = "0x30")]
	[UnityEngine.Bindings.NativeName("parentId")]
	[SerializeField]
	private int m_ParentId;

	[Token(Token = "0x4000E0E")]
	[FieldOffset(Offset = "0x34")]
	[UnityEngine.Bindings.NativeName("color")]
	[SerializeField]
	private Color32 m_Color;
}
