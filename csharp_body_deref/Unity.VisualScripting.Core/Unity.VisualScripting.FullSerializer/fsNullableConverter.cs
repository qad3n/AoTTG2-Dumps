// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsNullableConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001E7")]
public class fsNullableConverter : fsConverter
{
	[Token(Token = "0x60011A6")]
	[Address(RVA = "0x4D70480", Offset = "0x4D70480", VA = "0x4D70480", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A7")]
	[Address(RVA = "0x4D70560", Offset = "0x4D70560", VA = "0x4D70560", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011A8")]
	[Address(RVA = "0x4D705A0", Offset = "0x4D705A0", VA = "0x4D705A0", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011A9")]
	[Address(RVA = "0x4D705E0", Offset = "0x4D705E0", VA = "0x4D705E0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011AA")]
	[Address(RVA = "0x4D705F0", Offset = "0x4D705F0", VA = "0x4D705F0")]
	public fsNullableConverter()
	{
	}
}
