// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsPrimitiveConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001F2")]
public class fsPrimitiveConverter : fsConverter
{
	[Token(Token = "0x60011DF")]
	[Address(RVA = "0x685E660", Offset = "0x685D660", VA = "0x685E660", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011E0")]
	[Address(RVA = "0x685E760", Offset = "0x685D760", VA = "0x685E760", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011E1")]
	[Address(RVA = "0x685E770", Offset = "0x685D770", VA = "0x685E770", Slot = "6")]
	public override bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011E2")]
	[Address(RVA = "0x685E780", Offset = "0x685D780", VA = "0x685E780", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011E3")]
	[Address(RVA = "0x685F220", Offset = "0x685E220", VA = "0x685F220", Slot = "8")]
	public override fsResult TryDeserialize(fsData storage, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011E4")]
	[Address(RVA = "0x685EDC0", Offset = "0x685DDC0", VA = "0x685EDC0")]
	private static bool UseBool(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011E5")]
	[Address(RVA = "0x685EE60", Offset = "0x685DE60", VA = "0x685EE60")]
	private static bool UseInt64(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011E6")]
	[Address(RVA = "0x685F050", Offset = "0x685E050", VA = "0x685F050")]
	private static bool UseDouble(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011E7")]
	[Address(RVA = "0x685F190", Offset = "0x685E190", VA = "0x685F190")]
	private static bool UseString(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011E8")]
	[Address(RVA = "0x685FA30", Offset = "0x685EA30", VA = "0x685FA30")]
	public fsPrimitiveConverter()
	{
	}
}
