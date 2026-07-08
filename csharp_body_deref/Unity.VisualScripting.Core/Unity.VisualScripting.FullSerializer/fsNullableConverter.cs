using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001F1")]
public class fsNullableConverter : fsConverter
{
	[Token(Token = "0x60011CD")]
	[Address(RVA = "0x4A4FE30", Offset = "0x4A4FE30", VA = "0x4A4FE30", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011CE")]
	[Address(RVA = "0x4A4FF10", Offset = "0x4A4FF10", VA = "0x4A4FF10", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011CF")]
	[Address(RVA = "0x4A4FF50", Offset = "0x4A4FF50", VA = "0x4A4FF50", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011D0")]
	[Address(RVA = "0x4A4FF90", Offset = "0x4A4FF90", VA = "0x4A4FF90", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011D1")]
	[Address(RVA = "0x4A4FFA0", Offset = "0x4A4FFA0", VA = "0x4A4FFA0")]
	public fsNullableConverter()
	{
	}
}
