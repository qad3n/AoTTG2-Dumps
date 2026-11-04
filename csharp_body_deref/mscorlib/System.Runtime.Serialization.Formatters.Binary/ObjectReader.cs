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

[Token(Token = "0x2000450")]
internal sealed class ObjectReader
{
	[Token(Token = "0x2000451")]
	internal class TypeNAssembly
	{
		[Token(Token = "0x40011A7")]
		[FieldOffset(Offset = "0x10")]
		public Type type;

		[Token(Token = "0x40011A8")]
		[FieldOffset(Offset = "0x18")]
		public string assemblyName;

		[Token(Token = "0x60021A0")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public TypeNAssembly()
		{
		}
	}

	[Token(Token = "0x2000452")]
	internal sealed class TopLevelAssemblyTypeResolver
	{
		[Token(Token = "0x40011A9")]
		[FieldOffset(Offset = "0x10")]
		private Assembly m_topLevelAssembly;

		[Token(Token = "0x60021A1")]
		[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
		public TopLevelAssemblyTypeResolver(Assembly topLevelAssembly)
		{
		}

		[Token(Token = "0x60021A2")]
		[Address(RVA = "0x1A385B0", Offset = "0x1A36BB0", VA = "0x181A385B0")]
		public Type ResolveType(Assembly assembly, string simpleTypeName, bool ignoreCase)
		{
			return null;
		}
	}

	[Token(Token = "0x400118F")]
	[FieldOffset(Offset = "0x10")]
	internal Stream m_stream;

	[Token(Token = "0x4001190")]
	[FieldOffset(Offset = "0x18")]
	internal ISurrogateSelector m_surrogates;

	[Token(Token = "0x4001191")]
	[FieldOffset(Offset = "0x20")]
	internal StreamingContext m_context;

	[Token(Token = "0x4001192")]
	[FieldOffset(Offset = "0x30")]
	internal ObjectManager m_objectManager;

