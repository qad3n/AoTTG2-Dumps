// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsReflectedConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001F3")]
public class fsReflectedConverter : fsConverter
{
	[Token(Token = "0x60011E9")]
	[Address(RVA = "0x2E6D720", Offset = "0x2E6BD20", VA = "0x182E6D720", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011EA")]
	[Address(RVA = "0x2E6DB80", Offset = "0x2E6C180", VA = "0x182E6DB80", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011EB")]
	[Address(RVA = "0x2E6D870", Offset = "0x2E6BE70", VA = "0x182E6D870", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011EC")]
	[Address(RVA = "0x2E6D7F0", Offset = "0x2E6BDF0", VA = "0x182E6D7F0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011ED")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public fsReflectedConverter()
	{
	}
}
