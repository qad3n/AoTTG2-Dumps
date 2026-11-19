// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AssemblyVersion
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
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/AssemblyFullName.h")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
internal struct AssemblyVersion
{
	[Token(Token = "0x40005FF")]
	[FieldOffset(Offset = "0x0")]
	public ushort major;

	[Token(Token = "0x4000600")]
	[FieldOffset(Offset = "0x2")]
	public ushort minor;

	[Token(Token = "0x4000601")]
	[FieldOffset(Offset = "0x4")]
	public ushort build;

	[Token(Token = "0x4000602")]
	[FieldOffset(Offset = "0x6")]
	public ushort revision;

	[Token(Token = "0x6000D2E")]
	[Address(RVA = "0x6914B60", Offset = "0x6913B60", VA = "0x6914B60")]
	public static bool operator ==(AssemblyVersion lhs, AssemblyVersion rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D2F")]
	[Address(RVA = "0x6914B90", Offset = "0x6913B90", VA = "0x6914B90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000D30")]
	[Address(RVA = "0x6914D70", Offset = "0x6913D70", VA = "0x6914D70", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D31")]
	[Address(RVA = "0x6914DF0", Offset = "0x6913DF0", VA = "0x6914DF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
