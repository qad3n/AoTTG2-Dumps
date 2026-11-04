// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsObjectProcessor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x2000214")]
public abstract class fsObjectProcessor
{
	[Token(Token = "0x60012A7")]
	[Address(RVA = "0x2E71080", Offset = "0x2E6F680", VA = "0x182E71080", Slot = "4")]
	public virtual bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60012A8")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	public virtual void OnBeforeSerialize(Type storageType, object instance)
	{
	}

	[Token(Token = "0x60012A9")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	public virtual void OnAfterSerialize(Type storageType, object instance, ref fsData data)
	{
	}

	[Token(Token = "0x60012AA")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	public virtual void OnBeforeDeserialize(Type storageType, ref fsData data)
	{
	}

	[Token(Token = "0x60012AB")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	public virtual void OnBeforeDeserializeAfterInstanceCreation(Type storageType, object instance, ref fsData data)
	{
	}

	[Token(Token = "0x60012AC")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	public virtual void OnAfterDeserialize(Type storageType, object instance)
	{
	}

	[Token(Token = "0x60012AD")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected fsObjectProcessor()
	{
	}
}
