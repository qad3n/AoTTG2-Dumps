// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.ObjectReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000429")]
internal sealed class ObjectReader
{
	[Token(Token = "0x200042A")]
	internal class TypeNAssembly
	{
		[Token(Token = "0x4001107")]
		[FieldOffset(Offset = "0x10")]
		public Type type;

		[Token(Token = "0x4001108")]
		[FieldOffset(Offset = "0x18")]
		public string assemblyName;

		[Token(Token = "0x6002176")]
		[Address(RVA = "0x53B88E0", Offset = "0x53B78E0", VA = "0x53B88E0")]
		public TypeNAssembly()
		{
		}
	}

	[Token(Token = "0x200042B")]
	internal sealed class TopLevelAssemblyTypeResolver
	{
		[Token(Token = "0x4001109")]
		[FieldOffset(Offset = "0x10")]
		private Assembly m_topLevelAssembly;

		[Token(Token = "0x6002177")]
		[Address(RVA = "0x53B88F0", Offset = "0x53B78F0", VA = "0x53B88F0")]
		public TopLevelAssemblyTypeResolver(Assembly topLevelAssembly)
		{
		}

		[Token(Token = "0x6002178")]
		[Address(RVA = "0x53B8920", Offset = "0x53B7920", VA = "0x53B8920")]
		public Type ResolveType(Assembly assembly, string simpleTypeName, bool ignoreCase)
		{
			return null;
		}
	}

	[Token(Token = "0x40010EF")]
	[FieldOffset(Offset = "0x10")]
	internal Stream m_stream;

	[Token(Token = "0x40010F0")]
	[FieldOffset(Offset = "0x18")]
	internal ISurrogateSelector m_surrogates;

	[Token(Token = "0x40010F1")]
	[FieldOffset(Offset = "0x20")]
	internal StreamingContext m_context;

	[Token(Token = "0x40010F2")]
	[FieldOffset(Offset = "0x30")]
	internal ObjectManager m_objectManager;

