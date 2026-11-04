// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200044C")]
internal sealed class ReadObjectInfo
{
	[Token(Token = "0x4001171")]
	[FieldOffset(Offset = "0x10")]
	internal int objectInfoId;

	[Token(Token = "0x4001172")]
	[FieldOffset(Offset = "0x0")]
	internal static int readObjectInfoCounter;

	[Token(Token = "0x4001173")]
	[FieldOffset(Offset = "0x18")]
	internal Type objectType;

	[Token(Token = "0x4001174")]
	[FieldOffset(Offset = "0x20")]
	internal ObjectManager objectManager;

	[Token(Token = "0x4001175")]
	[FieldOffset(Offset = "0x28")]
	internal int count;

	[Token(Token = "0x4001176")]
	[FieldOffset(Offset = "0x2C")]
	internal bool isSi;

	[Token(Token = "0x4001177")]
	[FieldOffset(Offset = "0x2D")]
	internal bool isNamed;

	[Token(Token = "0x4001178")]
	[FieldOffset(Offset = "0x2E")]
	internal bool isTyped;

	[Token(Token = "0x4001179")]
	[FieldOffset(Offset = "0x2F")]
	internal bool bSimpleAssembly;

	[Token(Token = "0x400117A")]
	[FieldOffset(Offset = "0x30")]
	internal System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache cache;

	[Token(Token = "0x400117B")]
	[FieldOffset(Offset = "0x38")]
	internal string[] wireMemberNames;

	[Token(Token = "0x400117C")]
	[FieldOffset(Offset = "0x40")]
	internal Type[] wireMemberTypes;

	[Token(Token = "0x400117D")]
	[FieldOffset(Offset = "0x48")]
	private int lastPosition;

	[Token(Token = "0x400117E")]
	[FieldOffset(Offset = "0x50")]
	internal ISerializationSurrogate serializationSurrogate;

	[Token(Token = "0x400117F")]
	[FieldOffset(Offset = "0x58")]
	internal StreamingContext context;

	[Token(Token = "0x4001180")]
	[FieldOffset(Offset = "0x68")]
	internal List<Type> memberTypesList;

	[Token(Token = "0x4001181")]
	[FieldOffset(Offset = "0x70")]
	internal System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit;

	[Token(Token = "0x4001182")]
	[FieldOffset(Offset = "0x78")]
	internal IFormatterConverter formatterConverter;

	[Token(Token = "0x6002163")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal ReadObjectInfo()
	{
	}

	[Token(Token = "0x6002164")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal void ObjectEnd()
	{
	}

	[Token(Token = "0x6002165")]
	[Address(RVA = "0x1A1D5E0", Offset = "0x1A1BBE0", VA = "0x181A1D5E0")]
	internal void PrepareForReuse()
	{
	}

	[Token(Token = "0x6002166")]
	[Address(RVA = "0x1A1BBE0", Offset = "0x1A1A1E0", VA = "0x181A1BBE0")]
	internal static System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo Create(Type objectType, ISurrogateSelector surrogateSelector, StreamingContext context, ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, bool bSimpleAssembly)
	{
		return null;
	}

	[Token(Token = "0x6002167")]
	[Address(RVA = "0x1A1D220", Offset = "0x1A1B820", VA = "0x181A1D220")]
	internal void Init(Type objectType, ISurrogateSelector surrogateSelector, StreamingContext context, ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, bool bSimpleAssembly)
	{
	}

	[Token(Token = "0x6002168")]
	[Address(RVA = "0x1A1BCF0", Offset = "0x1A1A2F0", VA = "0x181A1BCF0")]
	internal static System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo Create(Type objectType, string[] memberNames, Type[] memberTypes, ISurrogateSelector surrogateSelector, StreamingContext context, ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, bool bSimpleAssembly)
	{
		return null;
	}

	[Token(Token = "0x6002169")]
	[Address(RVA = "0x1A1D2D0", Offset = "0x1A1B8D0", VA = "0x181A1D2D0")]
	internal void Init(Type objectType, string[] memberNames, Type[] memberTypes, ISurrogateSelector surrogateSelector, StreamingContext context, ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, bool bSimpleAssembly)
	{
	}

	[Token(Token = "0x600216A")]
	[Address(RVA = "0x1A1CF30", Offset = "0x1A1B530", VA = "0x181A1CF30")]
	private void InitReadConstructor(Type objectType, ISurrogateSelector surrogateSelector, StreamingContext context)
	{
	}

	[Token(Token = "0x600216B")]
	[Address(RVA = "0x1A1D1A0", Offset = "0x1A1B7A0", VA = "0x181A1D1A0")]
	private void InitSiRead()
	{
	}

	[Token(Token = "0x600216C")]
	[Address(RVA = "0x1A1CEC0", Offset = "0x1A1B4C0", VA = "0x181A1CEC0")]
	private void InitNoMembers()
	{
	}

	[Token(Token = "0x600216D")]
	[Address(RVA = "0x1A1CC20", Offset = "0x1A1B220", VA = "0x181A1CC20")]
	private void InitMemberInfo()
	{
	}

	[Token(Token = "0x600216E")]
	[Address(RVA = "0x1A1BE60", Offset = "0x1A1A460", VA = "0x181A1BE60")]
	internal MemberInfo GetMemberInfo(string name)
	{
		return null;
	}

	[Token(Token = "0x600216F")]
	[Address(RVA = "0x1A1C980", Offset = "0x1A1AF80", VA = "0x181A1C980")]
	internal Type GetType(string name)
	{
		return null;
	}

	[Token(Token = "0x6002170")]
	[Address(RVA = "0x1A1B990", Offset = "0x1A19F90", VA = "0x181A1B990")]
	internal void AddValue(string name, object value, ref SerializationInfo si, ref object[] memberData)
	{
	}

	[Token(Token = "0x6002171")]
	[Address(RVA = "0x1A1CB20", Offset = "0x1A1B120", VA = "0x181A1CB20")]
	internal void InitDataStore(ref SerializationInfo si, ref object[] memberData)
	{
	}

	[Token(Token = "0x6002172")]
	[Address(RVA = "0x1A1D5F0", Offset = "0x1A1BBF0", VA = "0x181A1D5F0")]
	internal void RecordFixup(long objectId, string name, long idRef)
	{
	}

	[Token(Token = "0x6002173")]
	[Address(RVA = "0x1A1D3D0", Offset = "0x1A1B9D0", VA = "0x181A1D3D0")]
	internal void PopulateObjectMembers(object obj, object[] memberData)
	{
	}

	[Token(Token = "0x6002174")]
	[Address(RVA = "0x1A1D460", Offset = "0x1A1BA60", VA = "0x181A1D460")]
	private int Position(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6002175")]
	[Address(RVA = "0x1A1C2B0", Offset = "0x1A1A8B0", VA = "0x181A1C2B0")]
	internal Type[] GetMemberTypes(string[] inMemberNames, Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6002176")]
	[Address(RVA = "0x1A1C0D0", Offset = "0x1A1A6D0", VA = "0x181A1C0D0")]
	internal Type GetMemberType(MemberInfo objMember)
	{
		return null;
	}

	[Token(Token = "0x6002177")]
	[Address(RVA = "0x1A1C910", Offset = "0x1A1AF10", VA = "0x181A1C910")]
	private static System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo GetObjectInfo(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit)
	{
		return null;
	}
}
