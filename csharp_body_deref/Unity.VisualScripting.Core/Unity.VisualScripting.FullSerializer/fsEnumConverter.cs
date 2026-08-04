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

[Token(Token = "0x20001DF")]
public class fsEnumConverter : fsConverter
{
	[Token(Token = "0x6001178")]
	[Address(RVA = "0x4D6C9F0", Offset = "0x4D6C9F0", VA = "0x4D6C9F0", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001179")]
	[Address(RVA = "0x4D6CA60", Offset = "0x4D6CA60", VA = "0x4D6CA60", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x600117A")]
	[Address(RVA = "0x4D6CA70", Offset = "0x4D6CA70", VA = "0x4D6CA70", Slot = "6")]
	public override bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x600117B")]
	[Address(RVA = "0x4D6CA80", Offset = "0x4D6CA80", VA = "0x4D6CA80", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x600117C")]
	[Address(RVA = "0x4D6CAE0", Offset = "0x4D6CAE0", VA = "0x4D6CAE0", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600117D")]
	[Address(RVA = "0x4D6D300", Offset = "0x4D6D300", VA = "0x4D6D300", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600117E")]
	private static bool ArrayContains<T>(T[] values, T value)
	{
		return default(bool);
	}

	[Token(Token = "0x600117F")]
	[Address(RVA = "0x4D6DCD0", Offset = "0x4D6DCD0", VA = "0x4D6DCD0")]
	public fsEnumConverter()
	{
	}
}
