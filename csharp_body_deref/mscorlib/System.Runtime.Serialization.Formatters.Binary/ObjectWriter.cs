using System.Collections;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000424")]
internal sealed class ObjectWriter
{
	[Token(Token = "0x40011A8")]
	[FieldOffset(Offset = "0x10")]
	private Queue m_objectQueue;

	[Token(Token = "0x40011A9")]
	[FieldOffset(Offset = "0x18")]
	private ObjectIDGenerator m_idGenerator;

	[Token(Token = "0x40011AA")]
	[FieldOffset(Offset = "0x20")]
	private int m_currentId;

	[Token(Token = "0x40011AB")]
	[FieldOffset(Offset = "0x28")]
	private ISurrogateSelector m_surrogates;

	[Token(Token = "0x40011AC")]
	[FieldOffset(Offset = "0x30")]
	private StreamingContext m_context;

	[Token(Token = "0x40011AD")]
	[FieldOffset(Offset = "0x40")]
	private System.Runtime.Serialization.Formatters.Binary.__BinaryWriter serWriter;

	[Token(Token = "0x40011AE")]
	[FieldOffset(Offset = "0x48")]
	private SerializationObjectManager m_objectManager;

	[Token(Token = "0x40011AF")]
	[FieldOffset(Offset = "0x50")]
	private long topId;

	[Token(Token = "0x40011B0")]
	[FieldOffset(Offset = "0x58")]
	private string topName;

	[Token(Token = "0x40011B1")]
	[FieldOffset(Offset = "0x60")]
	private Header[] headers;

	[Token(Token = "0x40011B2")]
	[FieldOffset(Offset = "0x68")]
	private System.Runtime.Serialization.Formatters.Binary.InternalFE formatterEnums;

	[Token(Token = "0x40011B3")]
	[FieldOffset(Offset = "0x70")]
	private SerializationBinder m_binder;

	[Token(Token = "0x40011B4")]
	[FieldOffset(Offset = "0x78")]
	private System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit;

	[Token(Token = "0x40011B5")]
	[FieldOffset(Offset = "0x80")]
	private IFormatterConverter m_formatterConverter;

	[Token(Token = "0x40011B6")]
	[FieldOffset(Offset = "0x88")]
	internal object[] crossAppDomainArray;

	[Token(Token = "0x40011B7")]
	[FieldOffset(Offset = "0x90")]
	private object previousObj;

	[Token(Token = "0x40011B8")]
	[FieldOffset(Offset = "0x98")]
	private long previousId;

	[Token(Token = "0x40011B9")]
	[FieldOffset(Offset = "0xA0")]
	private Type previousType;

	[Token(Token = "0x40011BA")]
	[FieldOffset(Offset = "0xA8")]
	private System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE previousCode;

	[Token(Token = "0x40011BB")]
	[FieldOffset(Offset = "0xB0")]
	private Hashtable assemblyToIdTable;

	[Token(Token = "0x40011BC")]
	[FieldOffset(Offset = "0xB8")]
	private System.Runtime.Serialization.Formatters.Binary.SerStack niPool;

