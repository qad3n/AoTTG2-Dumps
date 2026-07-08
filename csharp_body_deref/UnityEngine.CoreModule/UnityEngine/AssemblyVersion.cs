using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200015B")]
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

	[Token(Token = "0x60009DA")]
	[Address(RVA = "0x4ACEFE0", Offset = "0x4ACEFE0", VA = "0x4ACEFE0")]
	public static bool operator ==(AssemblyVersion lhs, AssemblyVersion rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60009DB")]
	[Address(RVA = "0x4ACF010", Offset = "0x4ACF010", VA = "0x4ACF010", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x4ACF1F0", Offset = "0x4ACF1F0", VA = "0x4ACF1F0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x4ACF270", Offset = "0x4ACF270", VA = "0x4ACF270", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
