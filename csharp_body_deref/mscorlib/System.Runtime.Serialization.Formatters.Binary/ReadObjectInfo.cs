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

[Token(Token = "0x2000425")]
internal sealed class ReadObjectInfo
{
	[Token(Token = "0x40010D1")]
	[FieldOffset(Offset = "0x10")]
	internal int objectInfoId;

	[Token(Token = "0x40010D2")]
	[FieldOffset(Offset = "0x0")]
	internal static int readObjectInfoCounter;

	[Token(Token = "0x40010D3")]
	[FieldOffset(Offset = "0x18")]
	internal Type objectType;

	[Token(Token = "0x40010D4")]
	[FieldOffset(Offset = "0x20")]
	internal ObjectManager objectManager;

	[Token(Token = "0x40010D5")]
	[FieldOffset(Offset = "0x28")]
	internal int count;

	[Token(Token = "0x40010D6")]
	[FieldOffset(Offset = "0x2C")]
	internal bool isSi;

	[Token(Token = "0x40010D7")]
	[FieldOffset(Offset = "0x2D")]
	internal bool isNamed;

	[Token(Token = "0x40010D8")]
	[FieldOffset(Offset = "0x2E")]
	internal bool isTyped;

	[Token(Token = "0x40010D9")]
	[FieldOffset(Offset = "0x2F")]
	internal bool bSimpleAssembly;

	[Token(Token = "0x40010DA")]
	[FieldOffset(Offset = "0x30")]
	internal System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache cache;

	[Token(Token = "0x40010DB")]
	[FieldOffset(Offset = "0x38")]
	internal string[] wireMemberNames;

	[Token(Token = "0x40010DC")]
	[FieldOffset(Offset = "0x40")]
	internal Type[] wireMemberTypes;

	[Token(Token = "0x40010DD")]
	[FieldOffset(Offset = "0x48")]
	private int lastPosition;

	[Token(Token = "0x40010DE")]
	[FieldOffset(Offset = "0x50")]
	internal ISerializationSurrogate serializationSurrogate;

	[Token(Token = "0x40010DF")]
	[FieldOffset(Offset = "0x58")]
	internal StreamingContext context;

	[Token(Token = "0x40010E0")]
	[FieldOffset(Offset = "0x68")]
	internal List<Type> memberTypesList;

	[Token(Token = "0x40010E1")]
	[FieldOffset(Offset = "0x70")]
	internal System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit;

	[Token(Token = "0x40010E2")]
	[FieldOffset(Offset = "0x78")]
	internal IFormatterConverter formatterConverter;

	[Token(Token = "0x6002139")]
	[Address(RVA = "0x53B3DF0", Offset = "0x53B2DF0", VA = "0x53B3DF0")]
	internal ReadObjectInfo()
	{
	}

	[Token(Token = "0x600213A")]
	[Address(RVA = "0x53B3E00", Offset = "0x53B2E00", VA = "0x53B3E00")]
	internal void ObjectEnd()
	{
	}

	[Token(Token = "0x600213B")]
	[Address(RVA = "0x53AD0C0", Offset = "0x53AC0C0", VA = "0x53AD0C0")]
	internal void PrepareForReuse()
	{
	}

	[Token(Token = "0x600213C")]
	[Address(RVA = "0x53B3E10", Offset = "0x53B2E10", VA = "0x53B3E10")]
	internal static System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo Create(Type objectType, ISurrogateSelector surrogateSelector, StreamingContext context, ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, bool bSimpleAssembly)
	{
		return null;
	}

	[Token(Token = "0x600213D")]
	[Address(RVA = "0x53B3F90", Offset = "0x53B2F90", VA = "0x53B3F90")]
	internal void Init(Type objectType, ISurrogateSelector surrogateSelector, StreamingContext context, ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, bool bSimpleAssembly)
	{
	}

