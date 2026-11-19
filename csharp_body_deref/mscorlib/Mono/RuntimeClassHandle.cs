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

[Token(Token = "0x2000013")]
internal struct RuntimeClassHandle
{
	[Token(Token = "0x400008B")]
	[FieldOffset(Offset = "0x0")]
	private unsafe Mono.RuntimeStructs.MonoClass* value;

	[Token(Token = "0x17000005")]
	internal unsafe Mono.RuntimeStructs.MonoClass* Value
	{
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x52D8F50", Offset = "0x52D7F50", VA = "0x52D8F50")]
		get
		{
			//IL_0002: Expected I, but got O
			return (Mono.RuntimeStructs.MonoClass*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x52D8F20", Offset = "0x52D7F20", VA = "0x52D8F20")]
	internal unsafe RuntimeClassHandle(Mono.RuntimeStructs.MonoClass* value)
	{
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x52D8F30", Offset = "0x52D7F30", VA = "0x52D8F30")]
	internal RuntimeClassHandle(IntPtr ptr)
	{
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x52D8F60", Offset = "0x52D7F60", VA = "0x52D8F60", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x52D9040", Offset = "0x52D8040", VA = "0x52D9040", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x52D9060", Offset = "0x52D8060", VA = "0x52D9060")]
	internal unsafe static extern IntPtr GetTypeFromClass(Mono.RuntimeStructs.MonoClass* klass);

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x52D9070", Offset = "0x52D8070", VA = "0x52D9070")]
	internal RuntimeTypeHandle GetTypeHandle()
	{
		return default(RuntimeTypeHandle);
	}
}
