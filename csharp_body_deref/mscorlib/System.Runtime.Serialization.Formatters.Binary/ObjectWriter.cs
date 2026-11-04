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

[Token(Token = "0x2000453")]
internal sealed class ObjectWriter
{
	[Token(Token = "0x40011AA")]
	[FieldOffset(Offset = "0x10")]
	private Queue m_objectQueue;

	[Token(Token = "0x40011AB")]
	[FieldOffset(Offset = "0x18")]
	private ObjectIDGenerator m_idGenerator;

	[Token(Token = "0x40011AC")]
	[FieldOffset(Offset = "0x20")]
	private int m_currentId;

	[Token(Token = "0x40011AD")]
	[FieldOffset(Offset = "0x28")]
	private ISurrogateSelector m_surrogates;

	[Token(Token = "0x40011AE")]
	[FieldOffset(Offset = "0x30")]
	private StreamingContext m_context;

	[Token(Token = "0x40011AF")]
	[FieldOffset(Offset = "0x40")]
	private System.Runtime.Serialization.Formatters.Binary.__BinaryWriter serWriter;

	[Token(Token = "0x40011B0")]
	[FieldOffset(Offset = "0x48")]
	private SerializationObjectManager m_objectManager;

	[Token(Token = "0x40011B1")]
	[FieldOffset(Offset = "0x50")]
	private long topId;

	[Token(Token = "0x40011B2")]
	[FieldOffset(Offset = "0x58")]
	private string topName;

	[Token(Token = "0x40011B3")]
	[FieldOffset(Offset = "0x60")]
	private Header[] headers;

	[Token(Token = "0x40011B4")]
	[FieldOffset(Offset = "0x68")]
	private System.Runtime.Serialization.Formatters.Binary.InternalFE formatterEnums;

	[Token(Token = "0x40011B5")]
	[FieldOffset(Offset = "0x70")]
	private SerializationBinder m_binder;

	[Token(Token = "0x40011B6")]
	[FieldOffset(Offset = "0x78")]
	private System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit;

	[Token(Token = "0x40011B7")]
	[FieldOffset(Offset = "0x80")]
	private IFormatterConverter m_formatterConverter;

	[Token(Token = "0x40011B8")]
	[FieldOffset(Offset = "0x88")]
	internal object[] crossAppDomainArray;

	[Token(Token = "0x40011B9")]
	[FieldOffset(Offset = "0x90")]
	private object previousObj;

	[Token(Token = "0x40011BA")]
	[FieldOffset(Offset = "0x98")]
	private long previousId;

	[Token(Token = "0x40011BB")]
	[FieldOffset(Offset = "0xA0")]
	private Type previousType;

	[Token(Token = "0x40011BC")]
	[FieldOffset(Offset = "0xA8")]
	private System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE previousCode;

	[Token(Token = "0x40011BD")]
	[FieldOffset(Offset = "0xB0")]
	private Hashtable assemblyToIdTable;

	[Token(Token = "0x40011BE")]
	[FieldOffset(Offset = "0xB8")]
	private System.Runtime.Serialization.Formatters.Binary.SerStack niPool;

