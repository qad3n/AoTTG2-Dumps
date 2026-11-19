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

[Token(Token = "0x2000193")]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/AssemblyFullName.h")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
internal struct AssemblyFullName
{
	[Token(Token = "0x4000603")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("name")]
	public string Name;

	[Token(Token = "0x4000604")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.NativeName("version")]
	public AssemblyVersion Version;

	[Token(Token = "0x4000605")]
	[FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.NativeName("publicKeyToken")]
	public string PublicKeyToken;

	[Token(Token = "0x4000606")]
	[FieldOffset(Offset = "0x18")]
	[UnityEngine.Bindings.NativeName("culture")]
	public string Culture;

	[Token(Token = "0x6000D32")]
	[Address(RVA = "0x6914E80", Offset = "0x6913E80", VA = "0x6914E80", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D33")]
	[Address(RVA = "0x6914F50", Offset = "0x6913F50", VA = "0x6914F50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000D34")]
	[Address(RVA = "0x6914FD0", Offset = "0x6913FD0", VA = "0x6914FD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
