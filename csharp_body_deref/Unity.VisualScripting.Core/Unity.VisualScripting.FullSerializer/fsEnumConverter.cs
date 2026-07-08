using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001E9")]
public class fsEnumConverter : fsConverter
{
	[Token(Token = "0x600119F")]
	[Address(RVA = "0x4A4C150", Offset = "0x4A4C150", VA = "0x4A4C150", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A0")]
	[Address(RVA = "0x4A4C1C0", Offset = "0x4A4C1C0", VA = "0x4A4C1C0", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A1")]
	[Address(RVA = "0x4A4C1D0", Offset = "0x4A4C1D0", VA = "0x4A4C1D0", Slot = "6")]
	public override bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A2")]
	[Address(RVA = "0x4A4C1E0", Offset = "0x4A4C1E0", VA = "0x4A4C1E0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011A3")]
	[Address(RVA = "0x4A4C240", Offset = "0x4A4C240", VA = "0x4A4C240", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011A4")]
	[Address(RVA = "0x4A4CA60", Offset = "0x4A4CA60", VA = "0x4A4CA60", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011A5")]
	private static bool ArrayContains<T>(T[] values, T value)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A6")]
	[Address(RVA = "0x4A4D430", Offset = "0x4A4D430", VA = "0x4A4D430")]
	public fsEnumConverter()
	{
	}
}
