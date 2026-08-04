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
[Token(Token = "0x20003E9")]
internal sealed class SafeSerializationManager : IObjectReference, ISerializable
{
	[Token(Token = "0x4001014")]
	[FieldOffset(Offset = "0x10")]
	private IList<object> m_serializedStates;

	[Token(Token = "0x4001015")]
	[FieldOffset(Offset = "0x18")]
	private SerializationInfo m_savedSerializationInfo;

	[Token(Token = "0x4001016")]
	[FieldOffset(Offset = "0x20")]
	private object m_realObject;

	[Token(Token = "0x4001017")]
	[FieldOffset(Offset = "0x28")]
	private System.RuntimeType m_realType;

	[Token(Token = "0x4001018")]
	[FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	private EventHandler<SafeSerializationEventArgs> SerializeObjectState;

	[Token(Token = "0x4001019")]
	private const string RealTypeSerializationName = "CLR_SafeSerializationManager_RealType";

	[Token(Token = "0x1700043A")]
	internal bool IsActive
	{
		[Token(Token = "0x6001FE9")]
		[Address(RVA = "0x3B9E6B0", Offset = "0x3B9E6B0", VA = "0x3B9E6B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001FE7")]
	[Address(RVA = "0x3B9E160", Offset = "0x3B9E160", VA = "0x3B9E160")]
	internal SafeSerializationManager()
	{
	}

	[Token(Token = "0x6001FE8")]
	[Address(RVA = "0x3B9E170", Offset = "0x3B9E170", VA = "0x3B9E170")]
	private SafeSerializationManager(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001FEA")]
	[Address(RVA = "0x3B9E6C0", Offset = "0x3B9E6C0", VA = "0x3B9E6C0")]
	internal void CompleteSerialization(object serializedObject, SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001FEB")]
	[Address(RVA = "0x3B9EA30", Offset = "0x3B9EA30", VA = "0x3B9EA30")]
	internal void CompleteDeserialization(object deserializedObject)
	{
	}

	[Token(Token = "0x6001FEC")]
	[Address(RVA = "0x3B9EE30", Offset = "0x3B9EE30", VA = "0x3B9EE30", Slot = "5")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001FED")]
	[Address(RVA = "0x3B9EEC0", Offset = "0x3B9EEC0", VA = "0x3B9EEC0", Slot = "4")]
	private object System_002ERuntime_002ESerialization_002EIObjectReference_002EGetRealObject(StreamingContext context)
	{
		return null;
	}

	[Token(Token = "0x6001FEE")]
	[Address(RVA = "0x3B9F1C0", Offset = "0x3B9F1C0", VA = "0x3B9F1C0")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext context)
	{
	}
}
