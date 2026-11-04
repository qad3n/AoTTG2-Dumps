// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsArrayConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001E6")]
public class fsArrayConverter : fsConverter
{
	[Token(Token = "0x6001199")]
	[Address(RVA = "0x2D994F0", Offset = "0x2D97AF0", VA = "0x182D994F0", Slot = "9")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600119A")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "5")]
	public override bool RequestCycleSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x600119B")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "6")]
	public override bool RequestInheritanceSupport(Type storageType)
	{
		return default(bool);
	}

	[Token(Token = "0x600119C")]
	[Address(RVA = "0x2E5DB90", Offset = "0x2E5C190", VA = "0x182E5DB90", Slot = "7")]
	public override fsResult TrySerialize(object instance, out fsData serialized, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600119D")]
	[Address(RVA = "0x2E5D840", Offset = "0x2E5BE40", VA = "0x182E5D840", Slot = "8")]
	public override fsResult TryDeserialize(fsData data, ref object instance, Type storageType)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600119E")]
	[Address(RVA = "0x2E5D7C0", Offset = "0x2E5BDC0", VA = "0x182E5D7C0", Slot = "4")]
	public override object CreateInstance(fsData data, Type storageType)
	{
		return null;
	}

	[Token(Token = "0x600119F")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public fsArrayConverter()
	{
	}
}
