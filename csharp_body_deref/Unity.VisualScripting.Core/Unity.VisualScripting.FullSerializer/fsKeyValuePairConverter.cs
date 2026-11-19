// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsKeyValuePairConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001F0")]
public class fsKeyValuePairConverter : fsConverter
{
	[Token(Token = "0x60011D4")]
	[Address(RVA = "0x685DB80", Offset = "0x685CB80", VA = "0x685DB80", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011D5")]
	[Address(RVA = "0x685DC60", Offset = "0x685CC60", VA = "0x685DC60", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011D6")]
	[Address(RVA = "0x685DC70", Offset = "0x685CC70", VA = "0x685DC70", Slot = "6")]
	public override bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011D7")]
	[Address(RVA = "0x685DC80", Offset = "0x685CC80", VA = "0x685DC80", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011D8")]
	[Address(RVA = "0x685E030", Offset = "0x685D030", VA = "0x685E030", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011D9")]
	[Address(RVA = "0x685E4D0", Offset = "0x685D4D0", VA = "0x685E4D0")]
	public fsKeyValuePairConverter()
	{
	}
}
