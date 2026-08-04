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
		[Address(RVA = "0x3BB16E0", Offset = "0x3BB16E0", VA = "0x3BB16E0")]
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
		[Address(RVA = "0x3BB16F0", Offset = "0x3BB16F0", VA = "0x3BB16F0")]
		public TopLevelAssemblyTypeResolver(Assembly topLevelAssembly)
		{
		}

		[Token(Token = "0x6002133")]
		[Address(RVA = "0x3BB1720", Offset = "0x3BB1720", VA = "0x3BB1720")]
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
		[Address(RVA = "0x3BADE90", Offset = "0x3BADE90", VA = "0x3BADE90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000453")]
	internal object TopObject
	{
		[Token(Token = "0x6002111")]
		[Address(RVA = "0x3BADF30", Offset = "0x3BADF30", VA = "0x3BADF30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002112")]
		[Address(RVA = "0x3BADF40", Offset = "0x3BADF40", VA = "0x3BADF40")]
		set
		{
		}
	}

	[Token(Token = "0x6002113")]
	[Address(RVA = "0x3BA8440", Offset = "0x3BA8440", VA = "0x3BA8440")]
	internal ObjectReader(Stream stream, ISurrogateSelector selector, StreamingContext context, System.Runtime.Serialization.Formatters.Binary.InternalFE formatterEnums, SerializationBinder binder)
	{
	}

	[Token(Token = "0x6002114")]
	[Address(RVA = "0x3BA85A0", Offset = "0x3BA85A0", VA = "0x3BA85A0")]
	internal object Deserialize(HeaderHandler handler, System.Runtime.Serialization.Formatters.Binary.__BinaryParser serParser, bool fCheck)
	{
		return null;
	}

	[Token(Token = "0x6002115")]
	[Address(RVA = "0x3BADF80", Offset = "0x3BADF80", VA = "0x3BADF80")]
	private bool HasSurrogate(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6002116")]
	[Address(RVA = "0x3BAE060", Offset = "0x3BAE060", VA = "0x3BAE060")]
	private void CheckSerializable(Type t)
	{
	}

	[Token(Token = "0x6002117")]
	[Address(RVA = "0x3BAE250", Offset = "0x3BAE250", VA = "0x3BAE250")]
	private void InitFullDeserialization()
	{
	}

	[Token(Token = "0x6002118")]
	[Address(RVA = "0x3BAE3D0", Offset = "0x3BAE3D0", VA = "0x3BAE3D0")]
	internal object CrossAppDomainArray(int index)
	{
		return null;
	}

	[Token(Token = "0x6002119")]
	[Address(RVA = "0x3BA52E0", Offset = "0x3BA52E0", VA = "0x3BA52E0")]
	internal System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo CreateReadObjectInfo(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600211A")]
	[Address(RVA = "0x3BA5CD0", Offset = "0x3BA5CD0", VA = "0x3BA5CD0")]
	internal System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo CreateReadObjectInfo(Type objectType, string[] memberNames, Type[] memberTypes)
	{
		return null;
	}

	[Token(Token = "0x600211B")]
	[Address(RVA = "0x3BAE400", Offset = "0x3BAE400", VA = "0x3BAE400")]
	internal void Parse(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x600211C")]
	[Address(RVA = "0x3BAF5E0", Offset = "0x3BAF5E0", VA = "0x3BAF5E0")]
	private void ParseError(System.Runtime.Serialization.Formatters.Binary.ParseRecord processing, System.Runtime.Serialization.Formatters.Binary.ParseRecord onStack)
	{
	}

	[Token(Token = "0x600211D")]
	[Address(RVA = "0x3BAE560", Offset = "0x3BAE560", VA = "0x3BAE560")]
	private void ParseSerializedStreamHeader(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x600211E")]
	[Address(RVA = "0x3BAE580", Offset = "0x3BAE580", VA = "0x3BAE580")]
	private void ParseSerializedStreamHeaderEnd(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x600211F")]
	[Address(RVA = "0x3BAE5A0", Offset = "0x3BAE5A0", VA = "0x3BAE5A0")]
	private void ParseObject(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002120")]
	[Address(RVA = "0x3BAE9F0", Offset = "0x3BAE9F0", VA = "0x3BAE9F0")]
	private void ParseObjectEnd(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002121")]
	[Address(RVA = "0x3BAF840", Offset = "0x3BAF840", VA = "0x3BAF840")]
	private void ParseArray(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002122")]
	[Address(RVA = "0x3BB02B0", Offset = "0x3BB02B0", VA = "0x3BB02B0")]
	private void NextRectangleMap(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002123")]
	[Address(RVA = "0x3BB0370", Offset = "0x3BB0370", VA = "0x3BB0370")]
	private void ParseArrayMember(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002124")]
	[Address(RVA = "0x3BB0D60", Offset = "0x3BB0D60", VA = "0x3BB0D60")]
	private void ParseArrayMemberEnd(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002125")]
	[Address(RVA = "0x3BAEE90", Offset = "0x3BAEE90", VA = "0x3BAEE90")]
	private void ParseMember(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002126")]
	[Address(RVA = "0x3BAF540", Offset = "0x3BAF540", VA = "0x3BAF540")]
	private void ParseMemberEnd(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
	{
	}

	[Token(Token = "0x6002127")]
	[Address(RVA = "0x3BB0D30", Offset = "0x3BB0D30", VA = "0x3BB0D30")]
	private void ParseString(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr, System.Runtime.Serialization.Formatters.Binary.ParseRecord parentPr)
	{
	}

	[Token(Token = "0x6002128")]
	[Address(RVA = "0x3BB01F0", Offset = "0x3BB01F0", VA = "0x3BB01F0")]
	private void RegisterObject(object obj, System.Runtime.Serialization.Formatters.Binary.ParseRecord pr, System.Runtime.Serialization.Formatters.Binary.ParseRecord objectPr)
	{
	}

	[Token(Token = "0x6002129")]
	[Address(RVA = "0x3BB0D80", Offset = "0x3BB0D80", VA = "0x3BB0D80")]
	private void RegisterObject(object obj, System.Runtime.Serialization.Formatters.Binary.ParseRecord pr, System.Runtime.Serialization.Formatters.Binary.ParseRecord objectPr, bool bIsString)
	{
	}

	[Token(Token = "0x600212A")]
	[Address(RVA = "0x3BB0E70", Offset = "0x3BB0E70", VA = "0x3BB0E70")]
	internal long GetId(long objectId)
	{
		return default(long);
	}

	[Token(Token = "0x600212B")]
	[Address(RVA = "0x3BB0F70", Offset = "0x3BB0F70", VA = "0x3BB0F70")]
	internal Type Bind(string assemblyString, string typeString)
	{
		return null;
	}

	[Token(Token = "0x600212C")]
	[Address(RVA = "0x3BB0FC0", Offset = "0x3BB0FC0", VA = "0x3BB0FC0")]
	internal Type FastBindToType(string assemblyName, string typeName)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600212D")]
	[Address(RVA = "0x3BB12D0", Offset = "0x3BB12D0", VA = "0x3BB12D0")]
	private static Assembly ResolveSimpleAssemblyName(AssemblyName assemblyName)
	{
		return null;
	}

	[Token(Token = "0x600212E")]
	[Address(RVA = "0x3BB1330", Offset = "0x3BB1330", VA = "0x3BB1330")]
	private static void GetSimplyNamedTypeFromAssembly(Assembly assm, string typeName, ref Type type)
	{
	}

	[Token(Token = "0x600212F")]
	[Address(RVA = "0x3BA20D0", Offset = "0x3BA20D0", VA = "0x3BA20D0")]
	internal Type GetType(System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo, string name)
	{
		return null;
	}

	[Token(Token = "0x6002130")]
	[Address(RVA = "0x3BB15A0", Offset = "0x3BB15A0", VA = "0x3BB15A0")]
	private static void CheckTypeForwardedTo(Assembly sourceAssembly, Assembly destAssembly, Type resolvedType)
	{
	}
}
