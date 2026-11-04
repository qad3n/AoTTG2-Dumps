// ==================== AoTTG2 cross-reference ====================
// Type: Mono.RuntimeClassHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Mono;

[Token(Token = "0x2000031")]
internal struct RuntimeClassHandle
{
	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x0")]
	private unsafe Mono.RuntimeStructs.MonoClass* value;

	[Token(Token = "0x17000005")]
	internal unsafe Mono.RuntimeStructs.MonoClass* Value
	{
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			//IL_0002: Expected I, but got O
			return (Mono.RuntimeStructs.MonoClass*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
	internal unsafe RuntimeClassHandle(Mono.RuntimeStructs.MonoClass* value)
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x194C500", Offset = "0x194AB00", VA = "0x18194C500")]
	internal RuntimeClassHandle(IntPtr ptr)
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x194C3C0", Offset = "0x194A9C0", VA = "0x18194C3C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x194C4B0", Offset = "0x194AAB0", VA = "0x18194C4B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005B")]
	[Address(RVA = "0x194C4E0", Offset = "0x194AAE0", VA = "0x18194C4E0")]
	internal unsafe static extern IntPtr GetTypeFromClass(Mono.RuntimeStructs.MonoClass* klass);

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x194C4F0", Offset = "0x194AAF0", VA = "0x18194C4F0")]
	internal RuntimeTypeHandle GetTypeHandle()
	{
		return default(RuntimeTypeHandle);
	}
}