	[Token(Token = "0x17000454")]
	internal SerializationObjectManager ObjectManager
	{
		[Token(Token = "0x6002136")]
		[Address(RVA = "0x4ECCF50", Offset = "0x4ECCF50", VA = "0x4ECCF50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002134")]
	[Address(RVA = "0x4ECBC60", Offset = "0x4ECBC60", VA = "0x4ECBC60")]
	internal ObjectWriter(ISurrogateSelector selector, StreamingContext context, System.Runtime.Serialization.Formatters.Binary.InternalFE formatterEnums, SerializationBinder binder)
	{
	}

	[Token(Token = "0x6002135")]
	[Address(RVA = "0x4ECBE70", Offset = "0x4ECBE70", VA = "0x4ECBE70")]
	internal void Serialize(object graph, Header[] inHeaders, System.Runtime.Serialization.Formatters.Binary.__BinaryWriter serWriter, bool fCheck)
	{
	}

	[Token(Token = "0x6002137")]
	[Address(RVA = "0x4ECC890", Offset = "0x4ECC890", VA = "0x4ECC890")]
	private void Write(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo)
	{
	}

	[Token(Token = "0x6002138")]
	[Address(RVA = "0x4ECD8A0", Offset = "0x4ECD8A0", VA = "0x4ECD8A0")]
	private void Write(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, string[] memberNames, Type[] memberTypes, object[] memberData, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo[] memberObjectInfos)
	{
	}

	[Token(Token = "0x6002139")]
	[Address(RVA = "0x4ECDBB0", Offset = "0x4ECDBB0", VA = "0x4ECDBB0")]
	private void WriteMemberSetup(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, string memberName, Type memberType, object memberData, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo memberObjectInfo)
	{
	}

	[Token(Token = "0x600213A")]
	[Address(RVA = "0x4ECDDA0", Offset = "0x4ECDDA0", VA = "0x4ECDDA0")]
	private void WriteMembers(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberTypeNameInfo, object memberData, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo memberObjectInfo)
	{
	}

	[Token(Token = "0x600213B")]
	[Address(RVA = "0x4ECCF60", Offset = "0x4ECCF60", VA = "0x4ECCF60")]
	private void WriteArray(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo memberObjectInfo)
	{
	}

	[Token(Token = "0x600213C")]
	[Address(RVA = "0x4ECE630", Offset = "0x4ECE630", VA = "0x4ECE630")]
	private void WriteArrayMember(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemTypeNameInfo, object data)
	{
	}

	[Token(Token = "0x600213D")]
	[Address(RVA = "0x4ECE920", Offset = "0x4ECE920", VA = "0x4ECE920")]
	private void WriteRectangle(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, int rank, int[] maxA, Array array, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemNameTypeInfo, int[] lowerBoundA)
	{
	}

	[Token(Token = "0x600213E")]
	[Address(RVA = "0x4ECCDD0", Offset = "0x4ECCDD0", VA = "0x4ECCDD0")]
	private object GetNext(out long objID)
	{
		return null;
	}

	[Token(Token = "0x600213F")]
	[Address(RVA = "0x4ECC3E0", Offset = "0x4ECC3E0", VA = "0x4ECC3E0")]
	private long InternalGetId(object obj, bool assignUniqueIdToValueType, Type type, out bool isNew)
	{
		return default(long);
	}

	[Token(Token = "0x6002140")]
	[Address(RVA = "0x4ECEBD0", Offset = "0x4ECEBD0", VA = "0x4ECEBD0")]
	private long Schedule(object obj, bool assignUniqueIdToValueType, Type type)
	{
		return default(long);
	}

	[Token(Token = "0x6002141")]
	[Address(RVA = "0x4ECE4A0", Offset = "0x4ECE4A0", VA = "0x4ECE4A0")]
	private long Schedule(object obj, bool assignUniqueIdToValueType, Type type, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo)
	{
		return default(long);
	}

	[Token(Token = "0x6002142")]
	[Address(RVA = "0x4ECE550", Offset = "0x4ECE550", VA = "0x4ECE550")]
	private bool WriteKnownValueClass(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, object data)
	{
		return default(bool);
	}

	[Token(Token = "0x6002143")]
	[Address(RVA = "0x4ECE530", Offset = "0x4ECE530", VA = "0x4ECE530")]
	private void WriteObjectRef(System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo, long objectId)
	{
	}

	[Token(Token = "0x6002144")]
	[Address(RVA = "0x4ECEC40", Offset = "0x4ECEC40", VA = "0x4ECEC40")]
	private void WriteString(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, object stringObject)
	{
	}

	[Token(Token = "0x6002145")]
	[Address(RVA = "0x4ECE210", Offset = "0x4ECE210", VA = "0x4ECE210")]
	private bool CheckForNull(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, object data)
	{
		return default(bool);
	}

	[Token(Token = "0x6002146")]
	[Address(RVA = "0x4ECC3C0", Offset = "0x4ECC3C0", VA = "0x4ECC3C0")]
	private void WriteSerializedStreamHeader(long topId, long headerId)
	{
	}

	[Token(Token = "0x6002147")]
	[Address(RVA = "0x4ECED60", Offset = "0x4ECED60", VA = "0x4ECED60")]
	private System.Runtime.Serialization.Formatters.Binary.NameInfo TypeToNameInfo(Type type, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code, System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo)
	{
		return null;
	}

	[Token(Token = "0x6002148")]
	[Address(RVA = "0x4ECDCD0", Offset = "0x4ECDCD0", VA = "0x4ECDCD0")]
	private System.Runtime.Serialization.Formatters.Binary.NameInfo TypeToNameInfo(Type type)
	{
		return null;
	}

	[Token(Token = "0x6002149")]
	[Address(RVA = "0x4ECC770", Offset = "0x4ECC770", VA = "0x4ECC770")]
	private System.Runtime.Serialization.Formatters.Binary.NameInfo TypeToNameInfo(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo)
	{
		return null;
	}

	[Token(Token = "0x600214A")]
	[Address(RVA = "0x4ECE3D0", Offset = "0x4ECE3D0", VA = "0x4ECE3D0")]
	private System.Runtime.Serialization.Formatters.Binary.NameInfo TypeToNameInfo(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo)
	{
		return null;
	}

	[Token(Token = "0x600214B")]
	[Address(RVA = "0x4ECE2B0", Offset = "0x4ECE2B0", VA = "0x4ECE2B0")]
	private void TypeToNameInfo(Type type, System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo)
	{
	}

	[Token(Token = "0x600214C")]
	[Address(RVA = "0x4ECDB70", Offset = "0x4ECDB70", VA = "0x4ECDB70")]
	private System.Runtime.Serialization.Formatters.Binary.NameInfo MemberToNameInfo(string name)
	{
		return null;
	}

	[Token(Token = "0x600214D")]
	[Address(RVA = "0x4ECD800", Offset = "0x4ECD800", VA = "0x4ECD800")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE ToCode(Type type)
	{
		return default(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE);
	}

	[Token(Token = "0x600214E")]
	[Address(RVA = "0x4ECC4B0", Offset = "0x4ECC4B0", VA = "0x4ECC4B0")]
	private long GetAssemblyId(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo)
	{
		return default(long);
	}

	[Token(Token = "0x600214F")]
	[Address(RVA = "0x4ECD7E0", Offset = "0x4ECD7E0", VA = "0x4ECD7E0")]
	private Type GetType(object obj)
	{
		return null;
	}

	[Token(Token = "0x6002150")]
	[Address(RVA = "0x4ECEE40", Offset = "0x4ECEE40", VA = "0x4ECEE40")]
	private System.Runtime.Serialization.Formatters.Binary.NameInfo GetNameInfo()
	{
		return null;
	}

	[Token(Token = "0x6002151")]
	[Address(RVA = "0x4ECD7D0", Offset = "0x4ECD7D0", VA = "0x4ECD7D0")]
	private bool CheckTypeFormat(FormatterTypeStyle test, FormatterTypeStyle want)
	{
		return default(bool);
	}

	[Token(Token = "0x6002152")]
	[Address(RVA = "0x4ECCDB0", Offset = "0x4ECCDB0", VA = "0x4ECCDB0")]
	private void PutNameInfo(System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo)
	{
	}
}
