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

[Token(Token = "0x200020E")]
public class fsSerializationCallbackReceiverProcessor : fsObjectProcessor
{
	[Token(Token = "0x600127F")]
	[Address(RVA = "0x2E6E530", Offset = "0x2E6CB30", VA = "0x182E6E530", Slot = "4")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001280")]
	[Address(RVA = "0x2E6E680", Offset = "0x2E6CC80", VA = "0x182E6E680", Slot = "5")]
	public override void OnBeforeSerialize(Type storageType, object instance)
	{
	}

	[Token(Token = "0x6001281")]
	[Address(RVA = "0x2E6E5B0", Offset = "0x2E6CBB0", VA = "0x182E6E5B0", Slot = "9")]
	public override void OnAfterDeserialize(Type storageType, object instance)
	{
	}

	[Token(Token = "0x6001282")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public fsSerializationCallbackReceiverProcessor()
	{
	}
}
