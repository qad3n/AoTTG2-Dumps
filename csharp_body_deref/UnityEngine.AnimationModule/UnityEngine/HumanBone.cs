using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200001A")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeType(UnityEngine.Bindings.CodegenOptions.Custom, "MonoHumanBone")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/HumanDescription.h")]
public struct HumanBone
{
	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x0")]
	private string m_BoneName;

	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x8")]
	private string m_HumanName;

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.NativeName("m_Limit")]
	public HumanLimit limit;
}
