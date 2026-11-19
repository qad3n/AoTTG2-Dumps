// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.ObjectWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200042C")]
internal sealed class ObjectWriter
{
	[Token(Token = "0x400110A")]
	[FieldOffset(Offset = "0x10")]
	private Queue m_objectQueue;

	[Token(Token = "0x400110B")]
	[FieldOffset(Offset = "0x18")]
	private ObjectIDGenerator m_idGenerator;

	[Token(Token = "0x400110C")]
	[FieldOffset(Offset = "0x20")]
	private int m_currentId;

	[Token(Token = "0x400110D")]
	[FieldOffset(Offset = "0x28")]
	private ISurrogateSelector m_surrogates;

	[Token(Token = "0x400110E")]
	[FieldOffset(Offset = "0x30")]
	private StreamingContext m_context;

	[Token(Token = "0x400110F")]
	[FieldOffset(Offset = "0x40")]
	private System.Runtime.Serialization.Formatters.Binary.__BinaryWriter serWriter;

	[Token(Token = "0x4001110")]
	[FieldOffset(Offset = "0x48")]
	private SerializationObjectManager m_objectManager;

	[Token(Token = "0x4001111")]
	[FieldOffset(Offset = "0x50")]
	private long topId;

	[Token(Token = "0x4001112")]
	[FieldOffset(Offset = "0x58")]
	private string topName;

	[Token(Token = "0x4001113")]
	[FieldOffset(Offset = "0x60")]
	private Header[] headers;

	[Token(Token = "0x4001114")]
	[FieldOffset(Offset = "0x68")]
	private System.Runtime.Serialization.Formatters.Binary.InternalFE formatterEnums;

	[Token(Token = "0x4001115")]
	[FieldOffset(Offset = "0x70")]
	private SerializationBinder m_binder;

	[Token(Token = "0x4001116")]
	[FieldOffset(Offset = "0x78")]
	private System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit;

	[Token(Token = "0x4001117")]
	[FieldOffset(Offset = "0x80")]
	private IFormatterConverter m_formatterConverter;

	[Token(Token = "0x4001118")]
	[FieldOffset(Offset = "0x88")]
	internal object[] crossAppDomainArray;

	[Token(Token = "0x4001119")]
	[FieldOffset(Offset = "0x90")]
	private object previousObj;

	[Token(Token = "0x400111A")]
	[FieldOffset(Offset = "0x98")]
	private long previousId;

	[Token(Token = "0x400111B")]
	[FieldOffset(Offset = "0xA0")]
	private Type previousType;

	[Token(Token = "0x400111C")]
	[FieldOffset(Offset = "0xA8")]
	private System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE previousCode;

	[Token(Token = "0x400111D")]
	[FieldOffset(Offset = "0xB0")]
	private Hashtable assemblyToIdTable;

	[Token(Token = "0x400111E")]
	[FieldOffset(Offset = "0xB8")]
	private System.Runtime.Serialization.Formatters.Binary.SerStack niPool;

