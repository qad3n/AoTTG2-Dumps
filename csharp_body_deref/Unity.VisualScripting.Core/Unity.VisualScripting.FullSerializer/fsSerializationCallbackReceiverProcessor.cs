// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsSerializationCallbackReceiverProcessor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x2000208")]
public class fsSerializationCallbackReceiverProcessor : fsObjectProcessor
{
	[Token(Token = "0x6001248")]
	[Address(RVA = "0x4D7C590", Offset = "0x4D7C590", VA = "0x4D7C590", Slot = "4")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001249")]
	[Address(RVA = "0x4D7C610", Offset = "0x4D7C610", VA = "0x4D7C610", Slot = "5")]
	public override void OnBeforeSerialize(Type storageType, object instance)
	{
	}

	[Token(Token = "0x600124A")]
	[Address(RVA = "0x4D7C720", Offset = "0x4D7C720", VA = "0x4D7C720", Slot = "9")]
	public override void OnAfterDeserialize(Type storageType, object instance)
	{
	}

	[Token(Token = "0x600124B")]
	[Address(RVA = "0x4D7C840", Offset = "0x4D7C840", VA = "0x4D7C840")]
	public fsSerializationCallbackReceiverProcessor()
	{
	}
}
