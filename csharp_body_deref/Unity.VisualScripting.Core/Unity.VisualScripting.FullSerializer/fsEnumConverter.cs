// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsEnumConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001E9")]
public class fsEnumConverter : fsConverter
{
	[Token(Token = "0x60011AC")]
	[Address(RVA = "0x685AC00", Offset = "0x6859C00", VA = "0x685AC00", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011AD")]
	[Address(RVA = "0x685AC70", Offset = "0x6859C70", VA = "0x685AC70", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011AE")]
	[Address(RVA = "0x685AC80", Offset = "0x6859C80", VA = "0x685AC80", Slot = "6")]
	public override bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011AF")]
	[Address(RVA = "0x685AC90", Offset = "0x6859C90", VA = "0x685AC90", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011B0")]
	[Address(RVA = "0x685ACF0", Offset = "0x6859CF0", VA = "0x685ACF0", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011B1")]
	[Address(RVA = "0x685B300", Offset = "0x685A300", VA = "0x685B300", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011B2")]
	private static bool ArrayContains<T>(T[] values, T value)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B3")]
	[Address(RVA = "0x685BCD0", Offset = "0x685ACD0", VA = "0x685BCD0")]
	public fsEnumConverter()
	{
	}
}
