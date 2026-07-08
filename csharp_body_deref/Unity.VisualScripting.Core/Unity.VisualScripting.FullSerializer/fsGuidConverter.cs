using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001EE")]
public class fsGuidConverter : fsConverter
{
	[Token(Token = "0x60011B5")]
	[Address(RVA = "0x4A4E010", Offset = "0x4A4E010", VA = "0x4A4E010", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B6")]
	[Address(RVA = "0x4A4E080", Offset = "0x4A4E080", VA = "0x4A4E080", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B7")]
	[Address(RVA = "0x4A4E090", Offset = "0x4A4E090", VA = "0x4A4E090", Slot = "6")]
	public override bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B8")]
	[Address(RVA = "0x4A4E0A0", Offset = "0x4A4E0A0", VA = "0x4A4E0A0", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011B9")]
	[Address(RVA = "0x4A4E1B0", Offset = "0x4A4E1B0", VA = "0x4A4E1B0", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011BA")]
	[Address(RVA = "0x4A4E2F0", Offset = "0x4A4E2F0", VA = "0x4A4E2F0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011BB")]
	[Address(RVA = "0x4A4E330", Offset = "0x4A4E330", VA = "0x4A4E330")]
	public fsGuidConverter()
	{
	}
}
