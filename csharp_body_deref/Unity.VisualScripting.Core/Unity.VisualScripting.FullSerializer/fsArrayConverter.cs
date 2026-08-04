// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsArrayConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001DC")]
public class fsArrayConverter : fsConverter
{
	[Token(Token = "0x6001165")]
	[Address(RVA = "0x4D689D0", Offset = "0x4D689D0", VA = "0x4D689D0", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001166")]
	[Address(RVA = "0x4D689F0", Offset = "0x4D689F0", VA = "0x4D689F0", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001167")]
	[Address(RVA = "0x4D68A00", Offset = "0x4D68A00", VA = "0x4D68A00", Slot = "6")]
	public override bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001168")]
	[Address(RVA = "0x4D68A10", Offset = "0x4D68A10", VA = "0x4D68A10", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001169")]
	[Address(RVA = "0x4D68FB0", Offset = "0x4D68FB0", VA = "0x4D68FB0", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600116A")]
	[Address(RVA = "0x4D695E0", Offset = "0x4D695E0", VA = "0x4D695E0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x600116B")]
	[Address(RVA = "0x4D69660", Offset = "0x4D69660", VA = "0x4D69660")]
	public fsArrayConverter()
	{
	}
}
