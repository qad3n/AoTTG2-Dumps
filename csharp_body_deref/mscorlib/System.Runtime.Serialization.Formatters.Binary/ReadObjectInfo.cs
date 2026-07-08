using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200041D")]
internal sealed class ReadObjectInfo
{
	[Token(Token = "0x400116F")]
	[FieldOffset(Offset = "0x10")]
	internal int objectInfoId;

	[Token(Token = "0x4001170")]
	[FieldOffset(Offset = "0x0")]
	internal static int readObjectInfoCounter;

	[Token(Token = "0x4001171")]
	[FieldOffset(Offset = "0x18")]
	internal Type objectType;

	[Token(Token = "0x4001172")]
	[FieldOffset(Offset = "0x20")]
	internal ObjectManager objectManager;

	[Token(Token = "0x4001173")]
	[FieldOffset(Offset = "0x28")]
	internal int count;

	[Token(Token = "0x4001174")]
	[FieldOffset(Offset = "0x2C")]
	internal bool isSi;

	[Token(Token = "0x4001175")]
	[FieldOffset(Offset = "0x2D")]
	internal bool isNamed;

	[Token(Token = "0x4001176")]
	[FieldOffset(Offset = "0x2E")]
	internal bool isTyped;

	[Token(Token = "0x4001177")]
	[FieldOffset(Offset = "0x2F")]
	internal bool bSimpleAssembly;

	[Token(Token = "0x4001178")]
	[FieldOffset(Offset = "0x30")]
	internal System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache cache;

	[Token(Token = "0x4001179")]
	[FieldOffset(Offset = "0x38")]
	internal string[] wireMemberNames;

	[Token(Token = "0x400117A")]
	[FieldOffset(Offset = "0x40")]
	internal Type[] wireMemberTypes;

	[Token(Token = "0x400117B")]
	[FieldOffset(Offset = "0x48")]
	private int lastPosition;

	[Token(Token = "0x400117C")]
	[FieldOffset(Offset = "0x50")]
	internal ISerializationSurrogate serializationSurrogate;

	[Token(Token = "0x400117D")]
	[FieldOffset(Offset = "0x58")]
	internal StreamingContext context;

	[Token(Token = "0x400117E")]
	[FieldOffset(Offset = "0x68")]
	internal List<Type> memberTypesList;

	[Token(Token = "0x400117F")]
	[FieldOffset(Offset = "0x70")]
	internal System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit;

	[Token(Token = "0x4001180")]
	[FieldOffset(Offset = "0x78")]
	internal IFormatterConverter formatterConverter;

	[Token(Token = "0x60020F4")]
	[Address(RVA = "0x4EC7090", Offset = "0x4EC7090", VA = "0x4EC7090")]
	internal ReadObjectInfo()
	{
	}

	[Token(Token = "0x60020F5")]
	[Address(RVA = "0x4EC70A0", Offset = "0x4EC70A0", VA = "0x4EC70A0")]
	internal void ObjectEnd()
	{
	}

	[Token(Token = "0x60020F6")]
	[Address(RVA = "0x4EC03D0", Offset = "0x4EC03D0", VA = "0x4EC03D0")]
	internal void PrepareForReuse()
	{
	}

	[Token(Token = "0x60020F7")]
	[Address(RVA = "0x4EC70B0", Offset = "0x4EC70B0", VA = "0x4EC70B0")]
	internal static System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo Create(Type objectType, ISurrogateSelector surrogateSelector, StreamingContext context, ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, bool bSimpleAssembly)
	{
		return null;
	}

	[Token(Token = "0x60020F8")]
	[Address(RVA = "0x4EC7230", Offset = "0x4EC7230", VA = "0x4EC7230")]
	internal void Init(Type objectType, ISurrogateSelector surrogateSelector, StreamingContext context, ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, bool bSimpleAssembly)
	{
	}

