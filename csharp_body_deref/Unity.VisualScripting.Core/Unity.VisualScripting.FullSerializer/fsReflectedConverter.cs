using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001F3")]
public class fsReflectedConverter : fsConverter
{
	[Token(Token = "0x60011DC")]
	[Address(RVA = "0x4A51360", Offset = "0x4A51360", VA = "0x4A51360", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011DD")]
	[Address(RVA = "0x4A51430", Offset = "0x4A51430", VA = "0x4A51430", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011DE")]
	[Address(RVA = "0x4A517B0", Offset = "0x4A517B0", VA = "0x4A517B0", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011DF")]
	[Address(RVA = "0x4A51AF0", Offset = "0x4A51AF0", VA = "0x4A51AF0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011E0")]
	[Address(RVA = "0x4A51B60", Offset = "0x4A51B60", VA = "0x4A51B60")]
	public fsReflectedConverter()
	{
	}
}
