using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001F0")]
public class fsKeyValuePairConverter : fsConverter
{
	[Token(Token = "0x60011C7")]
	[Address(RVA = "0x4A4F4C0", Offset = "0x4A4F4C0", VA = "0x4A4F4C0", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011C8")]
	[Address(RVA = "0x4A4F5A0", Offset = "0x4A4F5A0", VA = "0x4A4F5A0", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011C9")]
	[Address(RVA = "0x4A4F5B0", Offset = "0x4A4F5B0", VA = "0x4A4F5B0", Slot = "6")]
	public override bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011CA")]
	[Address(RVA = "0x4A4F5C0", Offset = "0x4A4F5C0", VA = "0x4A4F5C0", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011CB")]
	[Address(RVA = "0x4A4F970", Offset = "0x4A4F970", VA = "0x4A4F970", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011CC")]
	[Address(RVA = "0x4A4FE20", Offset = "0x4A4FE20", VA = "0x4A4FE20")]
	public fsKeyValuePairConverter()
	{
	}
}