	[Token(Token = "0x17000456")]
	internal SerializationObjectManager ObjectManager
	{
		[Token(Token = "0x60021A5")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60021A3")]
	[Address(RVA = "0x1A35E60", Offset = "0x1A34460", VA = "0x181A35E60")]
	internal ObjectWriter(ISurrogateSelector selector, StreamingContext context, System.Runtime.Serialization.Formatters.Binary.InternalFE formatterEnums, SerializationBinder binder)
	{
	}

	[Token(Token = "0x60021A4")]
	[Address(RVA = "0x1A32E30", Offset = "0x1A31430", VA = "0x181A32E30")]
	internal void Serialize(object graph, Header[] inHeaders, System.Runtime.Serialization.Formatters.Binary.__BinaryWriter serWriter, bool fCheck)
	{
	}

	[Token(Token = "0x60021A6")]
	[Address(RVA = "0x1A35760", Offset = "0x1A33D60", VA = "0x181A35760")]
	private void Write(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo)
	{
	}

	[Token(Token = "0x60021A7")]
	[Address(RVA = "0x1A35460", Offset = "0x1A33A60", VA = "0x181A35460")]
	private void Write(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, string[] memberNames, Type[] memberTypes, object[] memberData, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo[] memberObjectInfos)
	{
	}

	[Token(Token = "0x60021A8")]
	[Address(RVA = "0x1A34930", Offset = "0x1A32F30", VA = "0x181A34930")]
	private void WriteMemberSetup(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, string memberName, Type memberType, object memberData, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo memberObjectInfo)
	{
	}

	[Token(Token = "0x60021A9")]
	[Address(RVA = "0x1A34B00", Offset = "0x1A33100", VA = "0x181A34B00")]
	private void WriteMembers(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberTypeNameInfo, object memberData, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo memberObjectInfo)
	{
	}

	[Token(Token = "0x60021AA")]
	[Address(RVA = "0x1A33C40", Offset = "0x1A32240", VA = "0x181A33C40")]
	private void WriteArray(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo memberObjectInfo)
	{
	}

	[Token(Token = "0x60021AB")]
	[Address(RVA = "0x1A338F0", Offset = "0x1A31EF0", VA = "0x181A338F0")]
	private void WriteArrayMember(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemTypeNameInfo, object data)
	{
	}

	[Token(Token = "0x60021AC")]
	[Address(RVA = "0x1A350C0", Offset = "0x1A336C0", VA = "0x181A350C0")]
	private void WriteRectangle(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, int rank, int[] maxA, Array array, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemNameTypeInfo, int[] lowerBoundA)
	{
	}

	[Token(Token = "0x60021AD")]
	[Address(RVA = "0x1A329D0", Offset = "0x1A30FD0", VA = "0x181A329D0")]
	private object GetNext(out long objID)
	{
		return null;
	}

	[Token(Token = "0x60021AE")]
	[Address(RVA = "0x1A32BA0", Offset = "0x1A311A0", VA = "0x181A32BA0")]
	private long InternalGetId(object obj, bool assignUniqueIdToValueType, Type type, out bool isNew)
	{
		return default(long);
	}

	[Token(Token = "0x60021AF")]
	[Address(RVA = "0x1A32DB0", Offset = "0x1A313B0", VA = "0x181A32DB0")]
	private long Schedule(object obj, bool assignUniqueIdToValueType, Type type)
	{
		return default(long);
	}

	[Token(Token = "0x60021B0")]
	[Address(RVA = "0x1A32D10", Offset = "0x1A31310", VA = "0x181A32D10")]
	private long Schedule(object obj, bool assignUniqueIdToValueType, Type type, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo)
	{
		return default(long);
	}

	[Token(Token = "0x60021B1")]
	[Address(RVA = "0x1A34750", Offset = "0x1A32D50", VA = "0x181A34750")]
	private bool WriteKnownValueClass(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, object data)
	{
		return default(bool);
	}

	[Token(Token = "0x60021B2")]
	[Address(RVA = "0x1A350A0", Offset = "0x1A336A0", VA = "0x181A350A0")]
	private void WriteObjectRef(System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo, long objectId)
	{
	}

	[Token(Token = "0x60021B3")]
	[Address(RVA = "0x1A35320", Offset = "0x1A33920", VA = "0x181A35320")]
	private void WriteString(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, object stringObject)
	{
	}

	[Token(Token = "0x60021B4")]
	[Address(RVA = "0x1A32570", Offset = "0x1A30B70", VA = "0x181A32570")]
	private bool CheckForNull(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, object data)
	{
		return default(bool);
	}

	[Token(Token = "0x60021B5")]
	[Address(RVA = "0x1A352F0", Offset = "0x1A338F0", VA = "0x181A352F0")]
	private void WriteSerializedStreamHeader(long topId, long headerId)
	{
	}

	[Token(Token = "0x60021B6")]
	[Address(RVA = "0x1A33680", Offset = "0x1A31C80", VA = "0x181A33680")]
	private System.Runtime.Serialization.Formatters.Binary.NameInfo TypeToNameInfo(Type type, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code, System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo)
	{
		return null;
	}

	[Token(Token = "0x60021B7")]
	[Address(RVA = "0x1A33760", Offset = "0x1A31D60", VA = "0x181A33760")]
	private System.Runtime.Serialization.Formatters.Binary.NameInfo TypeToNameInfo(Type type)
	{
		return null;
	}

	[Token(Token = "0x60021B8")]
	[Address(RVA = "0x1A337C0", Offset = "0x1A31DC0", VA = "0x181A337C0")]
	private System.Runtime.Serialization.Formatters.Binary.NameInfo TypeToNameInfo(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo)
	{
		return null;
	}

	[Token(Token = "0x60021B9")]
	[Address(RVA = "0x1A335A0", Offset = "0x1A31BA0", VA = "0x181A335A0")]
	private System.Runtime.Serialization.Formatters.Binary.NameInfo TypeToNameInfo(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo)
	{
		return null;
	}

	[Token(Token = "0x60021BA")]
	[Address(RVA = "0x1A33850", Offset = "0x1A31E50", VA = "0x181A33850")]
	private void TypeToNameInfo(Type type, System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo)
	{
	}

	[Token(Token = "0x60021BB")]
	[Address(RVA = "0x1A32CA0", Offset = "0x1A312A0", VA = "0x181A32CA0")]
	private System.Runtime.Serialization.Formatters.Binary.NameInfo MemberToNameInfo(string name)
	{
		return null;
	}

	[Token(Token = "0x60021BC")]
	[Address(RVA = "0x1A33500", Offset = "0x1A31B00", VA = "0x181A33500")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE ToCode(Type type)
	{
		return default(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE);
	}

	[Token(Token = "0x60021BD")]
	[Address(RVA = "0x1A32640", Offset = "0x1A30C40", VA = "0x181A32640")]
	private long GetAssemblyId(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo)
	{
		return default(long);
	}

	[Token(Token = "0x60021BE")]
	[Address(RVA = "0x1A32B80", Offset = "0x1A31180", VA = "0x181A32B80")]
	private Type GetType(object obj)
	{
		return null;
	}

	[Token(Token = "0x60021BF")]
	[Address(RVA = "0x1A328E0", Offset = "0x1A30EE0", VA = "0x181A328E0")]
	private System.Runtime.Serialization.Formatters.Binary.NameInfo GetNameInfo()
	{
		return null;
	}

	[Token(Token = "0x60021C0")]
	[Address(RVA = "0x1A32630", Offset = "0x1A30C30", VA = "0x181A32630")]
	private bool CheckTypeFormat(FormatterTypeStyle test, FormatterTypeStyle want)
	{
		return default(bool);
	}

	[Token(Token = "0x60021C1")]
	[Address(RVA = "0x1A32CE0", Offset = "0x1A312E0", VA = "0x181A32CE0")]
	private void PutNameInfo(System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo)
	{
	}
}
