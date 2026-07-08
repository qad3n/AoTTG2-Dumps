using System.IO;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000421")]
internal sealed class ObjectReader
{
	[Token(Token = "0x2000422")]
	internal class TypeNAssembly
	{
		[Token(Token = "0x40011A5")]
		[FieldOffset(Offset = "0x10")]
		public Type type;

		[Token(Token = "0x40011A6")]
		[FieldOffset(Offset = "0x18")]
		public string assemblyName;

		[Token(Token = "0x6002131")]
		[Address(RVA = "0x4ECBBC0", Offset = "0x4ECBBC0", VA = "0x4ECBBC0")]
		public TypeNAssembly()
		{
		}
	}

	[Token(Token = "0x2000423")]
	internal sealed class TopLevelAssemblyTypeResolver
	{
		[Token(Token = "0x40011A7")]
		[FieldOffset(Offset = "0x10")]
		private Assembly m_topLevelAssembly;

		[Token(Token = "0x6002132")]
		[Address(RVA = "0x4ECBBD0", Offset = "0x4ECBBD0", VA = "0x4ECBBD0")]
		public TopLevelAssemblyTypeResolver(Assembly topLevelAssembly)
		{
		}

		[Token(Token = "0x6002133")]
		[Address(RVA = "0x4ECBC00", Offset = "0x4ECBC00", VA = "0x4ECBC00")]
		public Type ResolveType(Assembly assembly, string simpleTypeName, bool ignoreCase)
		{
			return null;
		}
	}

	[Token(Token = "0x400118D")]
	[FieldOffset(Offset = "0x10")]
	internal Stream m_stream;

	[Token(Token = "0x400118E")]
	[FieldOffset(Offset = "0x18")]
	internal ISurrogateSelector m_surrogates;

	[Token(Token = "0x400118F")]
	[FieldOffset(Offset = "0x20")]
	internal StreamingContext m_context;

	[Token(Token = "0x4001190")]
	[FieldOffset(Offset = "0x30")]
	internal ObjectManager m_objectManager;

