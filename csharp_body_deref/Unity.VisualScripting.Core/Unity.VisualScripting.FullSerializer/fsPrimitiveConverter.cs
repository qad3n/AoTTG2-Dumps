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

[Token(Token = "0x20001E8")]
public class fsPrimitiveConverter : fsConverter
{
	[Token(Token = "0x60011AB")]
	[Address(RVA = "0x4D70600", Offset = "0x4D70600", VA = "0x4D70600", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011AC")]
	[Address(RVA = "0x4D70700", Offset = "0x4D70700", VA = "0x4D70700", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011AD")]
	[Address(RVA = "0x4D70710", Offset = "0x4D70710", VA = "0x4D70710", Slot = "6")]
	public override bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011AE")]
	[Address(RVA = "0x4D70720", Offset = "0x4D70720", VA = "0x4D70720", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011AF")]
	[Address(RVA = "0x4D711C0", Offset = "0x4D711C0", VA = "0x4D711C0", Slot = "8")]
	public override fsResult TryDeserialize(fsData storage, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011B0")]
	[Address(RVA = "0x4D70D60", Offset = "0x4D70D60", VA = "0x4D70D60")]
	private static bool UseBool(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B1")]
	[Address(RVA = "0x4D70E00", Offset = "0x4D70E00", VA = "0x4D70E00")]
	private static bool UseInt64(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B2")]
	[Address(RVA = "0x4D70FF0", Offset = "0x4D70FF0", VA = "0x4D70FF0")]
	private static bool UseDouble(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B3")]
	[Address(RVA = "0x4D71130", Offset = "0x4D71130", VA = "0x4D71130")]
	private static bool UseString(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B4")]
	[Address(RVA = "0x4D71AA0", Offset = "0x4D71AA0", VA = "0x4D71AA0")]
	public fsPrimitiveConverter()
	{
	}
}
