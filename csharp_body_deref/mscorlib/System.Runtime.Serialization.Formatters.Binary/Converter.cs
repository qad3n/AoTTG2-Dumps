using System.Reflection;
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000418")]
internal sealed class Converter
{
	[Token(Token = "0x400110E")]
	[FieldOffset(Offset = "0x0")]
	private static int primitiveTypeEnumLength;

	[Token(Token = "0x400110F")]
	[FieldOffset(Offset = "0x8")]
	private static Type[] typeA;

	[Token(Token = "0x4001110")]
	[FieldOffset(Offset = "0x10")]
	private static Type[] arrayTypeA;

	[Token(Token = "0x4001111")]
	[FieldOffset(Offset = "0x18")]
	private static string[] valueA;

	[Token(Token = "0x4001112")]
	[FieldOffset(Offset = "0x20")]
	private static TypeCode[] typeCodeA;

	[Token(Token = "0x4001113")]
	[FieldOffset(Offset = "0x28")]
	private static System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE[] codeA;

	[Token(Token = "0x4001114")]
	[FieldOffset(Offset = "0x30")]
	internal static Type typeofISerializable;

	[Token(Token = "0x4001115")]
	[FieldOffset(Offset = "0x38")]
	internal static Type typeofString;

	[Token(Token = "0x4001116")]
	[FieldOffset(Offset = "0x40")]
	internal static Type typeofConverter;

	[Token(Token = "0x4001117")]
	[FieldOffset(Offset = "0x48")]
	internal static Type typeofBoolean;

	[Token(Token = "0x4001118")]
	[FieldOffset(Offset = "0x50")]
	internal static Type typeofByte;

	[Token(Token = "0x4001119")]
	[FieldOffset(Offset = "0x58")]
	internal static Type typeofChar;

	[Token(Token = "0x400111A")]
	[FieldOffset(Offset = "0x60")]
	internal static Type typeofDecimal;

	[Token(Token = "0x400111B")]
	[FieldOffset(Offset = "0x68")]
	internal static Type typeofDouble;

	[Token(Token = "0x400111C")]
	[FieldOffset(Offset = "0x70")]
	internal static Type typeofInt16;

	[Token(Token = "0x400111D")]
	[FieldOffset(Offset = "0x78")]
	internal static Type typeofInt32;

	[Token(Token = "0x400111E")]
	[FieldOffset(Offset = "0x80")]
	internal static Type typeofInt64;

	[Token(Token = "0x400111F")]
	[FieldOffset(Offset = "0x88")]
	internal static Type typeofSByte;

	[Token(Token = "0x4001120")]
	[FieldOffset(Offset = "0x90")]
	internal static Type typeofSingle;

	[Token(Token = "0x4001121")]
	[FieldOffset(Offset = "0x98")]
	internal static Type typeofTimeSpan;

	[Token(Token = "0x4001122")]
	[FieldOffset(Offset = "0xA0")]
	internal static Type typeofDateTime;

	[Token(Token = "0x4001123")]
	[FieldOffset(Offset = "0xA8")]
	internal static Type typeofUInt16;

	[Token(Token = "0x4001124")]
	[FieldOffset(Offset = "0xB0")]
	internal static Type typeofUInt32;

	[Token(Token = "0x4001125")]
	[FieldOffset(Offset = "0xB8")]
	internal static Type typeofUInt64;

	[Token(Token = "0x4001126")]
	[FieldOffset(Offset = "0xC0")]
	internal static Type typeofObject;

	[Token(Token = "0x4001127")]
	[FieldOffset(Offset = "0xC8")]
	internal static Type typeofSystemVoid;

	[Token(Token = "0x4001128")]
	[FieldOffset(Offset = "0xD0")]
	internal static Assembly urtAssembly;

	[Token(Token = "0x4001129")]
	[FieldOffset(Offset = "0xD8")]
	internal static string urtAssemblyString;

	[Token(Token = "0x400112A")]
	[FieldOffset(Offset = "0xE0")]
	internal static Type typeofTypeArray;

	[Token(Token = "0x400112B")]
	[FieldOffset(Offset = "0xE8")]
	internal static Type typeofObjectArray;

	[Token(Token = "0x400112C")]
	[FieldOffset(Offset = "0xF0")]
	internal static Type typeofStringArray;

	[Token(Token = "0x400112D")]
	[FieldOffset(Offset = "0xF8")]
	internal static Type typeofBooleanArray;

	[Token(Token = "0x400112E")]
	[FieldOffset(Offset = "0x100")]
	internal static Type typeofByteArray;

	[Token(Token = "0x400112F")]
	[FieldOffset(Offset = "0x108")]
	internal static Type typeofCharArray;

	[Token(Token = "0x4001130")]
	[FieldOffset(Offset = "0x110")]
	internal static Type typeofDecimalArray;

	[Token(Token = "0x4001131")]
	[FieldOffset(Offset = "0x118")]
	internal static Type typeofDoubleArray;

	[Token(Token = "0x4001132")]
	[FieldOffset(Offset = "0x120")]
	internal static Type typeofInt16Array;

