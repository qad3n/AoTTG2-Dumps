using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000018")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/HumanDescription.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeType(UnityEngine.Bindings.CodegenOptions.Custom, "MonoSkeletonBone")]
public struct SkeletonBone
{
	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("m_Name")]
	public string name;

	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.NativeName("m_ParentName")]
	internal string parentName;

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.NativeName("m_Position")]
	public Vector3 position;

	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x1C")]
	[UnityEngine.Bindings.NativeName("m_Rotation")]
	public Quaternion rotation;

	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x2C")]
	[UnityEngine.Bindings.NativeName("m_Scale")]
	public Vector3 scale;
}
