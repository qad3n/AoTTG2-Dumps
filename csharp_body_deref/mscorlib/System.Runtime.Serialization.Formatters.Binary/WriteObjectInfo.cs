// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200044B")]
internal sealed class WriteObjectInfo
{
	[Token(Token = "0x4001160")]
	[FieldOffset(Offset = "0x10")]
	internal int objectInfoId;

	[Token(Token = "0x4001161")]
	[FieldOffset(Offset = "0x18")]
	internal object obj;

	[Token(Token = "0x4001162")]
	[FieldOffset(Offset = "0x20")]
	internal Type objectType;

	[Token(Token = "0x4001163")]
	[FieldOffset(Offset = "0x28")]
	internal bool isSi;

	[Token(Token = "0x4001164")]
	[FieldOffset(Offset = "0x29")]
	internal bool isNamed;

	[Token(Token = "0x4001165")]
	[FieldOffset(Offset = "0x2A")]
	internal bool isTyped;

	[Token(Token = "0x4001166")]
	[FieldOffset(Offset = "0x2B")]
	internal bool isArray;

	[Token(Token = "0x4001167")]
	[FieldOffset(Offset = "0x30")]
	internal SerializationInfo si;

	[Token(Token = "0x4001168")]
	[FieldOffset(Offset = "0x38")]
	internal System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache cache;

	[Token(Token = "0x4001169")]
	[FieldOffset(Offset = "0x40")]
	internal object[] memberData;

	[Token(Token = "0x400116A")]
	[FieldOffset(Offset = "0x48")]
	internal ISerializationSurrogate serializationSurrogate;

	[Token(Token = "0x400116B")]
	[FieldOffset(Offset = "0x50")]
	internal StreamingContext context;

	[Token(Token = "0x400116C")]
	[FieldOffset(Offset = "0x60")]
	internal System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit;

	[Token(Token = "0x400116D")]
	[FieldOffset(Offset = "0x68")]
	internal long objectId;

	[Token(Token = "0x400116E")]
	[FieldOffset(Offset = "0x70")]
	internal long assemId;

	[Token(Token = "0x400116F")]
	[FieldOffset(Offset = "0x78")]
	private string binderTypeName;

	[Token(Token = "0x4001170")]
	[FieldOffset(Offset = "0x80")]
	private string binderAssemblyString;

	[Token(Token = "0x6002151")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal WriteObjectInfo()
	{
	}

	[Token(Token = "0x6002152")]
	[Address(RVA = "0x1A24730", Offset = "0x1A22D30", VA = "0x181A24730")]
	internal void ObjectEnd()
	{
	}

	[Token(Token = "0x6002153")]
	[Address(RVA = "0x1A24650", Offset = "0x1A22C50", VA = "0x181A24650")]
	private void InternalInit()
	{
	}

	[Token(Token = "0x6002154")]
	[Address(RVA = "0x1A24810", Offset = "0x1A22E10", VA = "0x181A24810")]
	internal static System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo Serialize(object obj, ISurrogateSelector surrogateSelector, StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, SerializationBinder binder)
	{
		return null;
	}

	[Token(Token = "0x6002155")]
	[Address(RVA = "0x1A23920", Offset = "0x1A21F20", VA = "0x181A23920")]
	internal void InitSerialize(object obj, ISurrogateSelector surrogateSelector, StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, SerializationBinder binder)
	{
	}

	[Token(Token = "0x6002156")]
	[Address(RVA = "0x1A24790", Offset = "0x1A22D90", VA = "0x181A24790")]
	internal static System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo Serialize(Type objectType, ISurrogateSelector surrogateSelector, StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, SerializationBinder binder)
	{
		return null;
	}

	[Token(Token = "0x6002157")]
	[Address(RVA = "0x1A23330", Offset = "0x1A21930", VA = "0x181A23330")]
	internal void InitSerialize(Type objectType, ISurrogateSelector surrogateSelector, StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, SerializationBinder binder)
	{
	}

	[Token(Token = "0x6002158")]
	[Address(RVA = "0x1A242D0", Offset = "0x1A228D0", VA = "0x181A242D0")]
	private void InitSiWrite()
	{
	}

	[Token(Token = "0x6002159")]
	[Address(RVA = "0x1A22830", Offset = "0x1A20E30", VA = "0x181A22830")]
	private static void CheckTypeForwardedFrom(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache cache, Type objectType, string binderAssemblyString)
	{
	}

	[Token(Token = "0x600215A")]
	[Address(RVA = "0x1A231F0", Offset = "0x1A217F0", VA = "0x181A231F0")]
	private void InitNoMembers()
	{
	}

	[Token(Token = "0x600215B")]
	[Address(RVA = "0x1A22E30", Offset = "0x1A21430", VA = "0x181A22E30")]
	private void InitMemberInfo()
	{
	}

	[Token(Token = "0x600215C")]
	[Address(RVA = "0x1A22E00", Offset = "0x1A21400", VA = "0x181A22E00")]
	internal string GetTypeFullName()
	{
		return null;
	}

	[Token(Token = "0x600215D")]
	[Address(RVA = "0x1A229B0", Offset = "0x1A20FB0", VA = "0x181A229B0")]
	internal string GetAssemblyString()
	{
		return null;
	}

	[Token(Token = "0x600215E")]
	[Address(RVA = "0x1A246F0", Offset = "0x1A22CF0", VA = "0x181A246F0")]
	private void InvokeSerializationBinder(SerializationBinder binder)
	{
	}

	[Token(Token = "0x600215F")]
	[Address(RVA = "0x1A22AC0", Offset = "0x1A210C0", VA = "0x181A22AC0")]
	internal Type GetMemberType(MemberInfo objMember)
	{
		return null;
	}

	[Token(Token = "0x6002160")]
	[Address(RVA = "0x1A229E0", Offset = "0x1A20FE0", VA = "0x181A229E0")]
	internal void GetMemberInfo(out string[] outMemberNames, out Type[] outMemberTypes, out object[] outMemberData)
	{
	}

	[Token(Token = "0x6002161")]
	[Address(RVA = "0x1A22CA0", Offset = "0x1A212A0", VA = "0x181A22CA0")]
	private static System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo GetObjectInfo(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit)
	{
		return null;
	}

	[Token(Token = "0x6002162")]
	[Address(RVA = "0x1A24760", Offset = "0x1A22D60", VA = "0x181A24760")]
	private static void PutObjectInfo(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo)
	{
	}
}
