// ==================== AoTTG2 cross-reference ====================
// Type: System.ResolveEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200012C")]
public class ResolveEventArgs : EventArgs
{
	[Token(Token = "0x400043C")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	private readonly string _003CName_003Ek__BackingField;

	[Token(Token = "0x400043D")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private readonly Assembly _003CRequestingAssembly_003Ek__BackingField;

	[Token(Token = "0x60009CC")]
	[Address(RVA = "0x1B48470", Offset = "0x1B46A70", VA = "0x181B48470")]
	public ResolveEventArgs(string name)
	{
	}

	[Token(Token = "0x60009CD")]
	[Address(RVA = "0x1B483E0", Offset = "0x1B469E0", VA = "0x181B483E0")]
	public ResolveEventArgs(string name, Assembly requestingAssembly)
	{
	}
}
