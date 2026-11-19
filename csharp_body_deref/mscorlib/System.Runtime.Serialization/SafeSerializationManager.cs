// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.SafeSerializationManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Serializable]
[Token(Token = "0x20003F1")]
internal sealed class SafeSerializationManager : IObjectReference, ISerializable
{
	[Token(Token = "0x4000F7A")]
	[FieldOffset(Offset = "0x10")]
	private IList<object> m_serializedStates;

	[Token(Token = "0x4000F7B")]
	[FieldOffset(Offset = "0x18")]
	private SerializationInfo m_savedSerializationInfo;

	[Token(Token = "0x4000F7C")]
	[FieldOffset(Offset = "0x20")]
	private object m_realObject;

	[Token(Token = "0x4000F7D")]
	[FieldOffset(Offset = "0x28")]
	private System.RuntimeType m_realType;

	[Token(Token = "0x4000F7E")]
	[FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	private EventHandler<SafeSerializationEventArgs> SerializeObjectState;

	[Token(Token = "0x1700043B")]
	internal bool IsActive
	{
		[Token(Token = "0x600202E")]
		[Address(RVA = "0x53A5BE0", Offset = "0x53A4BE0", VA = "0x53A5BE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600202C")]
	[Address(RVA = "0x53A5690", Offset = "0x53A4690", VA = "0x53A5690")]
	internal SafeSerializationManager()
	{
	}

	[Token(Token = "0x600202D")]
	[Address(RVA = "0x53A56A0", Offset = "0x53A46A0", VA = "0x53A56A0")]
	private SafeSerializationManager(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600202F")]
	[Address(RVA = "0x53A5BF0", Offset = "0x53A4BF0", VA = "0x53A5BF0")]
	internal void CompleteSerialization(object serializedObject, SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002030")]
	[Address(RVA = "0x53A5F60", Offset = "0x53A4F60", VA = "0x53A5F60")]
	internal void CompleteDeserialization(object deserializedObject)
	{
	}

	[Token(Token = "0x6002031")]
	[Address(RVA = "0x53A6300", Offset = "0x53A5300", VA = "0x53A6300", Slot = "5")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002032")]
	[Address(RVA = "0x53A6390", Offset = "0x53A5390", VA = "0x53A6390", Slot = "4")]
	private object System_002ERuntime_002ESerialization_002EIObjectReference_002EGetRealObject(StreamingContext context)
	{
		return null;
	}

	[Token(Token = "0x6002033")]
	[Address(RVA = "0x53A6690", Offset = "0x53A5690", VA = "0x53A6690")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext context)
	{
	}
}
