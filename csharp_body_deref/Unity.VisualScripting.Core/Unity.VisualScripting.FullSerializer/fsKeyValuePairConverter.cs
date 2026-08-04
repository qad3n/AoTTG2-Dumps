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

[Token(Token = "0x20001E6")]
public class fsKeyValuePairConverter : fsConverter
{
	[Token(Token = "0x60011A0")]
	[Address(RVA = "0x4D6FA30", Offset = "0x4D6FA30", VA = "0x4D6FA30", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A1")]
	[Address(RVA = "0x4D6FB10", Offset = "0x4D6FB10", VA = "0x4D6FB10", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A2")]
	[Address(RVA = "0x4D6FB20", Offset = "0x4D6FB20", VA = "0x4D6FB20", Slot = "6")]
	public override bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A3")]
	[Address(RVA = "0x4D6FB30", Offset = "0x4D6FB30", VA = "0x4D6FB30", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011A4")]
	[Address(RVA = "0x4D6FFC0", Offset = "0x4D6FFC0", VA = "0x4D6FFC0", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011A5")]
	[Address(RVA = "0x4D70470", Offset = "0x4D70470", VA = "0x4D70470")]
	public fsKeyValuePairConverter()
	{
	}
}