	[Token(Token = "0x17000455")]
	internal SerializationObjectManager ObjectManager
	{
		[Token(Token = "0x600217B")]
		[Address(RVA = "0x53B9C10", Offset = "0x53B8C10", VA = "0x53B9C10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002179")]
	[Address(RVA = "0x53B8980", Offset = "0x53B7980", VA = "0x53B8980")]
	internal ObjectWriter(ISurrogateSelector selector, StreamingContext context, System.Runtime.Serialization.Formatters.Binary.InternalFE formatterEnums, SerializationBinder binder)
	{
	}

	[Token(Token = "0x600217A")]
	[Address(RVA = "0x53B8B90", Offset = "0x53B7B90", VA = "0x53B8B90")]
	internal void Serialize(object graph, Header[] inHeaders, System.Runtime.Serialization.Formatters.Binary.__BinaryWriter serWriter, bool fCheck)
	{
	}

	[Token(Token = "0x600217C")]
	[Address(RVA = "0x53B9590", Offset = "0x53B8590", VA = "0x53B9590")]
	private void Write(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo)
	{
	}

	[Token(Token = "0x600217D")]
	[Address(RVA = "0x53BA5E0", Offset = "0x53B95E0", VA = "0x53BA5E0")]
	private void Write(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, string[] memberNames, Type[] memberTypes, object[] memberData, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo[] memberObjectInfos)
	{
	}

	[Token(Token = "0x600217E")]
	[Address(RVA = "0x53BA920", Offset = "0x53B9920", VA = "0x53BA920")]
	private void WriteMemberSetup(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, string memberName, Type memberType, object memberData, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo memberObjectInfo)
	{
	}

	[Token(Token = "0x600217F")]
	[Address(RVA = "0x53BAB00", Offset = "0x53B9B00", VA = "0x53BAB00")]
	private void WriteMembers(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberTypeNameInfo, object memberData, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo memberObjectInfo)
	{
	}

	[Token(Token = "0x6002180")]
	[Address(RVA = "0x53B9C20", Offset = "0x53B8C20", VA = "0x53B9C20")]
	private void WriteArray(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo memberObjectInfo)
	{
	}

	[Token(Token = "0x6002181")]
	[Address(RVA = "0x53BB360", Offset = "0x53BA360", VA = "0x53BB360")]
	private void WriteArrayMember(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemTypeNameInfo, object data)
	{
	}

	[Token(Token = "0x6002182")]
	[Address(RVA = "0x53BB660", Offset = "0x53BA660", VA = "0x53BB660")]
	private void WriteRectangle(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, int rank, int[] maxA, Array array, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemNameTypeInfo, int[] lowerBoundA)
	{
	}

	[Token(Token = "0x6002183")]
	[Address(RVA = "0x53B9AA0", Offset = "0x53B8AA0", VA = "0x53B9AA0")]
	private object GetNext(out long objID)
	{
		return null;
	}

	[Token(Token = "0x6002184")]
	[Address(RVA = "0x53B9110", Offset = "0x53B8110", VA = "0x53B9110")]
	private long InternalGetId(object obj, bool assignUniqueIdToValueType, Type type, out bool isNew)
	{
		return default(long);
	}

	[Token(Token = "0x6002185")]
	[Address(RVA = "0x53BBD20", Offset = "0x53BAD20", VA = "0x53BBD20")]
	private long Schedule(object obj, bool assignUniqueIdToValueType, Type type)
	{
		return default(long);
	}

	[Token(Token = "0x6002186")]
	[Address(RVA = "0x53BB1D0", Offset = "0x53BA1D0", VA = "0x53BB1D0")]
	private long Schedule(object obj, bool assignUniqueIdToValueType, Type type, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo)
	{
		return default(long);
	}

	[Token(Token = "0x6002187")]
	[Address(RVA = "0x53BB270", Offset = "0x53BA270", VA = "0x53BB270")]
	private bool WriteKnownValueClass(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, object data)
	{
		return default(bool);
	}

	[Token(Token = "0x6002188")]
	[Address(RVA = "0x53BB250", Offset = "0x53BA250", VA = "0x53BB250")]
	private void WriteObjectRef(System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo, long objectId)
	{
	}

	[Token(Token = "0x6002189")]
	[Address(RVA = "0x53BBD90", Offset = "0x53BAD90", VA = "0x53BBD90")]
	private void WriteString(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, object stringObject)
	{
	}

	[Token(Token = "0x600218A")]
	[Address(RVA = "0x53BAF20", Offset = "0x53B9F20", VA = "0x53BAF20")]
	private bool CheckForNull(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, object data)
	{
		return default(bool);
	}

	[Token(Token = "0x600218B")]
	[Address(RVA = "0x53B90F0", Offset = "0x53B80F0", VA = "0x53B90F0")]
	private void WriteSerializedStreamHeader(long topId, long headerId)
	{
	}

	[Token(Token = "0x600218C")]
	[Address(RVA = "0x53BBEB0", Offset = "0x53BAEB0", VA = "0x53BBEB0")]
	private System.Runtime.Serialization.Formatters.Binary.NameInfo TypeToNameInfo(Type type, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code, System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo)
	{
		return null;
	}

	[Token(Token = "0x600218D")]
	[Address(RVA = "0x53BAA40", Offset = "0x53B9A40", VA = "0x53BAA40")]
	private System.Runtime.Serialization.Formatters.Binary.NameInfo TypeToNameInfo(Type type)
	{
		return null;
	}

	[Token(Token = "0x600218E")]
	[Address(RVA = "0x53B9480", Offset = "0x53B8480", VA = "0x53B9480")]
	private System.Runtime.Serialization.Formatters.Binary.NameInfo TypeToNameInfo(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo)
	{
		return null;
	}

	[Token(Token = "0x600218F")]
	[Address(RVA = "0x53BB100", Offset = "0x53BA100", VA = "0x53BB100")]
	private System.Runtime.Serialization.Formatters.Binary.NameInfo TypeToNameInfo(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo)
	{
		return null;
	}

	[Token(Token = "0x6002190")]
	[Address(RVA = "0x53BAFE0", Offset = "0x53B9FE0", VA = "0x53BAFE0")]
	private void TypeToNameInfo(Type type, System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo)
	{
	}

	[Token(Token = "0x6002191")]
	[Address(RVA = "0x53BA8E0", Offset = "0x53B98E0", VA = "0x53BA8E0")]
	private System.Runtime.Serialization.Formatters.Binary.NameInfo MemberToNameInfo(string name)
	{
		return null;
	}

	[Token(Token = "0x6002192")]
	[Address(RVA = "0x53BA540", Offset = "0x53B9540", VA = "0x53BA540")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE ToCode(Type type)
	{
		return default(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE);
	}

	[Token(Token = "0x6002193")]
	[Address(RVA = "0x53B91E0", Offset = "0x53B81E0", VA = "0x53B91E0")]
	private long GetAssemblyId(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo)
	{
		return default(long);
	}

	[Token(Token = "0x6002194")]
	[Address(RVA = "0x53BA520", Offset = "0x53B9520", VA = "0x53BA520")]
	private Type GetType(object obj)
	{
		return null;
	}

	[Token(Token = "0x6002195")]
	[Address(RVA = "0x53BBF90", Offset = "0x53BAF90", VA = "0x53BBF90")]
	private System.Runtime.Serialization.Formatters.Binary.NameInfo GetNameInfo()
	{
		return null;
	}

	[Token(Token = "0x6002196")]
	[Address(RVA = "0x53BA510", Offset = "0x53B9510", VA = "0x53BA510")]
	private bool CheckTypeFormat(FormatterTypeStyle test, FormatterTypeStyle want)
	{
		return default(bool);
	}

	[Token(Token = "0x6002197")]
	[Address(RVA = "0x53B9A80", Offset = "0x53B8A80", VA = "0x53B9A80")]
	private void PutNameInfo(System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo)
	{
	}
}