	[Token(Token = "0x4001193")]
	[FieldOffset(Offset = "0x38")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalFE formatterEnums;

	[Token(Token = "0x4001194")]
	[FieldOffset(Offset = "0x40")]
	internal SerializationBinder m_binder;

	[Token(Token = "0x4001195")]
	[FieldOffset(Offset = "0x48")]
	internal long topId;

	[Token(Token = "0x4001196")]
	[FieldOffset(Offset = "0x50")]
	internal bool bSimpleAssembly;

	[Token(Token = "0x4001197")]
	[FieldOffset(Offset = "0x58")]
	internal object handlerObject;

	[Token(Token = "0x4001198")]
	[FieldOffset(Offset = "0x60")]
	internal object m_topObject;

	[Token(Token = "0x4001199")]
	[FieldOffset(Offset = "0x68")]
	internal Header[] headers;

	[Token(Token = "0x400119A")]
	[FieldOffset(Offset = "0x70")]
	internal HeaderHandler handler;

	[Token(Token = "0x400119B")]
	[FieldOffset(Offset = "0x78")]
	internal System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit;

	[Token(Token = "0x400119C")]
	[FieldOffset(Offset = "0x80")]
	internal IFormatterConverter m_formatterConverter;

	[Token(Token = "0x400119D")]
	[FieldOffset(Offset = "0x88")]
	internal System.Runtime.Serialization.Formatters.Binary.SerStack stack;

	[Token(Token = "0x400119E")]
	[FieldOffset(Offset = "0x90")]
	private System.Runtime.Serialization.Formatters.Binary.SerStack valueFixupStack;

	[Token(Token = "0x400119F")]
	[FieldOffset(Offset = "0x98")]
	internal object[] crossAppDomainArray;

	[Token(Token = "0x40011A0")]
	[FieldOffset(Offset = "0xA0")]
	private bool bFullDeserialization;

	[Token(Token = "0x40011A1")]
	[FieldOffset(Offset = "0xA1")]
	private bool bOldFormatDetected;

	[Token(Token = "0x40011A2")]
	[FieldOffset(Offset = "0xA8")]
	private System.Runtime.Serialization.Formatters.Binary.IntSizedArray valTypeObjectIdTable;

	[Token(Token = "0x40011A3")]
	[FieldOffset(Offset = "0xB0")]
	private System.Runtime.Serialization.Formatters.Binary.NameCache typeCache;

	[Token(Token = "0x40011A4")]
	[FieldOffset(Offset = "0xB8")]
	private string previousAssemblyString;

	[Token(Token = "0x40011A5")]
	[FieldOffset(Offset = "0xC0")]
	private string previousName;

	[Token(Token = "0x40011A6")]
	[FieldOffset(Offset = "0xC8")]
	private Type previousType;

	[Token(Token = "0x17000454")]
	private System.Runtime.Serialization.Formatters.Binary.SerStack ValueFixupStack
	{
		[Token(Token = "0x600217F")]
		[Address(RVA = "0x1A32490", Offset = "0x1A30A90", VA = "0x181A32490")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000455")]
	internal object TopObject
	{
		[Token(Token = "0x6002180")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002181")]
		[Address(RVA = "0x1A32520", Offset = "0x1A30B20", VA = "0x181A32520")]
		set
		{
		}
	}

	[Token(Token = "0x6002182")]
	[Address(RVA = "0x1A32350", Offset = "0x1A30950", VA = "0x181A32350")]
	internal ObjectReader(Stream stream, ISurrogateSelector selector, StreamingContext context, System.Runtime.Serialization.Formatters.Binary.InternalFE formatterEnums, SerializationBinder binder)
	{
	}

	[Token(Token = "0x6002183")]
	[Address(RVA = "0x1A2E460", Offset = "0x1A2CA60", VA = "0x181A2E460")]
	internal object Deserialize(HeaderHandler handler, System.Runtime.Serialization.Formatters.Binary.__BinaryParser serParser, bool fCheck)
	{
		return null;
	}

	[Token(Token = "0x6002184")]
	[Address(RVA = "0x1A2F240", Offset = "0x1A2D840", VA = "0x181A2F240")]
	private bool HasSurrogate(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6002185")]
	[Address(RVA = "0x1A2E170", Offset = "0x1A2C770", VA = "0x181A2E170")]
	private void CheckSerializable(Type t)
	{
	}

	[Token(Token = "0x6002186")]
	[Address(RVA = "0x1A2F340", Offset = "0x1A2D940", VA = "0x181A2F340")]
	private void InitFullDeserialization()
	{
	}

	[Token(Token = "0x6002187")]
	[Address(RVA = "0x1A2E430", Offset = "0x1A2CA30", VA = "0x181A2E430")]
	internal object CrossAppDomainArray(int index)
	{
		return null;
	}

	[Token(Token = "0x6002188")]
	[Address(RVA = "0x1A2E370", Offset = "0x1A2C970", VA = "0x181A2E370")]
	internal System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo CreateReadObjectInfo(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6002189")]
	[Address(RVA = "0x1A2E3C0", Offset = "0x1A2C9C0", VA = "0x181A2E3C0")]
	internal System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo CreateReadObjectInfo(Type objectType, string[] memberNames, Type[] memberTypes)
	{
		return null;
	}

	[Token(Token = "0x600218A")]
	[Address(RVA = "0x1A31EC0", Offset = "0x1A304C0", VA = "0x181A31EC0")]
	internal void Parse(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x600218B")]
	[Address(RVA = "0x1A30BF0", Offset = "0x1A2F1F0", VA = "0x181A30BF0")]
	private void ParseError(System.Runtime.Serialization.Formatters.Binary.ParseRecord processing, System.Runtime.Serialization.Formatters.Binary.ParseRecord onStack)
	{
	}

	[Token(Token = "0x600218C")]
	[Address(RVA = "0x1A31DB0", Offset = "0x1A303B0", VA = "0x181A31DB0")]
	private void ParseSerializedStreamHeader(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x600218D")]
	[Address(RVA = "0x1A31D80", Offset = "0x1A30380", VA = "0x181A31D80")]
	private void ParseSerializedStreamHeaderEnd(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x600218E")]
	[Address(RVA = "0x1A319D0", Offset = "0x1A2FFD0", VA = "0x181A319D0")]
	private void ParseObject(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x600218F")]
	[Address(RVA = "0x1A315D0", Offset = "0x1A2FBD0", VA = "0x181A315D0")]
	private void ParseObjectEnd(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002190")]
	[Address(RVA = "0x1A30290", Offset = "0x1A2E890", VA = "0x181A30290")]
	private void ParseArray(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002191")]
	[Address(RVA = "0x1A2F480", Offset = "0x1A2DA80", VA = "0x181A2F480")]
	private void NextRectangleMap(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002192")]
	[Address(RVA = "0x1A2F5A0", Offset = "0x1A2DBA0", VA = "0x181A2F5A0")]
	private void ParseArrayMember(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002193")]
	[Address(RVA = "0x1A2F570", Offset = "0x1A2DB70", VA = "0x181A2F570")]
	private void ParseArrayMemberEnd(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002194")]
	[Address(RVA = "0x1A30F10", Offset = "0x1A2F510", VA = "0x181A30F10")]
	private void ParseMember(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002195")]
	[Address(RVA = "0x1A30E50", Offset = "0x1A2F450", VA = "0x181A30E50")]
	private void ParseMemberEnd(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002196")]
	[Address(RVA = "0x1A31DE0", Offset = "0x1A303E0", VA = "0x181A31DE0")]
	private void ParseString(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr, System.Runtime.Serialization.Formatters.Binary.ParseRecord parentPr)
	{
	}

	[Token(Token = "0x6002197")]
	[Address(RVA = "0x1A32220", Offset = "0x1A30820", VA = "0x181A32220")]
	private void RegisterObject(object obj, System.Runtime.Serialization.Formatters.Binary.ParseRecord pr, System.Runtime.Serialization.Formatters.Binary.ParseRecord objectPr)
	{
	}

	[Token(Token = "0x6002198")]
	[Address(RVA = "0x1A32100", Offset = "0x1A30700", VA = "0x181A32100")]
	private void RegisterObject(object obj, System.Runtime.Serialization.Formatters.Binary.ParseRecord pr, System.Runtime.Serialization.Formatters.Binary.ParseRecord objectPr, bool bIsString)
	{
	}

	[Token(Token = "0x6002199")]
	[Address(RVA = "0x1A2EC40", Offset = "0x1A2D240", VA = "0x181A2EC40")]
	internal long GetId(long objectId)
	{
		return default(long);
	}

	[Token(Token = "0x600219A")]
	[Address(RVA = "0x1A2E110", Offset = "0x1A2C710", VA = "0x181A2E110")]
	internal Type Bind(string assemblyString, string typeString)
	{
		return null;
	}

	[Token(Token = "0x600219B")]
	[Address(RVA = "0x1A2E8C0", Offset = "0x1A2CEC0", VA = "0x181A2E8C0")]
	internal Type FastBindToType(string assemblyName, string typeName)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600219C")]
	[Address(RVA = "0x1A322E0", Offset = "0x1A308E0", VA = "0x181A322E0")]
	private static Assembly ResolveSimpleAssemblyName(AssemblyName assemblyName)
	{
		return null;
	}

	[Token(Token = "0x600219D")]
	[Address(RVA = "0x1A2EE90", Offset = "0x1A2D490", VA = "0x181A2EE90")]
	private static void GetSimplyNamedTypeFromAssembly(Assembly assm, string typeName, ref Type type)
	{
	}

	[Token(Token = "0x600219E")]
	[Address(RVA = "0x1A2F020", Offset = "0x1A2D620", VA = "0x181A2F020")]
	internal Type GetType(System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo, string name)
	{
		return null;
	}

	[Token(Token = "0x600219F")]
	[Address(RVA = "0x1A2E2B0", Offset = "0x1A2C8B0", VA = "0x181A2E2B0")]
	private static void CheckTypeForwardedTo(Assembly sourceAssembly, Assembly destAssembly, Type resolvedType)
	{
	}
}
