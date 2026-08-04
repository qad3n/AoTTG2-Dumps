// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsSerializationCallbackProcessor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x2000207")]
public class fsSerializationCallbackProcessor : fsObjectProcessor
{
	[Token(Token = "0x6001242")]
	[Address(RVA = "0x4D7C020", Offset = "0x4D7C020", VA = "0x4D7C020", Slot = "4")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001243")]
	[Address(RVA = "0x4D7C0A0", Offset = "0x4D7C0A0", VA = "0x4D7C0A0", Slot = "5")]
	public override void OnBeforeSerialize(Type storageType, object instance)
	{
	}

	[Token(Token = "0x6001244")]
	[Address(RVA = "0x4D7C190", Offset = "0x4D7C190", VA = "0x4D7C190", Slot = "6")]
	public override void OnAfterSerialize(Type storageType, object instance, ref fsData data)
	{
	}

	[Token(Token = "0x6001245")]
	[Address(RVA = "0x4D7C290", Offset = "0x4D7C290", VA = "0x4D7C290", Slot = "8")]
	public override void OnBeforeDeserializeAfterInstanceCreation(Type storageType, object instance, ref fsData data)
	{
	}

	[Token(Token = "0x6001246")]
	[Address(RVA = "0x4D7C470", Offset = "0x4D7C470", VA = "0x4D7C470", Slot = "9")]
	public override void OnAfterDeserialize(Type storageType, object instance)
	{
	}

	[Token(Token = "0x6001247")]
	[Address(RVA = "0x4D7C570", Offset = "0x4D7C570", VA = "0x4D7C570")]
	public fsSerializationCallbackProcessor()
	{
	}
}
