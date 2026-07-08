using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.U2D;

[Serializable]
[Token(Token = "0x20001AF")]
[UnityEngine.Bindings.NativeHeader("Runtime/2D/Common/SpriteDataAccess.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/2D/Common/SpriteDataMarshalling.h")]
[MovedFrom("UnityEngine.Experimental.U2D")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeType(UnityEngine.Bindings.CodegenOptions.Custom, "ScriptingSpriteBone")]
public struct SpriteBone
{
	[Token(Token = "0x4000621")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("name")]
	[SerializeField]
	private string m_Name;

	[Token(Token = "0x4000622")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("guid")]
	private string m_Guid;

	[Token(Token = "0x4000623")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("position")]
	private Vector3 m_Position;

	[Token(Token = "0x4000624")]
	[FieldOffset(Offset = "0x1C")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("rotation")]
	private Quaternion m_Rotation;

	[Token(Token = "0x4000625")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("length")]
	private float m_Length;

	[Token(Token = "0x4000626")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("parentId")]
	private int m_ParentId;

	[Token(Token = "0x4000627")]
	[FieldOffset(Offset = "0x34")]
	[UnityEngine.Bindings.NativeName("color")]
	[SerializeField]
	private Color32 m_Color;
}
