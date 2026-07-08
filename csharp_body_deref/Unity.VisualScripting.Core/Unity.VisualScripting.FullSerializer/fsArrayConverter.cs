using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001E6")]
public class fsArrayConverter : fsConverter
{
	[Token(Token = "0x600118C")]
	[Address(RVA = "0x4A47D10", Offset = "0x4A47D10", VA = "0x4A47D10", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600118D")]
	[Address(RVA = "0x4A47D30", Offset = "0x4A47D30", VA = "0x4A47D30", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x600118E")]
	[Address(RVA = "0x4A47D40", Offset = "0x4A47D40", VA = "0x4A47D40", Slot = "6")]
	public override bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x600118F")]
	[Address(RVA = "0x4A47D50", Offset = "0x4A47D50", VA = "0x4A47D50", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001190")]
	[Address(RVA = "0x4A48230", Offset = "0x4A48230", VA = "0x4A48230", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001191")]
	[Address(RVA = "0x4A487C0", Offset = "0x4A487C0", VA = "0x4A487C0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x6001192")]
	[Address(RVA = "0x4A48FB0", Offset = "0x4A48FB0", VA = "0x4A48FB0")]
	public fsArrayConverter()
	{
	}
}
