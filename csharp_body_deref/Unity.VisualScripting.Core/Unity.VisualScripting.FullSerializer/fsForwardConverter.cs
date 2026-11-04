// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsForwardConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001ED")]
public class fsForwardConverter : fsConverter
{
	[Token(Token = "0x400096C")]
	[FieldOffset(Offset = "0x18")]
	private string _memberName;

	[Token(Token = "0x60011BC")]
	[Address(RVA = "0x2E63CD0", Offset = "0x2E622D0", VA = "0x182E63CD0")]
	public fsForwardConverter(fsForwardAttribute attribute)
	{
	}

	[Token(Token = "0x60011BD")]
	[Address(RVA = "0x2E636B0", Offset = "0x2E61CB0", VA = "0x182E636B0", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011BE")]
	[Address(RVA = "0x2E63780", Offset = "0x2E61D80", VA = "0x182E63780")]
	private fsResult GetProperty(object instance, out fsMetaProperty property)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011BF")]
	[Address(RVA = "0x2E63B40", Offset = "0x2E62140", VA = "0x182E63B40", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011C0")]
	[Address(RVA = "0x2E63980", Offset = "0x2E61F80", VA = "0x182E63980", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011C1")]
	[Address(RVA = "0x2E63700", Offset = "0x2E61D00", VA = "0x182E63700", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}
}