	[Token(Token = "0x4001133")]
	[FieldOffset(Offset = "0x128")]
	internal static Type typeofInt32Array;

	[Token(Token = "0x4001134")]
	[FieldOffset(Offset = "0x130")]
	internal static Type typeofInt64Array;

	[Token(Token = "0x4001135")]
	[FieldOffset(Offset = "0x138")]
	internal static Type typeofSByteArray;

	[Token(Token = "0x4001136")]
	[FieldOffset(Offset = "0x140")]
	internal static Type typeofSingleArray;

	[Token(Token = "0x4001137")]
	[FieldOffset(Offset = "0x148")]
	internal static Type typeofTimeSpanArray;

	[Token(Token = "0x4001138")]
	[FieldOffset(Offset = "0x150")]
	internal static Type typeofDateTimeArray;

	[Token(Token = "0x4001139")]
	[FieldOffset(Offset = "0x158")]
	internal static Type typeofUInt16Array;

	[Token(Token = "0x400113A")]
	[FieldOffset(Offset = "0x160")]
	internal static Type typeofUInt32Array;

	[Token(Token = "0x400113B")]
	[FieldOffset(Offset = "0x168")]
	internal static Type typeofUInt64Array;

	[Token(Token = "0x400113C")]
	[FieldOffset(Offset = "0x170")]
	internal static Type typeofMarshalByRefObject;

	[Token(Token = "0x6002094")]
	[Address(RVA = "0x4EBBA20", Offset = "0x4EBBA20", VA = "0x4EBBA20")]
	internal static System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE ToCode(Type type)
	{
		return default(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE);
	}

	[Token(Token = "0x6002095")]
	[Address(RVA = "0x4EC0890", Offset = "0x4EC0890", VA = "0x4EC0890")]
	internal static bool IsWriteAsByteArray(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code)
	{
		return default(bool);
	}

	[Token(Token = "0x6002096")]
	[Address(RVA = "0x4EC08B0", Offset = "0x4EC08B0", VA = "0x4EC08B0")]
	internal static int TypeLength(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code)
	{
		return default(int);
	}

	[Token(Token = "0x6002097")]
	[Address(RVA = "0x4EBC4E0", Offset = "0x4EBC4E0", VA = "0x4EBC4E0")]
	internal static Type ToArrayType(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code)
	{
		return null;
	}

	[Token(Token = "0x6002098")]
	[Address(RVA = "0x4EC0DF0", Offset = "0x4EC0DF0", VA = "0x4EC0DF0")]
	private static void InitTypeA()
	{
	}

	[Token(Token = "0x6002099")]
	[Address(RVA = "0x4EC08D0", Offset = "0x4EC08D0", VA = "0x4EC08D0")]
	private static void InitArrayTypeA()
	{
	}

	[Token(Token = "0x600209A")]
	[Address(RVA = "0x4EBC410", Offset = "0x4EBC410", VA = "0x4EBC410")]
	internal static Type ToType(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code)
	{
		return null;
	}

	[Token(Token = "0x600209B")]
	[Address(RVA = "0x4EC1300", Offset = "0x4EC1300", VA = "0x4EC1300")]
	internal static Array CreatePrimitiveArray(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code, int length)
	{
		return null;
	}

	[Token(Token = "0x600209C")]
	[Address(RVA = "0x4EBB430", Offset = "0x4EBB430", VA = "0x4EBB430")]
	internal static bool IsPrimitiveArray(Type type, out object typeInformation)
	{
		return default(bool);
	}

	[Token(Token = "0x600209D")]
	[Address(RVA = "0x4EC1410", Offset = "0x4EC1410", VA = "0x4EC1410")]
	private static void InitValueA()
	{
	}

	[Token(Token = "0x600209E")]
	[Address(RVA = "0x4EBC340", Offset = "0x4EBC340", VA = "0x4EBC340")]
	internal static string ToComType(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code)
	{
		return null;
	}

	[Token(Token = "0x600209F")]
	[Address(RVA = "0x4EC1790", Offset = "0x4EC1790", VA = "0x4EC1790")]
	private static void InitTypeCodeA()
	{
	}

	[Token(Token = "0x60020A0")]
	[Address(RVA = "0x4EC1920", Offset = "0x4EC1920", VA = "0x4EC1920")]
	internal static TypeCode ToTypeCode(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code)
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60020A1")]
	[Address(RVA = "0x4EC19F0", Offset = "0x4EC19F0", VA = "0x4EC19F0")]
	private static void InitCodeA()
	{
	}

	[Token(Token = "0x60020A2")]
	[Address(RVA = "0x4EC07C0", Offset = "0x4EC07C0", VA = "0x4EC07C0")]
	internal static System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE ToPrimitiveTypeEnum(TypeCode typeCode)
	{
		return default(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE);
	}

	[Token(Token = "0x60020A3")]
	[Address(RVA = "0x4EC1BB0", Offset = "0x4EC1BB0", VA = "0x4EC1BB0")]
	internal static object FromString(string value, System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code)
	{
		return null;
	}
}