	[Token(Token = "0x60020F9")]
	[Address(RVA = "0x4EC7550", Offset = "0x4EC7550", VA = "0x4EC7550")]
	internal static System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo Create(Type objectType, string[] memberNames, Type[] memberTypes, ISurrogateSelector surrogateSelector, StreamingContext context, ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, bool bSimpleAssembly)
	{
		return null;
	}

	[Token(Token = "0x60020FA")]
	[Address(RVA = "0x4EC7640", Offset = "0x4EC7640", VA = "0x4EC7640")]
	internal void Init(Type objectType, string[] memberNames, Type[] memberTypes, ISurrogateSelector surrogateSelector, StreamingContext context, ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, bool bSimpleAssembly)
	{
	}

	[Token(Token = "0x60020FB")]
	[Address(RVA = "0x4EC72F0", Offset = "0x4EC72F0", VA = "0x4EC72F0")]
	private void InitReadConstructor(Type objectType, ISurrogateSelector surrogateSelector, StreamingContext context)
	{
	}

	[Token(Token = "0x60020FC")]
	[Address(RVA = "0x4EC77B0", Offset = "0x4EC77B0", VA = "0x4EC77B0")]
	private void InitSiRead()
	{
	}

	[Token(Token = "0x60020FD")]
	[Address(RVA = "0x4EC7750", Offset = "0x4EC7750", VA = "0x4EC7750")]
	private void InitNoMembers()
	{
	}

	[Token(Token = "0x60020FE")]
	[Address(RVA = "0x4EC7830", Offset = "0x4EC7830", VA = "0x4EC7830")]
	private void InitMemberInfo()
	{
	}

	[Token(Token = "0x60020FF")]
	[Address(RVA = "0x4EC7C00", Offset = "0x4EC7C00", VA = "0x4EC7C00")]
	internal MemberInfo GetMemberInfo(string name)
	{
		return null;
	}

	[Token(Token = "0x6002100")]
	[Address(RVA = "0x4EC7EC0", Offset = "0x4EC7EC0", VA = "0x4EC7EC0")]
	internal Type GetType(string name)
	{
		return null;
	}

	[Token(Token = "0x6002101")]
	[Address(RVA = "0x4EC8040", Offset = "0x4EC8040", VA = "0x4EC8040")]
	internal void AddValue(string name, object value, ref SerializationInfo si, ref object[] memberData)
	{
	}

	[Token(Token = "0x6002102")]
	[Address(RVA = "0x4EC0300", Offset = "0x4EC0300", VA = "0x4EC0300")]
	internal void InitDataStore(ref SerializationInfo si, ref object[] memberData)
	{
	}

	[Token(Token = "0x6002103")]
	[Address(RVA = "0x4EC8160", Offset = "0x4EC8160", VA = "0x4EC8160")]
	internal void RecordFixup(long objectId, string name, long idRef)
	{
	}

	[Token(Token = "0x6002104")]
	[Address(RVA = "0x4EC8200", Offset = "0x4EC8200", VA = "0x4EC8200")]
	internal void PopulateObjectMembers(object obj, object[] memberData)
	{
	}

	[Token(Token = "0x6002105")]
	[Address(RVA = "0x4EC7D90", Offset = "0x4EC7D90", VA = "0x4EC7D90")]
	private int Position(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6002106")]
	[Address(RVA = "0x4EBF800", Offset = "0x4EBF800", VA = "0x4EBF800")]
	internal Type[] GetMemberTypes(string[] inMemberNames, Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6002107")]
	[Address(RVA = "0x4EC7AA0", Offset = "0x4EC7AA0", VA = "0x4EC7AA0")]
	internal Type GetMemberType(MemberInfo objMember)
	{
		return null;
	}

	[Token(Token = "0x6002108")]
	[Address(RVA = "0x4EC71C0", Offset = "0x4EC71C0", VA = "0x4EC71C0")]
	private static System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo GetObjectInfo(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit)
	{
		return null;
	}
}
