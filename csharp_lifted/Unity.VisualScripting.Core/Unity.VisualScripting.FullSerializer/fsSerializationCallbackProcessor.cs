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

[Token(Token = "0x200020D")]
public class fsSerializationCallbackProcessor : fsObjectProcessor
{
	[Token(Token = "0x6001279")]
	[Address(RVA = "0x68651A0", Offset = "0x68641A0", VA = "0x68651A0", Slot = "4")]
	public override bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600127A")]
	[Address(RVA = "0x6865220", Offset = "0x6864220", VA = "0x6865220", Slot = "5")]
	public override void OnBeforeSerialize(Type storageType, object instance)
	{
	}

	[Token(Token = "0x600127B")]
	[Address(RVA = "0x6865310", Offset = "0x6864310", VA = "0x6865310", Slot = "6")]
	public override void OnAfterSerialize(Type storageType, object instance, ref fsData data)
	{
	}

	[Token(Token = "0x600127C")]
	[Address(RVA = "0x6865410", Offset = "0x6864410", VA = "0x6865410", Slot = "8")]
	public override void OnBeforeDeserializeAfterInstanceCreation(Type storageType, object instance, ref fsData data)
	{
	}

	[Token(Token = "0x600127D")]
	[Address(RVA = "0x68655F0", Offset = "0x68645F0", VA = "0x68655F0", Slot = "9")]
	public override void OnAfterDeserialize(Type storageType, object instance)
	{
	}

	[Token(Token = "0x600127E")]
	[Address(RVA = "0x68656F0", Offset = "0x68646F0", VA = "0x68656F0")]
	public fsSerializationCallbackProcessor()
	{
	}
}
