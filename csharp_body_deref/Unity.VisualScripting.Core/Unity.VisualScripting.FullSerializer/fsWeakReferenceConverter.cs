using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001F5")]
public class fsWeakReferenceConverter : fsConverter
{
	[Token(Token = "0x60011E8")]
	[Address(RVA = "0x4A51F00", Offset = "0x4A51F00", VA = "0x4A51F00", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011E9")]
	[Address(RVA = "0x4A51F70", Offset = "0x4A51F70", VA = "0x4A51F70", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011EA")]
	[Address(RVA = "0x4A51F80", Offset = "0x4A51F80", VA = "0x4A51F80", Slot = "6")]
	public override bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011EB")]
	[Address(RVA = "0x4A51F90", Offset = "0x4A51F90", VA = "0x4A51F90", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011EC")]
	[Address(RVA = "0x4A522A0", Offset = "0x4A522A0", VA = "0x4A522A0", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011ED")]
	[Address(RVA = "0x4A526B0", Offset = "0x4A526B0", VA = "0x4A526B0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011EE")]
	[Address(RVA = "0x4A526F0", Offset = "0x4A526F0", VA = "0x4A526F0")]
	public fsWeakReferenceConverter()
	{
	}
}
