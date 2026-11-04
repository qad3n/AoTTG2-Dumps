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

[Token(Token = "0x2000191")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/AssemblyFullName.h")]
internal struct AssemblyVersion
{
	[Token(Token = "0x40005FA")]
	[FieldOffset(Offset = "0x0")]
	public ushort major;

	[Token(Token = "0x40005FB")]
	[FieldOffset(Offset = "0x2")]
	public ushort minor;

	[Token(Token = "0x40005FC")]
	[FieldOffset(Offset = "0x4")]
	public ushort build;

	[Token(Token = "0x40005FD")]
	[FieldOffset(Offset = "0x6")]
	public ushort revision;

	[Token(Token = "0x6000D1C")]
	[Address(RVA = "0x2F0E950", Offset = "0x2F0CF50", VA = "0x182F0E950")]
	public static bool operator ==(AssemblyVersion lhs, AssemblyVersion rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D1D")]
	[Address(RVA = "0x2F0E750", Offset = "0x2F0CD50", VA = "0x182F0E750", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000D1E")]
	[Address(RVA = "0x2F0E620", Offset = "0x2F0CC20", VA = "0x182F0E620", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x2F0E6D0", Offset = "0x2F0CCD0", VA = "0x182F0E6D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
