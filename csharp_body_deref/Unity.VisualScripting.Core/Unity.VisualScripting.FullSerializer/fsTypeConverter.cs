using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001F4")]
public class fsTypeConverter : fsConverter
{
	[Token(Token = "0x60011E1")]
	[Address(RVA = "0x4A51B70", Offset = "0x4A51B70", VA = "0x4A51B70", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011E2")]
	[Address(RVA = "0x4A51BD0", Offset = "0x4A51BD0", VA = "0x4A51BD0", Slot = "5")]
	public override bool RequestCycleSupport(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011E3")]
	[Address(RVA = "0x4A51BE0", Offset = "0x4A51BE0", VA = "0x4A51BE0", Slot = "6")]
	public override bool RequestInheritanceSupport(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011E4")]
	[Address(RVA = "0x4A51BF0", Offset = "0x4A51BF0", VA = "0x4A51BF0", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011E5")]
	[Address(RVA = "0x4A51D00", Offset = "0x4A51D00", VA = "0x4A51D00", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011E6")]
	[Address(RVA = "0x4A51EE0", Offset = "0x4A51EE0", VA = "0x4A51EE0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011E7")]
	[Address(RVA = "0x4A51EF0", Offset = "0x4A51EF0", VA = "0x4A51EF0")]
	public fsTypeConverter()
	{
	}
}
