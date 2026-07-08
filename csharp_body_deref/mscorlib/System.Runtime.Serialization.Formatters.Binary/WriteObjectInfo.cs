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
	[Address(RVA = "0x4EC56D0", Offset = "0x4EC56D0", VA = "0x4EC56D0")]
	internal WriteObjectInfo()
	{
	}

	[Token(Token = "0x60020E3")]
	[Address(RVA = "0x4EC56E0", Offset = "0x4EC56E0", VA = "0x4EC56E0")]
	internal void ObjectEnd()
	{
	}

	[Token(Token = "0x60020E4")]
	[Address(RVA = "0x4EC5730", Offset = "0x4EC5730", VA = "0x4EC5730")]
	private void InternalInit()
	{
	}

	[Token(Token = "0x60020E5")]
	[Address(RVA = "0x4EC57D0", Offset = "0x4EC57D0", VA = "0x4EC57D0")]
	internal static System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo Serialize(object obj, ISurrogateSelector surrogateSelector, StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, SerializationBinder binder)
	{
		return null;
	}

	[Token(Token = "0x60020E6")]
	[Address(RVA = "0x4EC59A0", Offset = "0x4EC59A0", VA = "0x4EC59A0")]
	internal void InitSerialize(object obj, ISurrogateSelector surrogateSelector, StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, SerializationBinder binder)
	{
	}

	[Token(Token = "0x60020E7")]
	[Address(RVA = "0x4EC69E0", Offset = "0x4EC69E0", VA = "0x4EC69E0")]
	internal static System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo Serialize(Type objectType, ISurrogateSelector surrogateSelector, StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, SerializationBinder binder)
	{
		return null;
	}

	[Token(Token = "0x60020E8")]
	[Address(RVA = "0x4EC6A50", Offset = "0x4EC6A50", VA = "0x4EC6A50")]
	internal void InitSerialize(Type objectType, ISurrogateSelector surrogateSelector, StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, IFormatterConverter converter, SerializationBinder binder)
	{
	}

	[Token(Token = "0x60020E9")]
	[Address(RVA = "0x4EC6080", Offset = "0x4EC6080", VA = "0x4EC6080")]
	private void InitSiWrite()
	{
	}

	[Token(Token = "0x60020EA")]
	[Address(RVA = "0x4EC64D0", Offset = "0x4EC64D0", VA = "0x4EC64D0")]
	private static void CheckTypeForwardedFrom(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache cache, Type objectType, string binderAssemblyString)
	{
	}

	[Token(Token = "0x60020EB")]
	[Address(RVA = "0x4EC5F30", Offset = "0x4EC5F30", VA = "0x4EC5F30")]
	private void InitNoMembers()
	{
	}

	[Token(Token = "0x60020EC")]
	[Address(RVA = "0x4EC6660", Offset = "0x4EC6660", VA = "0x4EC6660")]
	private void InitMemberInfo()
	{
	}

	[Token(Token = "0x60020ED")]
	[Address(RVA = "0x4EBB7C0", Offset = "0x4EBB7C0", VA = "0x4EBB7C0")]
	internal string GetTypeFullName()
	{
		return null;
	}

	[Token(Token = "0x60020EE")]
	[Address(RVA = "0x4EBB790", Offset = "0x4EBB790", VA = "0x4EBB790")]
	internal string GetAssemblyString()
	{
		return null;
	}

	[Token(Token = "0x60020EF")]
	[Address(RVA = "0x4EC6050", Offset = "0x4EC6050", VA = "0x4EC6050")]
	private void InvokeSerializationBinder(SerializationBinder binder)
	{
	}

	[Token(Token = "0x60020F0")]
	[Address(RVA = "0x4EC6E70", Offset = "0x4EC6E70", VA = "0x4EC6E70")]
	internal Type GetMemberType(MemberInfo objMember)
	{
		return null;
	}

	[Token(Token = "0x60020F1")]
	[Address(RVA = "0x4EC6FD0", Offset = "0x4EC6FD0", VA = "0x4EC6FD0")]
	internal void GetMemberInfo(out string[] outMemberNames, out Type[] outMemberTypes, out object[] outMemberData)
	{
	}

	[Token(Token = "0x60020F2")]
	[Address(RVA = "0x4EC5840", Offset = "0x4EC5840", VA = "0x4EC5840")]
	private static System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo GetObjectInfo(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit)
	{
		return null;
	}

	[Token(Token = "0x60020F3")]
	[Address(RVA = "0x4EC5710", Offset = "0x4EC5710", VA = "0x4EC5710")]
	private static void PutObjectInfo(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo)
	{
	}
}
