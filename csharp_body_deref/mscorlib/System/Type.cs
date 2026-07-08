using System.Globalization;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000120")]
public abstract class Type : MemberInfo
{
	[Token(Token = "0x40003FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Binder s_defaultBinder;

	[Token(Token = "0x40003FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly char Delimiter;

	[Token(Token = "0x40003FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly Type[] EmptyTypes;

	[Token(Token = "0x40003FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static readonly object Missing;

	[Token(Token = "0x40003FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static readonly MemberFilter FilterAttribute;

	[Token(Token = "0x4000400")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static readonly MemberFilter FilterName;

	[Token(Token = "0x4000401")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public static readonly MemberFilter FilterNameIgnoreCase;

	[Token(Token = "0x4000402")]
	private const BindingFlags DefaultLookup = BindingFlags.Instance | BindingFlags.Static | BindingFlags.Public;

	[Token(Token = "0x4000403")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal RuntimeTypeHandle _impl;

	[Token(Token = "0x4000404")]
	internal const string DefaultTypeNameWhenMissingMetadata = "UnknownType";

	[Token(Token = "0x170000C6")]
	public virtual bool IsSerializable
	{
		[Token(Token = "0x6000A97")]
		[Address(RVA = "0x4FEE8F0", Offset = "0x4FEE8F0", VA = "0x4FEE8F0", Slot = "19")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C7")]
	public virtual bool ContainsGenericParameters
	{
		[Token(Token = "0x6000A98")]
		[Address(RVA = "0x4FEEB60", Offset = "0x4FEEB60", VA = "0x4FEEB60", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C8")]
	public bool IsVisible
	{
		[Token(Token = "0x6000A9A")]
		[Address(RVA = "0x4FEECE0", Offset = "0x4FEECE0", VA = "0x4FEECE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C9")]
	public override MemberTypes MemberType
	{
		[Token(Token = "0x6000AA2")]
		[Address(RVA = "0x4FEF9C0", Offset = "0x4FEF9C0", VA = "0x4FEF9C0", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x170000CA")]
	public abstract string Namespace
	{
		[Token(Token = "0x6000AA4")]
		get;
	}

	[Token(Token = "0x170000CB")]
	public abstract string AssemblyQualifiedName
	{
		[Token(Token = "0x6000AA5")]
		get;
	}

	[Token(Token = "0x170000CC")]
	public abstract string FullName
	{
		[Token(Token = "0x6000AA6")]
		get;
	}

	[Token(Token = "0x170000CD")]
	public abstract Assembly Assembly
	{
		[Token(Token = "0x6000AA7")]
		get;
	}

	[Token(Token = "0x170000CE")]
	public new abstract Module Module
	{
		[Token(Token = "0x6000AA8")]
		get;
	}

	[Token(Token = "0x170000CF")]
	public bool IsNested
	{
		[Token(Token = "0x6000AA9")]
		[Address(RVA = "0x4FEEE70", Offset = "0x4FEEE70", VA = "0x4FEEE70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D0")]
	public override Type DeclaringType
	{
		[Token(Token = "0x6000AAA")]
		[Address(RVA = "0x4FEF9E0", Offset = "0x4FEF9E0", VA = "0x4FEF9E0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D1")]
	public virtual MethodBase DeclaringMethod
	{
		[Token(Token = "0x6000AAB")]
		[Address(RVA = "0x4FEF9F0", Offset = "0x4FEF9F0", VA = "0x4FEF9F0", Slot = "29")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D2")]
	public override Type ReflectedType
	{
		[Token(Token = "0x6000AAC")]
		[Address(RVA = "0x4FEFA00", Offset = "0x4FEFA00", VA = "0x4FEFA00", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D3")]
	public abstract Type UnderlyingSystemType
	{
		[Token(Token = "0x6000AAD")]
		get;
	}

	[Token(Token = "0x170000D4")]
	public bool IsArray
	{
		[Token(Token = "0x6000AAE")]
		[Address(RVA = "0x4FEFA10", Offset = "0x4FEFA10", VA = "0x4FEFA10", Slot = "31")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D5")]
	public bool IsByRef
	{
		[Token(Token = "0x6000AB0")]
		[Address(RVA = "0x4FEFA30", Offset = "0x4FEFA30", VA = "0x4FEFA30", Slot = "33")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D6")]
	public bool IsPointer
	{
		[Token(Token = "0x6000AB2")]
		[Address(RVA = "0x4FEFA50", Offset = "0x4FEFA50", VA = "0x4FEFA50", Slot = "35")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D7")]
	public virtual bool IsConstructedGenericType
	{
		[Token(Token = "0x6000AB4")]
		[Address(RVA = "0x4FEFA70", Offset = "0x4FEFA70", VA = "0x4FEFA70", Slot = "37")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D8")]
	public virtual bool IsGenericParameter
	{
		[Token(Token = "0x6000AB5")]
		[Address(RVA = "0x4FEFAD0", Offset = "0x4FEFAD0", VA = "0x4FEFAD0", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D9")]
	public virtual bool IsGenericMethodParameter
	{
		[Token(Token = "0x6000AB6")]
		[Address(RVA = "0x4FEFAE0", Offset = "0x4FEFAE0", VA = "0x4FEFAE0", Slot = "39")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DA")]
	public virtual bool IsGenericType
	{
		[Token(Token = "0x6000AB7")]
		[Address(RVA = "0x4FEFB20", Offset = "0x4FEFB20", VA = "0x4FEFB20", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DB")]
	public virtual bool IsGenericTypeDefinition
	{
		[Token(Token = "0x6000AB8")]
		[Address(RVA = "0x4FEFB30", Offset = "0x4FEFB30", VA = "0x4FEFB30", Slot = "41")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DC")]
	public virtual bool IsSZArray
	{
		[Token(Token = "0x6000AB9")]
		[Address(RVA = "0x4FEFB40", Offset = "0x4FEFB40", VA = "0x4FEFB40", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DD")]
	public virtual bool IsVariableBoundArray
	{
		[Token(Token = "0x6000ABA")]
		[Address(RVA = "0x4FEFB60", Offset = "0x4FEFB60", VA = "0x4FEFB60", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DE")]
	public virtual bool IsByRefLike
	{
		[Token(Token = "0x6000ABB")]
		[Address(RVA = "0x4FEFBA0", Offset = "0x4FEFBA0", VA = "0x4FEFBA0", Slot = "44")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DF")]
	public bool HasElementType
	{
		[Token(Token = "0x6000ABC")]
		[Address(RVA = "0x4FEEC70", Offset = "0x4FEEC70", VA = "0x4FEEC70", Slot = "45")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E0")]
	public virtual Type[] GenericTypeArguments
	{
		[Token(Token = "0x6000AC1")]
		[Address(RVA = "0x4FEFC90", Offset = "0x4FEFC90", VA = "0x4FEFC90", Slot = "50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E1")]
	public virtual int GenericParameterPosition
	{
		[Token(Token = "0x6000AC3")]
		[Address(RVA = "0x4FEFDF0", Offset = "0x4FEFDF0", VA = "0x4FEFDF0", Slot = "52")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000E2")]
	public virtual GenericParameterAttributes GenericParameterAttributes
	{
		[Token(Token = "0x6000AC4")]
		[Address(RVA = "0x4FEFE40", Offset = "0x4FEFE40", VA = "0x4FEFE40", Slot = "53")]
		get
		{
			return default(GenericParameterAttributes);
		}
	}

	[Token(Token = "0x170000E3")]
	public TypeAttributes Attributes
	{
		[Token(Token = "0x6000AC6")]
		[Address(RVA = "0x4FEFEF0", Offset = "0x4FEFEF0", VA = "0x4FEFEF0", Slot = "55")]
		get
		{
			return default(TypeAttributes);
		}
	}

	[Token(Token = "0x170000E4")]
	public bool IsAbstract
	{
		[Token(Token = "0x6000AC8")]
		[Address(RVA = "0x4FEFF10", Offset = "0x4FEFF10", VA = "0x4FEFF10", Slot = "57")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E5")]
	public bool IsSealed
	{
		[Token(Token = "0x6000AC9")]
		[Address(RVA = "0x4FEFF30", Offset = "0x4FEFF30", VA = "0x4FEFF30", Slot = "58")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E6")]
	public bool IsSpecialName
	{
		[Token(Token = "0x6000ACA")]
		[Address(RVA = "0x4FEFF50", Offset = "0x4FEFF50", VA = "0x4FEFF50", Slot = "59")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E7")]
	public bool IsClass
	{
		[Token(Token = "0x6000ACB")]
		[Address(RVA = "0x4FEFF70", Offset = "0x4FEFF70", VA = "0x4FEFF70", Slot = "60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E8")]
	public bool IsNestedAssembly
	{
		[Token(Token = "0x6000ACC")]
		[Address(RVA = "0x4FEFFD0", Offset = "0x4FEFFD0", VA = "0x4FEFFD0", Slot = "61")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E9")]
	public bool IsNestedPublic
	{
		[Token(Token = "0x6000ACD")]
		[Address(RVA = "0x4FEEE50", Offset = "0x4FEEE50", VA = "0x4FEEE50", Slot = "62")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EA")]
	public bool IsNotPublic
	{
		[Token(Token = "0x6000ACE")]
		[Address(RVA = "0x4FEFFF0", Offset = "0x4FEFFF0", VA = "0x4FEFFF0", Slot = "63")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EB")]
	public bool IsPublic
	{
		[Token(Token = "0x6000ACF")]
		[Address(RVA = "0x4FEEEB0", Offset = "0x4FEEEB0", VA = "0x4FEEEB0", Slot = "64")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EC")]
	public bool IsExplicitLayout
	{
		[Token(Token = "0x6000AD0")]
		[Address(RVA = "0x4FF0010", Offset = "0x4FF0010", VA = "0x4FF0010", Slot = "65")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000ED")]
	public bool IsCOMObject
	{
		[Token(Token = "0x6000AD1")]
		[Address(RVA = "0x4FF0030", Offset = "0x4FF0030", VA = "0x4FF0030", Slot = "66")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EE")]
	public bool IsContextful
	{
		[Token(Token = "0x6000AD3")]
		[Address(RVA = "0x4FF0050", Offset = "0x4FF0050", VA = "0x4FF0050", Slot = "68")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EF")]
	public virtual bool IsCollectible
	{
		[Token(Token = "0x6000AD5")]
		[Address(RVA = "0x4FF0110", Offset = "0x4FF0110", VA = "0x4FF0110", Slot = "70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F0")]
	public virtual bool IsEnum
	{
		[Token(Token = "0x6000AD6")]
		[Address(RVA = "0x4FF0120", Offset = "0x4FF0120", VA = "0x4FF0120", Slot = "71")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F1")]
	public bool IsMarshalByRef
	{
		[Token(Token = "0x6000AD7")]
		[Address(RVA = "0x4FF0190", Offset = "0x4FF0190", VA = "0x4FF0190", Slot = "72")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F2")]
	public bool IsPrimitive
	{
		[Token(Token = "0x6000AD9")]
		[Address(RVA = "0x4FF0250", Offset = "0x4FF0250", VA = "0x4FF0250", Slot = "74")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F3")]
	public bool IsValueType
	{
		[Token(Token = "0x6000ADB")]
		[Address(RVA = "0x4FEFFB0", Offset = "0x4FEFFB0", VA = "0x4FEFFB0", Slot = "76")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F4")]
	public virtual bool IsSignatureType
	{
		[Token(Token = "0x6000ADD")]
		[Address(RVA = "0x4FF02E0", Offset = "0x4FF02E0", VA = "0x4FF02E0", Slot = "78")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F5")]
	public virtual RuntimeTypeHandle TypeHandle
	{
		[Token(Token = "0x6000B01")]
		[Address(RVA = "0x4FF0AD0", Offset = "0x4FF0AD0", VA = "0x4FF0AD0", Slot = "114")]
		get
		{
			return default(RuntimeTypeHandle);
		}
	}

	[Token(Token = "0x170000F6")]
	public abstract Type BaseType
	{
		[Token(Token = "0x6000B05")]
		get;
	}

	[Token(Token = "0x170000F7")]
	public static Binder DefaultBinder
	{
		[Token(Token = "0x6000B16")]
		[Address(RVA = "0x4FF1210", Offset = "0x4FF1210", VA = "0x4FF1210")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F8")]
	internal virtual bool IsSzArray
	{
		[Token(Token = "0x6000B19")]
		[Address(RVA = "0x4FF1310", Offset = "0x4FF1310", VA = "0x4FF1310", Slot = "129")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F9")]
	public bool IsInterface
	{
		[Token(Token = "0x6000B1C")]
		[Address(RVA = "0x4FEF160", Offset = "0x4FEF160", VA = "0x4FEF160", Slot = "131")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FA")]
	internal string FullNameOrDefault
	{
		[Token(Token = "0x6000B23")]
		[Address(RVA = "0x4FF14F0", Offset = "0x4FF14F0", VA = "0x4FF14F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FB")]
	internal string InternalNameIfAvailable
	{
		[Token(Token = "0x6000B26")]
		[Address(RVA = "0x4FF15F0", Offset = "0x4FF15F0", VA = "0x4FF15F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FC")]
	internal string NameOrDefault
	{
		[Token(Token = "0x6000B27")]
		[Address(RVA = "0x4FF1630", Offset = "0x4FF1630", VA = "0x4FF1630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A90")]
	[Address(RVA = "0x4FED730", Offset = "0x4FED730", VA = "0x4FED730", Slot = "16")]
	public virtual bool IsEnumDefined(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x4FEDFF0", Offset = "0x4FEDFF0", VA = "0x4FEDFF0", Slot = "17")]
	public virtual string GetEnumName(object value)
	{
		return null;
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x4FEE1D0", Offset = "0x4FEE1D0", VA = "0x4FEE1D0", Slot = "18")]
	public virtual string[] GetEnumNames()
	{
		return null;
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x4FEDDA0", Offset = "0x4FEDDA0", VA = "0x4FEDDA0")]
	private Array GetEnumRawConstantValues()
	{
		return null;
	}

	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x4FEE280", Offset = "0x4FEE280", VA = "0x4FEE280")]
	private void GetEnumData(out string[] enumNames, out Array enumValues)
	{
	}

	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x4FEDDD0", Offset = "0x4FEDDD0", VA = "0x4FEDDD0")]
	private static int BinarySearch(Array array, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x4FEDAE0", Offset = "0x4FEDAE0", VA = "0x4FEDAE0")]
	internal static bool IsIntegerType(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A99")]
	[Address(RVA = "0x4FEEC90", Offset = "0x4FEEC90", VA = "0x4FEEC90")]
	internal Type GetRootElementType()
	{
		return null;
	}

	[Token(Token = "0x6000A9B")]
	[Address(RVA = "0x4FEEED0", Offset = "0x4FEEED0", VA = "0x4FEEED0", Slot = "21")]
	[ComVisible(true)]
	public virtual bool IsSubclassOf(Type c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A9C")]
	[Address(RVA = "0x4FEEF80", Offset = "0x4FEEF80", VA = "0x4FEEF80", Slot = "22")]
	public virtual bool IsAssignableFrom(Type c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A9D")]
	[Address(RVA = "0x4FEF220", Offset = "0x4FEF220", VA = "0x4FEF220")]
	internal bool ImplementInterface(Type ifaceType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A9E")]
	[Address(RVA = "0x4FEF380", Offset = "0x4FEF380", VA = "0x4FEF380")]
	private static bool FilterAttributeImpl(MemberInfo m, object filterCriteria)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A9F")]
	[Address(RVA = "0x4FEF6F0", Offset = "0x4FEF6F0", VA = "0x4FEF6F0")]
	private static bool FilterNameImpl(MemberInfo m, object filterCriteria)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA0")]
	[Address(RVA = "0x4FEF840", Offset = "0x4FEF840", VA = "0x4FEF840")]
	private static bool FilterNameIgnoreCaseImpl(MemberInfo m, object filterCriteria)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA1")]
	[Address(RVA = "0x4FEF9B0", Offset = "0x4FEF9B0", VA = "0x4FEF9B0")]
	protected Type()
	{
	}

	[Token(Token = "0x6000AA3")]
	[Address(RVA = "0x4FEF9D0", Offset = "0x4FEF9D0", VA = "0x4FEF9D0", Slot = "23")]
	public new Type GetType()
	{
		return null;
	}

	[Token(Token = "0x6000AAF")]
	protected abstract bool IsArrayImpl();

	[Token(Token = "0x6000AB1")]
	protected abstract bool IsByRefImpl();

	[Token(Token = "0x6000AB3")]
	protected abstract bool IsPointerImpl();

	[Token(Token = "0x6000ABD")]
	protected abstract bool HasElementTypeImpl();

	[Token(Token = "0x6000ABE")]
	public abstract Type GetElementType();

	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x4FEFBF0", Offset = "0x4FEFBF0", VA = "0x4FEFBF0", Slot = "48")]
	public virtual int GetArrayRank()
	{
		return default(int);
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x4FEFC40", Offset = "0x4FEFC40", VA = "0x4FEFC40", Slot = "49")]
	public virtual Type GetGenericTypeDefinition()
	{
		return null;
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x4FEFDA0", Offset = "0x4FEFDA0", VA = "0x4FEFDA0", Slot = "51")]
	public virtual Type[] GetGenericArguments()
	{
		return null;
	}

	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x4FEFE80", Offset = "0x4FEFE80", VA = "0x4FEFE80", Slot = "54")]
	public virtual Type[] GetGenericParameterConstraints()
	{
		return null;
	}

	[Token(Token = "0x6000AC7")]
	protected abstract TypeAttributes GetAttributeFlagsImpl();

	[Token(Token = "0x6000AD2")]
	protected abstract bool IsCOMObjectImpl();

	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x4FF0070", Offset = "0x4FF0070", VA = "0x4FF0070", Slot = "69")]
	protected virtual bool IsContextfulImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AD8")]
	[Address(RVA = "0x4FF01B0", Offset = "0x4FF01B0", VA = "0x4FF01B0", Slot = "73")]
	protected virtual bool IsMarshalByRefImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000ADA")]
	protected abstract bool IsPrimitiveImpl();

	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x4FF0270", Offset = "0x4FF0270", VA = "0x4FF0270", Slot = "77")]
	protected virtual bool IsValueTypeImpl()
	{
		return default(bool);
	}

	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x4FF02F0", Offset = "0x4FF02F0", VA = "0x4FF02F0", Slot = "79")]
	[ComVisible(true)]
	public ConstructorInfo GetConstructor(Type[] types)
	{
		return null;
	}

	[Token(Token = "0x6000ADF")]
	[Address(RVA = "0x4FF0310", Offset = "0x4FF0310", VA = "0x4FF0310", Slot = "80")]
	[ComVisible(true)]
	public ConstructorInfo GetConstructor(BindingFlags bindingAttr, Binder binder, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x4FF0330", Offset = "0x4FF0330", VA = "0x4FF0330", Slot = "81")]
	[ComVisible(true)]
	public ConstructorInfo GetConstructor(BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000AE1")]
	protected abstract ConstructorInfo GetConstructorImpl(BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers);

	[Token(Token = "0x6000AE2")]
	[Address(RVA = "0x4FF0430", Offset = "0x4FF0430", VA = "0x4FF0430", Slot = "83")]
	[ComVisible(true)]
	public ConstructorInfo[] GetConstructors()
	{
		return null;
	}

	[Token(Token = "0x6000AE3")]
	[ComVisible(true)]
	public abstract ConstructorInfo[] GetConstructors(BindingFlags bindingAttr);

	[Token(Token = "0x6000AE4")]
	[Address(RVA = "0x4FF0450", Offset = "0x4FF0450", VA = "0x4FF0450", Slot = "85")]
	public EventInfo GetEvent(string name)
	{
		return null;
	}

	[Token(Token = "0x6000AE5")]
	public abstract EventInfo GetEvent(string name, BindingFlags bindingAttr);

	[Token(Token = "0x6000AE6")]
	public abstract EventInfo[] GetEvents(BindingFlags bindingAttr);

	[Token(Token = "0x6000AE7")]
	[Address(RVA = "0x4FF0470", Offset = "0x4FF0470", VA = "0x4FF0470", Slot = "88")]
	public FieldInfo GetField(string name)
	{
		return null;
	}

	[Token(Token = "0x6000AE8")]
	public abstract FieldInfo GetField(string name, BindingFlags bindingAttr);

	[Token(Token = "0x6000AE9")]
	[Address(RVA = "0x4FF0490", Offset = "0x4FF0490", VA = "0x4FF0490", Slot = "90")]
	public FieldInfo[] GetFields()
	{
		return null;
	}

	[Token(Token = "0x6000AEA")]
	public abstract FieldInfo[] GetFields(BindingFlags bindingAttr);

	[Token(Token = "0x6000AEB")]
	[Address(RVA = "0x4FF04B0", Offset = "0x4FF04B0", VA = "0x4FF04B0", Slot = "92")]
	public MemberInfo[] GetMember(string name)
	{
		return null;
	}

	[Token(Token = "0x6000AEC")]
	[Address(RVA = "0x4FF04D0", Offset = "0x4FF04D0", VA = "0x4FF04D0", Slot = "93")]
	public virtual MemberInfo[] GetMember(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000AED")]
	[Address(RVA = "0x4FF04F0", Offset = "0x4FF04F0", VA = "0x4FF04F0", Slot = "94")]
	public virtual MemberInfo[] GetMember(string name, MemberTypes type, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000AEE")]
	public abstract MemberInfo[] GetMembers(BindingFlags bindingAttr);

	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x4FF0540", Offset = "0x4FF0540", VA = "0x4FF0540", Slot = "96")]
	public MethodInfo GetMethod(string name)
	{
		return null;
	}

	[Token(Token = "0x6000AF0")]
	[Address(RVA = "0x4FF05C0", Offset = "0x4FF05C0", VA = "0x4FF05C0", Slot = "97")]
	public MethodInfo GetMethod(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000AF1")]
	[Address(RVA = "0x4FF0640", Offset = "0x4FF0640", VA = "0x4FF0640", Slot = "98")]
	public MethodInfo GetMethod(string name, Type[] types)
	{
		return null;
	}

	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x4FF0670", Offset = "0x4FF0670", VA = "0x4FF0670", Slot = "99")]
	public MethodInfo GetMethod(string name, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x4FF06A0", Offset = "0x4FF06A0", VA = "0x4FF06A0", Slot = "100")]
	public MethodInfo GetMethod(string name, BindingFlags bindingAttr, Binder binder, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000AF4")]
	[Address(RVA = "0x4FF06C0", Offset = "0x4FF06C0", VA = "0x4FF06C0", Slot = "101")]
	public MethodInfo GetMethod(string name, BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000AF5")]
	protected abstract MethodInfo GetMethodImpl(string name, BindingFlags bindingAttr, Binder binder, CallingConventions callConvention, Type[] types, ParameterModifier[] modifiers);

	[Token(Token = "0x6000AF6")]
	[Address(RVA = "0x4FF07F0", Offset = "0x4FF07F0", VA = "0x4FF07F0", Slot = "103")]
	public MethodInfo[] GetMethods()
	{
		return null;
	}

	[Token(Token = "0x6000AF7")]
	public abstract MethodInfo[] GetMethods(BindingFlags bindingAttr);

	[Token(Token = "0x6000AF8")]
	public abstract Type GetNestedType(string name, BindingFlags bindingAttr);

	[Token(Token = "0x6000AF9")]
	[Address(RVA = "0x4FF0810", Offset = "0x4FF0810", VA = "0x4FF0810", Slot = "106")]
	public PropertyInfo GetProperty(string name)
	{
		return null;
	}

	[Token(Token = "0x6000AFA")]
	[Address(RVA = "0x4FF0890", Offset = "0x4FF0890", VA = "0x4FF0890", Slot = "107")]
	public PropertyInfo GetProperty(string name, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x6000AFB")]
	[Address(RVA = "0x4FF0910", Offset = "0x4FF0910", VA = "0x4FF0910", Slot = "108")]
	public PropertyInfo GetProperty(string name, Type returnType)
	{
		return null;
	}

	[Token(Token = "0x6000AFC")]
	[Address(RVA = "0x4FF09E0", Offset = "0x4FF09E0", VA = "0x4FF09E0", Slot = "109")]
	public PropertyInfo GetProperty(string name, Type returnType, Type[] types)
	{
		return null;
	}

	[Token(Token = "0x6000AFD")]
	[Address(RVA = "0x4FF0A10", Offset = "0x4FF0A10", VA = "0x4FF0A10", Slot = "110")]
	public PropertyInfo GetProperty(string name, Type returnType, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000AFE")]
	[Address(RVA = "0x4FF0A40", Offset = "0x4FF0A40", VA = "0x4FF0A40", Slot = "111")]
	public PropertyInfo GetProperty(string name, BindingFlags bindingAttr, Binder binder, Type returnType, Type[] types, ParameterModifier[] modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000AFF")]
	protected abstract PropertyInfo GetPropertyImpl(string name, BindingFlags bindingAttr, Binder binder, Type returnType, Type[] types, ParameterModifier[] modifiers);

	[Token(Token = "0x6000B00")]
	public abstract PropertyInfo[] GetProperties(BindingFlags bindingAttr);

	[Token(Token = "0x6000B02")]
	[Address(RVA = "0x4FF0B10", Offset = "0x4FF0B10", VA = "0x4FF0B10")]
	public static RuntimeTypeHandle GetTypeHandle(object o)
	{
		return default(RuntimeTypeHandle);
	}

	[Token(Token = "0x6000B03")]
	[Address(RVA = "0x4FF0B90", Offset = "0x4FF0B90", VA = "0x4FF0B90")]
	public static TypeCode GetTypeCode(Type type)
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000B04")]
	[Address(RVA = "0x4FF0BE0", Offset = "0x4FF0BE0", VA = "0x4FF0BE0", Slot = "115")]
	protected virtual TypeCode GetTypeCodeImpl()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000B06")]
	public abstract object InvokeMember(string name, BindingFlags invokeAttr, Binder binder, object target, object[] args, ParameterModifier[] modifiers, CultureInfo culture, string[] namedParameters);

	[Token(Token = "0x6000B07")]
	public abstract Type[] GetInterfaces();

	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x4FF0CF0", Offset = "0x4FF0CF0", VA = "0x4FF0CF0", Slot = "119")]
	public virtual bool IsInstanceOfType(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B09")]
	[Address(RVA = "0x4FF0D30", Offset = "0x4FF0D30", VA = "0x4FF0D30", Slot = "120")]
	public virtual bool IsEquivalentTo(Type other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0x4FF0D70", Offset = "0x4FF0D70", VA = "0x4FF0D70", Slot = "121")]
	public virtual Type GetEnumUnderlyingType()
	{
		return null;
	}

	[Token(Token = "0x6000B0B")]
	[Address(RVA = "0x4FF0E60", Offset = "0x4FF0E60", VA = "0x4FF0E60", Slot = "122")]
	public virtual Array GetEnumValues()
	{
		return null;
	}

	[Token(Token = "0x6000B0C")]
	[Address(RVA = "0x4FF0EE0", Offset = "0x4FF0EE0", VA = "0x4FF0EE0", Slot = "123")]
	public virtual Type MakeArrayType()
	{
		return null;
	}

	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x4FF0F20", Offset = "0x4FF0F20", VA = "0x4FF0F20", Slot = "124")]
	public virtual Type MakeArrayType(int rank)
	{
		return null;
	}

	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x4FF0F60", Offset = "0x4FF0F60", VA = "0x4FF0F60", Slot = "125")]
	public virtual Type MakeByRefType()
	{
		return null;
	}

	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x4FF0FA0", Offset = "0x4FF0FA0", VA = "0x4FF0FA0", Slot = "126")]
	public virtual Type MakeGenericType(params Type[] typeArguments)
	{
		return null;
	}

	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x4FF0FF0", Offset = "0x4FF0FF0", VA = "0x4FF0FF0", Slot = "127")]
	public virtual Type MakePointerType()
	{
		return null;
	}

	[Token(Token = "0x6000B11")]
	[Address(RVA = "0x4FF1030", Offset = "0x4FF1030", VA = "0x4FF1030")]
	public static Type MakeGenericSignatureType(Type genericTypeDefinition, params Type[] typeArguments)
	{
		return null;
	}

	[Token(Token = "0x6000B12")]
	[Address(RVA = "0x4FF1090", Offset = "0x4FF1090", VA = "0x4FF1090", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000B13")]
	[Address(RVA = "0x4FF10E0", Offset = "0x4FF10E0", VA = "0x4FF10E0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x4FF1140", Offset = "0x4FF1140", VA = "0x4FF1140", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x4FF1190", Offset = "0x4FF1190", VA = "0x4FF1190", Slot = "128")]
	public virtual bool Equals(Type o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x4FE3110", Offset = "0x4FE3110", VA = "0x4FE3110")]
	public static Type GetTypeFromHandle(RuntimeTypeHandle handle)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x4FF1300", Offset = "0x4FF1300", VA = "0x4FF1300")]
	private static extern Type internal_from_handle(IntPtr handle);

	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x4FF1320", Offset = "0x4FF1320", VA = "0x4FF1320")]
	internal string FormatTypeName()
	{
		return null;
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x4FF1340", Offset = "0x4FF1340", VA = "0x4FF1340", Slot = "130")]
	internal virtual string FormatTypeName(bool serialization)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x4FF1380", Offset = "0x4FF1380", VA = "0x4FF1380")]
	public static Type GetType(string typeName, bool throwOnError, bool ignoreCase)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x4FF13F0", Offset = "0x4FF13F0", VA = "0x4FF13F0")]
	public static Type GetType(string typeName, bool throwOnError)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x4FF1460", Offset = "0x4FF1460", VA = "0x4FF1460")]
	public static Type GetType(string typeName)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x4FF14C0", Offset = "0x4FF14C0", VA = "0x4FF14C0")]
	public static Type GetType(string typeName, Func<AssemblyName, Assembly> assemblyResolver, Func<Assembly, string, bool, Type> typeResolver, bool throwOnError)
	{
		return null;
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x4FEDAD0", Offset = "0x4FEDAD0", VA = "0x4FEDAD0")]
	public static bool operator ==(Type left, Type right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x4FEEB50", Offset = "0x4FEEB50", VA = "0x4FEEB50")]
	public static bool operator !=(Type left, Type right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x4FEEAE0", Offset = "0x4FEEAE0", VA = "0x4FEEAE0")]
	internal bool IsRuntimeImplemented()
	{
		return default(bool);
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x4FF1610", Offset = "0x4FF1610", VA = "0x4FF1610", Slot = "132")]
	internal virtual string InternalGetNameIfAvailable(ref Type rootCauseForFailure)
	{
		return null;
	}
}