	[Token(Token = "0x40010F3")]
	[FieldOffset(Offset = "0x38")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalFE formatterEnums;

	[Token(Token = "0x40010F4")]
	[FieldOffset(Offset = "0x40")]
	internal SerializationBinder m_binder;

	[Token(Token = "0x40010F5")]
	[FieldOffset(Offset = "0x48")]
	internal long topId;

	[Token(Token = "0x40010F6")]
	[FieldOffset(Offset = "0x50")]
	internal bool bSimpleAssembly;

	[Token(Token = "0x40010F7")]
	[FieldOffset(Offset = "0x58")]
	internal object handlerObject;

	[Token(Token = "0x40010F8")]
	[FieldOffset(Offset = "0x60")]
	internal object m_topObject;

	[Token(Token = "0x40010F9")]
	[FieldOffset(Offset = "0x68")]
	internal Header[] headers;

	[Token(Token = "0x40010FA")]
	[FieldOffset(Offset = "0x70")]
	internal HeaderHandler handler;

	[Token(Token = "0x40010FB")]
	[FieldOffset(Offset = "0x78")]
	internal System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit;

	[Token(Token = "0x40010FC")]
	[FieldOffset(Offset = "0x80")]
	internal IFormatterConverter m_formatterConverter;

	[Token(Token = "0x40010FD")]
	[FieldOffset(Offset = "0x88")]
	internal System.Runtime.Serialization.Formatters.Binary.SerStack stack;

	[Token(Token = "0x40010FE")]
	[FieldOffset(Offset = "0x90")]
	private System.Runtime.Serialization.Formatters.Binary.SerStack valueFixupStack;

	[Token(Token = "0x40010FF")]
	[FieldOffset(Offset = "0x98")]
	internal object[] crossAppDomainArray;

	[Token(Token = "0x4001100")]
	[FieldOffset(Offset = "0xA0")]
	private bool bFullDeserialization;

	[Token(Token = "0x4001101")]
	[FieldOffset(Offset = "0xA1")]
	private bool bOldFormatDetected;

	[Token(Token = "0x4001102")]
	[FieldOffset(Offset = "0xA8")]
	private System.Runtime.Serialization.Formatters.Binary.IntSizedArray valTypeObjectIdTable;

	[Token(Token = "0x4001103")]
	[FieldOffset(Offset = "0xB0")]
	private System.Runtime.Serialization.Formatters.Binary.NameCache typeCache;

	[Token(Token = "0x4001104")]
	[FieldOffset(Offset = "0xB8")]
	private string previousAssemblyString;

	[Token(Token = "0x4001105")]
	[FieldOffset(Offset = "0xC0")]
	private string previousName;

	[Token(Token = "0x4001106")]
	[FieldOffset(Offset = "0xC8")]
	private Type previousType;

	[Token(Token = "0x17000453")]
	private System.Runtime.Serialization.Formatters.Binary.SerStack ValueFixupStack
	{
		[Token(Token = "0x6002155")]
		[Address(RVA = "0x53B50C0", Offset = "0x53B40C0", VA = "0x53B50C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000454")]
	internal object TopObject
	{
		[Token(Token = "0x6002156")]
		[Address(RVA = "0x53B5160", Offset = "0x53B4160", VA = "0x53B5160")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002157")]
		[Address(RVA = "0x53B5170", Offset = "0x53B4170", VA = "0x53B5170")]
		set
		{
		}
	}

	[Token(Token = "0x6002158")]
	[Address(RVA = "0x53AF610", Offset = "0x53AE610", VA = "0x53AF610")]
	internal ObjectReader(Stream stream, ISurrogateSelector selector, StreamingContext context, System.Runtime.Serialization.Formatters.Binary.InternalFE formatterEnums, SerializationBinder binder)
	{
	}

	[Token(Token = "0x6002159")]
	[Address(RVA = "0x53AF770", Offset = "0x53AE770", VA = "0x53AF770")]
	internal object Deserialize(HeaderHandler handler, System.Runtime.Serialization.Formatters.Binary.__BinaryParser serParser, bool fCheck)
	{
		return null;
	}

	[Token(Token = "0x600215A")]
	[Address(RVA = "0x53B51B0", Offset = "0x53B41B0", VA = "0x53B51B0")]
	private bool HasSurrogate(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x600215B")]
	[Address(RVA = "0x53B5290", Offset = "0x53B4290", VA = "0x53B5290")]
	private void CheckSerializable(Type t)
	{
	}

	[Token(Token = "0x600215C")]
	[Address(RVA = "0x53B5480", Offset = "0x53B4480", VA = "0x53B5480")]
	private void InitFullDeserialization()
	{
	}

	[Token(Token = "0x600215D")]
	[Address(RVA = "0x53B5600", Offset = "0x53B4600", VA = "0x53B5600")]
	internal object CrossAppDomainArray(int index)
	{
		return null;
	}

	[Token(Token = "0x600215E")]
	[Address(RVA = "0x53AC490", Offset = "0x53AB490", VA = "0x53AC490")]
	internal System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo CreateReadObjectInfo(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600215F")]
	[Address(RVA = "0x53ACEA0", Offset = "0x53ABEA0", VA = "0x53ACEA0")]
	internal System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo CreateReadObjectInfo(Type objectType, string[] memberNames, Type[] memberTypes)
	{
		return null;
	}

	[Token(Token = "0x6002160")]
	[Address(RVA = "0x53B5630", Offset = "0x53B4630", VA = "0x53B5630")]
	internal void Parse(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002161")]
	[Address(RVA = "0x53B67D0", Offset = "0x53B57D0", VA = "0x53B67D0")]
	private void ParseError(System.Runtime.Serialization.Formatters.Binary.ParseRecord processing, System.Runtime.Serialization.Formatters.Binary.ParseRecord onStack)
	{
	}

	[Token(Token = "0x6002162")]
	[Address(RVA = "0x53B5780", Offset = "0x53B4780", VA = "0x53B5780")]
	private void ParseSerializedStreamHeader(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002163")]
	[Address(RVA = "0x53B57A0", Offset = "0x53B47A0", VA = "0x53B57A0")]
	private void ParseSerializedStreamHeaderEnd(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002164")]
	[Address(RVA = "0x53B57C0", Offset = "0x53B47C0", VA = "0x53B57C0")]
	private void ParseObject(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002165")]
	[Address(RVA = "0x53B5BF0", Offset = "0x53B4BF0", VA = "0x53B5BF0")]
	private void ParseObjectEnd(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002166")]
	[Address(RVA = "0x53B6A30", Offset = "0x53B5A30", VA = "0x53B6A30")]
	private void ParseArray(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002167")]
	[Address(RVA = "0x53B7400", Offset = "0x53B6400", VA = "0x53B7400")]
	private void NextRectangleMap(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002168")]
	[Address(RVA = "0x53B74B0", Offset = "0x53B64B0", VA = "0x53B74B0")]
	private void ParseArrayMember(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002169")]
	[Address(RVA = "0x53B7E60", Offset = "0x53B6E60", VA = "0x53B7E60")]
	private void ParseArrayMemberEnd(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x600216A")]
	[Address(RVA = "0x53B6090", Offset = "0x53B5090", VA = "0x53B6090")]
	private void ParseMember(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x600216B")]
	[Address(RVA = "0x53B6730", Offset = "0x53B5730", VA = "0x53B6730")]
	private void ParseMemberEnd(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x600216C")]
	[Address(RVA = "0x53B7E20", Offset = "0x53B6E20", VA = "0x53B7E20")]
	private void ParseString(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr, System.Runtime.Serialization.Formatters.Binary.ParseRecord parentPr)
	{
	}

	[Token(Token = "0x600216D")]
	[Address(RVA = "0x53B7340", Offset = "0x53B6340", VA = "0x53B7340")]
	private void RegisterObject(object obj, System.Runtime.Serialization.Formatters.Binary.ParseRecord pr, System.Runtime.Serialization.Formatters.Binary.ParseRecord objectPr)
	{
	}

	[Token(Token = "0x600216E")]
	[Address(RVA = "0x53B7E80", Offset = "0x53B6E80", VA = "0x53B7E80")]
	private void RegisterObject(object obj, System.Runtime.Serialization.Formatters.Binary.ParseRecord pr, System.Runtime.Serialization.Formatters.Binary.ParseRecord objectPr, bool bIsString)
	{
	}

	[Token(Token = "0x600216F")]
	[Address(RVA = "0x53B7FA0", Offset = "0x53B6FA0", VA = "0x53B7FA0")]
	internal long GetId(long objectId)
	{
		return default(long);
	}

	[Token(Token = "0x6002170")]
	[Address(RVA = "0x53B80A0", Offset = "0x53B70A0", VA = "0x53B80A0")]
	internal Type Bind(string assemblyString, string typeString)
	{
		return null;
	}

	[Token(Token = "0x6002171")]
	[Address(RVA = "0x53B80F0", Offset = "0x53B70F0", VA = "0x53B80F0")]
	internal Type FastBindToType(string assemblyName, string typeName)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002172")]
	[Address(RVA = "0x53B83F0", Offset = "0x53B73F0", VA = "0x53B83F0")]
	private static Assembly ResolveSimpleAssemblyName(AssemblyName assemblyName)
	{
		return null;
	}

	[Token(Token = "0x6002173")]
	[Address(RVA = "0x53B8450", Offset = "0x53B7450", VA = "0x53B8450")]
	private static void GetSimplyNamedTypeFromAssembly(Assembly assm, string typeName, ref Type type)
	{
	}

	[Token(Token = "0x6002174")]
	[Address(RVA = "0x53A9550", Offset = "0x53A8550", VA = "0x53A9550")]
	internal Type GetType(System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo, string name)
	{
		return null;
	}

	[Token(Token = "0x6002175")]
	[Address(RVA = "0x53B86B0", Offset = "0x53B76B0", VA = "0x53B86B0")]
	private static void CheckTypeForwardedTo(Assembly sourceAssembly, Assembly destAssembly, Type resolvedType)
	{
	}
}
