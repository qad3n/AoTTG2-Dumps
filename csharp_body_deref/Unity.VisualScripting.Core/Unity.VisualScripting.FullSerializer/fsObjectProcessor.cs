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

[Token(Token = "0x200020D")]
public abstract class fsObjectProcessor
{
	[Token(Token = "0x600126F")]
	[Address(RVA = "0x4D80CD0", Offset = "0x4D80CD0", VA = "0x4D80CD0", Slot = "4")]
	public virtual bool CanProcess(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001270")]
	[Address(RVA = "0x4D80D10", Offset = "0x4D80D10", VA = "0x4D80D10", Slot = "5")]
	public virtual void OnBeforeSerialize(Type storageType, object instance)
	{
	}

	[Token(Token = "0x6001271")]
	[Address(RVA = "0x4D80D20", Offset = "0x4D80D20", VA = "0x4D80D20", Slot = "6")]
	public virtual void OnAfterSerialize(Type storageType, object instance, ref fsData data)
	{
	}

	[Token(Token = "0x6001272")]
	[Address(RVA = "0x4D80D30", Offset = "0x4D80D30", VA = "0x4D80D30", Slot = "7")]
	public virtual void OnBeforeDeserialize(Type storageType, ref fsData data)
	{
	}

	[Token(Token = "0x6001273")]
	[Address(RVA = "0x4D80D40", Offset = "0x4D80D40", VA = "0x4D80D40", Slot = "8")]
	public virtual void OnBeforeDeserializeAfterInstanceCreation(Type storageType, object instance, ref fsData data)
	{
	}

	[Token(Token = "0x6001274")]
	[Address(RVA = "0x4D80D50", Offset = "0x4D80D50", VA = "0x4D80D50", Slot = "9")]
	public virtual void OnAfterDeserialize(Type storageType, object instance)
	{
	}

	[Token(Token = "0x6001275")]
	[Address(RVA = "0x4D7C580", Offset = "0x4D7C580", VA = "0x4D7C580")]
	protected fsObjectProcessor()
	{
	}
}
