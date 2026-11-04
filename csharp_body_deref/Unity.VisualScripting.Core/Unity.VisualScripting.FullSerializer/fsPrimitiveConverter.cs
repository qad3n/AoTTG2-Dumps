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
	[Address(RVA = "0x2E6C2A0", Offset = "0x2E6A8A0", VA = "0x182E6C2A0", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011E0")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011E1")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "6")]
	public override bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011E2")]
	[Address(RVA = "0x2E6CBB0", Offset = "0x2E6B1B0", VA = "0x182E6CBB0", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011E3")]
	[Address(RVA = "0x2E6C3A0", Offset = "0x2E6A9A0", VA = "0x182E6C3A0", Slot = "8")]
	public override fsResult TryDeserialize(fsData storage, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011E4")]
	[Address(RVA = "0x2E6D340", Offset = "0x2E6B940", VA = "0x182E6D340")]
	private static bool UseBool(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011E5")]
	[Address(RVA = "0x2E6D480", Offset = "0x2E6BA80", VA = "0x182E6D480")]
	private static bool UseInt64(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011E6")]
	[Address(RVA = "0x2E6D390", Offset = "0x2E6B990", VA = "0x182E6D390")]
	private static bool UseDouble(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011E7")]
	[Address(RVA = "0x2E6D680", Offset = "0x2E6BC80", VA = "0x182E6D680")]
	private static bool UseString(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011E8")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public fsPrimitiveConverter()
	{
	}
}
