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

[Token(Token = "0x2000424")]
internal sealed class WriteObjectInfo
{
	[Token(Token = "0x40010C0")]
	[FieldOffset(Offset = "0x10")]
	internal int objectInfoId;

	[Token(Token = "0x40010C1")]
	[FieldOffset(Offset = "0x18")]
	internal object obj;

	[Token(Token = "0x40010C2")]
	[FieldOffset(Offset = "0x20")]
	internal Type objectType;

	[Token(Token = "0x40010C3")]
	[FieldOffset(Offset = "0x28")]
	internal bool isSi;

	[Token(Token = "0x40010C4")]
	[FieldOffset(Offset = "0x29")]
	internal bool isNamed;

	[Token(Token = "0x40010C5")]
	[FieldOffset(Offset = "0x2A")]
	internal bool isTyped;

	[Token(Token = "0x40010C6")]
	[FieldOffset(Offset = "0x2B")]
	internal bool isArray;

	[Token(Token = "0x40010C7")]
	[FieldOffset(Offset = "0x30")]
	internal SerializationInfo si;

	[Token(Token = "0x40010C8")]
	[FieldOffset(Offset = "0x38")]
	internal System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache cache;

	[Token(Token = "0x40010C9")]
	[FieldOffset(Offset = "0x40")]
	internal object[] memberData;

	[Token(Token = "0x40010CA")]
	[FieldOffset(Offset = "0x48")]
	internal ISerializationSurrogate serializationSurrogate;

	[Token(Token = "0x40010CB")]
	[FieldOffset(Offset = "0x50")]
	internal StreamingContext context;

	[Token(Token = "0x40010CC")]
	[FieldOffset(Offset = "0x60")]
	internal System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit;

	[Token(Token = "0x40010CD")]
	[FieldOffset(Offset = "0x68")]
	internal long objectId;

	[Token(Token = "0x40010CE")]
	[FieldOffset(Offset = "0x70")]
	internal long assemId;

	[Token(Token = "0x40010CF")]
	[FieldOffset(Offset = "0x78")]
	private string binderTypeName;

	[Token(Token = "0x40010D0")]
	[FieldOffset(Offset = "0x80")]
	private string binderAssemblyString;

	[Token(Token = "0x6002127")]
	[Address(RVA = "0x53B2400", Offset = "0x53B1400", VA = "0x53B2400")]
	internal WriteObjectInfo()
	{
	}

	[Token(Token = "0x6002128")]
	[Address(RVA = "0x53B2410", Offset = "0x53B1410", VA = "0x53B2410")]
	internal void ObjectEnd()
	{
	}

	[Token(Token = "0x6002129")]
	[Address(RVA = "0x53B2460", Offset = "0x53B1460", VA = "0x53B2460")]
	private void InternalInit()
	{
	}

	[Token(Token = "0x600212A")]
	[Address(RVA = "0x53B2500", Offset = "0x53B1500", VA = "0x53B2500")]
	internal static System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo Serialize(object obj, ISurrogateSelector surrogateSelector, StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, SerializationBinder binder)
	{
		return null;
	}

	[Token(Token = "0x600212B")]
	[Address(RVA = "0x53B26D0", Offset = "0x53B16D0", VA = "0x53B26D0")]
	internal void InitSerialize(object obj, ISurrogateSelector surrogateSelector, StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, SerializationBinder binder)
	{
	}

	[Token(Token = "0x600212C")]
	[Address(RVA = "0x53B3720", Offset = "0x53B2720", VA = "0x53B3720")]
	internal static System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo Serialize(Type objectType, ISurrogateSelector surrogateSelector, StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, SerializationBinder binder)
	{
		return null;
	}

	[Token(Token = "0x600212D")]
	[Address(RVA = "0x53B3790", Offset = "0x53B2790", VA = "0x53B3790")]
	internal void InitSerialize(Type objectType, ISurrogateSelector surrogateSelector, StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, SerializationBinder binder)
	{
	}

	[Token(Token = "0x600212E")]
	[Address(RVA = "0x53B2DE0", Offset = "0x53B1DE0", VA = "0x53B2DE0")]
	private void InitSiWrite()
	{
	}

	[Token(Token = "0x600212F")]
	[Address(RVA = "0x53B3220", Offset = "0x53B2220", VA = "0x53B3220")]
	private static void CheckTypeForwardedFrom(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache cache, Type objectType, string binderAssemblyString)
	{
	}

	[Token(Token = "0x6002130")]
	[Address(RVA = "0x53B2C80", Offset = "0x53B1C80", VA = "0x53B2C80")]
	private void InitNoMembers()
	{
	}

	[Token(Token = "0x6002131")]
	[Address(RVA = "0x53B3390", Offset = "0x53B2390", VA = "0x53B3390")]
	private void InitMemberInfo()
	{
	}

	[Token(Token = "0x6002132")]
	[Address(RVA = "0x53A8790", Offset = "0x53A7790", VA = "0x53A8790")]
	internal string GetTypeFullName()
	{
		return null;
	}

	[Token(Token = "0x6002133")]
	[Address(RVA = "0x53A8760", Offset = "0x53A7760", VA = "0x53A8760")]
	internal string GetAssemblyString()
	{
		return null;
	}

	[Token(Token = "0x6002134")]
	[Address(RVA = "0x53B2DA0", Offset = "0x53B1DA0", VA = "0x53B2DA0")]
	private void InvokeSerializationBinder(SerializationBinder binder)
	{
	}

	[Token(Token = "0x6002135")]
	[Address(RVA = "0x53B3BD0", Offset = "0x53B2BD0", VA = "0x53B3BD0")]
	internal Type GetMemberType(MemberInfo objMember)
	{
		return null;
	}

	[Token(Token = "0x6002136")]
	[Address(RVA = "0x53B3D30", Offset = "0x53B2D30", VA = "0x53B3D30")]
	internal void GetMemberInfo(out string[] outMemberNames, out Type[] outMemberTypes, out object[] outMemberData)
	{
	}

	[Token(Token = "0x6002137")]
	[Address(RVA = "0x53B2570", Offset = "0x53B1570", VA = "0x53B2570")]
	private static System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo GetObjectInfo(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit)
	{
		return null;
	}

	[Token(Token = "0x6002138")]
	[Address(RVA = "0x53B2440", Offset = "0x53B1440", VA = "0x53B2440")]
	private static void PutObjectInfo(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo)
	{
	}
}
