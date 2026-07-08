using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001F2")]
public class fsPrimitiveConverter : fsConverter
{
	[Token(Token = "0x60011D2")]
	[Address(RVA = "0x4A4FFB0", Offset = "0x4A4FFB0", VA = "0x4A4FFB0", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011D3")]
	[Address(RVA = "0x4A500B0", Offset = "0x4A500B0", VA = "0x4A500B0", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011D4")]
	[Address(RVA = "0x4A500C0", Offset = "0x4A500C0", VA = "0x4A500C0", Slot = "6")]
	public override bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011D5")]
	[Address(RVA = "0x4A500D0", Offset = "0x4A500D0", VA = "0x4A500D0", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011D6")]
	[Address(RVA = "0x4A50B70", Offset = "0x4A50B70", VA = "0x4A50B70", Slot = "8")]
	public override fsResult TryDeserialize(fsData storage, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011D7")]
	[Address(RVA = "0x4A50710", Offset = "0x4A50710", VA = "0x4A50710")]
	private static bool UseBool(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011D8")]
	[Address(RVA = "0x4A507B0", Offset = "0x4A507B0", VA = "0x4A507B0")]
	private static bool UseInt64(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011D9")]
	[Address(RVA = "0x4A509A0", Offset = "0x4A509A0", VA = "0x4A509A0")]
	private static bool UseDouble(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011DA")]
	[Address(RVA = "0x4A50AE0", Offset = "0x4A50AE0", VA = "0x4A50AE0")]
	private static bool UseString(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011DB")]
	[Address(RVA = "0x4A51350", Offset = "0x4A51350", VA = "0x4A51350")]
	public fsPrimitiveConverter()
	{
	}
}
