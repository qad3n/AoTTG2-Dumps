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
	[Address(RVA = "0x2E694E0", Offset = "0x2E67AE0", VA = "0x182E694E0", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011D5")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011D6")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "6")]
	public override bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x60011D7")]
	[Address(RVA = "0x2E695C0", Offset = "0x2E67BC0", VA = "0x182E695C0", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011D8")]
	[Address(RVA = "0x2E699B0", Offset = "0x2E67FB0", VA = "0x182E699B0", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60011D9")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public fsKeyValuePairConverter()
	{
	}
}
