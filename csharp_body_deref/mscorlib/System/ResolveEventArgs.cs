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

[Token(Token = "0x2000104")]
public class ResolveEventArgs : EventArgs
{
	[Token(Token = "0x40003BA")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	private readonly string _003CName_003Ek__BackingField;

	[Token(Token = "0x40003BB")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private readonly Assembly _003CRequestingAssembly_003Ek__BackingField;

	[Token(Token = "0x600098F")]
	[Address(RVA = "0x3CCBC90", Offset = "0x3CCBC90", VA = "0x3CCBC90")]
	public ResolveEventArgs(string name)
	{
	}

	[Token(Token = "0x6000990")]
	[Address(RVA = "0x3CCBD00", Offset = "0x3CCBD00", VA = "0x3CCBD00")]
	public ResolveEventArgs(string name, Assembly requestingAssembly)
	{
	}
}
