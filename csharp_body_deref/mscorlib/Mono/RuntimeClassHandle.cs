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
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x4DE7DC0", Offset = "0x4DE7DC0", VA = "0x4DE7DC0")]
		get
		{
			//IL_0002: Expected I, but got O
			return (Mono.RuntimeStructs.MonoClass*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4DE7D90", Offset = "0x4DE7D90", VA = "0x4DE7D90")]
	internal unsafe RuntimeClassHandle(Mono.RuntimeStructs.MonoClass* value)
	{
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x4DE7DA0", Offset = "0x4DE7DA0", VA = "0x4DE7DA0")]
	internal RuntimeClassHandle(IntPtr ptr)
	{
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x4DE7DD0", Offset = "0x4DE7DD0", VA = "0x4DE7DD0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4DE7EB0", Offset = "0x4DE7EB0", VA = "0x4DE7EB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000043")]
	[Address(RVA = "0x4DE7ED0", Offset = "0x4DE7ED0", VA = "0x4DE7ED0")]
	internal unsafe static extern IntPtr GetTypeFromClass(Mono.RuntimeStructs.MonoClass* klass);

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4DE7EE0", Offset = "0x4DE7EE0", VA = "0x4DE7EE0")]
	internal RuntimeTypeHandle GetTypeHandle()
	{
		return default(RuntimeTypeHandle);
	}
}
