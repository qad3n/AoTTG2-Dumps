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
		[Address(RVA = "0x3BB2A70", Offset = "0x3BB2A70", VA = "0x3BB2A70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002134")]
	[Address(RVA = "0x3BB1780", Offset = "0x3BB1780", VA = "0x3BB1780")]
	internal ObjectWriter(ISurrogateSelector selector, StreamingContext context, System.Runtime.Serialization.Formatters.Binary.InternalFE formatterEnums, SerializationBinder binder)
	{
	}

	[Token(Token = "0x6002135")]
	[Address(RVA = "0x3BB1990", Offset = "0x3BB1990", VA = "0x3BB1990")]
	internal void Serialize(object graph, Header[] inHeaders, System.Runtime.Serialization.Formatters.Binary.__BinaryWriter serWriter, bool fCheck)
	{
	}

	[Token(Token = "0x6002137")]
	[Address(RVA = "0x3BB23B0", Offset = "0x3BB23B0", VA = "0x3BB23B0")]
	private void Write(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo)
	{
	}

	[Token(Token = "0x6002138")]
	[Address(RVA = "0x3BB33C0", Offset = "0x3BB33C0", VA = "0x3BB33C0")]
	private void Write(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, string[] memberNames, Type[] memberTypes, object[] memberData, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo[] memberObjectInfos)
	{
	}

	[Token(Token = "0x6002139")]
	[Address(RVA = "0x3BB36D0", Offset = "0x3BB36D0", VA = "0x3BB36D0")]
	private void WriteMemberSetup(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, string memberName, Type memberType, object memberData, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo memberObjectInfo)
	{
	}

	[Token(Token = "0x600213A")]
	[Address(RVA = "0x3BB38C0", Offset = "0x3BB38C0", VA = "0x3BB38C0")]
	private void WriteMembers(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberTypeNameInfo, object memberData, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo memberObjectInfo)
	{
	}

	[Token(Token = "0x600213B")]
	[Address(RVA = "0x3BB2A80", Offset = "0x3BB2A80", VA = "0x3BB2A80")]
	private void WriteArray(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo memberObjectInfo)
	{
	}

	[Token(Token = "0x600213C")]
	[Address(RVA = "0x3BB4150", Offset = "0x3BB4150", VA = "0x3BB4150")]
	private void WriteArrayMember(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemTypeNameInfo, object data)
	{
	}

	[Token(Token = "0x600213D")]
	[Address(RVA = "0x3BB4440", Offset = "0x3BB4440", VA = "0x3BB4440")]
	private void WriteRectangle(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, int rank, int[] maxA, Array array, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemNameTypeInfo, int[] lowerBoundA)
	{
	}

	[Token(Token = "0x600213E")]
	[Address(RVA = "0x3BB28F0", Offset = "0x3BB28F0", VA = "0x3BB28F0")]
	private object GetNext(out long objID)
	{
		return null;
	}

	[Token(Token = "0x600213F")]
	[Address(RVA = "0x3BB1F00", Offset = "0x3BB1F00", VA = "0x3BB1F00")]
	private long InternalGetId(object obj, bool assignUniqueIdToValueType, Type type, out bool isNew)
	{
		return default(long);
	}

	[Token(Token = "0x6002140")]
	[Address(RVA = "0x3BB46F0", Offset = "0x3BB46F0", VA = "0x3BB46F0")]
	private long Schedule(object obj, bool assignUniqueIdToValueType, Type type)
	{
		return default(long);
	}

	[Token(Token = "0x6002141")]
	[Address(RVA = "0x3BB3FC0", Offset = "0x3BB3FC0", VA = "0x3BB3FC0")]
	private long Schedule(object obj, bool assignUniqueIdToValueType, Type type, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo)
	{
		return default(long);
	}

	[Token(Token = "0x6002142")]
	[Address(RVA = "0x3BB4070", Offset = "0x3BB4070", VA = "0x3BB4070")]
	private bool WriteKnownValueClass(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, object data)
	{
		return default(bool);
	}

	[Token(Token = "0x6002143")]
	[Address(RVA = "0x3BB4050", Offset = "0x3BB4050", VA = "0x3BB4050")]
	private void WriteObjectRef(System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo, long objectId)
	{
	}

	[Token(Token = "0x6002144")]
	[Address(RVA = "0x3BB4760", Offset = "0x3BB4760", VA = "0x3BB4760")]
	private void WriteString(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, object stringObject)
	{
	}

	[Token(Token = "0x6002145")]
	[Address(RVA = "0x3BB3D30", Offset = "0x3BB3D30", VA = "0x3BB3D30")]
	private bool CheckForNull(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, object data)
	{
		return default(bool);
	}

	[Token(Token = "0x6002146")]
	[Address(RVA = "0x3BB1EE0", Offset = "0x3BB1EE0", VA = "0x3BB1EE0")]
	private void WriteSerializedStreamHeader(long topId, long headerId)
	{
	}

	[Token(Token = "0x6002147")]
	[Address(RVA = "0x3BB4880", Offset = "0x3BB4880", VA = "0x3BB4880")]
	private System.Runtime.Serialization.Formatters.Binary.NameInfo TypeToNameInfo(Type type, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code, System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo)
	{
		return null;
	}

	[Token(Token = "0x6002148")]
	[Address(RVA = "0x3BB37F0", Offset = "0x3BB37F0", VA = "0x3BB37F0")]
	private System.Runtime.Serialization.Formatters.Binary.NameInfo TypeToNameInfo(Type type)
	{
		return null;
	}

	[Token(Token = "0x6002149")]
	[Address(RVA = "0x3BB2290", Offset = "0x3BB2290", VA = "0x3BB2290")]
	private System.Runtime.Serialization.Formatters.Binary.NameInfo TypeToNameInfo(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo)
	{
		return null;
	}

	[Token(Token = "0x600214A")]
	[Address(RVA = "0x3BB3EF0", Offset = "0x3BB3EF0", VA = "0x3BB3EF0")]
	private System.Runtime.Serialization.Formatters.Binary.NameInfo TypeToNameInfo(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo)
	{
		return null;
	}

	[Token(Token = "0x600214B")]
	[Address(RVA = "0x3BB3DD0", Offset = "0x3BB3DD0", VA = "0x3BB3DD0")]
	private void TypeToNameInfo(Type type, System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo)
	{
	}

	[Token(Token = "0x600214C")]
	[Address(RVA = "0x3BB3690", Offset = "0x3BB3690", VA = "0x3BB3690")]
	private System.Runtime.Serialization.Formatters.Binary.NameInfo MemberToNameInfo(string name)
	{
		return null;
	}

	[Token(Token = "0x600214D")]
	[Address(RVA = "0x3BB3320", Offset = "0x3BB3320", VA = "0x3BB3320")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE ToCode(Type type)
	{
		return default(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE);
	}

	[Token(Token = "0x600214E")]
	[Address(RVA = "0x3BB1FD0", Offset = "0x3BB1FD0", VA = "0x3BB1FD0")]
	private long GetAssemblyId(System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo)
	{
		return default(long);
	}

	[Token(Token = "0x600214F")]
	[Address(RVA = "0x3BB3300", Offset = "0x3BB3300", VA = "0x3BB3300")]
	private Type GetType(object obj)
	{
		return null;
	}

	[Token(Token = "0x6002150")]
	[Address(RVA = "0x3BB4960", Offset = "0x3BB4960", VA = "0x3BB4960")]
	private System.Runtime.Serialization.Formatters.Binary.NameInfo GetNameInfo()
	{
		return null;
	}

	[Token(Token = "0x6002151")]
	[Address(RVA = "0x3BB32F0", Offset = "0x3BB32F0", VA = "0x3BB32F0")]
	private bool CheckTypeFormat(FormatterTypeStyle test, FormatterTypeStyle want)
	{
		return default(bool);
	}

	[Token(Token = "0x6002152")]
	[Address(RVA = "0x3BB28D0", Offset = "0x3BB28D0", VA = "0x3BB28D0")]
	private void PutNameInfo(System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo)
	{
	}
}
