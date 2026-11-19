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
	[Token(Token = "0x6001331")]
	[Address(RVA = "0x6874850", Offset = "0x6873850", VA = "0x6874850", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001332")]
	[Address(RVA = "0x6874930", Offset = "0x6873930", VA = "0x6874930", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001333")]
	[Address(RVA = "0x6874940", Offset = "0x6873940", VA = "0x6874940", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001334")]
	[Address(RVA = "0x6874A10", Offset = "0x6873A10", VA = "0x6874A10", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001335")]
	[Address(RVA = "0x6874AA0", Offset = "0x6873AA0", VA = "0x6874AA0")]
	public UnityEvent_Converter()
	{
	}
}
