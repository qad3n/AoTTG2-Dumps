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

[Token(Token = "0x2000192")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/AssemblyFullName.h")]
internal struct AssemblyFullName
{
	[Token(Token = "0x40005FE")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("name")]
	public string Name;

	[Token(Token = "0x40005FF")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.NativeName("version")]
	public AssemblyVersion Version;

	[Token(Token = "0x4000600")]
	[FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.NativeName("publicKeyToken")]
	public string PublicKeyToken;

	[Token(Token = "0x4000601")]
	[FieldOffset(Offset = "0x18")]
	[UnityEngine.Bindings.NativeName("culture")]
	public string Culture;

	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x2F0E280", Offset = "0x2F0C880", VA = "0x182F0E280", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D21")]
	[Address(RVA = "0x2F0E390", Offset = "0x2F0C990", VA = "0x182F0E390", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000D22")]
	[Address(RVA = "0x2F0E410", Offset = "0x2F0CA10", VA = "0x182F0E410", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
