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

[Token(Token = "0x200015E")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/AssemblyFullName.h")]
internal struct AssemblyVersion
{
	[Token(Token = "0x4000569")]
	[FieldOffset(Offset = "0x0")]
	public ushort major;

	[Token(Token = "0x400056A")]
	[FieldOffset(Offset = "0x2")]
	public ushort minor;

	[Token(Token = "0x400056B")]
	[FieldOffset(Offset = "0x4")]
	public ushort build;

	[Token(Token = "0x400056C")]
	[FieldOffset(Offset = "0x6")]
	public ushort revision;

	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x4DF6910", Offset = "0x4DF6910", VA = "0x4DF6910")]
	public static bool operator ==(AssemblyVersion lhs, AssemblyVersion rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x4DF6940", Offset = "0x4DF6940", VA = "0x4DF6940", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60009DE")]
	[Address(RVA = "0x4DF6B20", Offset = "0x4DF6B20", VA = "0x4DF6B20", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x4DF6BA0", Offset = "0x4DF6BA0", VA = "0x4DF6BA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
