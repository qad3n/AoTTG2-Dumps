using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200015C")]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/AssemblyFullName.h")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
internal struct AssemblyFullName
{
	[Token(Token = "0x400056D")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("name")]
	public string Name;

	[Token(Token = "0x400056E")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.NativeName("version")]
	public AssemblyVersion Version;

	[Token(Token = "0x400056F")]
	[FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.NativeName("publicKeyToken")]
	public string PublicKeyToken;

	[Token(Token = "0x4000570")]
	[FieldOffset(Offset = "0x18")]
	[UnityEngine.Bindings.NativeName("culture")]
	public string Culture;

	[Token(Token = "0x60009DE")]
	[Address(RVA = "0x4ACF300", Offset = "0x4ACF300", VA = "0x4ACF300", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x4ACF3D0", Offset = "0x4ACF3D0", VA = "0x4ACF3D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x4ACF450", Offset = "0x4ACF450", VA = "0x4ACF450", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