	[Token(Token = "0x4001191")]
	[FieldOffset(Offset = "0x38")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalFE formatterEnums;

	[Token(Token = "0x4001192")]
	[FieldOffset(Offset = "0x40")]
	internal SerializationBinder m_binder;

	[Token(Token = "0x4001193")]
	[FieldOffset(Offset = "0x48")]
	internal long topId;

	[Token(Token = "0x4001194")]
	[FieldOffset(Offset = "0x50")]
	internal bool bSimpleAssembly;

	[Token(Token = "0x4001195")]
	[FieldOffset(Offset = "0x58")]
	internal object handlerObject;

	[Token(Token = "0x4001196")]
	[FieldOffset(Offset = "0x60")]
	internal object m_topObject;

	[Token(Token = "0x4001197")]
	[FieldOffset(Offset = "0x68")]
	internal Header[] headers;

	[Token(Token = "0x4001198")]
	[FieldOffset(Offset = "0x70")]
	internal HeaderHandler handler;

	[Token(Token = "0x4001199")]
	[FieldOffset(Offset = "0x78")]
	internal System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit;

	[Token(Token = "0x400119A")]
	[FieldOffset(Offset = "0x80")]
	internal IFormatterConverter m_formatterConverter;

	[Token(Token = "0x400119B")]
	[FieldOffset(Offset = "0x88")]
	internal System.Runtime.Serialization.Formatters.Binary.SerStack stack;

	[Token(Token = "0x400119C")]
	[FieldOffset(Offset = "0x90")]
	private System.Runtime.Serialization.Formatters.Binary.SerStack valueFixupStack;

	[Token(Token = "0x400119D")]
	[FieldOffset(Offset = "0x98")]
	internal object[] crossAppDomainArray;

	[Token(Token = "0x400119E")]
	[FieldOffset(Offset = "0xA0")]
	private bool bFullDeserialization;

	[Token(Token = "0x400119F")]
	[FieldOffset(Offset = "0xA1")]
	private bool bOldFormatDetected;

	[Token(Token = "0x40011A0")]
	[FieldOffset(Offset = "0xA8")]
	private System.Runtime.Serialization.Formatters.Binary.IntSizedArray valTypeObjectIdTable;

	[Token(Token = "0x40011A1")]
	[FieldOffset(Offset = "0xB0")]
	private System.Runtime.Serialization.Formatters.Binary.NameCache typeCache;

	[Token(Token = "0x40011A2")]
	[FieldOffset(Offset = "0xB8")]
	private string previousAssemblyString;

	[Token(Token = "0x40011A3")]
	[FieldOffset(Offset = "0xC0")]
	private string previousName;

	[Token(Token = "0x40011A4")]
	[FieldOffset(Offset = "0xC8")]
	private Type previousType;

	[Token(Token = "0x17000452")]
	private System.Runtime.Serialization.Formatters.Binary.SerStack ValueFixupStack
	{
		[Token(Token = "0x6002110")]
		[Address(RVA = "0x4EC8370", Offset = "0x4EC8370", VA = "0x4EC8370")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000453")]
	internal object TopObject
	{
		[Token(Token = "0x6002111")]
		[Address(RVA = "0x4EC8410", Offset = "0x4EC8410", VA = "0x4EC8410")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002112")]
		[Address(RVA = "0x4EC8420", Offset = "0x4EC8420", VA = "0x4EC8420")]
		set
		{
		}
	}

	[Token(Token = "0x6002113")]
	[Address(RVA = "0x4EC2920", Offset = "0x4EC2920", VA = "0x4EC2920")]
	internal ObjectReader(Stream stream, ISurrogateSelector selector, StreamingContext context, System.Runtime.Serialization.Formatters.Binary.InternalFE formatterEnums, SerializationBinder binder)
	{
	}

	[Token(Token = "0x6002114")]
	[Address(RVA = "0x4EC2A80", Offset = "0x4EC2A80", VA = "0x4EC2A80")]
	internal object Deserialize(HeaderHandler handler, System.Runtime.Serialization.Formatters.Binary.__BinaryParser serParser, bool fCheck)
	{
		return null;
	}

	[Token(Token = "0x6002115")]
	[Address(RVA = "0x4EC8460", Offset = "0x4EC8460", VA = "0x4EC8460")]
	private bool HasSurrogate(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6002116")]
	[Address(RVA = "0x4EC8540", Offset = "0x4EC8540", VA = "0x4EC8540")]
	private void CheckSerializable(Type t)
	{
	}

	[Token(Token = "0x6002117")]
	[Address(RVA = "0x4EC8730", Offset = "0x4EC8730", VA = "0x4EC8730")]
	private void InitFullDeserialization()
	{
	}

	[Token(Token = "0x6002118")]
	[Address(RVA = "0x4EC88B0", Offset = "0x4EC88B0", VA = "0x4EC88B0")]
	internal object CrossAppDomainArray(int index)
	{
		return null;
	}

	[Token(Token = "0x6002119")]
	[Address(RVA = "0x4EBF7C0", Offset = "0x4EBF7C0", VA = "0x4EBF7C0")]
	internal System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo CreateReadObjectInfo(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600211A")]
	[Address(RVA = "0x4EC01B0", Offset = "0x4EC01B0", VA = "0x4EC01B0")]
	internal System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo CreateReadObjectInfo(Type objectType, string[] memberNames, Type[] memberTypes)
	{
		return null;
	}

	[Token(Token = "0x600211B")]
	[Address(RVA = "0x4EC88E0", Offset = "0x4EC88E0", VA = "0x4EC88E0")]
	internal void Parse(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x600211C")]
	[Address(RVA = "0x4EC9AC0", Offset = "0x4EC9AC0", VA = "0x4EC9AC0")]
	private void ParseError(System.Runtime.Serialization.Formatters.Binary.ParseRecord processing, System.Runtime.Serialization.Formatters.Binary.ParseRecord onStack)
	{
	}

	[Token(Token = "0x600211D")]
	[Address(RVA = "0x4EC8A40", Offset = "0x4EC8A40", VA = "0x4EC8A40")]
	private void ParseSerializedStreamHeader(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x600211E")]
	[Address(RVA = "0x4EC8A60", Offset = "0x4EC8A60", VA = "0x4EC8A60")]
	private void ParseSerializedStreamHeaderEnd(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x600211F")]
	[Address(RVA = "0x4EC8A80", Offset = "0x4EC8A80", VA = "0x4EC8A80")]
	private void ParseObject(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002120")]
	[Address(RVA = "0x4EC8ED0", Offset = "0x4EC8ED0", VA = "0x4EC8ED0")]
	private void ParseObjectEnd(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002121")]
	[Address(RVA = "0x4EC9D20", Offset = "0x4EC9D20", VA = "0x4EC9D20")]
	private void ParseArray(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002122")]
	[Address(RVA = "0x4ECA790", Offset = "0x4ECA790", VA = "0x4ECA790")]
	private void NextRectangleMap(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002123")]
	[Address(RVA = "0x4ECA850", Offset = "0x4ECA850", VA = "0x4ECA850")]
	private void ParseArrayMember(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002124")]
	[Address(RVA = "0x4ECB240", Offset = "0x4ECB240", VA = "0x4ECB240")]
	private void ParseArrayMemberEnd(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002125")]
	[Address(RVA = "0x4EC9370", Offset = "0x4EC9370", VA = "0x4EC9370")]
	private void ParseMember(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002126")]
	[Address(RVA = "0x4EC9A20", Offset = "0x4EC9A20", VA = "0x4EC9A20")]
	private void ParseMemberEnd(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002127")]
	[Address(RVA = "0x4ECB210", Offset = "0x4ECB210", VA = "0x4ECB210")]
	private void ParseString(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr, System.Runtime.Serialization.Formatters.Binary.ParseRecord parentPr)
	{
	}

	[Token(Token = "0x6002128")]
	[Address(RVA = "0x4ECA6D0", Offset = "0x4ECA6D0", VA = "0x4ECA6D0")]
	private void RegisterObject(object obj, System.Runtime.Serialization.Formatters.Binary.ParseRecord pr, System.Runtime.Serialization.Formatters.Binary.ParseRecord objectPr)
	{
	}

	[Token(Token = "0x6002129")]
	[Address(RVA = "0x4ECB260", Offset = "0x4ECB260", VA = "0x4ECB260")]
	private void RegisterObject(object obj, System.Runtime.Serialization.Formatters.Binary.ParseRecord pr, System.Runtime.Serialization.Formatters.Binary.ParseRecord objectPr, bool bIsString)
	{
	}

	[Token(Token = "0x600212A")]
	[Address(RVA = "0x4ECB350", Offset = "0x4ECB350", VA = "0x4ECB350")]
	internal long GetId(long objectId)
	{
		return default(long);
	}

	[Token(Token = "0x600212B")]
	[Address(RVA = "0x4ECB450", Offset = "0x4ECB450", VA = "0x4ECB450")]
	internal Type Bind(string assemblyString, string typeString)
	{
		return null;
	}

	[Token(Token = "0x600212C")]
	[Address(RVA = "0x4ECB4A0", Offset = "0x4ECB4A0", VA = "0x4ECB4A0")]
	internal Type FastBindToType(string assemblyName, string typeName)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600212D")]
	[Address(RVA = "0x4ECB7B0", Offset = "0x4ECB7B0", VA = "0x4ECB7B0")]
	private static Assembly ResolveSimpleAssemblyName(AssemblyName assemblyName)
	{
		return null;
	}

	[Token(Token = "0x600212E")]
	[Address(RVA = "0x4ECB810", Offset = "0x4ECB810", VA = "0x4ECB810")]
	private static void GetSimplyNamedTypeFromAssembly(Assembly assm, string typeName, ref Type type)
	{
	}

	[Token(Token = "0x600212F")]
	[Address(RVA = "0x4EBC5B0", Offset = "0x4EBC5B0", VA = "0x4EBC5B0")]
	internal Type GetType(System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo, string name)
	{
		return null;
	}

	[Token(Token = "0x6002130")]
	[Address(RVA = "0x4ECBA80", Offset = "0x4ECBA80", VA = "0x4ECBA80")]
	private static void CheckTypeForwardedTo(Assembly sourceAssembly, Assembly destAssembly, Type resolvedType)
	{
	}
}
