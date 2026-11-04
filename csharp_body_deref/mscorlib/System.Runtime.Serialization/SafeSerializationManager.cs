// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.SafeSerializationManager
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Serializable]
[Token(Token = "0x2000418")]
internal sealed class SafeSerializationManager : IObjectReference, ISerializable
{
	[Token(Token = "0x400101A")]
	[FieldOffset(Offset = "0x10")]
	private IList<object> m_serializedStates;

	[Token(Token = "0x400101B")]
	[FieldOffset(Offset = "0x18")]
	private SerializationInfo m_savedSerializationInfo;

	[Token(Token = "0x400101C")]
	[FieldOffset(Offset = "0x20")]
	private object m_realObject;

	[Token(Token = "0x400101D")]
	[FieldOffset(Offset = "0x28")]
	private System.RuntimeType m_realType;

	[Token(Token = "0x400101E")]
	[FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	private EventHandler<SafeSerializationEventArgs> SerializeObjectState;

	[Token(Token = "0x1700043C")]
	internal bool IsActive
	{
		[Token(Token = "0x6002058")]
		[Address(RVA = "0x1A1E5D0", Offset = "0x1A1CBD0", VA = "0x181A1E5D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002056")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal SafeSerializationManager()
	{
	}

	[Token(Token = "0x6002057")]
	[Address(RVA = "0x1A1E380", Offset = "0x1A1C980", VA = "0x181A1E380")]
	private SafeSerializationManager(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002059")]
	[Address(RVA = "0x1A1DA40", Offset = "0x1A1C040", VA = "0x181A1DA40")]
	internal void CompleteSerialization(object serializedObject, SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600205A")]
	[Address(RVA = "0x1A1D780", Offset = "0x1A1BD80", VA = "0x181A1D780")]
	internal void CompleteDeserialization(object deserializedObject)
	{
	}

	[Token(Token = "0x600205B")]
	[Address(RVA = "0x1A1E240", Offset = "0x1A1C840", VA = "0x181A1E240", Slot = "5")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600205C")]
	[Address(RVA = "0x1A1DF10", Offset = "0x1A1C510", VA = "0x181A1DF10", Slot = "4")]
	private object System_002ERuntime_002ESerialization_002EIObjectReference_002EGetRealObject(StreamingContext context)
	{
		return null;
	}

	[Token(Token = "0x600205D")]
	[Address(RVA = "0x1A1DE40", Offset = "0x1A1C440", VA = "0x181A1DE40")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext context)
	{
	}
}
