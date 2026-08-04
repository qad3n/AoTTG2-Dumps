// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.Internal.Converters.UnityEvent_Converter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer.Internal.Converters;

[Token(Token = "0x2000225")]
public class UnityEvent_Converter : fsConverter
{
	[Token(Token = "0x6001324")]
	[Address(RVA = "0x4D8E650", Offset = "0x4D8E650", VA = "0x4D8E650", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001325")]
	[Address(RVA = "0x4D8E730", Offset = "0x4D8E730", VA = "0x4D8E730", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001326")]
	[Address(RVA = "0x4D8E740", Offset = "0x4D8E740", VA = "0x4D8E740", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001327")]
	[Address(RVA = "0x4D8E810", Offset = "0x4D8E810", VA = "0x4D8E810", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001328")]
	[Address(RVA = "0x4D8E8A0", Offset = "0x4D8E8A0", VA = "0x4D8E8A0")]
	public UnityEvent_Converter()
	{
	}
}
