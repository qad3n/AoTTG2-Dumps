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

[Token(Token = "0x200041C")]
internal sealed class WriteObjectInfo
{
	[Token(Token = "0x400115E")]
	[FieldOffset(Offset = "0x10")]
	internal int objectInfoId;

	[Token(Token = "0x400115F")]
	[FieldOffset(Offset = "0x18")]
	internal object obj;

	[Token(Token = "0x4001160")]
	[FieldOffset(Offset = "0x20")]
	internal Type objectType;

	[Token(Token = "0x4001161")]
	[FieldOffset(Offset = "0x28")]
	internal bool isSi;

	[Token(Token = "0x4001162")]
	[FieldOffset(Offset = "0x29")]
	internal bool isNamed;

	[Token(Token = "0x4001163")]
	[FieldOffset(Offset = "0x2A")]
	internal bool isTyped;

	[Token(Token = "0x4001164")]
	[FieldOffset(Offset = "0x2B")]
	internal bool isArray;

	[Token(Token = "0x4001165")]
	[FieldOffset(Offset = "0x30")]
	internal SerializationInfo si;

	[Token(Token = "0x4001166")]
	[FieldOffset(Offset = "0x38")]
	internal System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache cache;

	[Token(Token = "0x4001167")]
	[FieldOffset(Offset = "0x40")]
	internal object[] memberData;

	[Token(Token = "0x4001168")]
	[FieldOffset(Offset = "0x48")]
	internal ISerializationSurrogate serializationSurrogate;

	[Token(Token = "0x4001169")]
	[FieldOffset(Offset = "0x50")]
	internal StreamingContext context;

	[Token(Token = "0x400116A")]
	[FieldOffset(Offset = "0x60")]
	internal System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit;

	[Token(Token = "0x400116B")]
	[FieldOffset(Offset = "0x68")]
	internal long objectId;

	[Token(Token = "0x400116C")]
	[FieldOffset(Offset = "0x70")]
	internal long assemId;

	[Token(Token = "0x400116D")]
	[FieldOffset(Offset = "0x78")]
	private string binderTypeName;

	[Token(Token = "0x400116E")]
	[FieldOffset(Offset = "0x80")]
	private string binderAssemblyString;

	[Token(Token = "0x60020E2")]
	[Address(RVA = "0x3BAB1F0", Offset = "0x3BAB1F0", VA = "0x3BAB1F0")]
	internal WriteObjectInfo()
	{
	}

	[Token(Token = "0x60020E3")]
	[Address(RVA = "0x3BAB200", Offset = "0x3BAB200", VA = "0x3BAB200")]
	internal void ObjectEnd()
	{
	}

	[Token(Token = "0x60020E4")]
	[Address(RVA = "0x3BAB250", Offset = "0x3BAB250", VA = "0x3BAB250")]
	private void InternalInit()
	{
	}

	[Token(Token = "0x60020E5")]
	[Address(RVA = "0x3BAB2F0", Offset = "0x3BAB2F0", VA = "0x3BAB2F0")]
	internal static System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo Serialize(object obj, ISurrogateSelector surrogateSelector, StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, SerializationBinder binder)
	{
		return null;
	}

	[Token(Token = "0x60020E6")]
	[Address(RVA = "0x3BAB4C0", Offset = "0x3BAB4C0", VA = "0x3BAB4C0")]
	internal void InitSerialize(object obj, ISurrogateSelector surrogateSelector, StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, SerializationBinder binder)
	{
	}

	[Token(Token = "0x60020E7")]
	[Address(RVA = "0x3BAC500", Offset = "0x3BAC500", VA = "0x3BAC500")]
	internal static System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo Serialize(Type objectType, ISurrogateSelector surrogateSelector, StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, SerializationBinder binder)
	{
		return null;
	}

	[Token(Token = "0x60020E8")]
	[Address(RVA = "0x3BAC570", Offset = "0x3BAC570", VA = "0x3BAC570")]
	internal void InitSerialize(Type objectType, ISurrogateSelector surrogateSelector, StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, SerializationBinder binder)
	{
	}

	[Token(Token = "0x60020E9")]
	[Address(RVA = "0x3BABBA0", Offset = "0x3BABBA0", VA = "0x3BABBA0")]
	private void InitSiWrite()
	{
	}

	[Token(Token = "0x60020EA")]
	[Address(RVA = "0x3BABFF0", Offset = "0x3BABFF0", VA = "0x3BABFF0")]
	private static void CheckTypeForwardedFrom(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache cache, Type objectType, string binderAssemblyString)
	{
	}

	[Token(Token = "0x60020EB")]
	[Address(RVA = "0x3BABA50", Offset = "0x3BABA50", VA = "0x3BABA50")]
	private void InitNoMembers()
	{
	}

	[Token(Token = "0x60020EC")]
	[Address(RVA = "0x3BAC180", Offset = "0x3BAC180", VA = "0x3BAC180")]
	private void InitMemberInfo()
	{
	}

	[Token(Token = "0x60020ED")]
	[Address(RVA = "0x3BA12E0", Offset = "0x3BA12E0", VA = "0x3BA12E0")]
	internal string GetTypeFullName()
	{
		return null;
	}

	[Token(Token = "0x60020EE")]
	[Address(RVA = "0x3BA12B0", Offset = "0x3BA12B0", VA = "0x3BA12B0")]
	internal string GetAssemblyString()
	{
		return null;
	}

	[Token(Token = "0x60020EF")]
	[Address(RVA = "0x3BABB70", Offset = "0x3BABB70", VA = "0x3BABB70")]
	private void InvokeSerializationBinder(SerializationBinder binder)
	{
	}

	[Token(Token = "0x60020F0")]
	[Address(RVA = "0x3BAC990", Offset = "0x3BAC990", VA = "0x3BAC990")]
	internal Type GetMemberType(MemberInfo objMember)
	{
		return null;
	}

	[Token(Token = "0x60020F1")]
	[Address(RVA = "0x3BACAF0", Offset = "0x3BACAF0", VA = "0x3BACAF0")]
	internal void GetMemberInfo(out string[] outMemberNames, out Type[] outMemberTypes, out object[] outMemberData)
	{
	}

	[Token(Token = "0x60020F2")]
	[Address(RVA = "0x3BAB360", Offset = "0x3BAB360", VA = "0x3BAB360")]
	private static System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo GetObjectInfo(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit)
	{
		return null;
	}

	[Token(Token = "0x60020F3")]
	[Address(RVA = "0x3BAB230", Offset = "0x3BAB230", VA = "0x3BAB230")]
	private static void PutObjectInfo(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo)
	{
	}
}
