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
	[Address(RVA = "0x3BACBB0", Offset = "0x3BACBB0", VA = "0x3BACBB0")]
	internal ReadObjectInfo()
	{
	}

	[Token(Token = "0x60020F5")]
	[Address(RVA = "0x3BACBC0", Offset = "0x3BACBC0", VA = "0x3BACBC0")]
	internal void ObjectEnd()
	{
	}

	[Token(Token = "0x60020F6")]
	[Address(RVA = "0x3BA5EF0", Offset = "0x3BA5EF0", VA = "0x3BA5EF0")]
	internal void PrepareForReuse()
	{
	}

	[Token(Token = "0x60020F7")]
	[Address(RVA = "0x3BACBD0", Offset = "0x3BACBD0", VA = "0x3BACBD0")]
	internal static System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo Create(Type objectType, ISurrogateSelector surrogateSelector, StreamingContext context, ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, bool bSimpleAssembly)
	{
		return null;
	}

	[Token(Token = "0x60020F8")]
	[Address(RVA = "0x3BACD50", Offset = "0x3BACD50", VA = "0x3BACD50")]
	internal void Init(Type objectType, ISurrogateSelector surrogateSelector, StreamingContext context, ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, bool bSimpleAssembly)
	{
	}

	[Token(Token = "0x60020F9")]
	[Address(RVA = "0x3BAD070", Offset = "0x3BAD070", VA = "0x3BAD070")]
	internal static System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo Create(Type objectType, string[] memberNames, Type[] memberTypes, ISurrogateSelector surrogateSelector, StreamingContext context, ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, bool bSimpleAssembly)
	{
		return null;
	}

	[Token(Token = "0x60020FA")]
	[Address(RVA = "0x3BAD160", Offset = "0x3BAD160", VA = "0x3BAD160")]
	internal void Init(Type objectType, string[] memberNames, Type[] memberTypes, ISurrogateSelector surrogateSelector, StreamingContext context, ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, bool bSimpleAssembly)
	{
	}

	[Token(Token = "0x60020FB")]
	[Address(RVA = "0x3BACE10", Offset = "0x3BACE10", VA = "0x3BACE10")]
	private void InitReadConstructor(Type objectType, ISurrogateSelector surrogateSelector, StreamingContext context)
	{
	}

	[Token(Token = "0x60020FC")]
	[Address(RVA = "0x3BAD2D0", Offset = "0x3BAD2D0", VA = "0x3BAD2D0")]
	private void InitSiRead()
	{
	}

	[Token(Token = "0x60020FD")]
	[Address(RVA = "0x3BAD270", Offset = "0x3BAD270", VA = "0x3BAD270")]
	private void InitNoMembers()
	{
	}

	[Token(Token = "0x60020FE")]
	[Address(RVA = "0x3BAD350", Offset = "0x3BAD350", VA = "0x3BAD350")]
	private void InitMemberInfo()
	{
	}

	[Token(Token = "0x60020FF")]
	[Address(RVA = "0x3BAD720", Offset = "0x3BAD720", VA = "0x3BAD720")]
	internal MemberInfo GetMemberInfo(string name)
	{
		return null;
	}

	[Token(Token = "0x6002100")]
	[Address(RVA = "0x3BAD9E0", Offset = "0x3BAD9E0", VA = "0x3BAD9E0")]
	internal Type GetType(string name)
	{
		return null;
	}

	[Token(Token = "0x6002101")]
	[Address(RVA = "0x3BADB60", Offset = "0x3BADB60", VA = "0x3BADB60")]
	internal void AddValue(string name, object value, ref SerializationInfo si, ref object[] memberData)
	{
	}

	[Token(Token = "0x6002102")]
	[Address(RVA = "0x3BA5E20", Offset = "0x3BA5E20", VA = "0x3BA5E20")]
	internal void InitDataStore(ref SerializationInfo si, ref object[] memberData)
	{
	}

	[Token(Token = "0x6002103")]
	[Address(RVA = "0x3BADC80", Offset = "0x3BADC80", VA = "0x3BADC80")]
	internal void RecordFixup(long objectId, string name, long idRef)
	{
	}

	[Token(Token = "0x6002104")]
	[Address(RVA = "0x3BADD20", Offset = "0x3BADD20", VA = "0x3BADD20")]
	internal void PopulateObjectMembers(object obj, object[] memberData)
	{
	}

	[Token(Token = "0x6002105")]
	[Address(RVA = "0x3BAD8B0", Offset = "0x3BAD8B0", VA = "0x3BAD8B0")]
	private int Position(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6002106")]
	[Address(RVA = "0x3BA5320", Offset = "0x3BA5320", VA = "0x3BA5320")]
	internal Type[] GetMemberTypes(string[] inMemberNames, Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6002107")]
	[Address(RVA = "0x3BAD5C0", Offset = "0x3BAD5C0", VA = "0x3BAD5C0")]
	internal Type GetMemberType(MemberInfo objMember)
	{
		return null;
	}

	[Token(Token = "0x6002108")]
	[Address(RVA = "0x3BACCE0", Offset = "0x3BACCE0", VA = "0x3BACCE0")]
	private static System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo GetObjectInfo(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit)
	{
		return null;
	}
}