	[Token(Token = "0x600213E")]
	[Address(RVA = "0x53B42B0", Offset = "0x53B32B0", VA = "0x53B42B0")]
	internal static System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo Create(Type objectType, string[] memberNames, Type[] memberTypes, ISurrogateSelector surrogateSelector, StreamingContext context, ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, bool bSimpleAssembly)
	{
		return null;
	}

	[Token(Token = "0x600213F")]
	[Address(RVA = "0x53B43A0", Offset = "0x53B33A0", VA = "0x53B43A0")]
	internal void Init(Type objectType, string[] memberNames, Type[] memberTypes, ISurrogateSelector surrogateSelector, StreamingContext context, ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, bool bSimpleAssembly)
	{
	}

	[Token(Token = "0x6002140")]
	[Address(RVA = "0x53B4050", Offset = "0x53B3050", VA = "0x53B4050")]
	private void InitReadConstructor(Type objectType, ISurrogateSelector surrogateSelector, StreamingContext context)
	{
	}

	[Token(Token = "0x6002141")]
	[Address(RVA = "0x53B4510", Offset = "0x53B3510", VA = "0x53B4510")]
	private void InitSiRead()
	{
	}

	[Token(Token = "0x6002142")]
	[Address(RVA = "0x53B44B0", Offset = "0x53B34B0", VA = "0x53B44B0")]
	private void InitNoMembers()
	{
	}

	[Token(Token = "0x6002143")]
	[Address(RVA = "0x53B4590", Offset = "0x53B3590", VA = "0x53B4590")]
	private void InitMemberInfo()
	{
	}

	[Token(Token = "0x6002144")]
	[Address(RVA = "0x53B4960", Offset = "0x53B3960", VA = "0x53B4960")]
	internal MemberInfo GetMemberInfo(string name)
	{
		return null;
	}

	[Token(Token = "0x6002145")]
	[Address(RVA = "0x53B4C10", Offset = "0x53B3C10", VA = "0x53B4C10")]
	internal Type GetType(string name)
	{
		return null;
	}

	[Token(Token = "0x6002146")]
	[Address(RVA = "0x53B4D90", Offset = "0x53B3D90", VA = "0x53B4D90")]
	internal void AddValue(string name, object value, ref SerializationInfo si, ref object[] memberData)
	{
	}

	[Token(Token = "0x6002147")]
	[Address(RVA = "0x53ACFF0", Offset = "0x53ABFF0", VA = "0x53ACFF0")]
	internal void InitDataStore(ref SerializationInfo si, ref object[] memberData)
	{
	}

	[Token(Token = "0x6002148")]
	[Address(RVA = "0x53B4EB0", Offset = "0x53B3EB0", VA = "0x53B4EB0")]
	internal void RecordFixup(long objectId, string name, long idRef)
	{
	}

	[Token(Token = "0x6002149")]
	[Address(RVA = "0x53B4F50", Offset = "0x53B3F50", VA = "0x53B4F50")]
	internal void PopulateObjectMembers(object obj, object[] memberData)
	{
	}

	[Token(Token = "0x600214A")]
	[Address(RVA = "0x53B4AF0", Offset = "0x53B3AF0", VA = "0x53B4AF0")]
	private int Position(string name)
	{
		return default(int);
	}

	[Token(Token = "0x600214B")]
	[Address(RVA = "0x53AC4D0", Offset = "0x53AB4D0", VA = "0x53AC4D0")]
	internal Type[] GetMemberTypes(string[] inMemberNames, Type objectType)
	{
		return null;
	}

	[Token(Token = "0x600214C")]
	[Address(RVA = "0x53B4800", Offset = "0x53B3800", VA = "0x53B4800")]
	internal Type GetMemberType(MemberInfo objMember)
	{
		return null;
	}

	[Token(Token = "0x600214D")]
	[Address(RVA = "0x53B3F20", Offset = "0x53B2F20", VA = "0x53B3F20")]
	private static System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo GetObjectInfo(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit)
	{
		return null;
	}
}
