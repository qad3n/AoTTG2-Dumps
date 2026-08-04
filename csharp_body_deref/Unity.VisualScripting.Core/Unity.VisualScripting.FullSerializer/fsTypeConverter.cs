// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsTypeConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001EA")]
public class fsTypeConverter : fsConverter
{
	[Token(Token = "0x60011BA")]
	[Address(RVA = "0x4D72D80", Offset = "0x4D72D80", VA = "0x4D72D80", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011BB")]
	[Address(RVA = "0x4D72DE0", Offset = "0x4D72DE0", VA = "0x4D72DE0", Slot = "5")]
	public override bool RequestCycleSupport(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011BC")]
	[Address(RVA = "0x4D72DF0", Offset = "0x4D72DF0", VA = "0x4D72DF0", Slot = "6")]
	public override bool RequestInheritanceSupport(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011BD")]
	[Address(RVA = "0x4D72E00", Offset = "0x4D72E00", VA = "0x4D72E00", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011BE")]
	[Address(RVA = "0x4D72F10", Offset = "0x4D72F10", VA = "0x4D72F10", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011BF")]
	[Address(RVA = "0x4D730F0", Offset = "0x4D730F0", VA = "0x4D730F0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x60011C0")]
	[Address(RVA = "0x4D73100", Offset = "0x4D73100", VA = "0x4D73100")]
	public fsTypeConverter()
	{
	}
}
