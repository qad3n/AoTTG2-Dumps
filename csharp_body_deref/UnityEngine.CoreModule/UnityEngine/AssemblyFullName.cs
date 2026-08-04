// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AssemblyFullName
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200015F")]
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

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x4DF6C30", Offset = "0x4DF6C30", VA = "0x4DF6C30", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x4DF6D00", Offset = "0x4DF6D00", VA = "0x4DF6D00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60009E2")]
	[Address(RVA = "0x4DF6D80", Offset = "0x4DF6D80", VA = "0x4DF6D80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
