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
	[Address(RVA = "0x685FA40", Offset = "0x685EA40", VA = "0x685FA40", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011EA")]
	[Address(RVA = "0x685FB10", Offset = "0x685EB10", VA = "0x685FB10", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011EB")]
	[Address(RVA = "0x685FE80", Offset = "0x685EE80", VA = "0x685FE80", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011EC")]
	[Address(RVA = "0x68601B0", Offset = "0x685F1B0", VA = "0x68601B0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011ED")]
	[Address(RVA = "0x6860220", Offset = "0x685F220", VA = "0x6860220")]
	public fsReflectedConverter()
	{
	}
}
